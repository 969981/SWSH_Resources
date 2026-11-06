#!/usr/bin/env python3
"""Audit user-supplied Sword/Shield runtime observations against 268 static cases.

Never labels a sample as game-verified: branch semantic review is external.
Blank evidence is accepted as NO_RUNTIME_OBSERVATIONS, not success.
"""
from __future__ import annotations

import argparse
import csv
import datetime
import hashlib
import json
import re
from collections import Counter
from pathlib import Path

BASE=Path("Unpack/v1.3.2/catalog")
REQUIRED={
  "case_id","scenario_id","game","build_id","session_id","observed_at_utc",
  "emulator_or_console","actual_zone_id_hex","actual_weather_index",
  "actual_mode","branch_pc_rva","branch_code_sha256","branch_result",
  "gdb_jsonl_sha256","actual_spawn_species","actual_spawn_level",
  "actual_spawn_form","sample_count","seed_or_state","notes",
}
RESULTS={"ALLOW","DENY","UNDETERMINED"}

def validate(repo:Path, observations:Path, out:Path):
    with (repo/BASE/"weather_bleed_268_cases.csv").open(
            newline="",encoding="utf-8-sig") as f:
        cases={x["case_id"]:x for x in csv.DictReader(f)}
    if len(cases)!=268:
        raise ValueError("casebook is not 268 unique cases")
    with (repo/BASE/"nso_segments.csv").open(
            newline="",encoding="utf-8-sig") as f:
        ranges={(r["game"],r["build_id"]): (int(r["rva_start"]),int(r["rva_end_exclusive"]))
                for r in csv.DictReader(f) if r["segment"]=="text"}
    with observations.open(newline="",encoding="utf-8-sig") as f:
        reader=csv.DictReader(f)
        if not REQUIRED.issubset(reader.fieldnames or []):
            raise ValueError("observation CSV header has missing fields")
        records=list(reader)
    issues=[]
    detailed=[]
    hypotheses=Counter()
    for line,r in enumerate(records,start=2):
        case=cases.get(r["case_id"])
        if case is None:
            issues.append("line %d: case_id not in original 268-case manifest"%line)
            continue
        identity=[
            ("scenario_id",case["scenario_id"]),
            ("game",case["game"]),
            ("build_id",case["build_id"]),
            ("actual_zone_id_hex",case["zone_id_hex"]),
            ("actual_weather_index",case["weather_index"]),
            ("actual_mode",case["mode"]),
        ]
        errors=[]
        for key,expected in identity:
            if r[key].strip().upper()!=str(expected).upper():
                errors.append(f"{key} mismatch")
        if r["branch_result"] and r["branch_result"] not in RESULTS:
            errors.append("branch_result must be ALLOW, DENY or UNDETERMINED")
        if r["observed_at_utc"]:
            try:
                t=datetime.datetime.fromisoformat(r["observed_at_utc"].replace("Z","+00:00"))
                if t.utcoffset() is None: errors.append("observation timestamp lacks timezone")
            except ValueError:
                errors.append("invalid observed_at_utc")
        if r["branch_pc_rva"]:
            try:
                addr=int(r["branch_pc_rva"],0)
                start,stop=ranges[(r["game"].lower(),r["build_id"])]
                if addr<start or addr>=stop or addr%4!=0:
                    errors.append("branch RVA outside matching Sword/Shield NSO TEXT")
            except (ValueError,KeyError):
                errors.append("invalid or version-mismatched branch RVA")
        for field in ("branch_code_sha256","gdb_jsonl_sha256"):
            if r[field] and not re.fullmatch(r"[0-9a-fA-F]{64}",r[field]):
                errors.append(field+" must be SHA-256 hex")
        if errors:
            issues.append(f"line {line}: "+", ".join(errors))
            continue
        branch=r["branch_result"]
        if branch in ("ALLOW","DENY"):
            game_bool=1 if branch=="ALLOW" else 0
            literal=int(case["pknx_literal_accept"])
            bit=int(case["weather_bit_accept"])
            if game_bool==literal and game_bool!=bit:
                hypothesis="REPORTED_PKNX_LITERAL"
            elif game_bool==bit and game_bool!=literal:
                hypothesis="REPORTED_WEATHER_BIT"
            else:
                hypothesis="CONFLICT_OR_NO_DISCRIMINATION"
        else:
            hypothesis="UNDETERMINED"
        # A CSV cell claiming ALLOW/DENY isn't verified until the underlying
        # trace and the actual branch semantics are independently reviewed.
        integrity="REVIEW_PENDING"
        if not r["session_id"] or not r["emulator_or_console"]:
            integrity="INCOMPLETE_SESSION_METADATA"
        if not r["branch_pc_rva"] or not r["gdb_jsonl_sha256"]:
            integrity="NO_BRANCH_TRACE_REFERENCE"
        hypotheses[hypothesis]+=1
        detailed.append({"line":line,"case_id":r["case_id"],
                         "scenario_id":r["scenario_id"],
                         "reported_branch_result":branch or "UNDETERMINED",
                         "hypothesis_if_branch_semantics_correct":hypothesis,
                         "integrity":integrity,
                         "runtime_verified":False})
    result={
        "scope":"Sword/Shield v1.3.2 runtime observation intake",
        "input_observations":len(records),
        "accepted_for_manual_review":len(detailed),
        "rejected_records":len(issues),
        "runtime_verified_cases":0,
        "discrimination_counts":dict(hypotheses),
        "status":"NO_RUNTIME_OBSERVATIONS" if not records else "MANUAL_CODE_AND_TRACE_REVIEW_REQUIRED",
        "issues":issues,"records":detailed,
        "limitations":"Matching claim and RVA is not proof of branch semantics or in-game module identity. "
                      "Raw GDB register hits must be correlated with real weather, zone, "
                      "decoded encounters and original disassembly by a reviewer."
    }
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({k:result[k] for k in
          ("status","input_observations","accepted_for_manual_review","rejected_records","runtime_verified_cases")},
          ensure_ascii=False))
    if issues:
        raise ValueError("Runtime observations rejected: %d problems; see %s"%(len(issues),out))
    return result

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path("."))
    p.add_argument("--observations",type=Path,default=BASE/"weather_bleed_runtime_observations_TEMPLATE.csv")
    p.add_argument("--output",type=Path,default=Path("weather_bleed_runtime_review.json"))
    a=p.parse_args()
    repo=a.repo.resolve()
    path=a.observations if a.observations.is_absolute() else repo/a.observations
    result=a.output if a.output.is_absolute() else repo/a.output
    validate(repo,path,result)
if __name__=="__main__":
    main()
