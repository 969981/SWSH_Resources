#!/usr/bin/env python3
"""Read the actual native ribbon table and build evidence-aware resource lookup."""
import argparse,hashlib,json,re,struct,sqlite3
from collections import Counter,defaultdict
from pathlib import Path
from swsh_native_image_mapping import ahtb,LANGS,BASE
from swsh_image_selectors import messages,ENUMS
class FB:
    def __init__(self,b):self.b=b
    def n(self,p,f):
        if p<0 or p+struct.calcsize("<"+f)>len(self.b):raise ValueError("FB bounds")
        return struct.unpack_from("<"+f,self.b,p)[0]
    def field(self,p,i):
        v=p-self.n(p,"i");size=self.n(v,"H")
        if size<4 or size%2 or v+size>len(self.b):raise ValueError("bad vtable")
        if 4+2*i>=size:return None
        off=self.n(v+4+2*i,"H")
        if not off:return None
        if off>=self.n(v+2,"H"):raise ValueError("bad field offset")
        return p+off
    def scalar(self,p,i,f,default=0):
        q=self.field(p,i);return default if q is None else self.n(q,f)
    def target(self,p):
        if p is None:raise ValueError("missing offset")
        t=p+self.n(p,"I")
        if t>=len(self.b):raise ValueError("bad target")
        return t
    def vector(self,p,i,tables=False):
        v=self.target(self.field(p,i));n=self.n(v,"I")
        if v+4+4*n>len(self.b):raise ValueError("vector extent")
        return [self.target(v+4+4*j) if tables else self.n(v+4+4*j,"i") for j in range(n)]
    def string(self,p,i):
        t=self.target(self.field(p,i));n=self.n(t,"I")
        if t+4+n>=len(self.b) or self.b[t+4+n]!=0:raise ValueError("bad string")
        return self.b[t+4:t+4+n].decode("utf8")
def ribbon_table(data):
    f=FB(data);root=f.n(0,"I")
    nodes=f.vector(root,0,True);values=f.vector(root,1,True);schemas=f.vector(root,2,True)
    # Schema field order is independently verified against ELF string hash literals.
    expected=[[0xc0f8c07cd4198abc,0x5302ac66647b5161,0x88dc44fcbd8b3009,
               0x8b53ac733fe99b0f,0x49c1a18b0d9eda08,0x18d9f05bd8bd60a6],
              [0xb6927b080e8dafc0,0x2a939633d19cfb16]]
    actual=[[f.scalar(x,0,"Q") for x in f.vector(s,1,True)] for s in schemas]
    if actual!=expected:raise ValueError("unknown ribbon schema")
    children=f.vector(nodes[0],1)
    if len(children)!=2:raise ValueError("root shape")
    rows=f.vector(nodes[children[1]],1)
    def value(idx):
        v=values[idx];kind=f.scalar(v,0,"B");t=f.target(f.field(v,1))
        if kind==1:return f.scalar(t,0,"i")
        if kind==3:return f.string(t,0)
        if kind==4:return f.scalar(t,0,"Q")
        raise ValueError("unknown union type")
    out=[]
    for i,node in enumerate(rows):
        kids=f.vector(nodes[node],1)
        if len(kids)!=6:raise ValueError("row shape")
        v=[value(f.scalar(nodes[k],2,"i")) for k in kids]
        if not isinstance(v[0],int) or not all(isinstance(x,str) for x in v[1:3]):raise ValueError("row types")
        out.append(dict(ribbon_index=i,show_num=v[0],image_name=v[1],image_name2=v[2],
            name_hash=f"{v[3]:016x}",description_hash=f"{v[4]:016x}",title_hash=f"{v[5]:016x}",
            node_index=node,node_offset=nodes[node],source_sha256=hashlib.sha256(data).hexdigest()))
    if len(out)!=98:raise ValueError("expected 98 ribbon rows")
    return out
def select_ribbon(row,count=None):
    i=row["ribbon_index"]
    threshold={37:40,38:8}.get(i)
    if threshold is not None and count is None:
        return dict(status="COUNT_REQUIRED",images=[row["image_name"],row["image_name2"]])
    return dict(status="ELF_STATIC_RULE",images=[row["image_name2"] if threshold is not None and count==threshold else row["image_name"]])
def read(p):return [json.loads(s) for s in p.read_text(encoding="utf-8").splitlines() if s]
def write(p,rs):
    with p.open("w",encoding="utf-8") as f:
        for r in rs:f.write(json.dumps(r,ensure_ascii=False,separators=(",",":"))+"\n")
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--package",type=Path,required=True);p.add_argument("--selectors",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("artifacts/SWSHImageResourceCore"));a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):p.error("output must be under artifacts/")
    a.out.mkdir(parents=True,exist_ok=True);base=a.root/BASE
    assets=read(a.package/"assets.jsonl");byname={Path(r["source_path"]).stem:r for r in assets if r["category"]=="ribbons_marks"}
    rows=ribbon_table((base/"appli/ribbon/data_table/status_ribbon.prmb").read_bytes())
    translations=[];mismatches=[]
    for lang in LANGS:
        common=base/"message"/lang/"common"
        msg=messages(common,"ribbon")
        byhash={int.from_bytes(bytes.fromhex(v["key_hash_bytes"]),"little"):v for v in msg.values()}
        for r in rows:
            i=r["ribbon_index"];rr=[byhash[int(r[k],16)] for k in ("name_hash","description_hash","title_hash")]
            primary=byname[r["image_name"]];alternate=byname[r["image_name2"]]
            old=int(rr[0]["key"].rsplit("_",1)[1])
            if lang=="Simp_Chinese" and not re.match(rf"ribbon_0*{old}(?:_[ab])?$",r["image_name"]):mismatches.append(i)
            translations.append(dict(**r,language=lang,external_enum=ENUMS[i],name=rr[0]["text"],description=rr[1]["text"],title=rr[2]["text"],
                message_keys=[x["key"] for x in rr],message_dat_sha256=rr[0]["dat_sha256"],message_tbl_sha256=rr[0]["tbl_sha256"],
                primary_asset_id=primary["asset_id"],alternate_asset_id=alternate["asset_id"],
                count_threshold={37:40,38:8}.get(i),evidence="PRMB_TABLE_AND_ELF_STATIC",runtime_verified=False))
    gender=read(a.selectors/"pokemon_gender.jsonl")
    variants=[r for r in gender if r["variant_raw"]==1]
    standard={(r["species_id"],r["form_id"],r["gender_token_raw"]) for r in gender if r["variant_raw"]==0}
    for r in variants:r["normal_counterpart"]=(r["species_id"],r["form_id"],r["gender_token_raw"]) in standard
    walls=read(a.selectors/"wallpaper_candidates.jsonl");wgroups=defaultdict(list)
    for r in walls:wgroups[r["texture_name"]].append(r)
    wallgroups=[dict(texture_name=k,asset_ids=[x["asset_id"] for x in v],unique_pixel_keys=len({(x["width"],x["height"],x["rgba_sha256"]) for x in v}),
        texture_number=int(m[1]) if (m:=re.fullmatch(r"pokebox_bg_(\d+)\^[ro]",k)) else None,
        wallpaper_id=None,status="NATIVE_TEXTURE_NAME_ONLY") for k,v in sorted(wgroups.items())]
    # Build local read-only SQL query database. No original image bytes included.
    dbpath=a.out/"resources.sqlite"
    if dbpath.exists():raise ValueError("refuse to overwrite database")
    db=sqlite3.connect(dbpath)
    db.executescript("""CREATE TABLE assets(asset_id TEXT PRIMARY KEY, category TEXT, source_path TEXT, texture_name TEXT, rgba_sha256 TEXT, payload TEXT NOT NULL);
CREATE TABLE ribbon(ribbon_index INTEGER, language TEXT, name TEXT, description TEXT, title TEXT, primary_asset_id TEXT REFERENCES assets, alternate_asset_id TEXT REFERENCES assets, count_threshold INTEGER, payload TEXT NOT NULL, PRIMARY KEY(ribbon_index,language));
CREATE TABLE pokemon(species_id INTEGER, form_id INTEGER, gender_token INTEGER, variant_raw INTEGER, asset_id TEXT REFERENCES assets, payload TEXT NOT NULL, PRIMARY KEY(species_id,form_id,gender_token,variant_raw));
CREATE TABLE wallpaper_texture(texture_name TEXT PRIMARY KEY,payload TEXT NOT NULL);
CREATE TABLE wallpaper_menu(language TEXT,menu_token INTEGER,payload TEXT NOT NULL,PRIMARY KEY(language,menu_token));
CREATE TABLE type_names(language TEXT,type_id INTEGER,payload TEXT NOT NULL,PRIMARY KEY(language,type_id));
CREATE TABLE semantic_links(kind TEXT,asset_id TEXT REFERENCES assets,payload TEXT NOT NULL);
CREATE INDEX semantic_kind ON semantic_links(kind);
CREATE INDEX category_idx ON assets(category);
""")
    db.execute("PRAGMA foreign_keys=ON")
    def js(x):return json.dumps(x,ensure_ascii=False,separators=(",",":"))
    db.executemany("INSERT INTO assets VALUES(?,?,?,?,?,?)",[(r["asset_id"],r["category"],r["source_path"],r["texture_name"],r["rgba_sha256"],js(r)) for r in assets])
    db.executemany("INSERT INTO ribbon VALUES(?,?,?,?,?,?,?,?,?)",[(r["ribbon_index"],r["language"],r["name"],r["description"],r["title"],r["primary_asset_id"],r["alternate_asset_id"],r["count_threshold"],js(r)) for r in translations])
    names={Path(r["source_path"]).name:r["asset_id"] for r in assets if r["category"]=="pokemon"}
    db.executemany("INSERT INTO pokemon VALUES(?,?,?,?,?,?)",[(r["species_id"],r["form_id"],r["gender_token_raw"],r["variant_raw"],names[r["filename"]],js(r)) for r in gender])
    db.executemany("INSERT INTO wallpaper_texture VALUES(?,?)",[(r["texture_name"],js(r)) for r in wallgroups])
    db.executemany("INSERT INTO wallpaper_menu VALUES(?,?,?)",[(r["language"],r["menu_token"],js(r)) for r in read(a.selectors/"wallpaper_menu.jsonl")])
    db.executemany("INSERT INTO type_names VALUES(?,?,?)",[(r["language"],r["type_id_candidate"],js(r)) for r in read(a.selectors/"type_names.jsonl")])
    db.executemany("INSERT INTO semantic_links VALUES(?,?,?)",[(r["kind"],r["asset_id"],js(r)) for r in read(a.package/"semantic_links.jsonl") if r["kind"] not in ("ribbon_mark_candidate",)])
    db.commit()
    if db.execute("PRAGMA integrity_check").fetchone()[0]!="ok" or db.execute("PRAGMA foreign_key_check").fetchone():raise ValueError("database integrity")
    db.close()
    write(a.out/"ribbon_native.jsonl",translations);write(a.out/"pokemon_g_variants.jsonl",variants);write(a.out/"wallpaper_texture_groups.jsonl",wallgroups)
    summary=dict(assets=len(assets),ribbon_rows=len(rows),ribbon_localized=len(translations),ribbon_old_mapping_mismatches=mismatches,
        variant_g_rows=len(variants),variant_g_species=len({r["species_id"] for r in variants}),variant_g_normal_counterparts=sum(r["normal_counterpart"] for r in variants),
        variant_g_special_species=[r["species_id"] for r in variants if r["species_id"]==890],
        wallpaper_texture_names=len(wallgroups),wallpaper_main_names=sum(r["texture_number"] is not None for r in wallgroups),
        wallpaper_pixel_groups=[dict(name=r["texture_name"],assets=len(r["asset_ids"]),unique_pixel_keys=r["unique_pixel_keys"]) for r in wallgroups],
        native_runtime_verified=0,sqlite_integrity="PASS",status="STATIC_LOOKUP_NOT_RUNTIME_COMPLETE")
    (a.out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
if __name__=="__main__":main()
