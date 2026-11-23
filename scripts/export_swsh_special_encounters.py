#!/usr/bin/env python3
"""Validate and export Sword/Shield 1.3.2 special encounter reference data.

Raid/dist/Max Lair: pinned PKHeX fixed-record files, NOT wild Mini nor Python pickle.
Static/gift/trade: original-ROM-derived CSV, NOT PKHeX legality PKL.
No event-availability, ROM-to-raid-binary or runtime weather/shiny claims.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import struct
from collections import Counter
from pathlib import Path

RAID_MANIFEST = Path("Unpack/v1.3.2/pkl/raid/manifest.json")
RAID_DIR = RAID_MANIFEST.parent
CATALOG_DIR = Path("Unpack/v1.3.2/catalog")
FIXED_INPUTS = {
    "static_encounters": ("static_encounters.csv", 647),
    "gift_encounters": ("gift_encounters.csv", 31),
    "trade_encounters": ("trade_encounters.csv", 23),
}
SHINY_VALUE = {0: "Random", 1: "Always", 2: "Never"}
DIST_SHINY_VALUE = {0: "Random", 1: "Never", 2: "Always"}
LEVEL_CAPS = ((15, 20), (25, 30), (35, 40), (45, 50), (55, 60))


def decode_raid_record(kind: str, raw: bytes) -> dict:
    """Decode one byte record exactly as PKHeX's Gen8 Read() methods do."""
    if kind == "nest":
        if len(raw) != 10:
            raise ValueError("nest record must be 10 bytes")
        species, form, gender, ability, gmax, nest, min_rank, max_rank, flawless = struct.unpack("<H8B", raw)
        if not 0 <= min_rank <= max_rank <= 4:
            raise ValueError("illegal 0-based nest star rank range")
        if gender not in (0, 1, 2, 255):
            raise ValueError("unknown gender code")
        if gmax not in (0, 1):
            raise ValueError("unknown gigantamax bit")
        result = {
            "species": species, "form": form, "gender_code": gender,
            "ability_permission": ability, "can_gigantamax": bool(gmax),
            "nest_index": nest, "min_rank_zero_based": min_rank,
            "max_rank_zero_based": max_rank, "min_star": min_rank + 1,
            "max_star": max_rank + 1,
            "min_level": LEVEL_CAPS[min_rank][0],
            "max_level": LEVEL_CAPS[max_rank][1],
            "flawless_iv_count": flawless,
        }
    elif kind == "dist":
        if len(raw) != 16:
            raise ValueError("dist record must be 16 bytes")
        species, form, ability, m1, m2, m3, m4, level, dgmax, shiny_iv, index = struct.unpack("<HBB4H4B", raw)
        shiny_code = shiny_iv >> 4
        if shiny_code not in DIST_SHINY_VALUE:
            raise ValueError("unknown raid distribution shiny code")
        result = {
            "species": species, "form": form, "ability_permission": ability,
            "move_1": m1, "move_2": m2, "move_3": m3, "move_4": m4,
            "level": level, "dynamax_level": dgmax & 0x7f,
            "can_gigantamax": bool(dgmax & 0x80),
            "flawless_iv_count": shiny_iv & 0x0f,
            "shiny_rule": DIST_SHINY_VALUE[shiny_code],
            "shiny_rule_raw": shiny_code, "distribution_index": index,
        }
        if result["dynamax_level"] > 10:
            raise ValueError("distribution Dynamax level out of bounds")
    elif kind == "max_lair":
        if len(raw) != 14:
            raise ValueError("Max Lair record must be 14 bytes")
        species, form, level, m1, m2, m3, m4, ability, gmax = struct.unpack("<HBB4HBB", raw)
        if gmax not in (0, 1):
            raise ValueError("unknown gigantamax bit")
        result = {
            "species": species, "form": form, "level": level,
            "move_1": m1, "move_2": m2, "move_3": m3, "move_4": m4,
            "ability_permission": ability, "can_gigantamax": bool(gmax),
            "dynamax_level": 8, "flawless_iv_count": 4,
            "shiny_rule": "post_adventure_choice_roll",
            "location": 244,
        }
    else:
        raise ValueError("unknown raid record kind: " + kind)

    if not 1 <= result["species"] <= 1025:
        raise ValueError("species out of range")
    if kind != "max_lair" and not 0 <= result["flawless_iv_count"] <= 6:
        raise ValueError("flawless IV count out of bounds")
    if kind in ("dist", "max_lair") and not 1 <= result["level"] <= 100:
        raise ValueError("level out of bounds")
    return result


def read_raids(repo: Path, out: Path | None) -> list[dict]:
    manifest = json.loads((repo / RAID_MANIFEST).read_text(encoding="utf-8"))
    results = []
    total = Counter()
    for meta in manifest["files"]:
        path = repo / RAID_DIR / meta["name"]
        data = path.read_bytes()
        digest = hashlib.sha256(data).hexdigest()
        if len(data) != meta["bytes"] or digest != meta["sha256"]:
            raise ValueError(f"bad byte length or SHA-256: {path}")
        if meta["stride"] not in (10, 14, 16) or len(data) % meta["stride"]:
            raise ValueError("malformed fixed record width: " + meta["name"])
        count = len(data) // meta["stride"]
        if count != meta["records"]:
            raise ValueError(f"record count mismatch: {meta['name']}")
        records = []
        for i in range(count):
            lo = i * meta["stride"]
            try:
                row = decode_raid_record(meta["kind"], data[lo:lo + meta["stride"]])
            except ValueError as exc:
                raise ValueError(f"{meta['name']} record {i}: {exc}") from exc
            records.append({"record_index": i, "source_game": meta["version"], **row})
        result = {
            "file": meta["name"], "kind": meta["kind"], "game": meta["version"],
            "records": count, "bytes": len(data), "sha256": digest,
            "distinct_species": len({x["species"] for x in records}),
            "status": ("BYTE_EXACT_ROM_TO_PKHEX_REBUILD" if meta["kind"] == "max_lair"
                       else "PKHEX_REFERENCE_BYTE_IDENTICAL__NOT_ROM_REBUILT"),
        }
        total[meta["kind"]] += count
        results.append(result)
        if out is not None:
            filename = out / (path.stem + ".csv")
            with filename.open("w", encoding="utf-8-sig", newline="") as f:
                w = csv.DictWriter(f, fieldnames=list(records[0]))
                w.writeheader()
                w.writerows(records)
    return results


def read_original_tables(repo: Path, out: Path | None) -> list[dict]:
    original_manifest = json.loads((repo / CATALOG_DIR / "semantic-summary.json").read_text(encoding="utf-8"))
    summary = []
    for key, (filename, expected) in FIXED_INPUTS.items():
        path = repo / CATALOG_DIR / filename
        with path.open(encoding="utf-8-sig", newline="") as f:
            rows = list(csv.DictReader(f))
        evidence = original_manifest["evidence"][key]
        if len(rows) != expected or len(rows) != evidence["records"]:
            raise ValueError(f"{key}: expected {expected} original source rows")
        if [int(row["record_index"]) for row in rows] != list(range(expected)):
            raise ValueError(f"{key}: indexes are not 0..{expected - 1}")
        shiny = Counter()
        records = []
        for row in rows:
            if int(row["ShinyLock"]) not in SHINY_VALUE:
                raise ValueError(f"{key}: unknown raw ShinyLock code")
            rule = SHINY_VALUE[int(row["ShinyLock"])]
            if rule != row["shiny_meaning"]:
                raise ValueError(f"{key}: ShinyLock does not match existing source annotation")
            if not 1 <= int(row["Species"]) <= 1025:
                raise ValueError(f"{key}: invalid species")
            shiny[rule] += 1
            records.append({
                "source_table": key, "version_assignment": "UNPROVEN_BY_RAW_TABLE",
                "provenance": "ORIGINAL_ROM_DERIVED_CSV",
                **{k: (v if k == "shiny_meaning" else int(v)) for k, v in row.items()},
            })
        result = {
            "source_catalog": filename, "records": expected,
            "source_binary": evidence["source"],
            "source_binary_sha256": evidence["sha256"],
            "shiny_code_distribution": dict(shiny),
            "status": "SOURCE_DERIVED_RAW__LEGality_SEMANTICS_NOT_FULLY_PROVEN",
        }
        summary.append(result)
        if out is not None:
            with (out / (key + ".jsonl")).open("w", encoding="utf-8") as f:
                for record in records:
                    f.write(json.dumps(record, ensure_ascii=False, sort_keys=True) + "\n")
    return summary


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-special"))
    parser.add_argument("--validate-only", action="store_true")
    args = parser.parse_args()
    repo = args.repo.resolve()
    out = None if args.validate_only else args.out_dir.resolve()
    if out is not None:
        out.mkdir(parents=True, exist_ok=True)
    raids = read_raids(repo, out)
    fixed = read_original_tables(repo, out)
    summary = {
        "game": "SWSH", "game_version": "1.3.2",
        "raid_reference": "kwsch/PKHeX@0660d1e1f4924b8478daec73281bb8071a82ad19",
        "raid_source_rebuilt_from_rom": {"nest": False, "dist": False, "max_lair": True},
        "distribution_event_active": "UNKNOWN",
        "weather_bleed_runtime_verified": False,
        "weather_bleed_unresolved_cases_in_existing_casebook": 268,
        "fixed_source_legality_verified_by_gameplay": False,
        "raids": raids, "fixed_sources": fixed,
    }
    if out is not None:
        (out / "summary.json").write_text(
            json.dumps(summary, indent=2, ensure_ascii=False) + "\n", encoding="utf-8"
        )
    print(json.dumps(summary, indent=2, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
