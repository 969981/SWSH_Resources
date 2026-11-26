#!/usr/bin/env python3
"""Static native resource joins, distinct from runtime selector proof."""
import argparse, hashlib, json, re, struct
from collections import Counter,defaultdict
from pathlib import Path
from swsh_image_resource_audit import pokemon_map,readcsv
BASE=Path("v1.3.2/1/bin")
LANGS=["English","French","German","Italian","JPN","Korean","Simp_Chinese","Spanish","Trad_Chinese"]
BALL_IDS=list(range(1,17))+list(range(492,500))+[576,851]
BALL_NAMES=["Master","Ultra","Great","Poke","Safari","Net","Dive","Nest","Repeat","Timer","Luxury","Premier","Dusk","Heal","Quick","Cherish","Fast","Level","Lure","Heavy","Love","Friend","Moon","Sport","Dream","Beast"]
def u16(b,o):return struct.unpack_from("<H",b,o)[0]
def sha(b):return hashlib.sha256(b).hexdigest()
def ahtb(b):
    if len(b)<8 or b[:4]!=b"AHTB":raise ValueError("invalid AHTB")
    n=struct.unpack_from("<I",b,4)[0];p=8;out={}
    for i in range(n):
        if p+10>len(b):raise ValueError("truncated AHTB entry")
        key_hash=b[p:p+8].hex();length=u16(b,p+8);p+=10
        if not length or p+length>len(b) or b[p+length-1]!=0:raise ValueError("invalid AHTB string")
        key=b[p:p+length-1].decode("utf-8");p+=length
        if key in out:raise ValueError("duplicate AHTB key")
        out[key]=dict(ordinal=i,hash_bytes=key_hash)
    if p!=len(b):raise ValueError("trailing AHTB bytes")
    return out
def personal(data):
    if len(data)!=1192*0xb0:raise ValueError("unexpected personal length")
    lookup=defaultdict(list)
    for species in range(1,899):
        base=species*0xb0
        if not data[base+0x21]&0x40:continue
        ptr=u16(data,base+0x1e);count=data[base+0x20]
        for form in range(count):
            idx=ptr+form-1 if form and ptr else species
            if idx>=1192:raise ValueError("form record outside table")
            p=idx*0xb0;model=u16(data,p+0x4c)
            lookup[model].append(dict(species_id=species,form_id=form,personal_index=idx,
                model_id=model,gender_ratio_raw=data[p+0x12],present=bool(data[p+0x21]&0x40)))
    return lookup
def match_pokemon(cap,lookup,names):
    out=[]
    for r in pokemon_map(cap,names):
        m,f=r["species_token"],r["form_token"]
        candidates=[x for x in lookup.get(m,[]) if x["form_id"]==f] if m else []
        unique=candidates[0] if len(candidates)==1 else {}
        out.append(dict(**{k:v for k,v in r.items() if k not in ("species_id","form_id","evidence_status")},
            species_id=unique.get("species_id"),form_id=unique.get("form_id"),personal_index=unique.get("personal_index"),
            personal_candidates=candidates,status="SPECIAL_RESOURCE" if not m else "STATIC_PERSONAL_FORM_MATCH" if unique else "UNRESOLVED",
            runtime_verified=False))
    return out
def write(path,rows):
    with path.open("w",encoding="utf-8") as f:
        for r in rows:f.write(json.dumps(r,ensure_ascii=False,separators=(",",":"))+"\n")
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--package",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("artifacts/swsh-native-image-map"));a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):p.error("output must be under artifacts/")
    a.out.mkdir(parents=True,exist_ok=True);base=a.root/BASE
    assets=[json.loads(x) for x in (a.package/"assets.jsonl").read_text(encoding="utf-8").splitlines()]
    def files(cat):return {Path(r["source_path"]).name:r for r in assets if r["category"]==cat}
    pn=files("pokemon");it=files("items");rb=files("ribbons_marks")
    raw=(base/"pml/personal/personal_total.bin").read_bytes();cap=(base/"appli/icon_pokemon/pokecaplist.bin").read_bytes()
    pokemon=match_pokemon(cap,personal(raw),set(pn))
    for r in pokemon:
        asset=pn.get(r["filename"]);r["asset_id"]=asset["asset_id"] if asset else None
    extra=[]
    for name,r in pn.items():
        if name in {x["filename"] for x in pokemon}:continue
        m=re.fullmatch(r"poke_icon_(\d+)_(\d+)[smfn]_n(?:_g)?\.bntx",name)
        candidates=[x for x in personal(raw).get(int(m[1]),[]) if x["form_id"]==int(m[2])] if m else []
        extra.append(dict(filename=name,asset_id=r["asset_id"],candidates=candidates,status="UNINDEXED_FILENAME_CANDIDATE"))
    items=readcsv(a.root/"Unpack/v1.3.2/catalog/item_properties.csv")
    data=(base/"pml/item/item.dat").read_bytes()
    balls=[]
    for r in items:
        if int(r["pouch"])!=1 or int(r["group_type"])!=1:continue
        i=int(r["item_id"]);physical=u16(data,0x44+2*i)
        pos=int(r["record_offset"])
        if physical!=int(r["physical_record_index"]) or (data[pos+0x11]&15)!=1 or u16(data,pos+0x1a)!=int(r["item_sprite"]):
            raise ValueError(f"item raw crosscheck mismatch: {i}")
        group=int(r["group_index"]);sprite=int(r["item_sprite"])
        asset=it.get(f"item_{sprite:04d}.bntx")
        expected=BALL_IDS[group] if 0<=group<len(BALL_IDS) else None
        if expected!=i:raise ValueError("ball enumeration crosscheck mismatch")
        balls.append(dict(item_id=i,group_index_raw=group,ball_id_candidate=group+1,
            english_enum=BALL_NAMES[group],item_sprite=sprite,asset_id=asset["asset_id"] if asset else None,
            status="NATIVE_GROUP_PLUS_EXTERNAL_ENUM_MATCH",runtime_verified=False))
    ribbon=[];types=[];langstats={}
    for lang in LANGS:
        common=base/"message"/lang/"common"
        rt=(common/"ribbon.tbl").read_bytes();tt=(common/"typename.tbl").read_bytes()
        rk,tk=ahtb(rt),ahtb(tt)
        langstats[lang]=dict(ribbon_entries=len(rk),type_entries=len(tk),ribbon_sha256=sha(rt),type_sha256=sha(tt))
        for name,r in rb.items():
            m=re.fullmatch(r"ribbon_(\d+)(?:_([a-z]))?\.bntx",name)
            if not m:continue
            n=int(m[1]);keys=[f"mes_{prefix}_{n:03d}" for prefix in ("ribbon_name","ribbon_info","another_name")]
            ribbon.append(dict(asset_id=r["asset_id"],resource_number=n,variant=m[2],language=lang,
                message_keys=[dict(key=k,**rk[k]) for k in keys if k in rk],
                status="NATIVE_MESSAGE_KEY_MATCH" if all(k in rk for k in keys) else "UNRESOLVED",
                ribbon_id=None,mark_id=None))
        # Resource TypeID token is 0..17, typename labels skip old index 009.
        for n in range(18):
            token=n if n<9 else n+1;k=f"TYPENAME_{token:03d}"
            types.append(dict(language=lang,type_resource_token=n,message_key=k,
                key_evidence=tk.get(k),type_id_candidate=n,status="MESSAGE_KEY_ORDER_CANDIDATE"))
    for name,rows in [("pokemon",pokemon),("pokemon_unindexed",extra),("balls",balls),("ribbon_message_links",ribbon),("types_message_candidates",types)]:write(a.out/(name+".jsonl"),rows)
    s=dict(pokemon_status=dict(Counter(r["status"] for r in pokemon)),pokemon_distinct_species=len({r["species_id"] for r in pokemon if r["species_id"] is not None}),
        pokemon_model_token_diff=sum(r["species_id"] is not None and r["species_id"]!=r["species_token"] for r in pokemon),
        pokemon_unindexed=len(extra),ball_rows=len(balls),ball_asset_links=sum(bool(r["asset_id"]) for r in balls),
        ribbon_status=dict(Counter(r["status"] for r in ribbon)),ribbon_resource_numbers=len({r["resource_number"] for r in ribbon}),
        type_rows=len(types),language_tables=langstats,personal_sha256=sha(raw),caplist_sha256=sha(cap),item_sha256=sha(data),runtime_verified=0)
    (a.out/"summary.json").write_text(json.dumps(s,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(s,indent=2))
    return int(len(pokemon)!=884 or sum(r["status"]=="STATIC_PERSONAL_FORM_MATCH" for r in pokemon)!=882 or len(balls)!=26 or any(not r["asset_id"] for r in balls) or any(r["status"]!="NATIVE_MESSAGE_KEY_MATCH" for r in ribbon))
if __name__=="__main__":raise SystemExit(main())
