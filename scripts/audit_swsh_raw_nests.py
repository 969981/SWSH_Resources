#!/usr/bin/env python3
"""Audit original Sword/Shield 1.3.2 nest FlatBuffers against pinned PKHeX nests.

Read-only, source-hash-pinned. A structural match is not a guarantee of
in-game den availability, rates, or byte-identical PKHeX serialization.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path

from swsh_semantic_catalog import FB
from export_swsh_special_encounters import decode_raid_record

SOURCE = Path("Unpack/v1.3.2/extracted/bin/archive/field/resident/data_table.gfpak.files/000008_A5963232100F7DEE.bin")
SOURCE_SHA256 = "f7ba0222e11c268386b56c1d8c3936e8813a1a1aa08262cd137774cb58847be7"
RAID_PATH = Path("Unpack/v1.3.2/pkl/raid")
RAID_NAMES = {1: "encounter_sw_nest.pkl", 2: "encounter_sh_nest.pkl"}
ABILITY_MAP = {2: 4, 3: 0, 4: 255}   # pkNX A2/A3/A4 -> PKHeX OnlyHidden/Any12/Any12H
GENDER_MAP = {0: 255, 1: 0, 2: 1, 3: 2}  # SWSH random/male/female/genderless -> PKHeX
FIELDS = ("species", "form", "gender_code", "ability_permission", "can_gigantamax",
          "nest_index", "min_rank_zero_based", "max_rank_zero_based", "flawless_iv_count")


def uint_vector(fb: FB, table: int, field_index: int) -> list[int]:
    pointer = fb.field(table, field_index)
    if pointer is None:
        raise ValueError("missing required scalar vector")
    base = pointer + fb.u32(pointer)
    count = fb.u32(base)
    if count != 5 or base + 4 + 4 * count > fb.n:
        raise ValueError("expected 5 rank probabilities")
    return [fb.u32(base + 4 + 4 * i) for i in range(count)]


def consecutive_ranges(weights: list[int]):
    start = None
    for i in range(len(weights) + 1):
        active = i < len(weights) and weights[i] > 0
        if active and start is None:
            start = i
        elif not active and start is not None:
            yield (start, i - 1)
            start = None


def candidate_key(row: dict):
    return tuple(int(row[f]) for f in FIELDS)


def collect_source(repo: Path):
    original = (repo / SOURCE).read_bytes()
    digest = hashlib.sha256(original).hexdigest()
    if digest != SOURCE_SHA256 or len(original) != 371456:
        raise ValueError("original 1.3.2 NestArchive member hash/length mismatch")
    fb = FB(original)
    tables = fb.vector(fb.root, 0)
    if len(tables) != 394:
        raise ValueError(f"expected 394 original nest tables, got {len(tables)}")
    counts = Counter()
    rows, candidates = [], {1: [], 2: []}
    for tbl in tables:
        version = fb.scalar(tbl, 1, "i")
        if version not in (1, 2):
            raise ValueError("invalid original GameVersion in nest table")
        nest = counts[version]
        counts[version] += 1
        table_id = fb.scalar(tbl, 0, "Q")
        for entry in fb.vector(tbl, 2):
            species = fb.scalar(entry, 1, "i")
            form = fb.scalar(entry, 2, "i")
            ability = fb.scalar(entry, 4, "B")
            gender = fb.scalar(entry, 9, "b")
            flawless = fb.scalar(entry, 10, "b")
            gmax = fb.scalar(entry, 5, "B")
            weights = uint_vector(fb, entry, 8)
            if not 1 <= species <= 1025 or not 0 <= form <= 50:
                raise ValueError("invalid species/form in original nest table")
            if ability not in ABILITY_MAP or gender not in GENDER_MAP or gmax not in (0, 1):
                raise ValueError("unexpected raw ability/gender/gmax encoding")
            row = {
                "game_version_id": version, "nest_index": nest, "table_id": table_id,
                "entry_index": fb.scalar(entry, 0, "i"),
                "species": species, "form": form, "ability_raw": ability,
                "gender_raw": gender, "can_gigantamax": bool(gmax),
                "flawless_iv_count": flawless,
                "level_table_id": fb.scalar(entry, 3, "Q"),
                "drop_table_id": fb.scalar(entry, 6, "Q"),
                "bonus_table_id": fb.scalar(entry, 7, "Q"),
                **{f"rank{i+1}_weight": weight for i, weight in enumerate(weights)},
                "source_file_sha256": digest,
            }
            rows.append(row)
            for first, last in consecutive_ranges(weights):
                candidates[version].append({
                    "species": species, "form": form,
                    "gender_code": GENDER_MAP[gender],
                    "ability_permission": ABILITY_MAP[ability],
                    "can_gigantamax": bool(gmax), "nest_index": nest,
                    "min_rank_zero_based": first, "max_rank_zero_based": last,
                    "flawless_iv_count": flawless,
                })
    if counts != {1: 197, 2: 197} or len(rows) != 4728:
        raise ValueError(f"unexpected table/entry counts: {counts} / {len(rows)}")
    return rows, candidates


def candidate_provenance(originals: list[dict], version: int) -> dict[tuple, list[dict]]:
    """Attach unmatched candidate ranks to their actual ROM table IDs.

    This is *not* a den-location join: table/level/drop IDs remain hashes.
    """
    provenance: dict[tuple, list[dict]] = {}
    for row in originals:
        if row["game_version_id"] != version:
            continue
        ranks = [row[f"rank{i}_weight"] for i in range(1, 6)]
        for lo, hi in consecutive_ranges(ranks):
            key = (
                row["species"], row["form"], GENDER_MAP[row["gender_raw"]],
                ABILITY_MAP[row["ability_raw"]], int(row["can_gigantamax"]),
                row["nest_index"], lo, hi, row["flawless_iv_count"],
            )
            provenance.setdefault(key, []).append({
                "table_id": row["table_id"],
                "entry_index": row["entry_index"],
                "level_table_id": row["level_table_id"],
                "drop_table_id": row["drop_table_id"],
                "bonus_table_id": row["bonus_table_id"],
                "rank_weights": ranks,
                "source_file_sha256": row["source_file_sha256"],
            })
    return provenance


def possible_overlap_without_fields(a: Counter, b: Counter, omitted: tuple[str, ...]) -> int:
    """Independent candidate evidence; overlaps are NOT disjoint diagnoses."""
    keep = [i for i, name in enumerate(FIELDS) if name not in omitted]
    left, right = Counter(), Counter()
    for key, qty in a.items():
        left[tuple(key[i] for i in keep)] += qty
    for key, qty in b.items():
        right[tuple(key[i] for i in keep)] += qty
    return sum((left & right).values())


def audit(repo: Path, out: Path | None):
    originals, candidates = collect_source(repo)
    comparisons = []
    for version in (1, 2):
        path = repo / RAID_PATH / RAID_NAMES[version]
        data = path.read_bytes()
        if len(data) % 10:
            raise ValueError("invalid PKHeX nest stride")
        reference = [decode_raid_record("nest", data[i:i + 10]) for i in range(0, len(data), 10)]
        a = Counter(map(candidate_key, candidates[version]))
        b = Counter(map(candidate_key, reference))
        source_only = a - b
        reference_only = b - a
        common = sum((a & b).values())
        summary = {
            "game": "Sword" if version == 1 else "Shield",
            "source_candidates": sum(a.values()),
            "reference_records": sum(b.values()),
            "matched_record_instances": common,
            "source_unmatched_instances": sum(source_only.values()),
            "reference_unmatched_instances": sum(reference_only.values()),
            "source_duplicate_instances": sum(n - 1 for n in a.values()),
            "status": "PARTIAL_SOURCE_TO_PINNED_REFERENCE_PARITY__NOT_BYTE_EXACT",
        }
        # These candidate overlaps are non-exclusive leads, not a claimed cause.
        summary["potential_nest_reindex_overlap"] = possible_overlap_without_fields(
            source_only, reference_only, ("nest_index",)
        )
        summary["potential_rank_span_overlap"] = possible_overlap_without_fields(
            source_only, reference_only, ("min_rank_zero_based", "max_rank_zero_based")
        )
        summary["potential_ability_gender_overlap"] = possible_overlap_without_fields(
            source_only, reference_only, ("ability_permission", "gender_code")
        )
        comparisons.append(summary)
        if out is not None:
            provenance = candidate_provenance(originals, version)
            with (out / ("nest_mismatch_" + summary["game"].lower() + ".json")).open("w", encoding="utf-8") as f:
                json.dump({
                    "note": "Potential overlaps are hypotheses, not exhaustive/disjoint mismatch causes.",
                    "source_only": [
                        {"key": list(k), "count": n, "source_evidence": provenance.get(k, [])}
                        for k, n in sorted(source_only.items())
                    ],
                    "reference_only": [{"key": list(k), "count": n} for k, n in sorted(reference_only.items())],
                    "potential_group_differences": {
                        key: summary[key] for key in (
                            "potential_nest_reindex_overlap",
                            "potential_rank_span_overlap",
                            "potential_ability_gender_overlap",
                        )
                    },
                }, f, ensure_ascii=False, indent=2)
    report = {
        "source_path": str(SOURCE),
        "source_sha256": SOURCE_SHA256,
        "original_tables": 394,
        "original_tables_per_version": 197,
        "original_rows": len(originals),
        "reference_commit": "kwsch/PKHeX@0660d1e1f4924b8478daec73281bb8071a82ad19",
        "comparisons": comparisons,
        "limitations": [
            "Raw probabilities have 5 entries and must not be conflated with runtime chances.",
            "Table IDs and LevelTableID/DropTableID/BonusTableID must be joined by hash, not index.",
            "Unmatched raw or pinned templates are not automatically illegal; curated reference filtering and grouping need independent proof.",
        ],
    }
    if out is not None:
        with (out / "original_nest_records.csv").open("w", newline="", encoding="utf-8-sig") as f:
            writer = csv.DictWriter(f, fieldnames=list(originals[0]))
            writer.writeheader()
            writer.writerows(originals)
        (out / "raw_nest_audit_summary.json").write_text(
            json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
    return report


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-raw-nests"))
    parser.add_argument("--validate-only", action="store_true")
    args = parser.parse_args()
    output = None if args.validate_only else args.out_dir.resolve()
    if output is not None:
        output.mkdir(parents=True, exist_ok=True)
    summary = audit(args.repo.resolve(), output)
    print(json.dumps(summary, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
