#!/usr/bin/env python3
"""GDB Python console: guarded raw register capture for SWSH fixed/gift/trade scripts.

Load only inside attached GDB:
    source scripts/swsh_fixed_gdb_capture.py
    swsh-fixed-arm <repo> <static|gift|trade> <row> <sword|shield> <main_base_hex> <candidate_rva_hex> <out.jsonl>

This does NOT identify the event interpreter or verify script trigger, legality,
in-process BuildID, source creature, shiny behavior or branch semantics.
Breakpoints are read-only and stop for inspection.
"""
from __future__ import annotations

import csv
import datetime as dt
import hashlib
import json
from pathlib import Path

import gdb

FILES = {
    "static": ("static_encounters.csv", "static_encounters"),
    "gift": ("gift_encounters.csv", "gift_encounters"),
    "trade": ("trade_encounters.csv", "trade_encounters"),
}


def _register(name):
    try:
        return f'0x{int(gdb.parse_and_eval("$" + name)) & ((1 << 64) - 1):016X}'
    except Exception:
        return "UNAVAILABLE"


class FixedCaptureBreakpoint(gdb.Breakpoint):
    def __init__(self, address, meta, output):
        super().__init__(f"*0x{address:X}", type=gdb.BP_BREAKPOINT, internal=False)
        self.meta = meta
        self.output = output
        self.hit = 0

    def stop(self):
        self.hit += 1
        actual_pc = int(gdb.parse_and_eval("$pc"))
        try:
            instructions = bytes(gdb.selected_inferior().read_memory(actual_pc, 16)).hex()
        except Exception:
            instructions = "UNAVAILABLE"
        record = {
            **self.meta,
            "observed_at_utc": dt.datetime.now(dt.timezone.utc).isoformat(),
            "capture_kind": "RAW_GDB_REGISTER_SNAPSHOT",
            "pc_absolute": f"0x{actual_pc:X}",
            "pc_rva_if_main_base_correct": f"0x{actual_pc - self.meta['main_base_claimed_int']:X}",
            "instruction_hex_16_bytes": instructions,
            "registers": {
                k: _register(k) for k in (
                    "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7", "x8",
                    "x9", "x10", "x11", "x16", "x19", "x20", "x21",
                    "x22", "x23", "x24", "x25", "x26", "x27", "x28",
                    "x29", "sp", "lr", "cpsr",
                )
            },
            "hit_index": self.hit,
            "build_id_verified_in_target": False,
            "event_trigger_verified": False,
            "source_row_bound_to_runtime_spawn": False,
            "legal_capture_proven": False,
            "actual_species": "UNKNOWN",
            "actual_game_location": "UNKNOWN",
            "actual_script_event": "UNKNOWN",
            "manual_disassembly_review_required": True,
        }
        # Do not serialize Python-only numeric pointer metadata intended only
        # for the local subtraction above.
        record.pop("main_base_claimed_int", None)
        self.output.parent.mkdir(parents=True, exist_ok=True)
        with self.output.open("a", encoding="utf-8") as f:
            f.write(json.dumps(record, ensure_ascii=False) + "\n")
        gdb.write(
            f"[SWSH] captured raw fixed-event candidate PC=0x{actual_pc:X} "
            f"row={self.meta['source_row']} hit={self.hit}. "
            "Not a legality or spawn proof.\n"
        )
        return True


class FixedCaptureCommand(gdb.Command):
    def __init__(self):
        super().__init__("swsh-fixed-arm", gdb.COMMAND_USER)

    def invoke(self, args, from_tty):
        try:
            argv = gdb.string_to_argv(args)
            if len(argv) != 7:
                raise ValueError(
                    "expected repo kind row game main_base_hex candidate_rva_hex out.jsonl"
                )
            repo = Path(argv[0]).expanduser().resolve()
            kind = argv[1].lower()
            row_id = int(argv[2])
            game = argv[3].lower()
            base = int(argv[4], 0)
            rva = int(argv[5], 0)
            output = Path(argv[6]).expanduser().resolve()
            if kind not in FILES or game not in ("sword", "shield"):
                raise ValueError("unknown original encounter source type or Sword/Shield version")
            if row_id < 0 or base <= 0 or rva <= 0 or (base + rva) % 4:
                raise ValueError("RVA/base or row are invalid/unaligned")
            if not gdb.selected_inferior().is_valid():
                raise ValueError("connect to current game via GDB first")
            catalog = repo / "Unpack/v1.3.2/catalog"
            sem = json.loads((catalog / "semantic-summary.json").read_text(encoding="utf-8"))
            filename, key = FILES[kind]
            source = sem["evidence"][key]
            game_source = repo / source["source"]
            if hashlib.sha256(game_source.read_bytes()).hexdigest() != source["sha256"]:
                raise ValueError("original native script resource SHA-256 mismatch")
            with (catalog / filename).open(encoding="utf-8-sig", newline="") as f:
                matches = [r for r in csv.DictReader(f) if int(r["record_index"]) == row_id]
            if len(matches) != 1:
                raise ValueError("original source case row not found or repeated")
            row = matches[0]
            with (catalog / "nso_segments.csv").open(encoding="utf-8-sig", newline="") as f:
                segments = [
                    x for x in csv.DictReader(f)
                    if x["game"] == game and x["segment"] == "text"
                ]
            if len(segments) != 1:
                raise ValueError("expected one pinned game NSO text region")
            seg = segments[0]
            if not int(seg["rva_start"]) <= rva < int(seg["rva_end_exclusive"]):
                raise ValueError("candidate RVA is outside pinned game NSO TEXT")
            meta = {
                "source_kind": kind,
                "source_row": row_id,
                "source_species": int(row["Species"]),
                "source_form": int(row["Form"]),
                "source_level": int(row["Level"]),
                "source_native_sha256": source["sha256"],
                "game_claimed": game,
                "pinned_main_build_id": seg["build_id"],
                "pinned_main_sha256": seg["source_sha256"],
                "main_base_claimed": f"0x{base:X}",
                "main_base_claimed_int": base,
                "candidate_rva_claimed": f"0x{rva:X}",
                "source_game_assignment": "UNVERIFIED_FROM_SCRIPT_TABLE",
            }
            FixedCaptureBreakpoint(base + rva, meta, output)
            gdb.write(
                f"[SWSH] armed read-only candidate at main+0x{rva:X}, "
                "no runtime BuildID/gameplay semantics verified.\n"
            )
        except Exception as exc:
            raise gdb.GdbError("swsh-fixed-arm: " + str(exc))


FixedCaptureCommand()
gdb.write("[SWSH] swsh-fixed-arm command registered (read-only snapshots).\n")
