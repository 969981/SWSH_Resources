#!/usr/bin/env python3
"""Read-only SWSH image audit; metadata and candidate joins, not a pixel decoder."""
import argparse
import csv
import hashlib
import json
import re
import struct
from collections import Counter
from pathlib import Path

VERSION = "0.1.0"
CAT = Path("Unpack/v1.3.2/catalog")

def digest(data):
    return hashlib.sha256(data).hexdigest()

def checked(data, off, size):
    if off < 0 or size < 0 or off + size > len(data):
        raise ValueError(f"out of bounds: {off:#x}+{size:#x}/{len(data):#x}")
    return data[off:off+size]

def num(data, off, fmt, endian="<"):
    return struct.unpack(endian+fmt, checked(data, off, struct.calcsize(fmt)))[0]

def endian_at(data, off):
    return {b"\xff\xfe":"<", b"\xfe\xff":">"}[checked(data, off, 2)]

def bntx(data):
    if checked(data, 0, 4) != b"BNTX" or checked(data, 0x20, 4) != b"NX  ":
        raise ValueError("unsupported BNTX header")
    e = endian_at(data, 0xc)
    declared = num(data, 0x1c, "I", e)
    if declared != len(data):
        raise ValueError("BNTX length mismatch")
    count = num(data, 0x24, "I", e)
    table = num(data, 0x28, "Q", e)
    checked(data, table, 8*count)
    out = []
    for i in range(count):
        p = num(data, table+8*i, "Q", e)
        if checked(data, p, 4) != b"BRTI":
            raise ValueError("invalid BRTI pointer")
        checked(data,p,0x68)
        name_at = num(data,p+0x60,"Q",e)
        length = num(data,name_at,"H",e)
        name = checked(data,name_at+2,length).decode("utf-8")
        if checked(data,name_at+2+length,1) != b"\0":
            raise ValueError("unterminated BRTI name")
        w,h,d = (num(data,p+x,"I",e) for x in (0x24,0x28,0x2c))
        mips = num(data,p+0x16,"H",e)
        if not all((w,h,d,mips)):
            raise ValueError("invalid dimensions or mips")
        out.append(dict(texture_index=i, texture_name=name, brti_offset=p,
            width=w,height=h,depth=d, mip_count=mips,
            format_raw=f"0x{num(data,p+0x1c,'I',e):08x}",
            tile_mode_raw=num(data,p+0x12,"H",e),
            array_count_raw=num(data,p+0x30,"I",e),
            layout_raw=f"0x{num(data,p+0x34,'I',e):08x}",
            image_size_raw=num(data,p+0x50,"I",e),
            color_space=None,alpha_mode=None,rgba_sha256=None,
            evidence_status="HEADER_VERIFIED"))
    return out

def sarc(data):
    if checked(data,0,4)!=b"SARC":
        raise ValueError("not SARC")
    e=endian_at(data,6)
    header=num(data,4,"H",e)
    size=num(data,8,"I",e)
    base=num(data,12,"I",e)
    if size!=len(data) or base>size or checked(data,header,4)!=b"SFAT":
        raise ValueError("bad SARC header")
    sfat_size=num(data,header+4,"H",e)
    count=num(data,header+6,"H",e)
    nodes=header+sfat_size
    sfnt=nodes+16*count
    if checked(data,sfnt,4)!=b"SFNT":
        raise ValueError("no SFNT")
    strings=sfnt+num(data,sfnt+4,"H",e)
    if strings>base:
        raise ValueError("invalid name table")
    for i in range(count):
        p=nodes+16*i
        h,flags,start,end=(num(data,p+j,"I",e) for j in (0,4,8,12))
        name=None
        if flags>>24:
            loc=strings+(flags&0xffffff)*4
            if not strings<=loc<base:
                raise ValueError("invalid name offset")
            stop=data.find(b"\0",loc,base)
            if stop<0:
                raise ValueError("unterminated member name")
            name=data[loc:stop].decode("utf-8",errors="replace")
        if end<start:
            raise ValueError("negative member size")
        yield i,name,f"{h:08x}",checked(data,base+start,end-start)

def pokemon_map(data, names):
    if len(data)%8:
        raise ValueError("pokecaplist length not divisible by eight")
    rows=[]
    for i,(species,form,g,reserved,variant) in enumerate(struct.iter_unpack("<HHHBB",data)):
        token={0:"s",1:"m",2:"f",3:"n"}.get(g)
        name=(f"poke_icon_{species:04d}_{form:02d}{token}_n"+("_g" if variant else "")+".bntx"
              if token is not None and reserved==0 and variant in (0,1) else None)
        rows.append(dict(record_index=i,record_offset=i*8,species_token=species,
            form_token=form,gender_raw=g,gender_token=token,reserved_raw=reserved,
            variant_raw=variant,filename=name,filename_match=name in names,
            species_id=None,form_id=None,gender=None,shiny=None,gigantamax=None,
            evidence_status="FILENAME_MATCH" if name in names else "UNKNOWN"))
    return rows

def item_map(items,names):
    def icon(n):
        name=f"item_{n:04d}.bntx"
        return name if name in names else None
    return [dict(item_id=int(r["item_id"]),item_sprite=int(r["item_sprite"]),
        id_filename=icon(int(r["item_id"])),sprite_filename=icon(int(r["item_sprite"])),
        pouch_raw=int(r["pouch"]),group_type_raw=int(r["group_type"]),
        group_index_raw=int(r["group_index"]),possible_placeholder=r["possible_placeholder"],
        ball_candidate=int(r["pouch"])==1 and int(r["group_type"])==1,
        resolved_filename=None,evidence_status="CANDIDATE") for r in items]

def readcsv(path):
    with path.open(encoding="utf-8-sig",newline="") as f:
        return list(csv.DictReader(f))

def audit(root,out):
    inventory=readcsv(root/CAT/"image_source_inventory.csv")
    if len({r["source_path"] for r in inventory})!=len(inventory):
        raise ValueError("duplicate source path")
    textures=[]; members=[]; sources=[]; errors=[]
    for r in inventory:
        path=r["source_path"]
        p=root/path
        s=dict(source_path=path,category=r["category"],container_type=r["container_type"],
            game="SWSH",version="1.3.2",edition="sword",source_commit=r["source_commit"],
            git_blob_sha1=r["git_blob_sha1"],source_sha256=None,status="INDEXED_ONLY")
        sources.append(s)
        try:
            if not p.is_file():
                raise FileNotFoundError(path)
            data=p.read_bytes()
            s["source_sha256"]=digest(data)
            blob=hashlib.sha1(f"blob {len(data)}\0".encode()+data).hexdigest()
            if len(data)!=int(r["size_bytes"]) or blob!=r["git_blob_sha1"]:
                raise ValueError("source inventory identity mismatch")
            s["status"]="SOURCE_PRESENT"
            def inspect(payload, chain):
                magic=payload[:4]
                if magic==b"BNTX":
                    for t in bntx(payload):
                        textures.append(dict(**{k:s[k] for k in ("game","version","edition","source_path","source_sha256","source_commit","git_blob_sha1")},
                            category=s["category"],member_chain=chain,member_sha256=digest(payload),
                            asset_id=f"swsh:1.3.2:{path}:{'/'.join(str(m['index']) for m in chain)}:{t['texture_index']}",**t))
                elif magic==b"SARC":
                    if len(chain)>=8:
                        raise ValueError("container depth limit")
                    for i,name,h,part in sarc(payload):
                        member=dict(index=i,name=name,name_hash=h)
                        c=chain+[member]
                        members.append(dict(source_path=path,member_chain=c,size_bytes=len(part),
                            member_sha256=digest(part),magic_hex=part[:4].hex(),
                            kind="FLYT" if part[:4]==b"FLYT" else "BNTX" if part[:4]==b"BNTX" else "SARC" if part[:4]==b"SARC" else "OTHER"))
                        try:
                            inspect(part,c)
                        except (ValueError,KeyError,UnicodeError,struct.error) as exc:
                            errors.append(dict(source_path=path,member_chain=c,error=str(exc)))
                elif not chain:
                    raise ValueError(f"unsupported root magic {magic.hex()}")
            before=len(errors)
            inspect(data,[])
            s["status"]="PARSED" if len(errors)==before else "PARTIAL"
        except (OSError,ValueError,KeyError,UnicodeError,struct.error) as exc:
            s["status"]="FAILED" if p.is_file() else "INDEXED_ONLY"
            errors.append(dict(source_path=path,error=str(exc)))
    bycat=lambda c:{Path(r["source_path"]).name for r in inventory if r["category"]==c and r["source_path"].endswith(".bntx")}
    pn=bycat("icon_pokemon"); it=bycat("icon_item")
    cap=root/"v1.3.2/1/bin/appli/icon_pokemon/pokecaplist.bin"
    cap_data=cap.read_bytes()
    poke=pokemon_map(cap_data,pn)
    items=item_map(readcsv(root/CAT/"item_properties.csv"),it)
    used={r["filename"] for r in poke if r["filename_match"]}
    sprites={r["sprite_filename"] for r in items if r["sprite_filename"]}
    ids={r["id_filename"] for r in items if r["id_filename"]}
    summary=dict(parser_version=VERSION,source_count=len(sources),source_status=dict(Counter(s["status"] for s in sources)),
        texture_count=len(textures),member_count=len(members),member_kinds=dict(Counter(m["kind"] for m in members)),
        texture_formats=dict(Counter(t["format_raw"] for t in textures)),
        error_count=len(errors),pokecaplist_sha256=digest(cap_data),pokemon_records=len(poke),
        pokemon_matches=sum(r["filename_match"] for r in poke),pokemon_unique_matches=len(used),
        pokemon_unindexed=sorted(pn-used),item_records=len(items),item_id_matches=sum(bool(r["id_filename"]) for r in items),
        item_sprite_matches=sum(bool(r["sprite_filename"]) for r in items),item_unique_sprites=len(sprites),
        item_unreferenced_by_sprite=sorted(it-sprites),item_unreferenced_by_id=sorted(it-ids),
        ball_candidates=sum(r["ball_candidate"] for r in items),pixel_decoded=0,runtime_verified=0)
    out.mkdir(parents=True,exist_ok=True)
    for key,rows in dict(sources=sources,textures=textures,arc_members=members,errors=errors,
                         pokemon_icons=poke,item_icons=items,ball_candidates=[r for r in items if r["ball_candidate"]]).items():
        with (out/(key+".jsonl")).open("w",encoding="utf-8") as f:
            for row in rows:
                f.write(json.dumps(row,ensure_ascii=False,sort_keys=True)+"\n")
    (out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    return 1 if errors else 0

if __name__=="__main__":
    ap=argparse.ArgumentParser()
    ap.add_argument("--root",type=Path,default=Path("."))
    ap.add_argument("--out",type=Path,default=Path("artifacts/swsh-image-audit"))
    args=ap.parse_args()
    if not args.out.resolve().is_relative_to((args.root/"artifacts").resolve()):
        ap.error("output must be inside repository artifacts/")
    raise SystemExit(audit(args.root,args.out))
