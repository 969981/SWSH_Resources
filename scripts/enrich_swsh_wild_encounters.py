#!/usr/bin/env python3
"""Enrich v1.3.2 wild encounter CSV from evidence in pkNX source; never overwrite raw CSV."""
from __future__ import annotations
import argparse
import collections
import csv
import hashlib
import json
import re
from pathlib import Path

MEMBERS = {
    0: ("Sword", "Hidden", "744C3156047D75C6", 62, 6820),
    1: ("Sword", "Symbol", "15DECA74DF13D299", 124, 11160),
    2: ("Shield", "Symbol", "291F1145B91FEA10", 124, 11160),
    3: ("Shield", "Hidden", "578005D361256063", 62, 6820),
}
SWORD_ONLY = {273: "Seedot", 554: "Darumaka", 684: "Swirlix",
              874: "Stonjourner", 627: "Rufflet", 692: "Clauncher",
              766: "Passimian"}
SHIELD_ONLY = {270: "Lotad", 77: "Ponyta", 682: "Spritzee",
               875: "Eiscue", 629: "Vullaby", 690: "Skrelp",
               765: "Oranguru"}
CONDITION_ZH = ["一般天气", "阴天", "雨天", "雷雨", "大晴天", "下雪",
                "暴风雪", "沙暴", "浓雾", "摇树", "钓鱼"]

def digest(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()

def section(text: str, name: str) -> str:
    pattern = r"\b" + re.escape(name) + r"\s*=\s*new Dictionary<ulong,\s*(?:byte|string)>\s*\{"
    found = re.search(pattern, text)
    if not found:
        raise ValueError(f"pkNX SWSHInfo dictionary not found: {name}")
    end = text.find("\n    };", found.end())
    if end < 0:
        raise ValueError(f"pkNX dictionary not terminated: {name}")
    return text[found.end():end]

def pk_info(text: str):
    def pairs(which: str):
        pattern = r"\{\s*0x([0-9A-Fa-f]{16})\s*,\s*([^}]+?)\s*\}"
        out = {}
        for key, raw in re.findall(pattern, section(text, which)):
            key = key.upper()
            if key in out:
                raise ValueError(f"duplicate pkNX key: {which} {key}")
            out[key] = raw.strip().rstrip(",").strip()
        if len(out) < 100:
            raise ValueError(f"suspiciously incomplete {which}: {len(out)}")
        return out
    names = {}
    for k, val in pairs("Zones").items():
        if not val.startswith('"') or not val.endswith('"'):
            raise ValueError(f"unexpected pkNX zone name: {val}")
        names[k] = val[1:-1].replace(r'\"', '"')
    locations = {}
    for k, val in pairs("ZoneLocations").items():
        if not re.fullmatch(r"\d+", val):
            raise ValueError(f"unexpected pkNX location ID: {val}")
        locations[k] = int(val, 10)
    types = {}
    for k, val in pairs("ZoneType").items():
        m = re.fullmatch(r"\(byte\)([A-Za-z_][A-Za-z_0-9]*)", val)
        if not m:
            raise ValueError(f"unknown pkNX zone type: {val}")
        types[k] = m[1]
    if names.keys() != locations.keys() or names.keys() != types.keys():
        raise ValueError("pkNX zone dictionaries disagree on ZoneID set")
    return names, locations, types

def condition_names(text: str):
    m = re.search(r"\benum SWSHEncounterType\s*\{(.*?)\}", text, re.S)
    if not m:
        raise ValueError("missing SWSHEncounterType enum")
    members = [s.strip() for s in m[1].split(",") if s.strip()]
    if len(members) != 11 or members[0] != "Normal_Weather" or members[9:] != ["Shaking_Trees", "Fishing"]:
        raise ValueError(f"unexpected encounter condition enum: {members}")
    return members

def export_csv(path: Path, fields: list[str], rows: list[dict]):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8-sig", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fields, extrasaction="raise")
        w.writeheader()
        w.writerows(rows)
    with path.open(encoding="utf-8-sig", newline="") as f:
        if sum(1 for _ in csv.DictReader(f)) != len(rows):
            raise ValueError(f"CSV row count mismatch: {path}")

def enrich(source: Path, info_path: Path, types_path: Path, dest: Path):
    names, locations, zone_types = pk_info(info_path.read_text(encoding="utf-8-sig"))
    conditions = condition_names(types_path.read_text(encoding="utf-8-sig"))
    with source.open(encoding="utf-8-sig", newline="") as f:
        reader = csv.DictReader(f)
        original_fields = reader.fieldnames or []
        required = {"member_index", "member_path_hash", "zone_id", "table_index",
                    "subtable_index", "slot_index", "species", "form", "probability",
                    "level_min", "level_max", "table_kind", "game_version"}
        if not required.issubset(original_fields):
            raise ValueError(f"missing columns: {required - set(original_fields)}")
        source_rows = list(reader)

    by_member: dict[int, list[dict]] = collections.defaultdict(list)
    by_zone: dict[tuple[int, str], list[dict]] = collections.defaultdict(list)
    all_rows = []
    new_fields = ["game_verified", "mode_verified", "zone_id_hex", "zone_name_en",
                  "location_id", "zone_slot_type", "subtable_condition_en",
                  "subtable_condition_zh", "condition_category",
                  "version_evidence", "name_evidence", "condition_evidence"]
    for row in source_rows:
        member = int(row["member_index"])
        if member not in MEMBERS:
            raise ValueError(f"unexpected member index {member}")
        game, mode, hash64, _, _ = MEMBERS[member]
        if row["member_path_hash"].upper() != hash64:
            raise ValueError(f"unexpected GFPak path hash for member {member}")
        expected_kind = "hidden_candidate" if mode == "Hidden" else "symbol_candidate"
        if row["table_kind"] != expected_kind or row["game_version"] != "UNVERIFIED":
            raise ValueError("original semantic fields changed; re-audit required")
        condition_index = int(row["subtable_index"])
        if not 0 <= condition_index < (11 if mode == "Hidden" else 9):
            raise ValueError("invalid encounter condition index")
        zone = f"{int(row['zone_id']):016X}"
        if zone not in names:
            raise ValueError(f"unmapped pkNX ZoneID {zone}")
        if int(row["level_min"]) > int(row["level_max"]):
            raise ValueError("invalid level range")
        out = {
            **row, "game_verified": game, "mode_verified": mode,
            "zone_id_hex": zone, "zone_name_en": names[zone],
            "location_id": locations[zone], "zone_slot_type": zone_types[zone],
            "subtable_condition_en": conditions[condition_index],
            "subtable_condition_zh": CONDITION_ZH[condition_index],
            "condition_category": "Weather" if condition_index < 9 else "Action",
            "version_evidence": "exclusive_species_crosscheck",
            "name_evidence": "pkNX.SWSHInfo.Zones",
            "condition_evidence": "pkNX.Game.SWSHEncounterType",
        }
        by_member[member].append(out)
        by_zone[(member, zone)].append(out)
        all_rows.append(out)
    if len(all_rows) != 35960:
        raise ValueError(f"original slot count changed: {len(all_rows)}")

    audits = []
    for member, (game, mode, _, expected_zones, expected_slots) in MEMBERS.items():
        data = by_member[member]
        zone_set = {row["zone_id_hex"] for row in data}
        if len(data) != expected_slots or len(zone_set) != expected_zones:
            raise ValueError(f"member {member} count mismatch {len(data)} / {len(zone_set)}")
        if {int(row["table_index"]) for row in data} != set(range(expected_zones)):
            raise ValueError(f"member {member} unexpected table indexes")
        if any(row["zone_slot_type"].startswith("Hidden") and mode == "Symbol" for row in data):
            raise ValueError("symbol member contains Hidden zone type")
        species_counts = collections.Counter(int(row["species"]) for row in data)
        own_markers = SWORD_ONLY if game == "Sword" else SHIELD_ONLY
        other_markers = SHIELD_ONLY if game == "Sword" else SWORD_ONLY
        seen = {str(sp): species_counts[sp] for sp in own_markers if species_counts[sp]}
        wrong = {str(sp): species_counts[sp] for sp in other_markers if species_counts[sp]}
        if len(seen) < 3 or wrong:
            raise ValueError(f"member {member} wrong version markers: {seen} / {wrong}")
        counts = collections.Counter(int(row["subtable_index"]) for row in data)
        if set(counts) != set(range(11 if mode == "Hidden" else 9)):
            raise ValueError("unexpected condition index coverage")
        audits.append({"member": member, "game": game, "mode": mode,
                       "slots": len(data), "zone_tables": len(zone_set),
                       "own_version_species_markers": seen,
                       "opposite_version_species_markers": wrong,
                       "condition_slot_counts": dict(sorted(counts.items()))})
    for first, second in ((0, 3), (1, 2)):
        first_zones = {zone for mem, zone in by_zone if mem == first}
        second_zones = {zone for mem, zone in by_zone if mem == second}
        if first_zones != second_zones:
            raise ValueError(f"paired version ZoneID mismatch: {first}/{second}")

    zone_index = []
    for (member, zone), rows in sorted(by_zone.items()):
        first = rows[0]
        condition_indexes = {int(row["subtable_index"]) for row in rows}
        zone_index.append({
            "member_index": member, "game": first["game_verified"],
            "encounter_mode": first["mode_verified"], "zone_id_hex": zone,
            "zone_id": first["zone_id"], "zone_name_en": first["zone_name_en"],
            "location_id": first["location_id"], "zone_slot_type": first["zone_slot_type"],
            "raw_slots": len(rows),
            "nonempty_species_slots": sum(int(r["species"]) > 0 for r in rows),
            "unique_species": len({int(r["species"]) for r in rows if int(r["species"])}),
            "level_min": min(int(r["level_min"]) for r in rows),
            "level_max": max(int(r["level_max"]) for r in rows),
            "condition_indexes": ";".join(map(str, sorted(condition_indexes))),
        })
    if len(zone_index) != 372:
        raise ValueError(f"expected 372 zone tables; got {len(zone_index)}")

    export_csv(dest / "wild_encounters_enriched.csv", original_fields + new_fields, all_rows)
    export_csv(dest / "wild_zone_index.csv", list(zone_index[0]), zone_index)
    report = {
        "game": "SWSH", "version": "1.3.2",
        "source_files": {p.as_posix(): digest(p) for p in (source, info_path, types_path)},
        "raw_slots": len(all_rows), "member_zone_tables": len(zone_index),
        "resolved_zone_tables": len(zone_index), "unmapped_zone_tables": 0,
        "distinct_zone_hashes": len({zone for _, zone in by_zone}),
        "pkNX_zone_dictionary_entries": len(names),
        "members": audits,
        "member_to_version_provenance": (
            "Version-exclusive species cross-checked for each original member, matching "
            "paired ZoneID sets, plus pkNX EditorSWSH EditWild k=SW/t=SH and Symbol/Hidden."),
        "condition_provenance": (
            "Indexed from pkNX SWSHEncounterType (0..8 weather, 9 shaking trees, "
            "10 fishing). Condition index does not mean that weather is possible in "
            "every zone: apply EncounterTable8Util.IsPermittedWeather and weather bleed."),
        "zone_provenance": "pkNX SWSHInfo.Zones / ZoneLocations / ZoneType",
        "outputs": {"wild_encounters_enriched.csv": len(all_rows),
                    "wild_zone_index.csv": len(zone_index)},
    }
    dest.mkdir(parents=True, exist_ok=True)
    (dest / "wild_mapping_summary.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({k: report[k] for k in ("raw_slots", "member_zone_tables",
                                           "resolved_zone_tables", "distinct_zone_hashes")},
                     ensure_ascii=False))
    return report

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo", type=Path, default=Path("."))
    a = ap.parse_args()
    root = a.repo.resolve()
    enrich(root / "Unpack/v1.3.2/catalog/wild_encounters.csv",
           root / "tools/pkNX/pkNX.Game/Misc/SWSHInfo.cs",
           root / "tools/pkNX/pkNX.Game/Misc/SWSHEncounterType.cs",
           root / "Unpack/v1.3.2/catalog")

if __name__ == "__main__":
    main()
