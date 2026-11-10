#!/usr/bin/env python3
"""Rebuild Sword/Shield v1.3.2 main NSOs into validated AArch64 ELF files.

Source files in v1.3.2/0 are read-only. Results are stored beside the sources,
or split into <=90 MiB parts when a complete ELF exceeds the Git blob budget.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import shutil
import struct
import subprocess
from pathlib import Path

GAMES = {
    "sword": ("v1.3.2/0/sword_main", 21162542),
    "shield": ("v1.3.2/0/shield_main", 21164977),
}
CHUNK_SIZE = 1024 * 1024


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(CHUNK_SIZE), b""):
            digest.update(chunk)
    return digest.hexdigest()


def verify_elf(path: Path, require_readelf: bool) -> dict:
    size = path.stat().st_size
    with path.open("rb") as stream:
        hdr = stream.read(64)
    if len(hdr) < 64 or hdr[:4] != b"\x7fELF":
        raise ValueError(f"{path}: ELF magic/header missing")
    if hdr[4:7] != b"\x02\x01\x01":
        raise ValueError(f"{path}: expected ELF64 little-endian v1")
    e_type, e_machine = struct.unpack_from("<HH", hdr, 16)
    e_phoff, e_shoff = struct.unpack_from("<QQ", hdr, 32)
    e_phentsize, e_phnum, e_shentsize, e_shnum = struct.unpack_from("<HHHH", hdr, 54)
    if e_machine != 183 or e_type not in (2, 3):
        raise ValueError(f"{path}: expected AArch64 ET_EXEC/ET_DYN (got {e_type}, {e_machine})")
    if not e_phnum or not e_shnum:
        raise ValueError(f"{path}: missing program/section headers")
    if e_phoff + e_phentsize * e_phnum > size or e_shoff + e_shentsize * e_shnum > size:
        raise ValueError(f"{path}: program/section header table out of bounds")
    if shutil.which("readelf"):
        subprocess.run(["readelf", "-h", "-l", "-S", str(path)], check=True, stdout=subprocess.DEVNULL)
    elif require_readelf:
        raise RuntimeError("readelf is required for full verification")
    return {"class": "ELF64", "endianness": "little", "machine": "AArch64",
            "program_headers": e_phnum, "section_headers": e_shnum}


def git_converter_tree() -> str | None:
    result = subprocess.run(["git", "rev-parse", "HEAD:tools/nx2elf"], capture_output=True, text=True)
    return result.stdout.strip() if result.returncode == 0 else None


def split_if_needed(path: Path, max_bytes: int) -> tuple[str, list[dict]]:
    if path.stat().st_size <= max_bytes:
        return "complete", [{"path": path.as_posix(), "size_bytes": path.stat().st_size, "sha256": sha256(path)}]
    parts = []
    check = hashlib.sha256()
    with path.open("rb") as source:
        index = 1
        while True:
            data = source.read(max_bytes)
            if not data:
                break
            part = Path(f"{path}.part{index:03d}")
            part.write_bytes(data)
            check.update(data)
            parts.append({"path": part.as_posix(), "size_bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()})
            index += 1
    if check.hexdigest() != sha256(path):
        raise ValueError(f"{path}: split roundtrip SHA-256 mismatch")
    path.unlink()
    return "split", parts


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--converter", type=Path, required=True, help="Built tools/nx2elf executable")
    parser.add_argument("--manifest", type=Path, default=Path("manifests/v1.3.2/nx2elf-main-manifest.json"))
    parser.add_argument("--max-git-mib", type=int, default=90)
    parser.add_argument("--require-readelf", action="store_true")
    args = parser.parse_args()
    if args.max_git_mib < 1 or args.max_git_mib > 99:
        parser.error("--max-git-mib must be in the range 1..99")
    if not args.converter.is_file():
        parser.error(f"converter not found: {args.converter}")
    results = []
    for game, (source_name, expected_size) in GAMES.items():
        source = Path(source_name)
        if not source.is_file() or source.stat().st_size != expected_size:
            raise RuntimeError(f"Source missing or wrong size: {source}, expected {expected_size} bytes")
        output = Path(f"{source_name}.elf")
        output.parent.mkdir(parents=True, exist_ok=True)
        print(f"Converting {source} -> {output}", flush=True)
        subprocess.run([str(args.converter.resolve()), str(source), "--export-elf", str(output)], check=True)
        elf = verify_elf(output, args.require_readelf)
        output_size = output.stat().st_size
        output_sha = sha256(output)
        storage, stored_files = split_if_needed(output, args.max_git_mib * 1024 * 1024)
        record = {
            "game": game,
            "source_relative_path": source.as_posix(),
            "source_size_bytes": expected_size,
            "source_sha256": sha256(source),
            "logical_output_relative_path": output.as_posix(),
            "output_size_bytes": output_size,
            "output_sha256": output_sha,
            "storage": storage,
            "stored_files": stored_files,
            "elf": elf,
            "validation": "ELF_HEADER_AND_READELF_OK" if shutil.which("readelf") else "ELF_HEADER_OK",
        }
        results.append(record)
        print(json.dumps(record, ensure_ascii=False, indent=2), flush=True)
    manifest = {
        "schema_version": 1,
        "game_version": "1.3.2",
        "converter": "tools/nx2elf",
        "converter_source_tree_sha": git_converter_tree(),
        "reconstruction": "NSO_to_ELF64_AArch64",
        "outputs": results,
    }
    args.manifest.parent.mkdir(parents=True, exist_ok=True)
    args.manifest.write_text(json.dumps(manifest, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"Manifest: {args.manifest}", flush=True)


if __name__ == "__main__":
    main()
