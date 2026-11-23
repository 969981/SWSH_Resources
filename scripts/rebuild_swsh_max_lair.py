#!/usr/bin/env python3
"""Rebuild the exact PKHeX Sword/Shield Max Lair .pkl from ROM FlatBuffers.

Original source: v1.3.2/1/bin/appli/chika/data_table/underground_exploration_poke.bin
PKHeX Gen8 EncounterStatic8U: stable sort by species, fixed 14-byte records.
No ROM editing, no gameplay availability claim.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

from swsh_semantic_catalog import FB

SOURCE = Path("v1.3.2/1/bin/appli/chika/data_table/underground_exploration_poke.bin")
SOURCE_SHA256 = "18d7d6546eb2c6a5ca9531eb13a0a3bffeaab186ee2f6510ea4b6275b5ea4328"
REFERENCE = Path("Unpack/v1.3.2/pkl/raid/encounter_swsh_underground.pkl")
REFERENCE_SHA256 = "65480087c7d2bb92b044954fc604e2be9c3aaf39854176a699a4c41012942302"


def rebuild(repo: Path) -> tuple[bytes, dict]:
    data = (repo / SOURCE).read_bytes()
    got = hashlib.sha256(data).hexdigest()
    if len(data) != 23296 or got != SOURCE_SHA256:
        raise ValueError("source ROM FlatBuffers SHA-256 or length mismatch")
    fb = FB(data)
    entries = fb.vector(fb.root, 0)
    if len(entries) != 273:
        raise ValueError(f"expected 273 Max Lair original entries, got {len(entries)}")

    out = []
    for idx, obj in enumerate(entries):
        species = fb.scalar(obj, 8, "i")
        form = fb.scalar(obj, 3, "B")
        level = fb.scalar(obj, 7, "I")
        moves = [fb.scalar(obj, k, "I") for k in range(21, 25)]
        raw_ability = fb.scalar(obj, 19, "I")
        raw_gigantamax = fb.scalar(obj, 4, "I")
        if not 1 <= species <= 1025 or form > 50 or level not in (65, 70):
            raise ValueError(f"source Max Lair row {idx}: invalid Pokémon attributes")
        if raw_ability not in (0, 1, 2) or raw_gigantamax not in (1, 2):
            raise ValueError(f"source Max Lair row {idx}: unexpected ability or G-Max state")
        if any(not 0 <= move <= 1000 for move in moves):
            raise ValueError(f"source Max Lair row {idx}: move outside supported ID range")
        record = struct.pack(
            "<HBB4HBB", species, form, level, *moves,
            1 << raw_ability, raw_gigantamax - 1
        )
        out.append((species, record))

    # The original table groups some rental/boss entries differently from the
    # pinned PKHeX database. PKHeX sorts by Species, with stable order within
    # identical species IDs. Do NOT remove duplicates or sort by moves.
    out.sort(key=lambda item: item[0])
    encoded = b"".join(record for _, record in out)
    digest = hashlib.sha256(encoded).hexdigest()
    if digest != REFERENCE_SHA256:
        raise ValueError(f"reconstructed Max Lair PKL SHA-256 mismatch: {digest}")
    reference = (repo / REFERENCE).read_bytes()
    if encoded != reference:
        raise ValueError("reconstructed Max Lair bytes differ from the pinned PKHeX file")
    result = {
        "status": "BYTE_EXACT_ROM_TO_PKHEX_REBUILD",
        "source": str(SOURCE), "source_sha256": got,
        "target": str(REFERENCE), "target_sha256": digest,
        "original_entries": len(entries), "output_records": len(out),
        "output_bytes": len(encoded), "sort": "stable_species_ascending",
        "conversion": "ability_0_1_2_to_1_2_4__gmax_state_1_2_to_bool_0_1",
        "limitations": "Max Lair capture shiny is a separate post-adventure mechanic; this validates static templates, not runtime odds.",
    }
    return encoded, result


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-max-lair-rebuilt"))
    p.add_argument("--validate-only", action="store_true")
    args = p.parse_args()
    binary, result = rebuild(args.repo.resolve())
    if not args.validate_only:
        out = args.out_dir.resolve()
        out.mkdir(parents=True, exist_ok=True)
        (out / REFERENCE.name).write_bytes(binary)
        (out / "verification.json").write_text(
            json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
