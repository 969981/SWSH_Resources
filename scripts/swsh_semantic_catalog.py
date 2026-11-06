#!/usr/bin/env python3
"""Read-only SWSH v1.3.2 native semantic CSV exporter.

Uses the repository's pkNX FlatBuffers schemas and Item8 offsets.
All file inputs are the original bytes, not guessed records or renamed files.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
import struct
from collections import Counter
from pathlib import Path

ROOT = Path("v1.3.2/1")
PACK = Path("Unpack/v1.3.2/extracted/bin/archive/field/resident/data_table.gfpak.files")
SHINY = {0: "Random", 1: "Always", 2: "Never"}


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


class FB:
    def __init__(self, data: bytes):
        self.data = data
        self.n = len(data)
        self.root = self.u32(0)
        if self.root < 4 or self.root >= self.n:
            raise ValueError("invalid FlatBuffer root")

    def raw(self, pos: int, fmt: str):
        width = struct.calcsize("<" + fmt)
        if pos < 0 or pos + width > self.n:
            raise ValueError(f"out-of-range field: {pos}+{width}/{self.n}")
        return struct.unpack_from("<" + fmt, self.data, pos)[0]

    def u16(self, pos): return self.raw(pos, "H")
    def u32(self, pos): return self.raw(pos, "I")
    def i32(self, pos): return self.raw(pos, "i")

    def field(self, table: int, index: int):
        vt = table - self.i32(table)
        size = self.u16(vt)
        obj_size = self.u16(vt + 2)
        if vt < 0 or size < 4 or size > 512 or obj_size < 4 or obj_size > 2048:
            raise ValueError("invalid FlatBuffer vtable")
        slot = 4 + 2 * index
        if slot + 2 > size:
            return None
        offset = self.u16(vt + slot)
        if not offset:
            return None
        if offset >= obj_size:
            raise ValueError("field is outside table")
        return table + offset

    def scalar(self, table: int, index: int, fmt: str):
        pos = self.field(table, index)
        if pos is None:
            return 0
        result = self.raw(pos, fmt)
        return str(result) if fmt == "Q" else result

    def vector(self, table: int, index: int):
        p = self.field(table, index)
        if p is None:
            return []
        pos = p + self.u32(p)
        n = self.u32(pos)
        if n > 1000000 or pos + 4 + 4 * n > self.n:
            raise ValueError(f"invalid table vector length {n}")
        return [self._indirect(pos + 4 + i * 4) for i in range(n)]

    def _indirect(self, pos):
        result = pos + self.u32(pos)
        if result < 4 or result >= self.n:
            raise ValueError("out-of-range table pointer")
        return result


STATIC = [
    ("BackgroundFarTypeID","Q"),("BackgroundNearTypeID","Q"),
    ("EV_SPE","B"),("EV_ATK","B"),("EV_DEF","B"),("EV_HP","B"),
    ("EV_SPA","B"),("EV_SPD","B"),("Form","B"),("DynamaxLevel","B"),
    ("Field_0A","i"),("EncounterID","Q"),("Field_0C","B"),("CanGigantamax","B"),
    ("HeldItem","i"),("Level","B"),("EncounterScenario","i"),("Species","i"),
    ("ShinyLock","I"),("Nature","I"),("Gender","b"),
    ("IV_SPE","b"),("IV_ATK","b"),("IV_DEF","b"),("IV_HP","b"),
    ("IV_SPA","b"),("IV_SPD","b"),("Ability","i"),
    ("Move0","i"),("Move1","i"),("Move2","i"),("Move3","i"),
]
GIFT = [
    ("IsEgg","i"),("Form","B"),("DynamaxLevel","B"),("BallItemID","i"),
    ("Field_04","B"),("Hash1","Q"),("CanGigantamax","B"),("HeldItem","i"),
    ("Level","B"),("Species","i"),("Field_0A","B"),("MemoryCode","B"),
    ("MemoryData","H"),("MemoryFeel","B"),("MemoryLevel","B"),("OtNameID","Q"),
    ("OtGender","i"),("ShinyLock","i"),("Nature","i"),("Gender","B"),
    ("IV_SPE","b"),("IV_ATK","b"),("IV_DEF","b"),("IV_HP","b"),
    ("IV_SPA","b"),("IV_SPD","b"),("Ability","i"),("SpecialMove","i"),
]
TRADE = [
    ("Form","B"),("DynamaxLevel","B"),("BallItemID","i"),("Field_03","i"),
    ("Hash0","Q"),("CanGigantamax","B"),("HeldItem","i"),("Level","B"),
    ("Species","i"),("Hash1","Q"),("TrainerID","i"),("Memory","B"),
    ("TextVar","H"),("Feeling","B"),("Intensity","B"),("Hash2","Q"),
    ("OTGender","B"),("RequiredForm","B"),("RequiredSpecies","i"),
    ("RequiredNature","i"),("UnknownRequirement","B"),("ShinyLock","i"),
    ("Nature","i"),("Gender","b"),("IV_SPE","b"),("IV_ATK","b"),
    ("IV_DEF","b"),("IV_HP","b"),("IV_SPA","b"),("IV_SPD","b"),
    ("AbilityNumber","B"),("Relearn1","H"),("Relearn2","H"),
    ("Relearn3","H"),("Relearn4","H"),
]


def extract_table(data: bytes, schema):
    fb = FB(data)
    objects = fb.vector(fb.root, 0)
    return [
        {"record_index": i, **{name: fb.scalar(t, j, kind)
                               for j, (name, kind) in enumerate(schema)}}
        for i, t in enumerate(objects)
    ]


def encounter_records(data: bytes, member: int, hash64: str):
    fb = FB(data)
    tables = fb.vector(fb.root, 1)  # EncounterArchive.Field_00 + EncounterTables
    if not tables or len(tables) > 10000:
        raise ValueError("unexpected wild table count")
    rows = []
    sub_counts = set()
    for ti, table in enumerate(tables):
        zone_id = fb.scalar(table, 0, "Q")
        subtables = fb.vector(table, 1)
        sub_counts.add(len(subtables))
        for si, sub in enumerate(subtables):
            lo = fb.scalar(sub, 0, "B")
            hi = fb.scalar(sub, 1, "B")
            if not 0 <= lo <= hi <= 100:
                raise ValueError(f"invalid level range {lo}..{hi}")
            for slot_i, slot in enumerate(fb.vector(sub, 2)):
                probability = fb.scalar(slot, 0, "B")
                species = fb.scalar(slot, 1, "i")
                form = fb.scalar(slot, 2, "B")
                if probability > 100 or species < 0 or species > 2500:
                    raise ValueError("invalid encounter slot")
                rows.append(dict(
                    member_index=member, member_path_hash=hash64,
                    game_version="UNVERIFIED", zone_id=zone_id, table_index=ti,
                    subtable_index=si, level_min=lo, level_max=hi,
                    slot_index=slot_i, probability=probability,
                    species=species, form=form
                ))
    kind = "symbol_candidate" if sub_counts == {9} else (
        "hidden_candidate" if sub_counts == {11} else "unknown")
    for row in rows:
        row["table_kind"] = kind
    return rows, dict(tables=len(tables), slots=len(rows), subtable_counts=sorted(sub_counts),
                      kind=kind)


def item_records(data: bytes):
    if len(data) < 0x44:
        raise ValueError("item.dat too short")
    u16 = lambda offset: struct.unpack_from("<H", data, offset)[0]
    u32 = lambda offset: struct.unpack_from("<I", data, offset)[0]
    count = u16(0)
    physical_count = u16(4)
    physical_offset = struct.unpack_from("<i", data, 0x40)[0]
    if not (0 < count <= 10000 and 0 < physical_count <= count
            and 0x44 + count * 2 <= len(data)
            and physical_offset >= 0x44 + count * 2
            and physical_offset + physical_count * 0x30 <= len(data)):
        raise ValueError("invalid Item8 header, indirection or record bounds")
    rows = []
    for item_id in range(count):
        record_index = u16(0x44 + 2 * item_id)
        if record_index >= physical_count:
            raise ValueError("item.dat indirection index exceeds physical records")
        offset = physical_offset + 0x30 * record_index
        record = data[offset:offset + 0x30]
        row = dict(
            item_id=item_id, physical_record_index=record_index, record_offset=offset,
            possible_placeholder=(record_index == 0),
            price=u32(offset), price_watts=u16(offset + 4),
            price_alternate=u16(offset + 8), pouch=record[0x11] & 0xF,
            effect_field=record[0x13], can_use_on_pokemon=(record[0x15] == 1),
            item_sprite=u16(offset + 0x1A), group_type=record[0x1C],
            group_index=record[0x1D],
            boost0=record[0x1F], boost1=record[0x20],
            boost2=record[0x21], boost3=record[0x22],
            raw_record_hex=record.hex()
        )
        rows.append(row)
    return rows, dict(id_count=count, physical_count=physical_count,
                      placeholder_references=sum(z["possible_placeholder"] for z in rows))


def nso_info(data: bytes):
    if len(data) < 0x100 or data[:4] != b"NSO0":
        raise ValueError("invalid NSO0 main")
    flags = struct.unpack_from("<I", data, 0x0C)[0]
    segments = []
    for i, (name, hdr, comp_size) in enumerate(
            (("text", 0x10, 0x60), ("ro", 0x20, 0x64), ("data", 0x30, 0x68))):
        file_offset, memory_offset, decompressed_size = struct.unpack_from("<III", data, hdr)
        compressed = bool(flags & (1 << i))
        stored_size = struct.unpack_from("<I", data, comp_size)[0] if compressed else decompressed_size
        if file_offset + stored_size > len(data):
            raise ValueError(f"NSO segment beyond source: {name}")
        segments.append(dict(segment=name, file_offset=file_offset, rva_start=memory_offset,
                             rva_end_exclusive=memory_offset + decompressed_size,
                             decompressed_bytes=decompressed_size, stored_bytes=stored_size,
                             compressed=compressed))
    return dict(build_id=data[0x40:0x60].hex().upper(), flags=flags,
                source_sha256=sha(data), source_bytes=len(data), segments=segments,
                note="Only validated segment RVA ranges; runtime function RVAs require GDB/ELF xrefs.")


def write_csv(out: Path, name: str, rows: list[dict]):
    if not rows:
        raise ValueError(f"empty data set {name}")
    out.mkdir(parents=True, exist_ok=True)
    dest = out / (name + ".csv")
    with dest.open("w", newline="", encoding="utf-8-sig") as f:
        writer = csv.DictWriter(f, fieldnames=list(rows[0]))
        writer.writeheader()
        writer.writerows(rows)
    with dest.open(newline="", encoding="utf-8-sig") as f:
        if sum(1 for _ in csv.DictReader(f)) != len(rows):
            raise ValueError(f"CSV row count disagreement: {dest}")


def run(repo: Path, out: Path):
    src = repo / ROOT
    evidence = {}
    counts = {}
    for filename, schema, dest in (
        ("event_encount_data.bin", STATIC, "static_encounters"),
        ("add_poke.bin", GIFT, "gift_encounters"),
        ("field_trade.bin", TRADE, "trade_encounters"),
    ):
        path = src / "bin/script_event_data" / filename
        data = path.read_bytes()
        rows = extract_table(data, schema)
        for row in rows:
            row["shiny_meaning"] = SHINY.get(row["ShinyLock"], "UNKNOWN")
        write_csv(out, dest, rows)
        evidence[dest] = dict(source=path.relative_to(repo).as_posix(), sha256=sha(data),
                              records=len(rows), shiny_values=dict(Counter(r["ShinyLock"] for r in rows)))
        counts[dest] = len(rows)

    item_path = src / "bin/pml/item/item.dat"
    b = item_path.read_bytes()
    rows, details = item_records(b)
    write_csv(out, "item_properties", rows)
    evidence["item_properties"] = dict(source=item_path.relative_to(repo).as_posix(),
                                      sha256=sha(b), **details)
    counts["item_properties"] = len(rows)

    members = repo / PACK
    wild = []
    evidence["wild_encounters"] = []
    for p in sorted(members.glob("*.bin")):
        m = re.fullmatch(r"(\d{6})_([0-9A-Fa-f]{16})\.bin", p.name)
        if not m:
            continue
        member = int(m.group(1))
        if member not in range(4):
            continue  # Only the 4 verified EncounterArchive members.
        b = p.read_bytes()
        parsed, detail = encounter_records(b, member, m.group(2).upper())
        wild.extend(parsed)
        evidence["wild_encounters"].append(dict(
            source=p.relative_to(repo).as_posix(), sha256=sha(b),
            member_index=member, **detail))
    if len(evidence["wild_encounters"]) != 4:
        raise ValueError("all four verified wild encounter members must be present")
    write_csv(out, "wild_encounters", wild)
    counts["wild_encounters"] = len(wild)

    segments = []
    for game in ("sword", "shield"):
        path = repo / f"v1.3.2/0/{game}_main"
        meta = nso_info(path.read_bytes())
        evidence[f"{game}_main"] = meta
        segments.extend(dict(game=game, build_id=meta["build_id"],
                             source_sha256=meta["source_sha256"], **s)
                        for s in meta["segments"])
    write_csv(out, "nso_segments", segments)
    counts["nso_segments"] = len(segments)

    summary = dict(game="Pokémon Sword / Shield", version="1.3.2",
                   accuracy="Static resource interpretation only; no runtime shiny claim.",
                   counts=counts, evidence=evidence,
                   unresolved=[
                       "Wild pack member mapping to Sword/Shield and weather/time still requires verification.",
                       "ShinyLock=0 is a raw table enum, not proof that the encounter can be shiny at runtime.",
                       "Item8 unknown 0x30-byte fields preserved in raw_record_hex, not invented semantics.",
                       "NSO segment RVAs are not verified runtime function addresses.",
                   ])
    out.mkdir(parents=True, exist_ok=True)
    (out / "semantic-summary.json").write_text(
        json.dumps(summary, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(json.dumps(counts, ensure_ascii=False))
    return summary


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--out", type=Path, default=Path("Unpack/v1.3.2/catalog"))
    args = p.parse_args()
    run(args.repo.resolve(), args.out.resolve())


if __name__ == "__main__":
    main()
