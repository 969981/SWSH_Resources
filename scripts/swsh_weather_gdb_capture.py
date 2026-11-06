#!/usr/bin/env python3
"""Load from GDB: source scripts/swsh_weather_gdb_capture.py

Command:
  swsh-weather-capture <repo_root> <case_id> <main_base_hex> <verified_branch_rva_hex> <output_jsonl>

Does not locate the branch, change game memory, or determine accept/reject.
Records GDB PC, registers and actual instruction bytes only.
"""
from __future__ import annotations

import csv
import datetime as dt
import json
from pathlib import Path
import gdb  # This module exists INSIDE GDB's Python runtime only.

def _reg(name):
    try:
        return "0x%x" % (int(gdb.parse_and_eval("$"+name)) & ((1<<64)-1))
    except Exception as exc:
        return "UNAVAILABLE:"+type(exc).__name__

class WeatherCandidateBreakpoint(gdb.Breakpoint):
    def __init__(self, address, metadata, path):
        super().__init__("*0x%x"%address, type=gdb.BP_BREAKPOINT, internal=False)
        self.address=address
        self.metadata=metadata
        self.output=path
        self.count_hits=0

    def stop(self):
        self.count_hits+=1
        try:
            pc=int(gdb.parse_and_eval("$pc"))
        except Exception:
            pc=self.address
        try:
            instruction=bytes(gdb.selected_inferior().read_memory(pc,16)).hex()
        except Exception as exc:
            instruction="UNAVAILABLE:"+type(exc).__name__
        try:
            thread=str(gdb.selected_thread().ptid)
        except Exception:
            thread="UNAVAILABLE"
        record={
          "timestamp_utc":dt.datetime.now(dt.timezone.utc).isoformat(),
          "capture_kind":"GDB_REGISTER_SNAPSHOT_ONLY",
          "is_runtime_decision_verified":False,
          "loaded_main_build_id_verified_in_process":False,
          "case_id":self.metadata["case_id"],
          "scenario_id":self.metadata["scenario_id"],
          "game_claimed":self.metadata["game"],
          "expected_build_id":self.metadata["build_id"],
          "expected_main_sha256":self.metadata["original_main_sha256"],
          "main_base_claimed":"0x%X"%self.metadata["base"],
          "branch_rva_claimed":"0x%X"%self.metadata["rva"],
          "native_anchor":self.metadata.get("native_anchor","USER_SUPPLIED_RVA"),
          "is_weather_branch_verified":False,
          "pc_absolute":"0x%X"%pc,
          "pc_rva_if_main_base_is_correct":"0x%X"%(pc-self.metadata["base"]),
          "instruction_bytes_at_pc":instruction,
          "thread":thread,
          "registers":{name:_reg(name) for name in
                       ("x0","x1","x2","x3","x4","x5","x6","x7",
                        "x8","x9","x10","x11","x16","x19","x20",
                        "x21","x22","x23","x24","x25","x26","x27",
                        "x28","x29","sp","lr","cpsr")},
          "hit_sequence":self.count_hits,
          "actual_zone_id":"UNKNOWN",
          "actual_weather":"UNKNOWN",
          "branch_outcome":"UNDETERMINED",
        }
        self.output.parent.mkdir(parents=True,exist_ok=True)
        with self.output.open("a",encoding="utf-8") as f:
            f.write(json.dumps(record,ensure_ascii=False)+"\n")
        gdb.write("[SWSH] captured raw registers for %s at 0x%x (%d hits). "
                  "Actual weather/zone/decision NOT verified. Log: %s\n"%
                  (self.metadata["case_id"],pc,self.count_hits,self.output))
        return True

class SwshWeatherCapture(gdb.Command):
    """Record an encounter candidate's branch PC and registers for manual disassembly review.

swsh-weather-capture <repo_root> <case_id> <main_base_hex> <verified_branch_rva_hex> <output_jsonl>
"""

    def __init__(self):
        super().__init__("swsh-weather-capture",gdb.COMMAND_USER)

    def invoke(self,args,from_tty):
        try:
            a=gdb.string_to_argv(args)
            if len(a)!=5:
                raise ValueError("expected: repo_root case_id main_base_hex verified_branch_rva_hex output_jsonl")
            root=Path(a[0]).expanduser().resolve()
            caseid=a[1]
            base=int(a[2],0)
            rva=int(a[3],0)
            output=Path(a[4]).expanduser().resolve()
            with (root/"Unpack/v1.3.2/catalog/weather_bleed_268_cases.csv").open(
                    encoding="utf-8-sig",newline="") as f:
                records=[r for r in csv.DictReader(f) if r["case_id"]==caseid]
            if len(records)!=1:
                raise ValueError("case_id not unique/found in manifest")
            c=records[0]
            with (root/"Unpack/v1.3.2/catalog/nso_segments.csv").open(
                    encoding="utf-8-sig",newline="") as f:
                valid=[row for row in csv.DictReader(f)
                       if row["game"]==c["game"].lower() and row["segment"]=="text"
                       and row["build_id"]==c["build_id"]
                       and row["source_sha256"]==c["original_main_sha256"]]
            if len(valid)!=1:
                raise ValueError("NSO text segment evidence missing or build ID mismatched")
            seg=valid[0]
            if not (int(seg["rva_start"])<=rva<int(seg["rva_end_exclusive"])):
                raise ValueError("RVA is outside verified TEXT segment")
            if base<=0 or rva<=0 or (base+rva)%4:
                raise ValueError("invalid main base or 4-byte-aligned ARM64 RVA")
            if not gdb.selected_inferior().is_valid():
                raise ValueError("no inferior attached; connect to GDB target first")
            metadata={"case_id":c["case_id"],"scenario_id":c["scenario_id"],
                      "game":c["game"],"build_id":c["build_id"],
                      "original_main_sha256":c["original_main_sha256"],
                      "base":base,"rva":rva}
            WeatherCandidateBreakpoint(base+rva,metadata,output)
            gdb.write("[SWSH] breakpoint armed at main+0x%x. This DOES NOT "
                      "prove it is the weather selection branch; verify "
                      "instruction semantics and in-game BuildID first.\n"%rva)
        except Exception as exc:
            raise gdb.GdbError("swsh-weather-capture: "+str(exc))

class SwshWeatherArmKnown(gdb.Command):
    """Arm four source-backed native entrypoints for the selected Sword/Shield case.

swsh-weather-arm-known <repo_root> <case_id> <main_base_hex> <output_jsonl>

Uses nso_native_encounter_anchors.csv (real NSO TEXT bytes, pinned upstream
hook versions). Entrypoints are NOT verified weather allow/deny branches.
"""

    ENTRIES=(
        "Field.FetchZoneHash",
        "OverworldEncount.FetchSymbolEncountTable",
        "OverworldEncount.GenerateSymbolEncountParam",
        "OverworldEncount.GenerateBasicSpec",
    )

    def __init__(self):
        super().__init__("swsh-weather-arm-known",gdb.COMMAND_USER)

    def invoke(self,args,from_tty):
        try:
            argv=gdb.string_to_argv(args)
            if len(argv)!=4:
                raise ValueError("expected repo_root case_id main_base_hex output_jsonl")
            repo=Path(argv[0]).expanduser().resolve()
            case_id=argv[1]
            base=int(argv[2],0)
            output=Path(argv[3]).expanduser().resolve()
            if base<=0 or base%4:
                raise ValueError("main base must be a positive, 4-byte-aligned address")
            if not gdb.selected_inferior().is_valid():
                raise ValueError("attach to a debugger target before arming")
            casebook=repo/"Unpack/v1.3.2/catalog/weather_bleed_268_cases.csv"
            with casebook.open(encoding="utf-8-sig",newline="") as f:
                found=[r for r in csv.DictReader(f) if r["case_id"]==case_id]
            if len(found)!=1:
                raise ValueError("case ID is missing or duplicated in original 268-case manifest")
            case=found[0]
            native_path=repo/"Unpack/v1.3.2/catalog/nso_native_encounter_anchors.csv"
            with native_path.open(encoding="utf-8-sig",newline="") as f:
                available=[r for r in csv.DictReader(f)
                           if r["game"]==case["game"].lower()
                           and r["build_id"]==case["build_id"]
                           and r["main_sha256"]==case["original_main_sha256"]
                           and r["native_anchor"] in self.ENTRIES]
            if len(available)!=len(self.ENTRIES):
                raise ValueError("native entrypoint table does not match case game/BuildID/SHA")
            names={r["native_anchor"] for r in available}
            if names!=set(self.ENTRIES):
                raise ValueError("native entrypoint table has duplicates or missing names")
            segment_path=repo/"Unpack/v1.3.2/catalog/nso_segments.csv"
            with segment_path.open(encoding="utf-8-sig",newline="") as f:
                segments=[r for r in csv.DictReader(f)
                          if r["game"]==case["game"].lower()
                          and r["segment"]=="text"
                          and r["build_id"]==case["build_id"]
                          and r["source_sha256"]==case["original_main_sha256"]]
            if len(segments)!=1:
                raise ValueError("matching NSO TEXT segment metadata not available")
            low=int(segments[0]["rva_start"])
            high=int(segments[0]["rva_end_exclusive"])
            for entry in sorted(available,key=lambda x:self.ENTRIES.index(x["native_anchor"])):
                rva=int(entry["main_rva_hex"],0)
                if not (low<=rva<high and rva%4==0):
                    raise ValueError("native RVA out of NSO TEXT range")
                metadata={"case_id":case["case_id"],"scenario_id":case["scenario_id"],
                          "game":case["game"],"build_id":case["build_id"],
                          "original_main_sha256":case["original_main_sha256"],
                          "base":base,"rva":rva,"native_anchor":entry["native_anchor"]}
                WeatherCandidateBreakpoint(base+rva,metadata,output)
                gdb.write("[SWSH] armed %-47s main+0x%X\n"%(entry["native_anchor"],rva))
            gdb.write("[SWSH] %d STATIC entrypoints armed for %s. "
                      "Every hit is raw register evidence, NOT a weather branch verdict. "
                      "Verify in-process BuildID and real zone/weather before interpretation.\n"%
                      (len(available),case["case_id"]))
        except Exception as exc:
            raise gdb.GdbError("swsh-weather-arm-known: "+str(exc))

SwshWeatherArmKnown()
SwshWeatherCapture()
gdb.write("[SWSH] commands swsh-weather-capture / swsh-weather-arm-known registered.\n")
