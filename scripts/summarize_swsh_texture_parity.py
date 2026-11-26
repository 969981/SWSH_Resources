#!/usr/bin/env python3
"""Summarize recorded SWSH pixel parity by format and component selectors."""
import argparse,json
from collections import Counter,defaultdict
from pathlib import Path

EXPECTED={"0x00001a01":3614,"0x00001b01":197,"0x00001c01":1130,
          "0x00001d01":6610,"0x00001e01":3242,"0x00002001":322,
          "0x00000b01":291,"0x00000501":1}

def bucket():
    return dict(textures=0,pixels=0,exact=0,different=0,alpha_exact=0,alpha_different=0,
                rgb_different=0,different_pixels=0,visible_different_pixels=0,
                alpha_zero=0,alpha_full=0,alpha_partial=0,alpha_diff_hist=[0]*256,
                sum_abs=[0.]*4,max_error=[0]*4)

def add(b,r):
    p=r["parity"]; n=r["width"]*r["height"];hist=p["alpha_diff_hist"]
    if len(hist)!=256 or sum(hist)!=n:raise ValueError("invalid alpha diff histogram")
    if r["alpha_zero"]+r["alpha_full"]+r["alpha_partial"]!=n:raise ValueError("invalid alpha coverage")
    if len(p["max_error"])!=4 or len(p["mean_error"])!=4:raise ValueError("invalid channel stats")
    b["textures"]+=1;b["pixels"]+=n;b["exact"]+=bool(p["exact"]);b["different"]+=not p["exact"]
    b["alpha_exact"]+=hist[0]==n;b["alpha_different"]+=hist[0]!=n
    b["rgb_different"]+=any(x>0 for x in p["max_error"][:3])
    for k in ("different_pixels","visible_different_pixels"):b[k]+=p[k]
    for k in ("alpha_zero","alpha_full","alpha_partial"):b[k]+=r[k]
    for i,v in enumerate(hist):b["alpha_diff_hist"][i]+=v
    for i in range(4):
        b["sum_abs"][i]+=p["mean_error"][i]*n;b["max_error"][i]=max(b["max_error"][i],p["max_error"][i])

def finish(b):
    b["mean_absolute_error"]=[v/max(b["pixels"],1) for v in b.pop("sum_abs")]
    b["hidden_only_different_pixels"]=b["different_pixels"]-b["visible_different_pixels"]
    return b

def summarize(path):
    formats=defaultdict(bucket);selectors=defaultdict(bucket);seen=set();duplicates=defaultdict(list)
    for line in path.open(encoding="utf-8"):
        if not line.strip():continue
        r=json.loads(line); key=r["asset_id"]
        if key in seen:raise ValueError("duplicate asset id: "+key)
        seen.add(key);fmt=r["format_raw"];sel=",".join(map(str,r["component_selectors"]))
        add(formats[fmt],r);add(selectors[fmt+"/"+sel],r)
        duplicates[(r["width"],r["height"],r["rgba_sha256"])].append(key)
    out=dict(expected=sum(EXPECTED.values()),recorded=len(seen),
        coverage={k:dict(expected=v,recorded=formats[k]["textures"],missing=v-formats[k]["textures"]) for k,v in EXPECTED.items()},
        formats={k:finish(v) for k,v in formats.items()},selectors={k:finish(v) for k,v in selectors.items()},
        duplicate_groups=sum(len(v)>1 for v in duplicates.values()),unique_pixel_keys=len(duplicates),
        duplicate_extra_assets=sum(max(0,len(v)-1) for v in duplicates.values()),
        note="Counts only successfully recorded dual-decode rows; consult upstream errors.json for failed or unsupported resources.")
    return out
if __name__=="__main__":
    p=argparse.ArgumentParser();p.add_argument("input",type=Path);p.add_argument("--out",type=Path,required=True);a=p.parse_args()
    r=summarize(a.input);a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(r,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in r.items() if k not in ("formats","selectors")},indent=2))
