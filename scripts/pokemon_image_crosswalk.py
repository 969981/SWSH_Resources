#!/usr/bin/env python3
"""PokemonImageResources cross-game pixel index. No source image writes."""
import argparse,csv,hashlib,json,re,subprocess
from collections import Counter,defaultdict
from pathlib import Path

PROFILE="RGBA8_ROW_MAJOR_NO_TRANSFER_PRESERVE_TRANSPARENT_RGB_V1"
SHA=re.compile(r"^[0-9a-f]{64}$")
def sha(b):return hashlib.sha256(b).hexdigest()
def rows(path):
    with path.open(encoding="utf-8-sig") as f:
        for n,line in enumerate(f,1):
            if line.strip(): yield json.loads(line)
def write(path,items):
    with path.open("w",encoding="utf-8") as f:
        for r in items:f.write(json.dumps(r,ensure_ascii=False,separators=(",",":"))+"\n")
def report(path,x):
    path.write_text(json.dumps(x,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
def pixel_key(r):
    h=r.get("rgba_sha256")
    w,hgt=r.get("width"),r.get("height")
    if not isinstance(h,str) or not SHA.fullmatch(h) or not isinstance(w,int) or not isinstance(hgt,int) or min(w,hgt)<=0:
        raise ValueError("missing or invalid pixel evidence")
    return (r["profile"],w,hgt,h)
def home_scan(root,out):
    from PIL import Image
    root=root.resolve()
    commit=subprocess.check_output(["git","-C",str(root),"rev-parse","HEAD"],text=True).strip()
    listing=subprocess.check_output(["git","-C",str(root),"ls-tree","-rz","HEAD","--","HomeImageResources"])
    out.mkdir(parents=True,exist_ok=True)
    found=[];errors=[]; cache={}
    for entry in listing.split(b"\0"):
        if not entry:continue
        meta,name=entry.split(b"\t",1); mode,typ,blob=meta.decode().split()
        path=name.decode("utf-8")
        if not path.lower().endswith(".png"):continue
        try:
            data=(root/path).read_bytes()
            if hashlib.sha1(f"blob {len(data)}\0".encode()+data).hexdigest()!=blob:
                raise ValueError("Git blob identity mismatch")
            if blob not in cache:
                import io
                with Image.open(io.BytesIO(data)) as im:
                    im.load()
                    if im.format!="PNG":raise ValueError("not PNG")
                    if im.n_frames!=1:raise ValueError("animated PNG not supported")
                    rgba=im.convert("RGBA")
                    w,h=rgba.size; raw=rgba.tobytes(); hist=rgba.getchannel("A").histogram()
                    visual=bytearray(raw)
                    for i in range(0,len(raw),4):
                        if raw[i+3]==0:visual[i:i+3]=b"\0\0\0"
                    cache[blob]=dict(width=w,height=h,rgba_sha256=sha(raw),
                        visible_rgba_sha256=sha(visual),png_sha256=sha(data),
                        alpha_zero=hist[0],alpha_full=hist[255],alpha_partial=sum(hist[1:255]),
                        png_color_metadata=sorted(k for k in im.info if k in ("icc_profile","gamma","srgb","transparency")))
            found.append(dict(game="HOME",version="4.1.0",edition="switch_or_package",
                asset_id="home:4.1.0:package:"+path,source_path=path,source_commit=commit,
                git_blob_sha1=blob,profile=PROFILE,mip=0,layer=0,
                evidence_status="PACKAGE_PNG_OBSERVED",source_decode_parity="UNKNOWN",**cache[blob]))
        except Exception as e:errors.append(dict(path=path,error=str(e)))
    write(out/"home_pixels.jsonl",found);write(out/"home_errors.jsonl",errors)
    groups=defaultdict(list)
    for r in found:groups[pixel_key(r)].append(r["asset_id"])
    dup=[dict(profile=k[0],width=k[1],height=k[2],rgba_sha256=k[3],assets=v) for k,v in groups.items() if len(v)>1]
    report(out/"home_duplicates.json",dup)
    s=dict(commit=commit,decoded=len(found),errors=len(errors),unique_blobs=len(cache),
        unique_rgba=len(groups),duplicate_groups=len(dup),duplicate_extra=sum(len(x["assets"])-1 for x in dup),
        evidence="Existing package PNG bytes; not independent native BNTX decode")
    report(out/"home_summary.json",s);print(json.dumps(s,indent=2))
    return bool(errors or not found)
def adapt(game,r,commit):
    if game=="SWSH":
        status="DUAL_PIXEL_EXACT" if r.get("parity",{}).get("exact") else "DUAL_PIXEL_DIFFERENT"
        if r.get("coverage")!="mip0_layer0" or r.get("color_space")!="UNORM_NO_TRANSFER_ASSUMED":
            raise ValueError("unsupported SWSH profile")
        key=r["asset_id"];source=r["source_path"]
        source_commit=r.get("source_commit")
        version="1.3.2"
    elif game=="ZA":
        if r.get("decode_status")!="DECODED":return None
        if r.get("format_code") not in ("0x2001","0x2006") or r.get("mip_count")!=1 or r.get("array_count")!=1 or r.get("channels")!=[2,3,4,5]:
            raise ValueError("ZA decode profile not supported")
        status="SINGLE_DECODER_OBSERVED";key=f"za:2.0.2:{r['path']}:{r['index']}";source=r["path"]
        source_commit=commit;version="2.0.2"
    else:
        if r.get("profile")!=PROFILE:raise ValueError("HOME profile mismatch")
        status=r["evidence_status"];key=r["asset_id"];source=r["source_path"]
        source_commit=r["source_commit"];version="4.1.0"
    out=dict(game=game,version=version,asset_id=key,source_path=source,source_commit=source_commit,
        source_sha256=r.get("source_sha256"),git_blob_sha1=r.get("git_blob_sha1",r.get("source_blob")),
        texture_name=r.get("texture_name",r.get("name")),member_chain=r.get("member_chain"),
        texture_index=r.get("texture_index",r.get("index")),profile=PROFILE,mip=0,layer=0,
        width=r["width"],height=r["height"],rgba_sha256=r["rgba_sha256"],
        evidence_status=status,color_transfer="NONE_APPLIED",native_semantics="UNKNOWN",
        alpha_zero=r.get("alpha_zero"),alpha_full=r.get("alpha_full",r.get("alpha_opaque")),
        alpha_partial=r.get("alpha_partial"))
    pixel_key(out)
    return out
def join(inputs,out):
    out.mkdir(parents=True,exist_ok=True)
    data=[]; errors=[]; seen=set(); counts=Counter(); skip=Counter()
    for game,path,commit in inputs:
        for r in rows(path):
            try:
                v=adapt(game,r,commit)
                if v is None:skip[game]+=1;continue
                if v["asset_id"] in seen:raise ValueError("duplicate asset_id")
                seen.add(v["asset_id"]);data.append(v);counts[game]+=1
            except Exception as e:errors.append(dict(game=game,source=r.get("source_path",r.get("path")),error=str(e)))
    groups=defaultdict(list)
    for r in data:groups[pixel_key(r)].append(r)
    within=[];cross=[]
    for k,rs in groups.items():
        if len(rs)<2:continue
        games=Counter(r["game"] for r in rs)
        g=dict(profile=k[0],width=k[1],height=k[2],rgba_sha256=k[3],games=dict(games),
            assets=[dict(asset_id=r["asset_id"],evidence_status=r["evidence_status"]) for r in rs])
        if any(n>1 for n in games.values()):within.append(g)
        if len(games)>1:cross.append(g)
    write(out/"pixel_assets.jsonl",data)
    report(out/"within_game_duplicates.json",within)
    report(out/"cross_game_observed_matches.json",cross)
    report(out/"errors.json",errors)
    s=dict(input_games=[x[0] for x in inputs],counts=dict(counts),skipped=dict(skip),errors=len(errors),
           unique_keys=len(groups),within_groups=len(within),cross_game_observed_groups=len(cross),
           strict_cross_game_native_verified_groups=None,
           scope="Observed RGBA byte equality only; not validated native mapping or renderer equivalence")
    report(out/"summary.json",s);print(json.dumps(s,indent=2))
    return bool(errors or not data)
def main():
    p=argparse.ArgumentParser();sub=p.add_subparsers(dest="cmd",required=True)
    h=sub.add_parser("home-scan");h.add_argument("--root",type=Path,required=True);h.add_argument("--out",type=Path,required=True)
    j=sub.add_parser("join");j.add_argument("--swsh",type=Path);j.add_argument("--home",type=Path);j.add_argument("--za",type=Path);j.add_argument("--za-commit");j.add_argument("--out",type=Path,required=True)
    a=p.parse_args()
    if a.cmd=="home-scan":return home_scan(a.root,a.out)
    if a.za and not a.za_commit:p.error("--za-commit required with --za")
    inputs=[(game,path,commit) for game,path,commit in [("SWSH",a.swsh,None),("HOME",a.home,None),("ZA",a.za,a.za_commit)] if path]
    if not inputs:p.error("at least one input required")
    return join(inputs,a.out)
if __name__=="__main__":raise SystemExit(main())
