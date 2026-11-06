#!/usr/bin/env python3
"""Evidence-preserving Sword/Shield 1.3.2 weather rules and official ZH-CN map names.

Reads the checked-in native wild CSV, pkNX C# weather rules and the already-parsed
official in-game Simp_Chinese/English message tables. Never modifies raw inputs.
Important: pkNX uses bleed.HasFlag(permit) rather than bleed.HasFlag(requested)
in IsWeatherBleedPossible. Export BOTH interpretations, no runtime claims.
"""
from __future__ import annotations
import argparse
import collections
import csv
import hashlib
import json
import re
from pathlib import Path

ROOT=Path("Unpack/v1.3.2")
CAT=ROOT/"catalog"
MSG=ROOT/"parsed/bin/message"
INFO=Path("tools/pkNX/pkNX.Game/Misc/SWSHInfo.cs")
RULE=Path("tools/pkNX/FlatBuffers/SWSH/Gen8/Wild/EncounterTableUtil.cs")
INPUT=CAT/"wild_encounters_enriched.csv"

def digest(p): return hashlib.sha256(p.read_bytes()).hexdigest()
def block(text, start, terminator="\n    };"):
    ix=text.find(start)
    if ix<0: raise ValueError("missing source block: "+start)
    end=text.find(terminator,ix)
    if end<0: raise ValueError("unterminated source block: "+start)
    return text[ix:end]

def parse_zones(text):
    def get(name):
        b=block(text," "+name+" = new Dictionary")
        a={}
        for key,value in re.findall(r"\{\s*0x([A-Fa-f0-9]{16})\s*,\s*([^}]+?)\s*\}",b):
            key=key.upper()
            if key in a: raise ValueError("duplicate ZoneID in "+name)
            a[key]=value.strip().rstrip(",").strip()
        if len(a)<100: raise ValueError("truncated "+name)
        return a
    names=get("Zones")
    locations=get("ZoneLocations")
    types=get("ZoneType")
    if names.keys()!=locations.keys() or names.keys()!=types.keys():
        raise ValueError("pkNX SWSHInfo dictionary key mismatch")
    out={}
    for key in names:
        name=names[key]
        if not (name.startswith('"') and name.endswith('"')):
            raise ValueError("unexpected English name")
        v=types[key]
        m=re.fullmatch(r"\(byte\)([A-Za-z_0-9]+)",v)
        if not m: raise ValueError("unknown pkNX slot type "+v)
        if not re.fullmatch(r"\d+", locations[key]):
            raise ValueError("unexpected map location ID")
        out[key]={"name":name[1:-1].replace(r'\"','"'),
                  "location_id":int(locations[key],10),"type":m[1]}
    return out

def parse_flag_enums(text):
    m=re.search(r"private enum SWSHEncounterType\b[^\{]*\{(.*?)\n\s*\}",text,re.S)
    if not m: raise ValueError("pkNX flag enum not found")
    values={}
    def expr(value):
        n=0
        for token in value.split("|"):
            token=token.strip()
            if token in values: v=values[token]
            elif re.fullmatch(r"\d+",token): v=int(token)
            elif re.fullmatch(r"1\s*<<\s*\d+",token):
                v=1 << int(token.split("<<")[1])
            else: raise ValueError("unrecognized weather flag expression "+token)
            n |= v
        return n
    for line in m[1].splitlines():
        line=line.split("//")[0].strip().rstrip(",")
        if not line or "=" not in line: continue
        key,val=line.split("=",1)
        values[key.strip()]=expr(val.strip())
    if values.get("Normal")!=1 or values.get("Fishing")!=1024 or values.get("All")!=511:
        raise ValueError("unexpected pkNX weather enum semantics "+str(values))
    return values,expr

def weather_dictionaries(text,expr):
    names=["WeatherbyArea","WeatherBleedSymbol","WeatherBleedSymbolSurfing",
           "WeatherBleedSymbolSharpedo","WeatherBleedHiddenGrass"]
    tables={}
    for name in names:
        b=block(text," "+name+" = new()")
        entries={}
        for k,e in re.findall(r"\{\s*(\d+)\s*,\s*([^}\n]+)\}",b):
            val=expr(e.replace("SWSHEncounterType.","").strip())
            k=int(k)
            if k in entries: raise ValueError("duplicate weather location "+str(k))
            entries[k]=val
        if not entries: raise ValueError("missing entries in "+name)
        tables[name]=entries
    if "weather.HasFlag(permit)" not in text:
        raise ValueError("pkNX IsWeatherBleedPossible changed; re-review literal rule")
    return tables

def message_texts(path):
    raw=json.loads(path.read_text(encoding="utf-8-sig"))
    if not isinstance(raw,list) or len(raw)<235:
        raise ValueError("incomplete language message table "+str(path))
    out={}
    for i,item in enumerate(raw):
        if not isinstance(item,dict) or item.get("index")!=i:
            raise ValueError("nonsequential message indices "+str(path))
        out[i]=(item.get("text",""),item.get("flags",None))
    return out

def usable_text(v):
    return isinstance(v,str) and bool(v.strip()) and not re.fullmatch(r"\[~\s*\d+\]",v.strip())

def create_csv(path,fields,rows):
    path.parent.mkdir(parents=True,exist_ok=True)
    with path.open("w",newline="",encoding="utf-8-sig") as f:
        w=csv.DictWriter(f,fieldnames=fields,extrasaction="raise")
        w.writeheader();w.writerows(rows)
    with path.open(encoding="utf-8-sig",newline="") as f:
        if sum(1 for _ in csv.DictReader(f)) != len(rows):
            raise ValueError("output CSV row count mismatch "+str(path))

def filter_weather(loc:int,typ:str,sub:int,tables):
    """Return (pkNX literal result, requested-weather-bit comparison, reason, bleed mask).

    This reproduces IsPermittedWeather and distinguishes its HasFlag(permit)
    from the more intuitive HasFlag(current-weather-bit). Inaccessible
    short-circuits at GetDumpable, before IsPermittedWeather is called.
    """
    if typ=="Inaccessible": return False,False,"INACCESSIBLE_ZONE",0
    if typ=="OnlyFishing":
        ok=sub==10
        return ok,ok,"ONLY_FISHING" if ok else "ONLY_FISHING_REJECTED",0
    if sub in (9,10):
        return True,True,"ACTION_TREE_OR_FISHING",0
    bit=1 << sub
    permit=tables["WeatherbyArea"].get(loc,1)
    if (permit & bit)==bit:
        return True,True,"DIRECT_WEATHER_ALLOWED",0
    alias = {
        "SymbolMain":"WeatherBleedSymbol",
        "SymbolMain2":"WeatherBleedSymbol",
        "SymbolMain3":"WeatherBleedSymbol",
        "HiddenMain":"WeatherBleedHiddenGrass",
        "HiddenMain2":"WeatherBleedHiddenGrass",
        "Surfing":"WeatherBleedSymbolSurfing",
        "Sharpedo":"WeatherBleedSymbolSharpedo",
    }.get(typ)
    bleed=tables[alias].get(loc,0) if alias else 0
    # C# HasFlag(x) = (value & x)==x, exactly as written in pkNX.
    literal=bool(bleed) and (bleed & permit)==permit
    requested=bool(bleed) and (bleed & bit)==bit
    return literal,requested,(
        "BLEED_LITERAL_VS_BIT_DIFFER" if literal!=requested else
        "BLEED_ACCEPTED" if literal else "WEATHER_DENIED"),bleed

def run(repo:Path):
    cat=repo/CAT
    input_path=repo/INPUT
    info_path=repo/INFO
    rule_path=repo/RULE
    zh_path=repo/MSG/"Simp_Chinese/common/place_name_indirect.dat.json"
    en_path=repo/MSG/"English/common/place_name_indirect.dat.json"
    sources=[input_path,info_path,rule_path,zh_path,en_path]
    for p in sources:
        if not p.is_file(): raise FileNotFoundError(p)
    zones=parse_zones(info_path.read_text(encoding="utf-8-sig"))
    rule=rule_path.read_text(encoding="utf-8-sig")
    flags,expr=parse_flag_enums(rule)
    tables=weather_dictionaries(rule,expr)
    zh=message_texts(zh_path);en=message_texts(en_path)
    zhmap={}
    for zone,item in zones.items():
        i=item["location_id"]
        if i not in zh or i not in en:
            raise ValueError("missing message index "+str(i))
        z,zflags=zh[i]; e,eflags=en[i]
        if not usable_text(z) or not usable_text(e):
            raise ValueError(f"placeholder locale text for {zone} @ {i}")
        zhmap[zone]={"zone_id_hex":zone,"zone_name_en_pknx":item["name"],
                     "zone_name_chs_official":z,"place_message_index":i,
                     "place_name_english_official":e,"chs_flags":zflags,
                     "en_flags":eflags,"zone_slot_type":item["type"]}
    if len(zhmap)!=196 or len({x["place_message_index"] for x in zhmap.values()})!=69:
        raise ValueError("changed pkNX zone and msg mapping coverage")

    with input_path.open(encoding="utf-8-sig",newline="") as f:
        reader=csv.DictReader(f)
        base_fields=reader.fieldnames or []
        required={"game_verified","mode_verified","zone_id_hex",
                  "location_id","zone_name_en","zone_slot_type",
                  "subtable_index","species","level_min","level_max","probability"}
        if not required.issubset(base_fields):
            raise ValueError("missing enriched CSV input columns "+str(required-set(base_fields)))
        rows=list(reader)
    if len(rows)!=35960: raise ValueError("unexpected encounter source record count")
    result=[]
    decisions=collections.Counter();disagreements=collections.Counter()
    by_member=collections.Counter()
    used_zones=set()
    extra=[
        "official_zone_name_chs","official_place_message_index","official_place_en",
        "official_chs_flags","pknx_weather_mask_hex","pknx_bleed_mask_hex",
        "pknx_rule_literal_accept","weather_bit_accept_comparison",
        "weather_rule_disagreement","is_nonzero_source_slot",
        "pkNX_literal_effective_candidate","weather_bit_effective_candidate",
        "rule_classification","runtime_confirmed",
    ]
    for row in rows:
        zone=row["zone_id_hex"].upper()
        if zone not in zhmap:
            raise ValueError("source wild table missing language mapping: "+zone)
        m=zhmap[zone]
        loc=int(row["location_id"])
        if loc!=m["place_message_index"]:
            raise ValueError(f"enriched source ZoneID map drift: {zone}")
        if row["zone_slot_type"]!=m["zone_slot_type"]:
            raise ValueError(f"enriched source ZoneType drift: {zone}")
        sub=int(row["subtable_index"])
        if sub<0 or sub>10:
            raise ValueError("invalid weather subtable index")
        literal,requested,reason,bleed=filter_weather(loc,m["zone_slot_type"],sub,tables)
        permit=tables["WeatherbyArea"].get(loc,1)
        species=int(row["species"])
        prob=int(row["probability"])
        lo=int(row["level_min"]);hi=int(row["level_max"])
        nonzero=species>0 and prob>0 and lo>0 and hi>=lo
        if species<=0: reason="EMPTY_SPECIES"
        elif prob<=0: reason="ZERO_WEIGHT"
        elif lo<=0 or hi<lo: reason="INVALID_OR_ZERO_LEVEL"
        if literal!=requested and nonzero:
            disagreements[(loc,reason)]+=1
        decisions[reason]+=1
        used_zones.add(zone)
        by_member[int(row["member_index"])]+=1
        result.append({**row,
            "official_zone_name_chs":m["zone_name_chs_official"],
            "official_place_message_index":loc,
            "official_place_en":m["place_name_english_official"],
            "official_chs_flags":m["chs_flags"],
            "pknx_weather_mask_hex":f"0x{permit:03X}",
            "pknx_bleed_mask_hex":f"0x{bleed:03X}",
            "pknx_rule_literal_accept":int(literal),
            "weather_bit_accept_comparison":int(requested),
            "weather_rule_disagreement":int(literal!=requested),
            "is_nonzero_source_slot":int(nonzero),
            "pkNX_literal_effective_candidate":int(literal and nonzero),
            "weather_bit_effective_candidate":int(requested and nonzero),
            "rule_classification":reason,
            "runtime_confirmed":0,
        })
    if dict(by_member)!={0:6820,1:11160,2:11160,3:6820}:
        raise ValueError("wild member counts drifted")
    if len(used_zones)!=186:
        raise ValueError("unique wild zone coverage changed")
    zone_rows=[zhmap[k] for k in sorted(zhmap)]
    zone_index=[]
    zone_idx_path=cat/"wild_zone_index.csv"
    with zone_idx_path.open(encoding="utf-8-sig",newline="") as f:
        idx_reader=csv.DictReader(f)
        idx_fields=idx_reader.fieldnames or []
        for r in idx_reader:
            key=r["zone_id_hex"].upper()
            if key not in zhmap: raise ValueError("zone index not in pkNX ZoneLocations")
            if int(r["location_id"])!=zhmap[key]["place_message_index"]:
                raise ValueError("zone index location changed")
            zone_index.append({**r,"zone_name_chs_official":zhmap[key]["zone_name_chs_official"],
                              "place_message_index":zhmap[key]["place_message_index"],
                              "official_english_location":zhmap[key]["place_name_english_official"],
                              "language_source":"Simp_Chinese/common/place_name_indirect.dat.json"})
    if len(zone_index)!=372: raise ValueError("zone index should have 372 records")
    create_csv(cat/"zone_id_zh_cn_dictionary.csv",list(zone_rows[0]),zone_rows)
    create_csv(cat/"wild_zone_bilingual.csv",idx_fields+[
        "zone_name_chs_official","place_message_index",
        "official_english_location","language_source"],zone_index)
    create_csv(cat/"wild_weather_candidates.csv",base_fields+extra,result)
    summary={
        "game":"Sword / Shield","version":"1.3.2",
        "provenance":"pkNX EncounterTable8Util.cs and original locale message arrays",
        "source_sha256":{str(p.relative_to(repo)):digest(p) for p in sources},
        "member_slot_count":dict(sorted(by_member.items())),
        "source_slot_count":len(result),
        "pkNX_zone_dictionary_count":len(zhmap),
        "wild_unique_zone_ids":len(used_zones),
        "member_zone_tables":len(zone_index),
        "unique_official_message_indices":len({z["place_message_index"] for z in zone_rows}),
        "official_map_missing":0,
        "classifications":dict(sorted(decisions.items())),
        "nonzero_source_slots":sum(int(r["is_nonzero_source_slot"]) for r in result),
        "literal_effective_candidates":sum(int(r["pkNX_literal_effective_candidate"]) for r in result),
        "weather_bit_effective_candidates":sum(int(r["weather_bit_effective_candidate"]) for r in result),
        "weather_bit_vs_pknx_literal_disagreement_all_rows":sum(int(r["weather_rule_disagreement"]) for r in result),
        "weather_bit_vs_pknx_literal_disagreement_nonzero":sum(disagreements.values()),
        "disagreement_locations":{str(k[0]):v for k,v in sorted(disagreements.items())},
        "exports":{"zone_id_zh_cn_dictionary.csv":len(zone_rows),
                   "wild_zone_bilingual.csv":len(zone_index),
                   "wild_weather_candidates.csv":len(result)},
        "warning":(
            "Raw table positions are not runtime encounter proofs. pkNX C# code "
            "checks bleed.HasFlag(permit), not bleed.HasFlag(requested weather). "
            "Both interpretations are exported; disagreement must not be called "
            "runtime-confirmed. OnlyFishing and Inaccessible treated as in pkNX."
        ),
        "no_runtime_execution":True,
    }
    (cat/"wild_weather_locale_summary.json").write_text(
        json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:summary[k] for k in (
        "source_slot_count","pkNX_zone_dictionary_count",
        "wild_unique_zone_ids","member_zone_tables",
        "literal_effective_candidates","weather_bit_effective_candidates",
        "weather_bit_vs_pknx_literal_disagreement_nonzero")},ensure_ascii=False))
    return summary

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path("."))
    args=p.parse_args()
    run(args.repo.resolve())

if __name__=="__main__":main()
