#!/usr/bin/env python3
"""Native FLAN evidence and PRMB registry. No GPU rendering or saved-ID guesses."""
import argparse,hashlib,json,math,re,sqlite3,struct,shutil
from collections import Counter,defaultdict
from pathlib import Path
from swsh_image_resource_core import read,write
from swsh_model_prmb_audit import sections,fnv64
from swsh_image_resource_audit import sarc
from swsh_image_package import flyt
from swsh_native_image_mapping import BASE

def flan(data):
    e="<" if data[4:6]==b"\xff\xfe" else ">"
    def n(b,p,f):
        if p<0 or p+struct.calcsize(e+f)>len(b):raise ValueError("FLAN bounds")
        return struct.unpack_from(e+f,b,p)[0]
    def st(b,p,end=None):
        end=len(b) if end is None else end
        if not 0<=p<end<=len(b):raise ValueError("FLAN string bounds")
        z=b.find(b"\0",p,end)
        if z<0:raise ValueError("FLAN unterminated string")
        return b[p:z].decode("utf8",errors="replace")
    if data[:4]!=b"FLAN" or n(data,12,"I")!=len(data):raise ValueError("FLAN header")
    result=dict(version=data[8:12].hex(),tracks=[],textures=[],groups=[])
    for tag,off,b in sections(data):
        if tag=="pat1":
            result.update(animation=st(b,n(b,12,"I")),order=n(b,8,"H"),
                start=n(b,24,"h"),end=n(b,26,"h"),
                groups=[st(b,n(b,16,"I")+i*28,n(b,16,"I")+(i+1)*28) for i in range(n(b,10,"H"))])
        elif tag=="pai1":
            result.update(frames=n(b,8,"H"),loop=bool(n(b,10,"B")))
            textures=[st(b,20+n(b,20+i*4,"I")) for i in range(n(b,12,"H"))]
            result["textures"]=textures
            table=n(b,16,"I")
            for i in range(n(b,14,"H")):
                p=n(b,table+i*4,"I")
                name=st(b,p,p+28);target=n(b,p+29,"B")
                for j in range(n(b,p+28,"B")):
                    q=p+n(b,p+32+j*4,"I")+(4 if target==2 else 0)
                    kind=b[q:q+4].decode("ascii")
                    for k in range(n(b,q+4,"B")):
                        z=q+n(b,q+8+4*k,"I")
                        index,channel,curve=[n(b,z+l,"B") for l in range(3)]
                        count=n(b,z+4,"H");key=z+n(b,z+8,"I")
                        r=dict(target=name,target_kind=target,tag=kind,index=index,channel=channel,curve=curve,key_count=count,offset=off+z,keys=[])
                        if curve in (1,2):
                            stride=8 if curve==1 else 12
                            for l in range(count):
                                t=key+l*stride;frame=n(b,t,"f")
                                if not math.isfinite(frame):raise ValueError("nonfinite frame")
                                if curve==1:
                                    val=n(b,t+4,"H");item=dict(frame=frame,value=val,tail=n(b,t+6,"H"))
                                    if kind=="FLTP":
                                        item["texture_name"]=textures[val] if val<len(textures) else None
                                else:
                                    val,slope=n(b,t+4,"f"),n(b,t+8,"f")
                                    if not all(map(math.isfinite,(val,slope))):raise ValueError("nonfinite key")
                                    item=dict(frame=frame,value=val,slope=slope)
                                r["keys"].append(item)
                        else:r["status"]="UNINTERPRETED_CURVE"
                        result["tracks"].append(r)
    return result

def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--model-audit",type=Path,required=True);p.add_argument("--core",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("artifacts/swsh-animation-registry"));a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):p.error("output must be under artifacts/")
    a.out.mkdir(parents=True,exist_ok=True)
    base=a.root/BASE/"appli/pokebox/bin";animations=[];layouts=[];errors=[]
    for f in sorted(base.glob("*.arc")):
        if f.name.startswith("pokebox_top_"):continue
        for i,name,h,b in sarc(f.read_bytes()):
            if b[:4] not in (b"FLAN",b"FLYT"):continue
            source=dict(source_path=f.relative_to(a.root).as_posix(),member_index=i,member_name=name,member_sha256=hashlib.sha256(b).hexdigest())
            try:
                if b[:4]==b"FLAN":animations.append(dict(**source,**flan(b)))
                else:
                    r=flyt(b)
                    for pane in r["panes"]:layouts.append(dict(**source,**pane))
            except Exception as e:errors.append(dict(**source,error=str(e)))
    bg=[r for r in animations if re.fullmatch(r"bg_(?:default|\d{2})",r.get("animation",""))]
    marking=[r for r in animations if r.get("animation","").startswith("marking_")]

    # Frame-zero evidence only. Don't interpolate or assume save enum ordering.
    recipes=[]
    for r in bg:
        visible=[t["target"] for t in r["tracks"] if t["tag"]=="FLVI" and any(k["frame"]==0 and k["value"]==1 for k in t["keys"])]
        direct=[dict(target=t["target"],texture=k.get("texture_name")) for t in r["tracks"] if t["tag"]=="FLTP" and t["target"] in visible for k in t["keys"] if k["frame"]==0]
        static=[dict(member_index=p["member_index"],pane=p["pane"],material=p["material"],texture_names=p["texture_names"],uvs=p["uvs"]) for p in layouts if p["source_path"]==r["source_path"] and p["pane"] in visible]
        recipes.append(dict(animation=r["animation"],source_path=r["source_path"],member_index=r["member_index"],visible=visible,direct_frame_zero=direct,static_layout_candidates=static,wallpaper_id=None,
            status="FRAME_ZERO_DIRECT" if direct else "STATIC_PANE_REQUIRED" if visible else "FOUR_BACKGROUND_PANES_HIDDEN"))
    write(a.out/"wallpaper_recipes.jsonl",recipes)
    print("WALLPAPER_RECIPE_SUMMARY",json.dumps([dict(animation=r["animation"],visible=r["visible"],direct=r["direct_frame_zero"],static=[dict(member_index=p["member_index"],pane=p["pane"],texture_names=p["texture_names"]) for p in r["static_layout_candidates"]],status=r["status"]) for r in recipes],ensure_ascii=False))

    registry=defaultdict(list)
    # Only exact hashes of names with independent ELF evidence are labelled confirmed.
    known={f"{fnv64(s):016x}":s for s in ["ribbon_table","showNum","imageName","imageName2"]}
    # Other labels are hash guesses, never schema proof.
    candidates={f"{fnv64(s):016x}":s for s in ["name","nameHash","infoHash","titleHash","message","image","texture","textureName","texturePath","thumbnail","thumbnailName","filePath","fileName","id","index","type","nameLabel","infoLabel","anotherName","unlockFlag","bg1_texture_list","bg2_texture_list","frame_texture_list","gloss_texture_list","flag","showFlag"]}
    tables=read(a.model_audit/"prmb_tables.jsonl")
    for t in tables:
        for s in t["schemas"]:
            for field in s["fields"]:
                registry[field["hash"]].append(dict(path=t["path"],schema_hash=s["hash"],type_hash=field["type_hash"]))
    reg=[dict(hash=h,name=known.get(h),name_candidate=candidates.get(h),evidence="ELF_LITERAL_HASH" if h in known else "HASH_CANDIDATE" if h in candidates else "UNKNOWN",occurrences=occ) for h,occ in sorted(registry.items())]
    dest=a.out/"resources.sqlite"
    if dest.exists():raise ValueError("refuse overwrite")
    shutil.copyfile(a.core/"resources.sqlite",dest)
    db=sqlite3.connect(dest);db.execute("PRAGMA foreign_keys=ON")
    db.executescript("""CREATE TABLE model_catalog(catalog TEXT,row_id INTEGER,species_id INTEGER,form_id INTEGER,payload TEXT NOT NULL,PRIMARY KEY(catalog,row_id));
CREATE INDEX model_species ON model_catalog(species_id,form_id);
CREATE TABLE model_icon_links(filename TEXT PRIMARY KEY,payload TEXT NOT NULL);
CREATE TABLE prmb_schema_fields(hash TEXT PRIMARY KEY,payload TEXT NOT NULL);
CREATE TABLE prmb_image_strings(path TEXT,value_index INTEGER,payload TEXT NOT NULL,PRIMARY KEY(path,value_index));
CREATE TABLE box_animation(source_path TEXT,member_index INTEGER,animation TEXT,payload TEXT NOT NULL,PRIMARY KEY(source_path,member_index));
CREATE INDEX box_animation_name ON box_animation(animation);
""")
    def js(x):return json.dumps(x,ensure_ascii=False,separators=(",",":"))
    models=read(a.model_audit/"models.jsonl");links=read(a.model_audit/"model_icon_links.jsonl");strings=read(a.model_audit/"prmb_strings.jsonl")
    db.executemany("INSERT INTO model_catalog VALUES(?,?,?,?,?)",[(r["catalog"],r["row"],r["species_id"],r["form_id"],js(r)) for r in models])
    db.executemany("INSERT INTO model_icon_links VALUES(?,?)",[(r["filename"],js(r)) for r in links])
    db.executemany("INSERT INTO prmb_schema_fields VALUES(?,?)",[(r["hash"],js(r)) for r in reg])
    db.executemany("INSERT INTO prmb_image_strings VALUES(?,?,?)",[(r["path"],r["value_index"],js(r)) for r in strings if r["asset_ids"]])
    db.executemany("INSERT INTO box_animation VALUES(?,?,?,?)",[(r["source_path"],r["member_index"],r.get("animation"),js(r)) for r in animations])
    db.commit()
    if db.execute("PRAGMA integrity_check").fetchone()[0]!="ok" or db.execute("PRAGMA foreign_key_check").fetchone():raise ValueError("DB integrity")
    db.close()
    for name,rs in [("animations",animations),("wallpaper_animations",bg),("marking_animations",marking),("layout_panes",layouts),("prmb_schema_registry",reg),("errors",errors)]:write(a.out/(name+".jsonl"),rs)
    tags=Counter(t["tag"] for r in animations for t in r["tracks"])
    summary=dict(animations=len(animations),tracks=dict(tags),wallpaper_animations=[dict(animation=r["animation"],member_index=r["member_index"],source_path=r["source_path"],textures=r["textures"],tracks=[t for t in r["tracks"] if t["tag"] in ("FLTP","FLMC","FLVI","FLTS")]) for r in bg],
        marking_animations=[dict(animation=r["animation"],member_index=r["member_index"],source_path=r["source_path"],tracks=[t for t in r["tracks"] if t["tag"] in ("FLTP","FLMC")]) for r in marking],
        schema_fields=len(reg),schema_confirmed=sum(r["name"] is not None for r in reg),prmb_image_links=sum(bool(r["asset_ids"]) for r in strings),models=len(models),model_icon_links=len(links),errors=errors,sqlite_integrity="PASS",runtime_verified=0)
    (a.out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
    # Print compact verification and relevant wallpaper/marking evidence without flooding logs.
    print(json.dumps({k:v for k,v in summary.items() if k not in ("wallpaper_animations","marking_animations")},ensure_ascii=False,indent=2))
    for r in bg:
        print("WALL",json.dumps(dict(name=r["animation"],member=r["member_index"],textures=r["textures"],tracks=[t for t in r["tracks"] if t["tag"] in ("FLTP","FLVI","FLMC")]),ensure_ascii=False))
    return int(bool(errors))
if __name__=="__main__":raise SystemExit(main())
