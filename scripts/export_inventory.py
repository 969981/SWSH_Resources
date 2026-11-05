#!/usr/bin/env python3
"""Read-only SWSH source tree -> 15-column SHA-aware file inventory CSV."""
from __future__ import annotations

import argparse
import csv
import hashlib
import os
from datetime import datetime, timezone
from pathlib import Path

FIELDS = [
    "RelativePath", "Region", "Extension", "SizeBytes", "SizeMiB",
    "Magic4Hex", "Magic4ASCII", "Header64Hex", "Tail32Hex",
    "FileTypeByMagic", "NSO_ModuleId_0x40", "SHA256", "SHA1",
    "ModifiedUTC", "Error",
]
MAGICS = {b"NSO0": "NSO", b"META": "NPDM", b"SARC": "SARC",
          b"Yaz0": "Yaz0", b"BNTX": "BNTX", b"PFS0": "PFS0"}


def region_for(relative_path: str) -> str:
    parts = relative_path.replace("\\", "/").split("/")
    for i, part in enumerate(parts):
        if part.endswith("_NCA") and i + 1 < len(parts):
            return {"0": "ExeFS", "1": "RomFS"}.get(parts[i + 1], "Other")
    return {"0": "ExeFS", "1": "RomFS"}.get(parts[0], "Other")


def hash_file(path: Path) -> tuple[str, str]:
    sha256, sha1 = hashlib.sha256(), hashlib.sha1()
    with path.open("rb") as source:
        for block in iter(lambda: source.read(1024 * 1024), b""):
            sha256.update(block)
            sha1.update(block)
    return sha256.hexdigest().upper(), sha1.hexdigest().upper()


def inspect_file(root: Path, path: Path, skip_hash: bool = False) -> dict[str, object]:
    relative = path.relative_to(root).as_posix()
    row: dict[str, object] = {field: "" for field in FIELDS}
    row.update(RelativePath=relative, Region=region_for(relative),
               Extension=path.suffix.lower())
    try:
        stat = path.stat()
        with path.open("rb") as source:
            head = source.read(96)
            source.seek(max(stat.st_size - 32, 0))
            tail = source.read(32)
        signature = head[:4]
        row.update(
            SizeBytes=stat.st_size,
            SizeMiB=f"{stat.st_size / 1048576:.6f}",
            Magic4Hex=signature.hex().upper(),
            Magic4ASCII=(signature.decode("ascii") if len(signature) == 4
                         and all(32 <= c <= 126 for c in signature) else ""),
            Header64Hex=head[:64].hex().upper(),
            Tail32Hex=tail.hex().upper(),
            FileTypeByMagic=MAGICS.get(signature, ""),
            NSO_ModuleId_0x40=(head[0x40:0x60].hex().upper()
                               if signature == b"NSO0" and len(head) >= 0x60 else ""),
            ModifiedUTC=datetime.fromtimestamp(stat.st_mtime, timezone.utc)
            .isoformat(timespec="microseconds").replace("+00:00", "Z"),
        )
        if not skip_hash:
            row["SHA256"], row["SHA1"] = hash_file(path)
    except OSError as exc:
        row["Error"] = f"{type(exc).__name__}: {exc}"
    return row


def export(root: Path, output: Path, skip_hash: bool = False) -> tuple[int, int]:
    root = root.resolve(strict=True)
    if not root.is_dir():
        raise ValueError(f"Not a directory: {root}")
    output = output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    count = errors = 0
    # Sort paths for repeatable output; never read/write any file's contents except metadata.
    paths = sorted((p for p in root.rglob("*") if p.is_file()
                    and p.resolve() != output), key=lambda p: p.as_posix().casefold())
    with output.open("w", encoding="utf-8-sig", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=FIELDS)
        writer.writeheader()
        for path in paths:
            row = inspect_file(root, path, skip_hash)
            writer.writerow(row)
            count += 1
            errors += bool(row["Error"])
    return count, errors


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, required=True, help="Local extracted NCA tree")
    parser.add_argument("--out", type=Path, required=True, help="CSV output path")
    parser.add_argument("--skip-hash", action="store_true",
                        help="Faster preliminary scan; SHA equality cannot be verified")
    args = parser.parse_args()
    try:
        count, errors = export(args.root, args.out, args.skip_hash)
    except (OSError, ValueError) as exc:
        parser.error(str(exc))
    print(f"wrote {count} rows to {args.out} (read errors: {errors})")
    return 1 if errors else 0


if __name__ == "__main__":
    raise SystemExit(main())
