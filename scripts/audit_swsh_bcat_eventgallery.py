#!/usr/bin/env python3
"""Verify or locally download the pinned Project Pokemon SWSH BCAT event archive.

The repository commits only a metadata inventory, never event payload files.
No event dates, real-time availability or PKHeX dist parity are inferred.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import struct
import urllib.parse
import urllib.request
from pathlib import Path

from audit_swsh_trade_pkhex import git_blob_sha1

MANIFEST = Path("manifests/swsh_bcat_eventgallery_pinned.json")


def relative_parts(group: dict, file: dict) -> tuple[str, ...]:
    parts = (group["index_dir"], file["name"])
    if any((not s or s in {".", ".."} or "/" in s or "\\" in s) for s in parts):
        raise ValueError("unsafe archive filename")
    return parts


def validate_inventory(manifest: dict) -> None:
    if manifest["source_repository"] != "projectpokemon/EventsGallery":
        raise ValueError("unexpected external BCAT origin")
    if len(manifest["source_commit"]) != 40:
        raise ValueError("source reference must be a pinned commit SHA")
    groups = manifest["index_groups"]
    if len(groups) != 118 or sum(len(g["files"]) for g in groups) != 639:
        raise ValueError("unexpected pinned EventsGallery inventory count")
    if len([g for g in groups if g["index_dir"].startswith("Index ")]) != 118:
        raise ValueError("unexpected archive index group")
    ids = set()
    for group in groups:
        name = group["index_dir"]
        if name in ids:
            raise ValueError("duplicated BCAT group")
        ids.add(name)
        file_names = set()
        for f in group["files"]:
            relative_parts(group, f)
            if f["name"] in file_names:
                raise ValueError("duplicated event file")
            file_names.add(f["name"])
            if (f["bytes"] < 0 or len(f["git_blob_sha1"]) != 40
                    or (f["bytes"] == 0 and f["name"] != "missing.txt")):
                raise ValueError("invalid source Git blob record")


def select_groups(manifest: dict, index: str | None, all_groups: bool) -> list[dict]:
    groups = manifest["index_groups"]
    if all_groups:
        return groups
    if index is None:
        return []
    clean = index.strip()
    selected = [
        group for group in groups
        if group["index_dir"] == clean or group["index_dir"] == "Index " + clean
    ]
    if len(selected) != 1:
        raise ValueError(f"unknown or ambiguous BCAT index: {index}")
    return selected


def source_url(manifest: dict, group: dict, file: dict) -> str:
    path = [*manifest["source_dir"].split("/"), *relative_parts(group, file)]
    quoted = "/".join(urllib.parse.quote(x, safe="") for x in path)
    return (
        "https://raw.githubusercontent.com/"
        + manifest["source_repository"] + "/" + manifest["source_commit"] + "/" + quoted
    )


def verify_bytes(data: bytes, file: dict) -> None:
    if len(data) != file["bytes"] or git_blob_sha1(data) != file["git_blob_sha1"]:
        raise ValueError(f"downloaded BCAT source integrity mismatch: {file['name']}")


def decode_bcat_envelope(data: bytes) -> dict:
    """pkNX SWSH GetDistributionContents header check; CRC deliberately unverified.

    Source: tools/pkNX/pkNX.WinForms/Dumping/Gen8/GameDumperSWSH.cs.
    The BCAT index is a byte in the archive header, not necessarily the
    numbered EventsGallery directory or the PKHeX distribution index.
    """
    if len(data) < 0x24:
        raise ValueError("BCAT file too short for 0x20 header and 4-byte trailer")
    if struct.unpack_from("<I", data, 8)[0] != 0x20:
        raise ValueError("BCAT header length marker is not 0x20")
    if struct.unpack_from("<I", data, 0x10)[0] + 4 != len(data):
        raise ValueError("BCAT header declared file length does not match bytes")
    payload = data[0x20:-4]
    if len(payload) < 4:
        raise ValueError("BCAT payload too short for FlatBuffers root reference")
    root_offset = struct.unpack_from("<I", payload, 0)[0]
    if root_offset < 4 or root_offset >= len(payload):
        raise ValueError("BCAT payload FlatBuffers root pointer out of bounds")
    return {
        "header_distribution_index": data[0],
        "declared_size_plus_trailer": len(data),
        "payload_offset": 32,
        "payload_bytes": len(payload),
        "flatbuffers_root_offset": root_offset,
        "trailer_hex": data[-4:].hex(),
        "trailer_crc16_validation": "UNVERIFIED",
    }


BCAT_PAYLOAD_NAMES = frozenset({
    "normal_encount", "normal_encount_rigel1", "normal_encount_rigel2",
    "dai_encount", "drop_rewards", "bonus_rewards",
})


def audit(repo: Path, index: str | None, all_groups: bool, out: Path,
          download: bool = False) -> dict:
    manifest = json.loads((repo / MANIFEST).read_text(encoding="utf-8"))
    validate_inventory(manifest)
    groups = select_groups(manifest, index, all_groups)
    summary = {
        "source": manifest["source_repository"] + "@" + manifest["source_commit"],
        "inventory_groups": len(manifest["index_groups"]),
        "inventory_index_file_entries": sum(len(g["files"]) for g in manifest["index_groups"]),
        "selected_groups": [g["index_dir"] for g in groups],
        "download_enabled": download,
        "files_verified": 0, "files_missing": 0,
        "total_bytes_verified": 0,
        "verified": [], "missing": [],
        "pkhex_dist_byte_parity": "NOT_VERIFIED",
        "event_time_windows": "NOT_VERIFIED",
    }
    for group in groups:
        for f in group["files"]:
            parts = relative_parts(group, f)
            dest = out.joinpath(*parts)
            if dest.is_file():
                data = dest.read_bytes()
            elif download:
                url = source_url(manifest, group, f)
                request = urllib.request.Request(url, headers={"User-Agent": "SWSH-Resources-BCAT-Audit/1.0"})
                with urllib.request.urlopen(request, timeout=45) as response:
                    data = response.read(f["bytes"] + 1)
                verify_bytes(data, f)
                dest.parent.mkdir(parents=True, exist_ok=True)
                tmp = dest.with_name(dest.name + ".partial")
                try:
                    tmp.write_bytes(data)
                    os.replace(tmp, dest)
                finally:
                    tmp.unlink(missing_ok=True)
            else:
                summary["files_missing"] += 1
                summary["missing"].append("/".join(parts))
                continue
            verify_bytes(data, f)
            header_info = (
                decode_bcat_envelope(data) if f["name"] in BCAT_PAYLOAD_NAMES
                else {"type": "NON_BCAT_METADATA", "envelope_check": "SKIPPED"}
            )
            summary["files_verified"] += 1
            summary["total_bytes_verified"] += len(data)
            summary["verified"].append({
                "relative_path": "/".join(parts),
                "bytes": len(data),
                "sha256": hashlib.sha256(data).hexdigest(),
                "pinned_git_blob_sha1": f["git_blob_sha1"],
                "envelope": header_info,
            })
    return summary


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--index", help="For example 001, '001 (Null)', 042, or 117")
    p.add_argument("--all", action="store_true", help="Select every pinned archive group")
    p.add_argument("--download", action="store_true", help="Opt-in network download to ignored artifacts/")
    p.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-bcat-events"))
    args = p.parse_args()
    if args.all and args.index is not None:
        p.error("choose --all or --index, not both")
    repo, out = args.repo.resolve(), args.out_dir.resolve()
    summary = audit(repo, args.index, args.all, out, args.download)
    if args.index is not None or args.all:
        out.mkdir(parents=True, exist_ok=True)
        (out / "bcat_verification.json").write_text(
            json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
    print(json.dumps({key: value for key, value in summary.items()
                      if key not in ("verified", "missing")}, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
