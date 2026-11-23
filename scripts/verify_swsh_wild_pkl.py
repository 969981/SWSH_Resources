#!/usr/bin/env python3
"""Validate Pokémon Sword/Shield v1.3.2 wild encounter Mini (.pkl) files.

The files are PKHeX/pkNX 'sw' or 'sh' Mini containers, NOT Python pickle.
Checks recorded hashes, sizes, region counts and the offset map.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path


def validate_mini(data: bytes, expected_areas: int, expected_version: str) -> None:
    expected_signature = {"Sword": b"sw", "Shield": b"sh"}[expected_version]
    if len(data) < 12 or data[:2] != expected_signature:
        raise ValueError("invalid SWSH Mini signature for the specified version")
    (areas,) = struct.unpack_from("<H", data, 2)
    if areas != expected_areas:
        raise ValueError(f"area count {areas}, expected {expected_areas}")
    header_size = 4 + 4 * (areas + 1)
    if len(data) < header_size:
        raise ValueError("offset table truncated")
    offsets = struct.unpack_from(f"<{areas + 1}I", data, 4)
    if offsets[0] != header_size:
        raise ValueError(f"first offset {offsets[0]} != header size {header_size}")
    if offsets[-1] != len(data):
        raise ValueError(f"final offset {offsets[-1]} != file size {len(data)}")
    if any(a > b or a % 4 or b % 4 for a, b in zip(offsets, offsets[1:])):
        raise ValueError("offsets are unordered or misaligned")
    if any(a == b for a, b in zip(offsets, offsets[1:])):
        raise ValueError("encounter region with zero-size payload")


def verify(root: Path, manifest: Path) -> int:
    with manifest.open(encoding="utf-8") as f:
        metadata = json.load(f)
    errors = 0
    for item in metadata["files"]:
        path = root / item["name"]
        try:
            data = path.read_bytes()
            if len(data) != item["size_bytes"]:
                raise ValueError(f"size {len(data)} != {item['size_bytes']}")
            digest = hashlib.sha256(data).hexdigest()
            if digest != item["sha256"]:
                raise ValueError(f"SHA-256 {digest} != {item['sha256']}")
            validate_mini(data, item["area_count"], item["version"])
            print(f"OK   {item['name']}: {len(data)} bytes, {item['area_count']} areas, SHA-256 match")
        except (OSError, ValueError, KeyError) as exc:
            errors += 1
            print(f"FAIL {item['name']}: {exc}", file=sys.stderr)
    return 1 if errors else 0


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("Unpack/v1.3.2/pkl"))
    parser.add_argument("--manifest", type=Path, default=Path("Unpack/v1.3.2/pkl/manifest.json"))
    args = parser.parse_args()
    return verify(args.root, args.manifest)


if __name__ == "__main__":
    raise SystemExit(main())
