#!/usr/bin/env python3
"""Single-pane material preview, not native GPU equivalence."""
import argparse,hashlib,json,struct
from collections import Counter,defaultdict
from pathlib import Path
import numpy as np
from swsh_animation_registry import flan
from swsh_model_prmb_audit import sections
from swsh_image_resource_audit import sarc,bntx
from swsh_image_package import flyt
from swsh_texture_decoder import decode,encode_png
from swsh_image_resource_core import read,write
BASE=Path("v1.3.2/1/bin/appli/pokebox/bin")
PROFILES=("UNORM_ENDPOINT_LERP","REFERENCE_WHITE_GAMMA22")
def sha(b):return hashlib.sha256(b).hexdigest()
def materials(data):
    if data[8:12].hex()!="00000009":raise ValueError("FLYT version")
    e="<" if data[4:6]==b"\xff\xfe" else ">"
    def n(b,p,f):return struct.unpack_from(e+f,b,p)[0]
    out={};mat=[];panes=flyt(data)["panes"]
    for tag,offset,b in sections(data):
        if tag=="mat1":
            for i in range(n(b,8,"H")):
                p=n(b,12+4*i,"I");flags=n(b,p+28,"I")
                mat.append(dict(flags=flags,black=list(b[p+36:p+40]),white=list(b[p+40:p+44]),sampler=list(b[p+46:p+48]) if flags&3 else []))
        elif tag=="pic1":
            name=b[12:36].split(b"\0",1)[0].decode("utf8",errors="replace")
            p=next(x for x in panes if x["pane"]==name)
            out[name]=dict(**p,**mat[p["material_index"]],alpha=b[10],size=[n(b,76,"f"),n(b,80,"f")],vertices=np.frombuffer(b[84:100],dtype=np.uint8).reshape(4,4).tolist())
    return out
def wrap_idx(x,n,mode):
    if mode==0:return np.clip(x,0,n-1)
    if mode==1:return x%n
    if mode==2:
        t=x%(2*n);return np.where(t<n,t,2*n-1-t)
    raise ValueError("wrap")
def sample(tex,w,h,uv,tr,flags):
    tx,ty,rot,sx,sy=tr
    if abs(rot)>1e-6 or not np.isfinite(tr+uv).all() or any((f>>2)&3!=1 for f in flags):raise ValueError("unsupported sampler")
    x=(np.arange(w,dtype=np.float32)[None,:]+.5)/w;y=(np.arange(h,dtype=np.float32)[:,None]+.5)/h
    u=((1-y)*((1-x)*uv[0]+x*uv[2])+y*((1-x)*uv[4]+x*uv[6]))*sx+tx
    v=((1-y)*((1-x)*uv[1]+x*uv[3])+y*((1-x)*uv[5]+x*uv[7]))*sy+ty
    th,tw=tex.shape[:2];u=u*tw-.5;v=v*th-.5;i=np.floor(u).astype(np.int64);j=np.floor(v).astype(np.int64)
    a=(u-i)[...,None];b=(v-j)[...,None];wu,wv=flags[0]&3,flags[1]&3
    i0,i1=wrap_idx(i,tw,wu),wrap_idx(i+1,tw,wu);j0,j1=wrap_idx(j,th,wv),wrap_idx(j+1,th,wv)
    return ((1-b)*((1-a)*tex[j0,i0]+a*tex[j0,i1])+b*((1-a)*tex[j1,i0]+a*tex[j1,i1]))/255
def shade(t,black,white,vertices,alpha,profile):
    black=np.array(black,dtype=float)/255;white=np.array(white,dtype=float)/255
    if profile==PROFILES[1]:white[:3]=white[:3]**(1/2.2)
    elif profile!=PROFILES[0]:raise ValueError("profile")
    if not all(v==vertices[0] for v in vertices):raise ValueError("nonuniform vertices")
    out=np.empty_like(t);out[...,:3]=black[:3]*(1-t[...,:3])+white[:3]*t[...,:3];out[...,3]=t[...,3]*white[3]*alpha/255
    return np.clip(np.floor(out*np.array(vertices[0])+.5),0,255).astype(np.uint8)
def at_zero(mat,anim):
    m=dict(mat,black=list(mat["black"]),white=list(mat["white"]),texture=mat["texture_names"][0],transform=list(mat["material"]["transforms"][0]))
    for t in anim["tracks"]:
        if t["target"]!=mat["pane"]:continue
        keys=[k for k in t["keys"] if k["frame"]==0]
        if not keys:continue
        if len(keys)!=1:raise ValueError("duplicate frame zero")
        k=keys[0]
        if t["tag"]=="FLMC" and t["channel"]<8:m["black" if t["channel"]<4 else "white"][t["channel"]%4]=k["value"]
        elif t["tag"]=="FLTP":
            if t["index"]!=0 or not k.get("texture_name"):raise ValueError("FLTP")
            m["texture"]=k["texture_name"]
        elif t["tag"]=="FLTS":
            if t["index"]!=0 or t["channel"]>=5:raise ValueError("FLTS")
            m["transform"][t["channel"]]=k["value"]
    return m
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--package",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("artifacts/swsh-material-preview"));p.add_argument("--png",action="store_true");a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):p.error("output path")
    a.out.mkdir(parents=True,exist_ok=True);assets=read(a.package/"assets.jsonl");by=defaultdict(list)
    for r in assets:by[r["source_path"],r["texture_name"]].append(r)
    tex={};layout={};anim={};sources={};evidence=[]
    for name,member in (("pokebox_top.arc",96),("pokebox_wallpaper.arc",11)):
        file=a.root/BASE/name;path=file.relative_to(a.root).as_posix();raw=file.read_bytes();sources[name]=path
        if {r["source_sha256"] for r in assets if r["source_path"]==path}!={sha(raw)}:raise ValueError("archive hash")
        for i,_,_,b in sarc(raw):
            if b[:4]==b"BNTX":
                for t in bntx(b):
                    key=(name,t["texture_name"])
                    if key in tex:raise ValueError("ambiguous texture")
                    tex[key]=(b,t)
            elif b[:4]==b"FLYT" and i==member:
                layout[name]=materials(b);evidence.append(dict(source=path,member=i,sha256=sha(b)))
            elif b[:4]==b"FLAN":
                r=flan(b);key=r.get("animation","")
                if (name=="pokebox_top.arc" and key.startswith("bg_")) or (name=="pokebox_wallpaper.arc" and key in ("marking_ptn","marking_red","marking_blue","marking_default")):
                    if (name,key) in anim:raise ValueError("ambiguous animation")
                    anim[name,key]=dict(**r,member=i,sha256=sha(b))
    cache={};recipes=[];renders=[];diffs=[]
    def render(name,label,m,trace):
        if m["flags"]!=0x15 or len(m["uvs"])!=1 or len(m["texture_names"])!=1:raise ValueError("material scope")
        key=(name,m["texture"])
        if key not in cache:
            b,t=tex[key];rgba,_,meta=decode(b,t);matches=by[sources[name],m["texture"]]
            if len(matches)!=1 or matches[0]["rgba_sha256"]!=sha(rgba.tobytes()):raise ValueError("raw pixel hash")
            cache[key]=(rgba,meta,matches[0])
        rgba,meta,asset=cache[key];w,h=map(int,m["size"])
        if not 0<w<=1920 or not 0<h<=1080:raise ValueError("pane size")
        t=sample(rgba,w,h,m["uvs"][0],m["transform"],m["sampler"]);out=[]
        recipes.append(dict(label=label,source=sources[name],texture=m["texture"],asset_id=asset["asset_id"],raw_rgba_sha256=asset["rgba_sha256"],format=meta["format"],selectors=meta["component_selectors"],material=m,trace=trace,runtime_verified=False))
        for profile in PROFILES:
            img=shade(t,m["black"],m["white"],m["vertices"],m["alpha"],profile);out.append(img)
            png=encode_png(img,a.out/"local_png"/profile/(label+".png") if a.png else None)
            renders.append(dict(label=label,profile=profile,width=w,height=h,rgba_sha256=sha(img.tobytes()),png_sha256=sha(png),alpha_zero=int((img[...,3]==0).sum()),alpha_opaque=int((img[...,3]==255).sum()),status="PREVIEW_NOT_NATIVE"))
        d=np.abs(out[0].astype(np.int16)-out[1].astype(np.int16));diffs.append(dict(label=label,changed_pixels=int(np.any(d!=0,axis=2).sum()),max_rgba=d.max(axis=(0,1)).tolist(),mean_rgba=d.mean(axis=(0,1)).tolist()))
    name="pokebox_top.arc"
    for i in range(18):
        label=f"bg_{i:02d}";r=anim[name,label]
        visible=[t["target"] for t in r["tracks"] if t["tag"]=="FLVI" and any(k["frame"]==0 and k["value"]==1 for k in t["keys"])]
        if len(visible)!=1:raise ValueError("visible pane")
        m=at_zero(layout[name][visible[0]],r)
        if not m["texture"].startswith(f"pokebox_bg_{i:02d}^"):raise ValueError("wallpaper texture")
        render(name,label,m,[r["member"],r["sha256"]])
    d=anim[name,"bg_default"]
    if d["textures"] or any(k["value"] for t in d["tracks"] if t["tag"]=="FLVI" for k in t["keys"]):raise ValueError("default")
    name="pokebox_wallpaper.arc";r=anim[name,"marking_ptn"]
    pat=[t for t in r["tracks"] if t["tag"]=="FLTP" and t["target"]=="P_icon_marking_00"]
    if len(pat)!=1 or len(pat[0]["keys"])!=6:raise ValueError("marking pattern")
    for state in ("default","red","blue"):
        c=anim[name,"marking_"+state];m=at_zero(layout[name]["P_icon_marking_00"],c)
        for i,k in enumerate(pat[0]["keys"]):
            if k["frame"]!=i or not k.get("texture_name"):raise ValueError("marking frame")
            render(name,f"marking_{i+1:02d}_{state}",dict(m,texture=k["texture_name"]),[c["member"],c["sha256"],r["member"],r["sha256"]])
    for label,rs in (("recipes",recipes),("renders",renders),("profile_diffs",diffs)):write(a.out/(label+".jsonl"),rs)
    s=dict(recipes=len(recipes),wallpapers=18,markings=18,renders=len(renders),decoded_textures=len(cache),formats=dict(Counter(x[1]["format"] for x in cache.values())),profile_different=sum(x["changed_pixels"]>0 for x in diffs),max_rgba=[max(x["max_rgba"][i] for x in diffs) for i in range(4)],default_status="FOUR_PANES_HIDDEN",layout_evidence=evidence,runtime_verified=0,raw_pixels_verified=True,png_roundtrip_verified=True)
    (a.out/"summary.json").write_text(json.dumps(s,indent=2)+"\n");print(json.dumps(s,indent=2))
if __name__=="__main__":main()
