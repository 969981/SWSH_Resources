#!/usr/bin/env python3
"""Create a version-bound, source-backed test matrix for Sword/Shield weather bleed.

This is NOT a game-runtime test. It produces reproducible cases and controls,
and blank observation forms that cannot be mistaken for collected evidence.
"""
from __future__ import annotations
import csv
import hashlib
import json
from collections import Counter, defaultdict
from pathlib import Path
import argparse

BASE = Path("Unpack/v1.3.2/catalog")
SRC = BASE / "wild_weather_candidates.csv"
REPORT = BASE / "wild_weather_locale_summary.json"
NSO = BASE / "nso_shiny_probe.json"
OUT = BASE
REQUIRED = {
    "member_index","game_verified","mode_verified","zone_id_hex","zone_slot_type",
    "official_zone_name_chs","zone_name_en","location_id","subtable_index",
    "subtable_condition_en","slot_index","table_index","species","form",
    "probability","level_min","level_max","pknx_weather_mask_hex",
    "pknx_bleed_mask_hex","pknx_rule_literal_accept",
    "weather_bit_accept_comparison","weather_rule_disagreement",
    "is_nonzero_source_slot","rule_classification"
}
VERSION = {"Sword":0,"Shield":1}

def write(path, fields, rows):
    path.parent.mkdir(parents=True,exist_ok=True)
    with path.open("w", encoding="utf-8-sig", newline="") as f:
        w=csv.DictWriter(f, fieldnames=fields, extrasaction="raise")
        w.writeheader(); w.writerows(rows)
    with path.open("r",encoding="utf-8-sig",newline="") as f:
        assert sum(1 for _ in csv.DictReader(f))==len(rows),path

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def stable_case_id(row):
    return ("M{member_index}-Z{zone_id_hex}-W{subtable_index:02d}-"
            "T{table_index:03d}-S{slot_index:02d}").format(
        member_index=row["member_index"],zone_id_hex=row["zone_id_hex"].upper(),
        subtable_index=int(row["subtable_index"]),
        table_index=int(row["table_index"]),
        slot_index=int(row["slot_index"]))

def stable_scenario_id(row):
    return "M{member}-Z{zone}-W{sub:02d}".format(
        member=int(row["member_index"]),zone=row["zone_id_hex"].upper(),
        sub=int(row["subtable_index"]))

def pick_control(rows, scenario, choice):
    member=int(scenario["member_index"])
    zone=scenario["zone_id_hex"]
    condition = (
        (lambda r: r["rule_classification"]=="DIRECT_WEATHER_ALLOWED"
                   and int(r["is_nonzero_source_slot"])==1)
        if choice=="positive"
        else (lambda r: r["rule_classification"]=="WEATHER_DENIED"
                   and int(r["is_nonzero_source_slot"])==1
                   and int(r["pknx_rule_literal_accept"])==0
                   and int(r["weather_bit_accept_comparison"])==0)
    )
    candidate=[r for r in rows
               if int(r["member_index"])==member and r["zone_id_hex"]==zone
               and condition(r)]
    if not candidate:
        return None
    candidate.sort(key=lambda r:(-int(r["probability"]),int(r["subtable_index"]),
                                 int(r["slot_index"]),int(r["species"])))
    return candidate[0]

def run(repo:Path):
    src=repo/SRC; report=repo/REPORT; nso=repo/NSO; out=repo/OUT
    summary=json.loads(report.read_text(encoding="utf-8"))
    probe=json.loads(nso.read_text(encoding="utf-8"))
    builds={item["game"].title():item for item in probe["results"]}
    if set(builds)!=set(VERSION):
        raise ValueError("missing Sword/Shield NSO probe")
    for game, meta in builds.items():
        if meta.get("version")!="1.3.2" or not meta["text_header_sha256_matches"]:
            raise ValueError(f"{game} build version or NSO hash not verified")
        if len(meta["build_id"])!=64 or len(meta["main_sha256"])!=64:
            raise ValueError("incomplete build IDs or hashes")
    with src.open(encoding="utf-8-sig", newline="") as f:
        reader=csv.DictReader(f)
        if not REQUIRED.issubset(set(reader.fieldnames or [])):
            raise ValueError("weather source columns changed")
        rows=list(reader)
    if len(rows)!=summary["source_slot_count"] or len(rows)!=35960:
        raise ValueError("source weather CSV row count changed")
    disputed=[];scenario_rows=defaultdict(list);by_region=Counter()
    directions=Counter();seen_ids=set()
    for r in rows:
        if r["weather_rule_disagreement"]!="1" or r["is_nonzero_source_slot"]!="1":
            continue
        case=stable_case_id(r)
        if case in seen_ids:
            raise ValueError(f"nonunique case id {case}")
        seen_ids.add(case)
        game=r["game_verified"]
        if game not in builds:
            raise ValueError(f"unrecognized Sword/Shield game: {game}")
        left=int(r["pknx_rule_literal_accept"])
        right=int(r["weather_bit_accept_comparison"])
        if left==right:
            raise ValueError("marked disagreement, but verdicts same")
        verdict=("PKNX_ACCEPTS_BIT_REJECTS" if left else "PKNX_REJECTS_BIT_ACCEPTS")
        directions[verdict]+=1
        record={
          "case_id":case,"scenario_id":stable_scenario_id(r),"game":game,
          "build_id":builds[game]["build_id"],
          "original_main_sha256":builds[game]["main_sha256"],
          "member_index":int(r["member_index"]),"mode":r["mode_verified"],
          "zone_id_hex":r["zone_id_hex"].upper(),
          "zone_en":r["zone_name_en"],"zone_zh":r["official_zone_name_chs"],
          "location_id":int(r["location_id"]),"zone_slot_type":r["zone_slot_type"],
          "weather_index":int(r["subtable_index"]),
          "weather_name":r["subtable_condition_en"],
          "slot_index":int(r["slot_index"]),"table_index":int(r["table_index"]),
          "species":int(r["species"]),"form":int(r["form"]),
          "level_min":int(r["level_min"]),"level_max":int(r["level_max"]),
          "raw_slot_weight":int(r["probability"]),
          "pknx_permit_mask":r["pknx_weather_mask_hex"],
          "bleed_mask":r["pknx_bleed_mask_hex"],
          "pknx_literal_accept":left,
          "weather_bit_accept":right,"direction":verdict,
          "runtime_status":"NOT_TESTED"
        }
        disputed.append(record)
        scenario_rows[record["scenario_id"]].append(record)
        by_region[(game,r["official_zone_name_chs"])]+=1
    disputed.sort(key=lambda r:(r["location_id"],r["game"],r["mode"],
                                 r["zone_id_hex"],r["weather_index"],r["slot_index"]))
    if len(disputed)!=268 or sum(directions.values())!=268:
        raise ValueError(f"disputed slots changed: {len(disputed)} {directions}")
    regions={int(x["location_id"]) for x in disputed}
    if len(regions)!=9:
        raise ValueError(f"expected 9 source locations, got {len(regions)}")
    scenarios=[];controls=[]
    for sid,rec in sorted(scenario_rows.items()):
        representative=sorted(rec,key=lambda r:(-r["raw_slot_weight"],r["species"],r["slot_index"]))[0]
        scenario={
            "scenario_id":sid,"game":representative["game"],
            "build_id":representative["build_id"],
            "mode":representative["mode"],"zone_id_hex":representative["zone_id_hex"],
            "zone_en":representative["zone_en"],"zone_zh":representative["zone_zh"],
            "location_id":representative["location_id"],
            "zone_slot_type":representative["zone_slot_type"],
            "weather_index":representative["weather_index"],
            "weather_name":representative["weather_name"],
            "affected_slots":len(rec),
            "representative_case_id":representative["case_id"],
            "representative_species":representative["species"],
            "representative_slot_weight":representative["raw_slot_weight"],
            "pknx_literal_accept":representative["pknx_literal_accept"],
            "weather_bit_accept":representative["weather_bit_accept"],
            "runtime_status":"NOT_TESTED",
        }
        scenarios.append(scenario)
        original=next(r for r in rows if stable_case_id(r)==representative["case_id"])
        for choice in ("positive","negative"):
            sample=pick_control(rows, original, choice)
            if sample is None:
                continue
            controls.append({
                "scenario_id":sid,"control_role":choice,
                "control_case_id":stable_case_id(sample),
                "game":sample["game_verified"],
                "mode":sample["mode_verified"],
                "zone_id_hex":sample["zone_id_hex"],
                "location_id":int(sample["location_id"]),
                "weather_index":int(sample["subtable_index"]),
                "species":int(sample["species"]),"form":int(sample["form"]),
                "raw_slot_weight":int(sample["probability"]),
                "level_min":int(sample["level_min"]),"level_max":int(sample["level_max"]),
                "pknx_accept":int(sample["pknx_rule_literal_accept"]),
                "weather_bit_accept":int(sample["weather_bit_accept_comparison"]),
                "runtime_status":"NOT_TESTED",
            })
    if sum(x["affected_slots"] for x in scenarios)!=268:
        raise ValueError("scenario expansion doesn't match original 268 cases")
    cases_file=out/"weather_bleed_268_cases.csv"
    scenarios_file=out/"weather_bleed_scenarios.csv"
    controls_file=out/"weather_bleed_control_cases.csv"
    write(cases_file,list(disputed[0]),disputed)
    write(scenarios_file,list(scenarios[0]),scenarios)
    write(controls_file,list(controls[0]),controls)
    # Deliberately blank: no real debugger/game session was run by this script.
    obs_cols=["case_id","scenario_id","game","build_id",
              "session_id","observed_at_utc","emulator_or_console",
              "actual_zone_id_hex","actual_weather_index","actual_mode",
              "branch_pc_rva","branch_code_sha256","branch_result",
              "gdb_jsonl_sha256","actual_spawn_species",
              "actual_spawn_level","actual_spawn_form",
              "sample_count","seed_or_state","notes"]
    write(out/"weather_bleed_runtime_observations_TEMPLATE.csv",obs_cols,[])
    result={
      "scope":"Sword/Shield v1.3.2; pkNX static weather rule disagreement",
      "test_status":"NOT_TESTED_ON_REAL_GAME_OR_EMULATOR",
      "source_sha256":{
        SRC.as_posix():sha(src), REPORT.as_posix():sha(report),
        NSO.as_posix():sha(nso)},
      "case_count":len(disputed),"scenario_count":len(scenarios),
      "control_count":len(controls),"distinct_location_ids":len(regions),
      "member_counts":dict(Counter(str(x["member_index"]) for x in disputed)),
      "direction_counts":dict(directions),
      "location_counts":[{"location_id":loc,
                          "zone_zh":next(x["zone_zh"] for x in disputed if x["location_id"]==loc),
                          "slots":sum(x["location_id"]==loc for x in disputed)}
                         for loc in sorted(regions)],
      "build_id_by_game":{game:meta["build_id"] for game,meta in builds.items()},
      "case_schema":"member+ZoneID+subtable+table_index+slot_index; verify real zone/weather before replay",
      "limitations":[
         "pkNX is an offline dump/legality filter, not proof of in-game encounter behavior.",
         "Scenario counts aggregate individual source slots; do not assume independent events.",
         "A 0-hit encounter test cannot prove an encounter is blocked: rarity and event triggers matter.",
         "GDB must identify the real game weather/encounter branch before branch_result can be trusted.",
         "No runtime traces or real-game observations are included."
       ],
      "outputs":{
        "weather_bleed_268_cases.csv":len(disputed),
        "weather_bleed_scenarios.csv":len(scenarios),
        "weather_bleed_control_cases.csv":len(controls),
        "weather_bleed_runtime_observations_TEMPLATE.csv":0,
      },
    }
    (out/"weather_bleed_casebook_summary.json").write_text(
      json.dumps(result,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:result[k] for k in ("case_count","scenario_count","control_count",
        "distinct_location_ids","member_counts","direction_counts")},ensure_ascii=False))
    return result

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path("."))
    a=p.parse_args()
    run(a.repo.resolve())
if __name__=="__main__":
    main()
