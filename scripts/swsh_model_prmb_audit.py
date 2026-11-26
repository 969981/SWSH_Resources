#!/usr/bin/env python3
"""Read-only model catalogs, PRMB schema inventory and wallpaper layout evidence."""
import argparse,hashlib,json,re,sqlite3
from collections import Counter,defaultdict
from pathlib import Path
from swsh_image_resource_core import FB,read,write
from swsh_native_image_mapping import BASE
from swsh_image_resource_audit import sarc
from swsh_image_package import flyt
def sha(b):return hashlib.sha256(b).hexdigest()
def fnv64(s):
    h=0xcbf29ce484222645
    for b in s.encode("utf8"):h=((h^b)*0x100000001b3)&0xffffffffffffffff
    return h
def models(data,kind):
    f=FB(data);root=f.n(0,"I");version=f.target(f.field(root,0))
    out=[];source_sha=sha(data)
    for i,p in enumerate(f.vector(root,1,True)):
        meta=f.target(f.field(p,0))
        r=dict(catalog=kind,row=i,species_id=f.scalar(meta,0,"H"),form_id=f.scalar(meta,1,"H"),
            model_gender_raw=f.scalar(meta,2,"B"),shiny_raw=f.scalar(meta,3,"B"),
            model_path=f.string(p,1),config_path=f.string(p,2),archive_path=f.string(p,3),
            animations=[dict(name=f.string(t,0),path=f.string(t,1)) for t in f.vector(p,4,True)],
            version=[f.scalar(version,0,"H"),f.scalar(version,1,"H")],table_offset=p,source_sha256=source_sha)
        out.append(r)
    return out
def prmb(data):
    f=FB(data);root=f.n(0,"I")
    nodes=f.vector(root,0,True);values=f.vector(root,1,True);schemas=f.vector(root,2,True)
    schema_rows=[]
    for i,s in enumerate(schemas):
        schema_rows.append(dict(index=i,hash=f"{f.scalar(s,0,'Q'):016x}",fields=[
            dict(hash=f"{f.scalar(x,0,'Q'):016x}",type_hash=f"{f.scalar(x,1,'Q'):016x}") for x in f.vector(s,1,True)]))
    node_rows=[]
    for i,p in enumerate(nodes):
        kids=f.vector(p,1)
        if any(k<0 or k>=len(nodes) for k in kids):raise ValueError("node child out of range")
        node_rows.append(dict(index=i,offset=p,parent_raw=f.scalar(p,0,"i"),children=kids,
            value_raw=f.scalar(p,2,"i"),schema_raw=f.scalar(p,3,"i")))
    val_rows=[]
    for i,p in enumerate(values):
        typ=f.scalar(p,0,"B");t=f.target(f.field(p,1));r=dict(index=i,kind=typ,offset=t)
        if typ==1:r["int32"]=f.scalar(t,0,"i")
        elif typ==3:r["string"]=f.string(t,0)
        elif typ==4:r["hash64"]=f"{f.scalar(t,0,'Q'):016x}"
        else:r["status"]="UNINTERPRETED_UNION"
        val_rows.append(r)
    return dict(schemas=schema_rows,nodes=node_rows,values=val_rows)
def sections(data):
    if data[:4] not in (b"FLYT",b"FLAN"):return []
    endian="<" if data[4:6]==b"\xff\xfe" else ">" if data[4:6]==b"\xfe\xff" else None
    if endian is None:raise ValueError("layout endian")
    import struct
    header=struct.unpack_from(endian+"H",data,6)[0];count=struct.unpack_from(endian+"H",data,16)[0]
    p=header;out=[]
    for _ in range(count):
        k=data[p:p+4].decode("ascii");n=struct.unpack_from(endian+"I",data,p+4)[0]
        if n<8 or p+n>len(data):raise ValueError("layout section bounds")
        out.append((k,p,data[p:p+n]));p+=n
    return out
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--package",type=Path,required=True);p.add_argument("--selectors",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("artifacts/swsh-model-prmb-research"));a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):p.error("output must be under artifacts/")
    a.out.mkdir(parents=True,exist_ok=True);base=a.root/BASE
    rows=[]
    for kind,name in [("normal","poke_resource_table.gfbpmcatalog"),("g","gpoke_resource_table.gfbpmcatalog")]:
        rows.extend(models((base/"pokemon/table"/name).read_bytes(),kind))
    idx=defaultdict(list)
    for r in rows:idx[(r["catalog"],r["species_id"],r["form_id"])].append(r)
    gender=read(a.selectors/"pokemon_gender.jsonl")
    links=[];gforms=set()
    for r in gender:
        k="g" if r["variant_raw"] else "normal";key=(k,r["species_id"],r["form_id"])
        matches=idx[key]
        if k=="g":gforms.add((r["species_id"],r["form_id"]))
        links.append(dict(filename=r["filename"],species_id=r["species_id"],form_id=r["form_id"],gender_token_raw=r["gender_token_raw"],variant_raw=r["variant_raw"],
            model_rows=[x["row"] for x in matches],catalog=k,model_gender_raw_values=sorted({x["model_gender_raw"] for x in matches}),
            shiny_raw_values=sorted({x["shiny_raw"] for x in matches}),status="STATIC_SPECIES_FORM_CATALOG_MATCH" if matches else "NO_EXACT_MODEL_KEY"))
    gextra=[dict(species_id=s,form_id=f,model_rows=[r["row"] for r in rs]) for (k,s,f),rs in idx.items() if k=="g" and (s,f) not in gforms]
    assets=read(a.package/"assets.jsonl")
    byname=defaultdict(set)
    for r in assets:
        byname[r["texture_name"]].add(r["asset_id"])
        byname[Path(r["source_path"]).stem].add(r["asset_id"])
        byname[Path(r["source_path"]).name].add(r["asset_id"])
        rel=r["source_path"].removeprefix("v1.3.2/1/")
        byname[rel].add(r["asset_id"])
    prm=[];prmstrings=[];errors=[];layout=[];ui=[]
    for file in sorted((base/"appli").rglob("*.prmb")):
        b=file.read_bytes();path=file.relative_to(a.root).as_posix()
        try:
            d=prmb(b);prm.append(dict(path=path,sha256=sha(b),**d))
            for r in d["values"]:
                s=r.get("string")
                if s is not None:prmstrings.append(dict(path=path,value_index=r["index"],string=s,asset_ids=sorted(byname.get(s,[])),status="EXACT_NAME_MATCH" if s in byname else "STRING_OBSERVED"))
        except Exception as e:errors.append(dict(path=path,error=str(e)))
    # UIKIT root fields are intentionally structural, not guessed business types.
    for file in sorted((base/"appli/pokebox/bin").glob("uikit_*.bin")):
        b=file.read_bytes();f=FB(b);root=f.n(0,"I");v=root-f.n(root,"i");count=(f.n(v,"H")-4)//2
        fields=[]
        for i in range(count):
            q=f.field(root,i)
            if q is not None:
                r=dict(field=i,offset=q,value_raw=f.n(q,"I"))
                try:
                    t=f.target(q);r.update(offset_target_candidate=t,first_u32=f.n(t,"I"))
                except ValueError:pass
                fields.append(r)
        ui.append(dict(path=file.relative_to(a.root).as_posix(),sha256=sha(b),root=root,fields=fields))
    # Record original section + exact string occurrence, not a claimed material binding.
    for file in sorted((base/"appli/pokebox/bin").glob("*.arc")):
        if file.name.startswith("pokebox_top_"):continue
        for index,name,h,part in sarc(file.read_bytes()):
            if part[:4] not in (b"FLYT",b"FLAN"):continue
            for sec,offset,chunk in sections(part):
                for m in re.finditer(rb"[\x20-\x7e]{4,}\x00",chunk):
                    s=m.group()[:-1].decode("ascii")
                    if re.search(r"wallpaper|pokebox_bg|(^|_)bg(_|$)|FLTP|FLTS",s,re.I):
                        layout.append(dict(path=file.relative_to(a.root).as_posix(),member_index=index,member_name=name,section=sec,offset=offset+m.start(),literal=s,status="SECTION_LITERAL_ONLY"))
    for name,rs in [("models",rows),("model_icon_links",links),("g_model_only_forms",gextra),("prmb_tables",prm),("prmb_strings",prmstrings),("wallpaper_layout_literals",layout),("uikit_root_fields",ui),("errors",errors)]:write(a.out/(name+".jsonl"),rs)
    summary=dict(model_counts=dict(Counter(r["catalog"] for r in rows)),g_species=len({r["species_id"] for r in rows if r["catalog"]=="g"}),
        g_species_forms=len({(r["species_id"],r["form_id"]) for r in rows if r["catalog"]=="g"}),g_icon_links=sum(r["catalog"]=="g" and bool(r["model_rows"]) for r in links),
        g_model_only_forms=gextra,normal_icon_links=sum(r["catalog"]=="normal" and bool(r["model_rows"]) for r in links),
        missing_icon_model_keys=[r["filename"] for r in links if not r["model_rows"]],
        prmb_files=len(prm),prmb_errors=errors,prmb_string_values=len(prmstrings),prmb_asset_name_matches=sum(bool(r["asset_ids"]) for r in prmstrings),
        prmb_image_tables=dict(Counter(r["path"] for r in prmstrings if r["asset_ids"])),layout_literal_count=len(layout),
        wallpaper_literals=sorted({r["literal"] for r in layout})[:100],uikit_files=len(ui),runtime_verified=0)
    (a.out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    return int(summary["model_counts"]!={"normal":1692,"g":86} or summary["g_icon_links"]!=38 or bool(errors))
if __name__=="__main__":raise SystemExit(main())
