#!/usr/bin/env python3
"""Audit v1.3.2 native encounter entrypoints taken from swsh-mods-exl.

Origin:
  https://github.com/lincoln-lm/swsh-mods-exl/blob/
  61dc6d8df4347c0fd3a30373a117502e9dfdce80/source/program/symbols.hpp
  https://github.com/lincoln-lm/swsh-mods-exl/blob/
  61dc6d8df4347c0fd3a30373a117502e9dfdce80/source/program/patches/underworld.hpp
  https://github.com/lincoln-lm/swsh-mods-exl/blob/
  61dc6d8df4347c0fd3a30373a117502e9dfdce80/source/program/patches/randomizer.hpp

The upstream repo supports Sword/Shield 1.3.2 only.
Shield symbols are source base addresses, Sword subtracts VER_OFF = 0x30.
This script verifies those RVAs lie in original NSO TEXT and snapshots real
instruction bytes. It does NOT prove function semantics, weather selection
branches or dynamic runtime execution.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import struct
from pathlib import Path
from swsh_nso_shiny_probe import lz4_raw, PRELUDE

ROOT=Path("Unpack/v1.3.2/catalog")
UPSTREAM_COMMIT="61dc6d8df4347c0fd3a30373a117502e9dfdce80"
SYMBOL_URL="https://github.com/lincoln-lm/swsh-mods-exl/blob/"+UPSTREAM_COMMIT+"/source/program/symbols.hpp"
UNDERWORLD_URL="https://github.com/lincoln-lm/swsh-mods-exl/blob/"+UPSTREAM_COMMIT+"/source/program/patches/underworld.hpp"
RANDOMIZER_URL="https://github.com/lincoln-lm/swsh-mods-exl/blob/"+UPSTREAM_COMMIT+"/source/program/patches/randomizer.hpp"
# Exact 1.3.2 native addresses in upstream symbols.hpp for Shield.
# They explicitly subtract VER_OFF (0x30 on Sword, 0 on Shield).
FUNCTIONS=[
  ("Field.FetchZoneHash",0xD7E310,"field current ZoneID","symbols.hpp"),
  ("OverworldEncount.FetchSymbolEncountTable",0xD05750,
   "symbol table lookup by zone hash","symbols.hpp / underworld.hpp"),
  ("OverworldEncount.GenerateSymbolEncountParam",0xD050B0,
   "symbol encounter parameters","symbols.hpp / underworld.hpp"),
  ("OverworldEncount.TryGenerateSymbolEncount",0xDAF380,
   "symbol spawner event","symbols.hpp / underworld.hpp"),
  ("OverworldEncount.GenerateBasicSpec",0xD32A00,
   "slot-to-spec conversion","symbols.hpp / randomizer.hpp"),
  ("OverworldEncount.GenerateMainSpec",0xD311F0,
   "spec and reroll logic, independent pkNX prelude match","symbols.hpp / swsh_nso_shiny_probe.py"),
  ("Field.EncountSpawnerInit",0xDAE210,"field spawner init","symbols.hpp / underworld.hpp"),
  ("OverworldEncount.FetchSymbolEncountTable+0x54",0xD057A4,
   "upstream inline access to symbol hash table","underworld.hpp"),
  ("OverworldEncount.TryGenerateSymbolEncount+0x1C",0xDAF39C,
   "upstream inline nonempty table validation","underworld.hpp"),
  ("Field.EncountSpawnerInit+0x13C",0xDAE34C,
   "upstream inline spawner type check","underworld.hpp"),
]

def sha(data):
    return hashlib.sha256(data).hexdigest()

def read_text(nso):
    if len(nso)<0x100 or nso[:4]!=b"NSO0":
        raise ValueError("invalid NSO0 main")
    flags=struct.unpack_from("<I",nso,0xC)[0]
    file_offset,text_rva,text_size=struct.unpack_from("<III",nso,0x10)
    compressed=bool(flags&1)
    size=struct.unpack_from("<I",nso,0x60)[0] if compressed else text_size
    if file_offset<0x100 or file_offset+size>len(nso):
        raise ValueError("TEXT storage beyond NSO")
    stored=nso[file_offset:file_offset+size]
    output=lz4_raw(stored,text_size) if compressed else stored
    expected=nso[0xA0:0xC0]
    if hashlib.sha256(output).digest()!=expected:
        raise ValueError("TEXT SHA-256 does not match original NSO header")
    return text_rva,output,nso[0x40:0x60].hex().upper()

def write_csv(path,records):
    if not records: raise ValueError("empty native address table")
    with path.open("w",encoding="utf-8-sig",newline="") as f:
        writer=csv.DictWriter(f,fieldnames=list(records[0]))
        writer.writeheader()
        writer.writerows(records)
    with path.open("r",encoding="utf-8-sig",newline="") as f:
        if sum(1 for _ in csv.DictReader(f))!=len(records):
            raise ValueError("native offset output truncated")

def export(repo):
    source=repo/ROOT/"nso_shiny_probe.json"
    tested=json.loads(source.read_text(encoding="utf-8"))
    by_game={r["game"]:r for r in tested["results"]}
    rows=[]; summary=[]
    for game in ("sword","shield"):
        original=(repo/f"v1.3.2/0/{game}_main").read_bytes()
        meta=by_game[game]
        if sha(original)!=meta["main_sha256"]:
            raise ValueError("original main SHA changed since previous verified NSO probe")
        text_rva,text,build=read_text(original)
        if build!=meta["build_id"]:
            raise ValueError("build ID is not v1.3.2 pinned BuildID")
        offset=0x30 if game=="sword" else 0
        matched=0
        for name,shield_rva,purpose,reference in FUNCTIONS:
            rva=shield_rva-offset
            text_offset=rva-text_rva
            if rva<=0 or text_offset<0 or text_offset+32>len(text) or rva%4:
                raise ValueError("native function address not within ARM64 executable segment")
            sample=text[text_offset:text_offset+32]
            if len(set(sample))<4 or sample==b"\x00"*32:
                raise ValueError("likely invalid instructions at "+name+" "+game)
            is_known=name=="OverworldEncount.GenerateMainSpec"
            if is_known:
                if text[text_offset:text_offset+len(PRELUDE)]!=PRELUDE:
                    raise ValueError("independently proven pkNX shiny logic RVA mismatch")
                matched+=1
            rows.append({
                "game":game,"version":"1.3.2","build_id":build,
                "main_sha256":meta["main_sha256"],
                "native_anchor":name,
                "main_rva_hex":f"0x{rva:X}",
                "text_offset_hex":f"0x{text_offset:X}",
                "first_32_bytes":sample.hex(),
                "upstream_symbols":"lincoln-lm/swsh-mods-exl",
                "upstream_commit":UPSTREAM_COMMIT,
                "purpose_from_upstream":purpose,
                "upstream_reference":reference,
                "pkNX_independent_prelude_confirmed":str(is_known).lower(),
                "is_weather_allow_deny_branch":"false",
                "runtime_tested":"false",
                "evidence":"NSO_BYTES_AND_UPSTREAM_HOOK_OFFSET_ONLY",
            })
        if matched!=1: raise ValueError("missing strong cross-anchor")
        summary.append({
            "game":game,"original_main_sha256":sha(original),
            "build_id":build,"text_sha256":sha(text),
            "upstream_version_delta":offset,
            "native_candidates":len(FUNCTIONS),
            "independent_generate_main_spec_prelude_matches":matched,
        })
    out=repo/ROOT
    write_csv(out/"nso_native_encounter_anchors.csv",rows)
    report={
       "game_version":"Sword / Shield v1.3.2",
       "source":SYMBOL_URL,
       "hook_context":[UNDERWORLD_URL,RANDOMIZER_URL],
       "source_sha256":{str(source.relative_to(repo)):sha(source.read_bytes())},
       "summary":summary,
       "rows":len(rows),
       "independent_code_anchor_name":"OverworldEncount.GenerateMainSpec",
       "runtime_tested":False,
       "weather_allow_deny_rva_verified":False,
       "warning":"Native addresses are upstream hook candidates cross-checked against "
                 "original TEXT bytes; none is independently a verified weather "
                 "allow/deny branch. Dynamic GDB is still necessary."
    }
    (out/"nso_native_encounter_anchors_summary.json").write_text(
       json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"rows":len(rows),"summary":summary},ensure_ascii=False))
    return report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path("."))
    args=p.parse_args()
    export(args.repo.resolve())

if __name__=="__main__":
    main()
