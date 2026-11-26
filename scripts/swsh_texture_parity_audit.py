#!/usr/bin/env python3
"""SWSHTextureParityAudit: compare independently decoded linear texture blocks."""
import argparse
import hashlib
import json
import math
import struct
from collections import Counter,defaultdict
from pathlib import Path
import numpy as np
import texture2ddecoder as td
import PIL
from swsh_image_resource_audit import CAT, bntx, sarc, readcsv, digest
from swsh_texture_decoder import decode, select_channels, encode_png, VERSION

EXPECTED=15407
def bc2(data,w,h):
    """Independent BC2 scalar reference (four-color mode and explicit 4-bit alpha)."""
    out=np.empty((h,w,4),np.uint8)
    def c565(x):
        r,g,b=(x>>11)&31,(x>>5)&63,x&31
        return ((r<<3)|(r>>2),(g<<2)|(g>>4),(b<<3)|(b>>2))
    offset=0
    for y in range(0,h,4):
        for x in range(0,w,4):
            alpha,c0,c1,bits=struct.unpack_from("<QHHI",data,offset); offset+=16
            p,q=c565(c0),c565(c1)
            colors=[p,q,tuple((2*a+b)//3 for a,b in zip(p,q)),tuple((a+2*b)//3 for a,b in zip(p,q))]
            for j in range(16):
                yy,xx=y+j//4,x+j%4
                if yy<h and xx<w:
                    out[yy,xx]=(*colors[(bits>>(2*j))&3],((alpha>>(4*j))&15)*17)
    return out

def secondary(data,w,h,code):
    if code==0x1b01: return bc2(data,w,h),"scalar-bc2"
    if code==0x0b01:
        return np.frombuffer(bytes(bytearray(data)),np.uint8).reshape(h,w,4),"raw-byte-identity"
    if code==0x0501:
        out=bytearray()
        for (v,) in struct.iter_unpack("<H",data):
            for shift in (0,5,10):
                x=(v>>shift)&31; out.append((x*255+15)//31)
            out.append(255 if v&32768 else 0)
        return np.frombuffer(out,np.uint8).reshape(h,w,4),"scalar-packed-r5g5b5a1"
    funcs={0x1a01:td.decode_bc1,0x1c01:td.decode_bc3,0x1d01:td.decode_bc4,
           0x1e01:td.decode_bc5,0x2001:td.decode_bc7}
    a=np.frombuffer(funcs[code](data,w,h),np.uint8).reshape(h,w,4)[...,[2,1,0,3]].copy()
    if code==0x1d01: a[...,1:3]=0; a[...,3]=255
    if code==0x1e01: a[...,2]=0; a[...,3]=255
    return a,"texture2ddecoder"

def parity(a,b):
    if a.shape!=b.shape: raise ValueError("shape mismatch")
    diff=np.abs(a.astype(np.int16)-b.astype(np.int16))
    flat=diff.reshape(-1,4)
    mse=float(np.mean(flat.astype(np.float64)**2))
    return dict(exact=not bool(diff.any()),different_pixels=int(np.count_nonzero(np.any(diff,axis=2))),
        max_error=flat.max(axis=0).tolist(),mean_error=flat.mean(axis=0).tolist(),
        alpha_diff_hist=np.bincount(flat[:,3],minlength=256).tolist(),
        visible_different_pixels=int(np.count_nonzero(np.any(diff,axis=2)&((a[...,3]>0)|(b[...,3]>0)))),
        psnr=None if mse==0 else 10*math.log10(255**2/mse))

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,default=Path("artifacts/swsh-texture-parity"))
    p.add_argument("--png",action="store_true",help="write PNG locally; never upload them")
    p.add_argument("--verify-png",action="store_true",help="PNG encode/decode in memory")
    a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):
        p.error("output must be under artifacts/")
    a.out.mkdir(parents=True,exist_ok=True)
    counts=Counter(); fmtcounts=defaultdict(Counter); dup=defaultdict(list); errors=[]
    alpha=Counter(); sizes=Counter(); maxerrors=np.zeros(4,dtype=int); alpha_hist=np.zeros(256,dtype=np.int64)
    sum_abs=np.zeros(4,dtype=np.float64); pixels=0
    def record_error(source,chain,t,exc):
        counts["errors"]+=1
        errors.append(dict(source_path=source,member_chain=chain,texture=t,error=str(exc)))
    with (a.out/"pixels.jsonl").open("w",encoding="utf-8") as f:
        def inspect(data,s,chain,source_sha):
            magic=data[:4]
            if magic==b"SARC":
                for i,name,h,part in sarc(data):
                    inspect(part,s,chain+[dict(index=i,name=name,name_hash=h)],source_sha)
            elif magic==b"BNTX":
                for t in bntx(data):
                    counts["textures_seen"]+=1
                    fmtcounts[t["format_raw"]]["seen"]+=1
                    asset=f"swsh:1.3.2:{s['source_path']}:{'/'.join(str(m['index']) for m in chain)}:{t['texture_index']}"
                    try:
                        rgba,linear,meta=decode(data,t)
                        counts["decoded"]+=1; fmtcounts[t["format_raw"]]["decoded"]+=1
                        w,h=meta["width"],meta["height"]
                        rgba_sha=digest(rgba.tobytes())
                        al=rgba[...,3]; pixels_n=w*h
                        zero=int(np.count_nonzero(al==0)); full=int(np.count_nonzero(al==255))
                        alpha_kind="opaque" if full==pixels_n else "transparent" if zero==pixels_n else "binary" if zero+full==pixels_n else "fractional"
                        alpha[alpha_kind]+=1; sizes[f"{w}x{h}"]+=1
                        png_sha=None
                        if a.png or a.verify_png:
                            png=encode_png(rgba,a.out/"png"/(hashlib.sha256(asset.encode()).hexdigest()+".png") if a.png else None)
                            png_sha=digest(png); counts["png_roundtrip"]+=1
                        dup[(w,h,rgba_sha)].append(asset)
                        other,backend=secondary(linear,w,h,int(t["format_raw"],16))
                        other=select_channels(other,meta["component_selectors"])
                        check=parity(rgba,other)
                        counts["compared"]+=1
                        kind="exact" if check["exact"] else "different"
                        counts[kind]+=1; fmtcounts[t["format_raw"]][kind]+=1
                        nonlocal pixels
                        pixels+=pixels_n
                        maxerrors[:]=np.maximum(maxerrors,check["max_error"])
                        alpha_hist[:]+=check["alpha_diff_hist"]
                        sum_abs[:]+=np.asarray(check["mean_error"])*pixels_n
                        row=dict(asset_id=asset,game="SWSH",version="1.3.2",edition="sword",
                            source_path=s["source_path"],source_commit=s["source_commit"],source_sha256=source_sha,
                            member_chain=chain,member_sha256=digest(data),texture_name=t["texture_name"],texture_index=t["texture_index"],
                            rgba_sha256=rgba_sha,png_sha256=png_sha,linear_sha256=digest(linear),
                            alpha_kind=alpha_kind,alpha_zero=zero,alpha_full=full,alpha_partial=pixels_n-zero-full,
                            primary="Pillow-or-packed",secondary=backend,parity=check,**meta)
                        f.write(json.dumps(row,ensure_ascii=False,separators=(",",":"))+"\n")
                    except Exception as exc:
                        record_error(s["source_path"],chain,t,str(exc))
        for s in readcsv(a.root/CAT/"image_source_inventory.csv"):
            try:
                data=(a.root/s["source_path"]).read_bytes()
                blob=hashlib.sha1(f"blob {len(data)}\0".encode()+data).hexdigest()
                if blob!=s["git_blob_sha1"] or len(data)!=int(s["size_bytes"]):
                    raise ValueError("source identity mismatch")
                counts["sources"]+=1
                inspect(data,s,[],digest(data))
            except Exception as exc:
                record_error(s["source_path"],[],None,exc)
    groups=[dict(width=k[0],height=k[1],rgba_sha256=k[2],assets=v) for k,v in dup.items() if len(v)>1]
    summary=dict(version=VERSION,pillow=PIL.__version__,numpy=np.__version__,
        texture2ddecoder=getattr(td,"__version__","1.0.6-pinned"),expected_textures=EXPECTED,counts=dict(counts),
        formats={k:dict(v) for k,v in fmtcounts.items()},alpha=dict(alpha),sizes=dict(sizes),
        duplicate_groups=len(groups),duplicate_extra_assets=sum(len(r["assets"])-1 for r in groups),
        unique_rgba_size_keys=len(dup),max_error=maxerrors.tolist(),mean_error=(sum_abs/max(pixels,1)).tolist(),
        alpha_diff_hist=alpha_hist.tolist(),coverage="mip0_layer0; common deswizzle; no runtime or premultiplication inference",
        exact_parity_gate=counts["compared"]==EXPECTED and counts["different"]==0 and not errors)
    for name,payload in (("summary",summary),("duplicates",groups),("errors",errors)):
        (a.out/(name+".json")).write_text(json.dumps(payload,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({**summary,"sizes":dict(sizes.most_common(15)),"alpha_diff_hist":{str(i):int(x) for i,x in enumerate(alpha_hist) if x}},ensure_ascii=False,indent=2))
    return 1 if errors or counts["compared"]!=EXPECTED or ((a.verify_png or a.png) and counts["png_roundtrip"]!=EXPECTED) else 0
if __name__=="__main__":
    raise SystemExit(main())
