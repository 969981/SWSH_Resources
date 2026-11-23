#!/usr/bin/env python3
"""Independently project archived Sword/Shield BCAT raids to 16-byte PKHeX Dist candidates.

Pinned upstream source: projectpokemon/EventsGallery commit from
manifests/swsh_bcat_eventgallery_pinned.json. The source archives are read-only.
Not every ROM entry belongs in PKHeX's curated legality template database.
A *matched* template is a byte-exact record derived from historic FlatBuffers;
an unmatched candidate is NOT proof that a template is invalid.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from collections import Counter, defaultdict
from pathlib import Path

from audit_swsh_bcat_eventgallery import (
    BCAT_PAYLOAD_NAMES, MANIFEST, audit as fetch_archive,
    decode_bcat_envelope, select_groups, validate_inventory, verify_bytes,
)
from export_swsh_special_encounters import decode_raid_record
from swsh_semantic_catalog import FB

RAID_DIR = Path("Unpack/v1.3.2/pkl/raid")
DISTRIBUTION_FILES = {1: "encounter_sw_dist.pkl", 2: "encounter_sh_dist.pkl"}
BCAT_ENCOUNTER_FILES = frozenset({
    "normal_encount", "normal_encount_rigel1", "normal_encount_rigel2",
})
ABILITY_TO_PKHEX = {0: 1, 1: 2, 2: 4, 3: 0, 4: 255}


def probability_vector(fb: FB, entry: int) -> list[int]:
    pointer = fb.field(entry, 15)
    if pointer is None:
        raise ValueError("missing distribution rank weights")
    vec = pointer + fb.u32(pointer)
    count = fb.u32(vec)
    if count != 5 or vec + 4 + count * 4 > fb.n:
        raise ValueError("distribution weight vector must be five i32 values")
    return [fb.i32(vec + 4 + i * 4) for i in range(count)]


def encode_distribution_row(row: dict, index: int) -> bytes:
    """PKHeX EncounterStatic8ND.Read inverse, with source-specific code mapping."""
    species = int(row["species"])
    form = int(row["form"])
    ability = int(row["ability_raw"])
    moves = [int(v) for v in row["moves"]]
    level = int(row["level"])
    dmax = int(row["dynamax_level"])
    gmax = int(row["can_gigantamax"])
    shiny = int(row["shiny_lock"])
    flawless = int(row["flawless_iv_count"])
    if not 1 <= species <= 1025 or not 0 <= form <= 50:
        raise ValueError("invalid distribution species or form")
    if ability not in ABILITY_TO_PKHEX:
        raise ValueError(f"unknown native distribution Ability={ability}")
    if len(moves) != 4 or any(not 0 <= v <= 65535 for v in moves):
        raise ValueError("distribution move exceeds ushort")
    if not 1 <= level <= 100 or not 0 <= dmax <= 10 or gmax not in (0, 1):
        raise ValueError("distribution level/G-Max/Dynamax out of range")
    if shiny not in (0, 1, 2) or not 0 <= flawless <= 6 or not 0 <= index <= 255:
        raise ValueError("distribution shiny/IV/index outside PKHeX envelope")
    result = struct.pack(
        "<HBB4H4B", species, form, ABILITY_TO_PKHEX[ability], *moves,
        level, dmax | (gmax << 7), shiny << 4 | flawless, index,
    )
    decoded = decode_raid_record("dist", result)
    if decoded["species"] != species or decoded["distribution_index"] != index:
        raise ValueError("distribution encode/decode invariant failed")
    return result


def parse_distribution_payload(payload: bytes, index: int, source: str) -> tuple[list[dict], Counter]:
    fb = FB(payload)
    tables = fb.vector(fb.root, 0)
    if not 1 <= len(tables) <= 4096:
        raise ValueError(f"{source}: invalid distribution table count")
    rows, rejected = [], Counter()
    for ti, table in enumerate(tables):
        game_version = fb.scalar(table, 1, "I")
        if game_version not in (1, 2):
            raise ValueError(f"{source}: invalid distribution GameVersion={game_version}")
        table_id = fb.scalar(table, 0, "Q")
        entries = fb.vector(table, 4)
        if len(entries) > 10000:
            raise ValueError(f"{source}: distribution table too large")
        for ei, entry in enumerate(entries):
            weights = probability_vector(fb, entry)
            if any(w < 0 for w in weights):
                raise ValueError(f"{source}: negative rank probability")
            if not any(weights):
                rejected["EMPTY_PROBABILITIES"] += 1
                continue
            f13 = fb.scalar(entry, 19, "B")
            f14 = fb.scalar(entry, 20, "B")
            if f13 == 6 and f14 == 6:  # pkNX comments out uncatchable templates
                rejected["UNCATCHABLE_BY_PINNED_PKNX_RULE"] += 1
                continue
            raw = {
                "species": fb.scalar(entry, 1, "i"),
                "form": fb.scalar(entry, 2, "i"),
                "level": fb.scalar(entry, 3, "i"),
                "dynamax_level": fb.scalar(entry, 4, "H"),
                "ability_raw": fb.scalar(entry, 11, "B"),
                "can_gigantamax": fb.scalar(entry, 12, "B"),
                "flawless_iv_count": fb.scalar(entry, 17, "b"),
                "shiny_lock": fb.scalar(entry, 18, "B"),
                "gender_raw": fb.scalar(entry, 16, "b"),
                "moves": [fb.scalar(entry, i, "I") for i in range(23, 27)],
                "rank_weights": weights,
                "field13_raw": f13,
                "field14_raw": f14,
            }
            try:
                record = encode_distribution_row(raw, index)
            except (ValueError, struct.error) as exc:
                raise ValueError(f"{source} table {ti} row {ei}: {exc}") from exc
            rows.append({
                "game_version": game_version,
                "source_path": source,
                "table_index": ti, "table_id": table_id,
                "entry_index": ei, "source_entry_index": fb.scalar(entry, 0, "i"),
                "bcat_distribution_index": index,
                "record_hex": record.hex(),
                "rank_weights": weights,
                "gender_raw": raw["gender_raw"],
                "field13_raw": f13,
                "field14_raw": f14,
            })
    return rows, rejected


def read_reference(repo: Path) -> dict[int, list[str]]:
    manifest = json.loads((repo / RAID_DIR / "manifest.json").read_text(encoding="utf-8"))
    by_name = {meta["name"]: meta for meta in manifest["files"]}
    result = {}
    for version, name in DISTRIBUTION_FILES.items():
        meta = by_name[name]
        content = (repo / RAID_DIR / name).read_bytes()
        if (len(content) != meta["bytes"] or hashlib.sha256(content).hexdigest() != meta["sha256"]
                or meta["stride"] != 16 or len(content) % 16):
            raise ValueError("pinned PKHeX Dist data length, hash or stride mismatch")
        result[version] = [content[i:i + 16].hex() for i in range(0, len(content), 16)]
    return result


def audit(repo: Path, source_dir: Path, group_index: str | None,
          all_groups: bool, require_complete: bool = False,
          out: Path | None = None) -> dict:
    manifest = json.loads((repo / MANIFEST).read_text(encoding="utf-8"))
    validate_inventory(manifest)
    groups = select_groups(manifest, group_index, all_groups)
    if not groups:
        raise ValueError("choose --index or --all for BCAT to Dist comparison")
    reference = read_reference(repo)
    available_by_version: dict[int, dict[str, list[dict]]] = {1: defaultdict(list), 2: defaultdict(list)}
    source_counts, rejected = Counter(), Counter()
    missing, source_proof = [], []
    for group in groups:
        for meta in group["files"]:
            if meta["name"] not in BCAT_ENCOUNTER_FILES:
                continue
            relative = f'{group["index_dir"]}/{meta["name"]}'
            source = source_dir / relative
            if not source.is_file():
                missing.append(relative)
                continue
            data = source.read_bytes()
            verify_bytes(data, meta)
            envelope = decode_bcat_envelope(data)
            records, dropped = parse_distribution_payload(
                data[32:-4], envelope["header_distribution_index"], relative
            )
            for reason, count in dropped.items():
                rejected[reason] += count
            source_counts["files_parsed"] += 1
            source_counts["raw_rows_kept"] += len(records)
            for row in records:
                available_by_version[row["game_version"]][row["record_hex"]].append(row)
            source_proof.append({
                "relative_path": relative, "source_bytes": len(data),
                "git_blob_sha1": meta["git_blob_sha1"],
                "source_sha256": hashlib.sha256(data).hexdigest(),
                "header_distribution_index": envelope["header_distribution_index"],
                "rom_tables_rows": len(records),
                "excluded": dict(dropped),
            })
    if require_complete and missing:
        raise ValueError(f"{len(missing)} selected historical encounter files are missing")
    comparisons = {}
    for version, name in DISTRIBUTION_FILES.items():
        ref = reference[version]
        sources = available_by_version[version]
        ref_seen = set(ref)
        matched = [i for i, encoded in enumerate(ref) if encoded in sources]
        unmatched = [
            {"reference_index": i, "record_hex": encoded,
             "distribution_index": int(encoded[-2:], 16)}
            for i, encoded in enumerate(ref) if encoded not in sources
        ]
        source_only = [
            {"record_hex": encoded, "source_occurrences": len(items),
             "sources": items}
            for encoded, items in sorted(sources.items()) if encoded not in ref_seen
        ]
        # Deterministic ROM-derived candidate export; NO source records are
        # copied from the reference PKL to manufacture byte-identical parity.
        # Species/index/record bytes define an audit sort, not a PKHeX sort.
        ordered_candidates = sorted(
            sources, key=lambda h: (
                int.from_bytes(bytes.fromhex(h)[:2], "little"),
                int(h[-2:], 16), h,
            )
        )
        candidate_bytes = b"".join(bytes.fromhex(h) for h in ordered_candidates)
        if len(candidate_bytes) != 16 * len(ordered_candidates):
            raise ValueError("dist candidate serializer lost the 16-byte stride")
        candidate_name = ("encounter_sw_dist_rom_candidates.pkl" if version == 1
                          else "encounter_sh_dist_rom_candidates.pkl")
        summary = {
            "source_candidate_pkl_name": candidate_name,
            "source_candidate_pkl_bytes": len(candidate_bytes),
            "source_candidate_pkl_sha256": hashlib.sha256(candidate_bytes).hexdigest(),
            "source_candidate_pkl_status": "ROM_DERIVED_CANDIDATES_NOT_PKHEX_CURATED",
            "reference_filename": name,
            "reference_records": len(ref),
            "source_unique_records": len(sources),
            "matched_reference_instances": len(matched),
            "unmatched_reference_instances": len(unmatched),
            "source_only_unique_records": len(source_only),
            "source_duplicate_occurrences": sum(len(x) - 1 for x in sources.values()),
            "coverage": ("COMPLETE_EXACT_SOURCE_RECORD_COVERAGE" if not unmatched and not missing
                         else "PARTIAL_ARCHIVE_RECONCILIATION"),
            "not_a_byte_exact_file_rebuild": True,
            "availability_proven": False,
        }
        comparisons["Sword" if version == 1 else "Shield"] = summary
        if out is not None:
            (out / candidate_name).write_bytes(candidate_bytes)
            (out / ("dist_reference_missing_" + str(version) + ".json")).write_text(
                json.dumps(unmatched, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
            )
            (out / ("dist_source_only_" + str(version) + ".json")).write_text(
                json.dumps(source_only, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
            )
            matches_with_proof = [
                {"reference_index": i, "record_hex": ref[i], "source_occurrences": sources[ref[i]]}
                for i in matched
            ]
            (out / ("dist_reference_matches_" + str(version) + ".json")).write_text(
                json.dumps(matches_with_proof, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
            )
    result = {
        "status": ("ARCHIVE_ALL_SELECTED_FILES_VERIFIED" if not missing
                   else "PARTIAL_SELECTED_ARCHIVE"),
        "reference": "kwsch/PKHeX@" + manifest.get(
            "pkhex_reference_commit", "0660d1e1f4924b8478daec73281bb8071a82ad19"
        ),
        "archive": manifest["source_repository"] + "@" + manifest["source_commit"],
        "groups_selected": len(groups),
        "normal_encounter_files_parsed": source_counts["files_parsed"],
        "normal_encounter_files_missing": len(missing),
        "missing_paths": missing,
        "source_rows_kept": source_counts["raw_rows_kept"],
        "source_rows_excluded": dict(rejected),
        "comparisons": comparisons,
        "checks": {
            "payload_field_source": "pkNX SWSH NestHoleDistributionEncounterArchive.fbs",
            "PKHeX_projection_stride": 16,
            "pkhex_capture_legality": "NOT_VALIDATED",
            "pkhex_curated_database_order": "NOT_REBUILT",
            "event_activity_dates": "NOT_VALIDATED",
            "file_trailer_crc16": "NOT_VALIDATED",
        },
    }
    if out is not None:
        (out / "bcat_to_dist_summary.json").write_text(
            json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
        (out / "bcat_source_file_proof.json").write_text(
            json.dumps(source_proof, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
    return result


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--source-dir", type=Path, default=Path("artifacts/swsh-bcat-events"))
    p.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-bcat-dist"))
    p.add_argument("--index", help="e.g. 001, 001 (Null), 042, 117")
    p.add_argument("--all", action="store_true")
    p.add_argument("--download", action="store_true",
                   help="Explicitly download pinned history source files into ignored artifacts/")
    p.add_argument("--require-complete", action="store_true")
    p.add_argument("--validate-only", action="store_true")
    args = p.parse_args()
    if bool(args.index) == bool(args.all):
        p.error("select exactly one of --index or --all")
    repo = args.repo.resolve()
    source_dir = args.source_dir.resolve()
    if args.download:
        fetch_archive(
            repo, args.index, args.all, source_dir, download=True,
            filter_names=BCAT_ENCOUNTER_FILES,
        )
    out = None if args.validate_only else args.out_dir.resolve()
    if out is not None:
        out.mkdir(parents=True, exist_ok=True)
    result = audit(repo, source_dir, args.index, args.all, args.require_complete, out)
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
