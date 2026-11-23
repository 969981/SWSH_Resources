#!/usr/bin/env python3
"""Read, inspect, export, edit and repack PKHeX Sword/Shield encounter .pkl files.

Sword/Shield wild .pkl uses PKHeX Mini/BinLinker (sw/sh signature and area
offsets). Nest/Dist/Max Lair .pkl contain fixed-size 10/16/14-byte records.
None are Python pickle. No import of Python's unsafe pickle module.

This tool DOES NOT modify ROMs or the pinned reference PKL in-place. JSON edits
are emitted only to an explicitly different, non-existing output path with
SHA-256 source integrity and strict binary round-trip validation.

Usage:
  python scripts/swsh_pkl_tool.py inspect --file Unpack/v1.3.2/pkl/encounter_sw_symbol.pkl
  python scripts/swsh_pkl_tool.py export --file Unpack/v1.3.2/pkl/raid/encounter_sw_dist.pkl --json artifacts/swsh-pkl/dist.json --csv artifacts/swsh-pkl/dist.csv
  python scripts/swsh_pkl_tool.py repack --file Unpack/v1.3.2/pkl/raid/encounter_sw_dist.pkl --json artifacts/swsh-pkl/dist.json --output artifacts/swsh-pkl/edited_dist.pkl
  python scripts/swsh_pkl_tool.py diff --file Unpack/v1.3.2/pkl/raid/encounter_sw_dist.pkl --other artifacts/swsh-pkl/edited_dist.pkl
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import struct
from collections import Counter
from pathlib import Path

from export_swsh_special_encounters import decode_raid_record

KNOWN_FILES = {
    "encounter_sw_hidden.pkl": "wild",
    "encounter_sw_symbol.pkl": "wild",
    "encounter_sh_hidden.pkl": "wild",
    "encounter_sh_symbol.pkl": "wild",
    "encounter_sw_nest.pkl": "nest",
    "encounter_sh_nest.pkl": "nest",
    "encounter_sw_dist.pkl": "dist",
    "encounter_sh_dist.pkl": "dist",
    "encounter_swsh_underground.pkl": "max_lair",
}
STRIDE = {"nest": 10, "dist": 16, "max_lair": 14}
ALLOWED_ABILITY = {
    "nest": {0, 4, 255},
    "dist": {0, 1, 2, 4, 255},
    "max_lair": {1, 2, 4},
}
EDITABLE_FIELDS = {
    "nest": (
        "species", "form", "gender_code", "ability_permission",
        "can_gigantamax", "nest_index", "min_rank_zero_based",
        "max_rank_zero_based", "flawless_iv_count",
    ),
    "dist": (
        "species", "form", "ability_permission",
        "move_1", "move_2", "move_3", "move_4", "level",
        "dynamax_level", "can_gigantamax", "flawless_iv_count",
        "shiny_rule_raw", "distribution_index",
    ),
    "max_lair": (
        "species", "form", "level", "move_1", "move_2", "move_3",
        "move_4", "ability_permission", "can_gigantamax",
    ),
}


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def checked_int(v, label: str, lo: int, hi: int) -> int:
    if type(v) is not int or not lo <= v <= hi:
        raise ValueError(f"{label} must be an integer in [{lo}, {hi}], got {v!r}")
    return v


def checked_bool(v, label: str) -> int:
    if type(v) is not bool:
        raise ValueError(f"{label} must be a JSON boolean, got {v!r}")
    return int(v)


def detect_kind(file: Path, override: str | None) -> str:
    if override is not None:
        if override not in ("wild", *STRIDE):
            raise ValueError("unsupported PKL format")
        return override
    try:
        return KNOWN_FILES[file.name]
    except KeyError as exc:
        raise ValueError(
            "unknown file name: supply --kind wild|nest|dist|max_lair explicitly"
        ) from exc


def decode_wild(data: bytes) -> dict:
    if len(data) < 12 or data[:2] not in (b"sw", b"sh"):
        raise ValueError("bad Sword/Shield wild Mini header (sw/sh)")
    count = struct.unpack_from("<H", data, 2)[0]
    if not 1 <= count <= 65535:
        raise ValueError("invalid wild area count")
    head_size = 4 + 4 * (count + 1)
    if len(data) < head_size:
        raise ValueError("truncated wild Mini offset table")
    offsets = struct.unpack_from(f"<{count+1}I", data, 4)
    if offsets[0] != head_size or offsets[-1] != len(data):
        raise ValueError("wild Mini offsets do not cover the file")
    if any(a % 4 or b % 4 or not a < b for a, b in zip(offsets, offsets[1:])):
        raise ValueError("wild offsets must be 4-byte aligned, strictly increasing")
    areas = []
    for index, (start, end) in enumerate(zip(offsets, offsets[1:])):
        if end - start < 10:
            raise ValueError(f"area {index}: too short for one encounter group")
        location, total_slots = struct.unpack_from("<BB", data, start)
        if total_slots == 0:
            raise ValueError(f"area {index}: zero encounter slots")
        p, slot_count, groups = start + 2, 0, []
        while slot_count < total_slots:
            if p + 6 > end:
                raise ValueError(f"area {index}: truncated group header")
            mask, level_min, level_max, group_count, slot_type = struct.unpack_from(
                "<H4B", data, p
            )
            p += 6
            if not group_count or slot_count + group_count > total_slots:
                raise ValueError(f"area {index}: corrupt slot count")
            if not mask or level_min > level_max or level_max > 100:
                raise ValueError(f"area {index}: invalid weather/level range")
            if p + 2 * group_count > end:
                raise ValueError(f"area {index}: truncated packed species slots")
            slots = []
            for _ in range(group_count):
                packed = struct.unpack_from("<H", data, p)[0]
                p += 2
                species, form = packed & 0x7FF, packed >> 11
                if not 1 <= species <= 1025:
                    raise ValueError(f"area {index}: bad Pokémon species={species}")
                slots.append({"species": species, "form": form})
            slot_count += group_count
            groups.append({
                "weather_mask": mask,
                "level_min": level_min,
                "level_max": level_max,
                "slot_type": slot_type,
                "slots": slots,
            })
        if end - p not in (0, 1, 2, 3) or any(data[p:end]):
            raise ValueError(f"area {index}: invalid nonzero or oversized padding")
        areas.append({"area_index": index, "location_id": location, "groups": groups})
    return {
        "kind": "wild", "signature": data[:2].decode("ascii"),
        "areas": areas,
    }


def encode_wild(document: dict) -> bytes:
    if set(document) != {"kind", "signature", "areas"} or document["kind"] != "wild":
        raise ValueError("wild document shape must be kind/signature/areas")
    signature = document["signature"]
    if signature not in ("sw", "sh"):
        raise ValueError("wild Mini signature must be sw or sh")
    areas = document["areas"]
    if not isinstance(areas, list) or not 1 <= len(areas) <= 65535:
        raise ValueError("wild areas must be a nonempty list")
    encoded_areas = []
    for idx, area in enumerate(areas):
        if set(area) != {"area_index", "location_id", "groups"}:
            raise ValueError(f"area {idx}: unexpected/missing JSON keys")
        if checked_int(area["area_index"], "area_index", 0, 65534) != idx:
            raise ValueError(f"area {idx}: area_index must reflect list order")
        location = checked_int(area["location_id"], "location_id", 0, 255)
        groups = area["groups"]
        if not isinstance(groups, list) or not groups:
            raise ValueError(f"area {idx}: at least one encounter group is required")
        serialized_groups = bytearray()
        total_slots = 0
        for group in groups:
            if set(group) != {"weather_mask", "level_min", "level_max", "slot_type", "slots"}:
                raise ValueError(f"area {idx}: malformed group JSON fields")
            mask = checked_int(group["weather_mask"], "weather_mask", 1, 65535)
            lo = checked_int(group["level_min"], "level_min", 0, 100)
            hi = checked_int(group["level_max"], "level_max", lo, 100)
            slot_type = checked_int(group["slot_type"], "slot_type", 0, 255)
            slots = group["slots"]
            if not isinstance(slots, list) or not 1 <= len(slots) <= 255:
                raise ValueError(f"area {idx}: slots must contain 1..255 items")
            total_slots += len(slots)
            serialized_groups.extend(struct.pack(
                "<H4B", mask, lo, hi, len(slots), slot_type
            ))
            for slot in slots:
                if set(slot) != {"species", "form"}:
                    raise ValueError("wild slot may only contain species and form")
                species = checked_int(slot["species"], "species", 1, 1025)
                form = checked_int(slot["form"], "form", 0, 31)
                serialized_groups.extend(struct.pack("<H", species | form << 11))
        if total_slots > 255:
            raise ValueError(f"area {idx}: slot count exceeds one byte")
        payload = bytearray(struct.pack("<BB", location, total_slots))
        payload.extend(serialized_groups)
        payload.extend(bytes(-len(payload) % 4))
        encoded_areas.append(bytes(payload))
    header_size = 4 + 4 * (len(areas) + 1)
    offsets = [header_size]
    for area in encoded_areas:
        offsets.append(offsets[-1] + len(area))
    if offsets[-1] > 0xFFFFFFFF:
        raise ValueError("Mini file exceeds 4GiB")
    output = (
        signature.encode("ascii")
        + struct.pack("<H", len(areas))
        + struct.pack(f"<{len(offsets)}I", *offsets)
        + b"".join(encoded_areas)
    )
    if decode_wild(output) != document:
        raise ValueError("wild edit failed post-serialization structural round-trip")
    return output


def decode_fixed(data: bytes, kind: str) -> dict:
    stride = STRIDE[kind]
    if not data or len(data) % stride:
        raise ValueError(f"{kind} must contain complete {stride}-byte records")
    records = []
    for i in range(0, len(data), stride):
        raw = decode_raid_record(kind, data[i:i+stride])
        row = {key: raw[key] for key in EDITABLE_FIELDS[kind]}
        records.append({"record_index": i // stride, **row})
    return {"kind": kind, "records": records}


def encode_record(kind: str, record: dict) -> bytes:
    expected = set(EDITABLE_FIELDS[kind]) | {"record_index"}
    if set(record) != expected:
        raise ValueError(f"{kind} record must have editable fields {sorted(expected)}")
    species = checked_int(record["species"], "species", 1, 1025)
    form = checked_int(record["form"], "form", 0, 50)
    ability = checked_int(record["ability_permission"], "ability", 0, 255)
    if ability not in ALLOWED_ABILITY[kind]:
        raise ValueError(f"unknown {kind} ability permission {ability}")
    gmax = checked_bool(record["can_gigantamax"], "can_gigantamax")
    if kind == "nest":
        gender = checked_int(record["gender_code"], "gender", 0, 255)
        if gender not in (0, 1, 2, 255):
            raise ValueError("invalid nest gender: 0=male, 1=female, 2=genderless, 255=random")
        index = checked_int(record["nest_index"], "nest_index", 0, 255)
        lo = checked_int(record["min_rank_zero_based"], "min_rank", 0, 4)
        hi = checked_int(record["max_rank_zero_based"], "max_rank", lo, 4)
        flawless = checked_int(record["flawless_iv_count"], "flawless", 0, 6)
        binary = struct.pack("<H8B", species, form, gender, ability,
                             gmax, index, lo, hi, flawless)
    elif kind == "dist":
        moves = [
            checked_int(record[f"move_{i}"], f"move_{i}", 0, 65535)
            for i in range(1, 5)
        ]
        level = checked_int(record["level"], "level", 1, 100)
        dmax = checked_int(record["dynamax_level"], "dynamax_level", 0, 10)
        flawless = checked_int(record["flawless_iv_count"], "flawless", 0, 6)
        shiny = checked_int(record["shiny_rule_raw"], "shiny_rule_raw", 0, 2)
        index = checked_int(record["distribution_index"], "distribution_index", 0, 255)
        binary = struct.pack(
            "<HBB4H4B", species, form, ability, *moves, level,
            dmax | (gmax << 7), flawless | (shiny << 4), index,
        )
    else:
        level = checked_int(record["level"], "level", 1, 100)
        moves = [
            checked_int(record[f"move_{i}"], f"move_{i}", 0, 65535)
            for i in range(1, 5)
        ]
        binary = struct.pack("<HBB4HBB", species, form, level, *moves, ability, gmax)
    decoded = decode_raid_record(kind, binary)
    for key in EDITABLE_FIELDS[kind]:
        if decoded[key] != record[key]:
            raise ValueError(f"{kind}: field round-trip mismatch: {key}")
    return binary


def encode_fixed(document: dict) -> bytes:
    if set(document) != {"kind", "records"}:
        raise ValueError("fixed-width JSON must have kind and records only")
    kind = document["kind"]
    if kind not in STRIDE:
        raise ValueError("unknown fixed-width encounter kind")
    records = document["records"]
    if not isinstance(records, list) or not records:
        raise ValueError("records must be nonempty list")
    out = bytearray()
    for i, row in enumerate(records):
        if checked_int(row.get("record_index"), "record_index", 0, 10_000_000) != i:
            raise ValueError("record_index must match 0-based record order")
        out.extend(encode_record(kind, row))
    binary = bytes(out)
    if decode_fixed(binary, kind) != document:
        raise ValueError("fixed-width edit failed post-serialization round-trip")
    return binary


def decode(data: bytes, kind: str) -> dict:
    if kind == "wild":
        return decode_wild(data)
    if kind in STRIDE:
        return decode_fixed(data, kind)
    raise ValueError("unknown kind")


def encode(document: dict) -> bytes:
    if document.get("kind") == "wild":
        return encode_wild(document)
    return encode_fixed(document)


def summarize(doc: dict, data: bytes) -> dict:
    kind = doc["kind"]
    summary = {"kind": kind, "bytes": len(data), "sha256": sha(data)}
    if kind == "wild":
        summary.update(
            signature=doc["signature"], areas=len(doc["areas"]),
            groups=sum(len(a["groups"]) for a in doc["areas"]),
            slots=sum(len(g["slots"]) for a in doc["areas"] for g in a["groups"]),
            locations=len({a["location_id"] for a in doc["areas"]}),
        )
    else:
        summary.update(
            stride=STRIDE[kind], records=len(doc["records"]),
            unique_species=len({r["species"] for r in doc["records"]}),
        )
    return summary


def export_rows(doc: dict) -> list[dict]:
    if doc["kind"] != "wild":
        return list(doc["records"])
    rows = []
    for area in doc["areas"]:
        for group_index, group in enumerate(area["groups"]):
            for slot_index, slot in enumerate(group["slots"]):
                rows.append({
                    "area_index": area["area_index"],
                    "location_id": area["location_id"],
                    "group_index": group_index,
                    "slot_index": slot_index,
                    "weather_mask": group["weather_mask"],
                    "level_min": group["level_min"],
                    "level_max": group["level_max"],
                    "slot_type": group["slot_type"],
                    "species": slot["species"],
                    "form": slot["form"],
                })
    return rows


def load(file: Path, kind: str | None) -> tuple[bytes, dict]:
    data = file.read_bytes()
    effective = detect_kind(file, kind)
    doc = decode(data, effective)
    if encode(doc) != data:
        raise ValueError(
            "source PKL cannot round-trip exactly: refusing potentially lossy edits"
        )
    return data, doc


def new_file(path: Path, payload: bytes) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("xb") as f:
        f.write(payload)


def write_export(file: Path, data: bytes, doc: dict,
                 json_path: Path | None, csv_path: Path | None) -> dict:
    if json_path is None and csv_path is None:
        raise ValueError("specify --json and/or --csv")
    if json_path and csv_path and json_path.resolve() == csv_path.resolve():
        raise ValueError("JSON and CSV destinations must differ")
    payload = {
        "schema": "SWSH_PKHEX_PKL_EDIT_V1",
        "source_file": file.name,
        "source_sha256": sha(data),
        "source_bytes": len(data),
        "data": doc,
        "note": "CUSTOM_EDIT_ONLY_NOT_OFFICIAL_PKHEX_LEGALITY",
    }
    if json_path:
        new_file(json_path, (json.dumps(payload, ensure_ascii=False, indent=2)
                              + "\n").encode("utf-8"))
    if csv_path:
        rows = export_rows(doc)
        if not rows:
            raise ValueError("cannot write zero-row CSV")
        csv_path.parent.mkdir(parents=True, exist_ok=True)
        with csv_path.open("x", newline="", encoding="utf-8-sig") as f:
            writer = csv.DictWriter(f, fieldnames=list(rows[0]))
            writer.writeheader()
            writer.writerows(rows)
    return payload


def repack(file: Path, data: bytes, json_path: Path, output: Path) -> dict:
    if output.resolve() in (file.resolve(), json_path.resolve()):
        raise ValueError("refusing to overwrite source .pkl or editable JSON")
    if output.exists():
        raise ValueError("output already exists; choose a new path")
    payload = json.loads(json_path.read_text(encoding="utf-8"))
    if set(payload) != {
        "schema", "source_file", "source_sha256", "source_bytes", "data", "note"
    } or payload["schema"] != "SWSH_PKHEX_PKL_EDIT_V1":
        raise ValueError("invalid PKL edit document version or structure")
    if payload["source_file"] != file.name:
        raise ValueError("JSON source filename does not match input PKL")
    if payload["source_sha256"] != sha(data) or payload["source_bytes"] != len(data):
        raise ValueError("source PKL SHA-256 or byte length has changed")
    original_kind = detect_kind(file, None) if file.name in KNOWN_FILES else None
    if original_kind is not None and payload["data"]["kind"] != original_kind:
        raise ValueError("JSON format kind does not match original PKL")
    result = encode(payload["data"])
    if result == data:
        status = "BYTE_EXACT_UNMODIFIED_ROUND_TRIP"
    else:
        status = "CUSTOM_EDITED_PKL_NOT_PKHEX_REFERENCE"
    new_file(output, result)
    report = {
        "status": status, "input": str(file), "output": str(output),
        "source_sha256": sha(data), "output_sha256": sha(result),
        "input_bytes": len(data), "output_bytes": len(result),
        "structural_validation": "PASSED",
        "runtime_legality_verified": False,
        "stock_pkhex_reference_unchanged": True,
    }
    return report


def diff_documents(before: dict, after: dict, cap: int = 50) -> dict:
    if before["kind"] != after["kind"]:
        raise ValueError("cannot compare different encounter PKL kinds")
    if before["kind"] == "wild" and before["signature"] != after["signature"]:
        raise ValueError("cannot compare Sword and Shield Mini signatures")
    key = "areas" if before["kind"] == "wild" else "records"
    first, second = before[key], after[key]
    changed = [
        i for i in range(max(len(first), len(second)))
        if i >= len(first) or i >= len(second) or first[i] != second[i]
    ]
    return {
        "kind": before["kind"], "before_count": len(first),
        "after_count": len(second), "changed_count": len(changed),
        "changed_indices_first_50": changed[:cap],
        "note": "Wild differences are by AREA; fixed differences are by RECORD.",
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="action", required=True)
    for command in ("inspect", "export", "repack", "diff"):
        p = sub.add_parser(command)
        p.add_argument("--file", type=Path, required=True)
        p.add_argument("--kind", choices=["wild", "nest", "dist", "max_lair"])
        if command == "export":
            p.add_argument("--json", type=Path)
            p.add_argument("--csv", type=Path)
        if command == "repack":
            p.add_argument("--json", type=Path, required=True)
            p.add_argument("--output", type=Path, required=True)
        if command == "diff":
            p.add_argument("--other", type=Path, required=True)
    args = parser.parse_args()
    data, document = load(args.file.resolve(), args.kind)
    if args.action == "inspect":
        result = summarize(document, data)
    elif args.action == "export":
        write_export(args.file.resolve(), data, document, args.json, args.csv)
        result = {
            **summarize(document, data),
            "json": str(args.json) if args.json else None,
            "csv": str(args.csv) if args.csv else None,
            "warning": "CSV is a read-only flattened view; edit the JSON and repack from it.",
        }
    elif args.action == "repack":
        result = repack(args.file.resolve(), data, args.json.resolve(), args.output.resolve())
    else:
        _, second = load(args.other.resolve(), args.kind)
        result = diff_documents(document, second)
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
