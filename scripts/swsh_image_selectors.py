#!/usr/bin/env python3
"""Native text evidence, gender token selection and wallpaper candidates."""
import argparse,hashlib,json,re,struct
from collections import Counter,defaultdict
from pathlib import Path
from swsh_native_image_mapping import ahtb,personal,match_pokemon,BASE,LANGS
from swsh_image_resource_audit import sarc,bntx
ENUMS=["ChampionKalos","ChampionG3","ChampionSinnoh","BestFriends","Training","BattlerSkillful","BattlerExpert","Effort","Alert","Shock","Downcast","Careless","Relax","Snooze","Smile","Gorgeous","Royal","GorgeousRoyal","Artist","Footprint","Record","Legend","Country","National","Earth","World","Classic","Premier","Event","Birthday","Special","Souvenir","Wishing","ChampionBattle","ChampionRegional","ChampionNational","ChampionWorld","CountMemoryContest","CountMemoryBattle","ChampionG6Hoenn","ContestStar","MasterCoolness","MasterBeauty","MasterCuteness","MasterCleverness","MasterToughness","ChampionAlola","BattleRoyale","BattleTreeGreat","BattleTreeMaster","ChampionGalar","TowerMaster","MasterRank","MarkLunchtime","MarkSleepyTime","MarkDusk","MarkDawn","MarkCloudy","MarkRainy","MarkStormy","MarkSnowy","MarkBlizzard","MarkDry","MarkSandstorm","MarkMisty","MarkDestiny","MarkFishing","MarkCurry","MarkUncommon","MarkRare","MarkRowdy","MarkAbsentMinded","MarkJittery","MarkExcited","MarkCharismatic","MarkCalmness","MarkIntense","MarkZonedOut","MarkJoyful","MarkAngry","MarkSmiley","MarkTeary","MarkUpbeat","MarkPeeved","MarkIntellectual","MarkFerocious","MarkCrafty","MarkScowling","MarkKindly","MarkFlustered","MarkPumpedUp","MarkZeroEnergy","MarkPrideful","MarkUnsure","MarkHumble","MarkThorny","MarkVigor","MarkSlump"]
ENUM_REF="https://github.com/kwsch/PKHeX/blob/604891b2a167c57d89890603d53272f9ea5cfd26/PKHeX.Core/Ribbons/RibbonIndex.cs"
def sha(b):return hashlib.sha256(b).hexdigest()
def read_jsonl(p):
    return [json.loads(x) for x in p.read_text(encoding="utf-8").splitlines() if x]
def write(p,rows):
    with p.open("w",encoding="utf-8") as f:
        for x in rows:f.write(json.dumps(x,ensure_ascii=False,separators=(",",":"))+"\n")
def decode_dat(b):
    if len(b)<20:raise ValueError("short DAT")
    sections,n,size,key,base=struct.unpack_from("<HHIII",b)
    if sections!=1 or key!=0 or base!=16 or base+size!=len(b) or struct.unpack_from("<I",b,base)[0]!=size:
        raise ValueError("invalid DAT header")
    rows=[]
    for i in range(n):
        off,count,flags=struct.unpack_from("<IHH",b,base+4+8*i)
        if off<4+8*n or off+count*2>size:raise ValueError("invalid DAT line extent")
        k=(0x7c89+i*0x2983)&65535
        units=[]
        for j in range(count):
            units.append(struct.unpack_from("<H",b,base+off+2*j)[0]^k)
            k=((k<<3)|(k>>13))&65535
        if not units or units[-1]!=0:raise ValueError("missing line terminator")
        rows.append(dict(index=i,flags=flags,offset=base+off,word_count=count,utf16_units=units))
    return rows
def display(units):
    # Keep every original word; render control codes as explicit placeholders.
    # Ruby base and furigana are both retained rather than guessed.
    out=[];i=0
    while i<len(units):
        u=units[i];i+=1
        if u==0:break
        if u!=16:
            out.append(chr({0xe07f:0x202f,0xe08d:0x2026,0xe08e:0x2642,0xe08f:0x2640}.get(u,u)));continue
        if i+2>len(units):raise ValueError("truncated control")
        n,op=units[i:i+2];i+=2
        if op==0xff01:
            if i+2>len(units):raise ValueError("truncated ruby")
            a,b=units[i:i+2];i+=2
            if i+2*a+b>len(units):raise ValueError("ruby bounds")
            x=display(units[i:i+a]);y=display(units[i+a:i+a+b]);z=display(units[i+a+b:i+2*a+b]);i+=2*a+b
            out.append("{"+x+"|"+y+("|"+z if x!=z else "")+"}");continue
        k=max(0,n-1)
        if op in (0xbe02,0xbdff):k=1
        if op in (0xbe00,0xbe01):k=0
        if i+k>len(units):raise ValueError("control bounds")
        args=units[i:i+k];i+=k
        out.append({0xbe00:"\\r",0xbe01:"\\c"}.get(op,"[VAR "+f"{op:04X}"+(":"+",".join(f"{v:04X}" for v in args) if args else "")+"]"))
    return "".join(out)
def messages(common,stem):
    db=(common/(stem+".dat")).read_bytes();tb=(common/(stem+".tbl")).read_bytes()
    rows=decode_dat(db);keys=ahtb(tb)
    if len(keys)!=len(rows)+1:raise ValueError("DAT/TBL count mismatch")
    out={}
    for key,rec in keys.items():
        i=rec["ordinal"]
        if i==len(rows):
            if not key.lower().endswith("_max"):raise ValueError("unexpected sentinel")
            continue
        r=rows[i];out[key]=dict(key=key,key_hash_bytes=rec["hash_bytes"],**r,text=display(r["utf16_units"]),dat_sha256=sha(db),tbl_sha256=sha(tb))
    return out
def gender_kind(x):
    return {0:"male_only",254:"female_only",255:"genderless"}.get(x,"mixed")
def main():
    p=argparse.ArgumentParser();p.add_argument("--root",type=Path,default=Path("."));p.add_argument("--package",type=Path,required=True);p.add_argument("--out",type=Path,default=Path("artifacts/swsh-image-selectors"))
    a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):p.error("output must be under artifacts/")
    a.out.mkdir(parents=True,exist_ok=True)
    base=a.root/BASE;assets=read_jsonl(a.package/"assets.jsonl")
    texts=[];ribbons=[];walls=[];types=[];counts=Counter();langdata={}
    for lang in LANGS:
        common=base/"message"/lang/"common"
        msg={s:messages(common,s) for s in ("ribbon","box","typename")}
        langdata[lang]=msg
        for stem,rows in msg.items():
            counts[stem+":"+lang]=len(rows)
            texts.extend(dict(language=lang,table=stem,**r) for r in rows.values())
        for n in list(range(1,73))+list(range(75,101)):
            idx=n-1 if n<=72 else n-3
            keys=[f"mes_{x}_{n:03d}" for x in ("ribbon_name","ribbon_info","another_name")]
            entries=[msg["ribbon"][k] for k in keys]
            ar=[x["asset_id"] for x in assets if x["category"]=="ribbons_marks" and re.fullmatch(rf"ribbon_0*{n}(?:_[ab])?\.bntx",Path(x["source_path"]).name)]
            if not ar:raise ValueError("ribbon missing asset")
            ribbons.append(dict(language=lang,resource_number=n,save_ribbon_index_candidate=idx,
                external_enum=ENUMS[idx],kind_candidate="mark" if ENUMS[idx].startswith("Mark") else "ribbon",
                name=entries[0]["text"],description=entries[1]["text"],title=entries[2]["text"],
                message_keys=keys,asset_ids=ar,evidence="NATIVE_DAT_TBL_PLUS_EXTERNAL_ENUM_ORDER",runtime_verified=False))
        for n in range(18):
            key=f"TYPENAME_{n if n<9 else n+1:03d}"
            types.append(dict(language=lang,type_id_candidate=n,key=key,text=msg["typename"][key]["text"]))
        for n in range(1,20):
            key=f"msg_ui_box_wallpaper_{n:02d}"
            walls.append(dict(language=lang,menu_token=n,key=key,text=msg["box"][key]["text"],
                wallpaper_id=None,status="NATIVE_MENU_LABEL"))
    names={Path(r["source_path"]).name for r in assets if r["category"]=="pokemon"}
    raw=(base/"pml/personal/personal_total.bin").read_bytes();cap=(base/"appli/icon_pokemon/pokecaplist.bin").read_bytes()
    poke=match_pokemon(cap,personal(raw),names);gender=[];groups=defaultdict(list);stats=Counter()
    for r in poke:
        if r["status"]!="STATIC_PERSONAL_FORM_MATCH":continue
        c=r["personal_candidates"][0];k=gender_kind(c["gender_ratio_raw"]);g=r["gender_raw"]
        stats[f"{k}/{g}"]+=1
        groups[(r["species_id"],r["form_id"],r["variant_raw"])].append(g)
        ok=g in {"mixed":(0,1,2),"male_only":(1,),"female_only":(2,),"genderless":(3,)}[k]
        gender.append(dict(species_id=r["species_id"],form_id=r["form_id"],gender_ratio_raw=c["gender_ratio_raw"],
            gender_kind=k,gender_token_raw=g,variant_raw=r["variant_raw"],filename=r["filename"],
            compatible=ok,status="STATIC_GENDER_RATIO_MATCH",runtime_verified=False))
    wallpapers=[dict(asset_id=r["asset_id"],texture_name=r["texture_name"],source_path=r["source_path"],width=r["width"],height=r["height"],
        rgba_sha256=r["rgba_sha256"],number_tokens=re.findall(r"\d+",r["texture_name"]),
        wallpaper_id=None,status="TEXTURE_NAME_CANDIDATE") for r in assets if r["category"]=="wallpapers_candidate"]
    # Inspect dedicated menu archive too, including textures which are not wallpapers.
    source=base/"appli/pokebox/bin/pokebox_wallpaper.arc"
    menu=[]
    for idx,name,h,part in sarc(source.read_bytes()):
        if part[:4]==b"BNTX":
            for r in bntx(part):menu.append(dict(member_index=idx,member_name=name,**r))
    for name,rows in (("messages",texts),("ribbon_mark_links",ribbons),("pokemon_gender",gender),("wallpaper_menu",walls),("wallpaper_candidates",wallpapers),("wallpaper_menu_textures",menu),("type_names",types)):
        write(a.out/(name+".jsonl"),rows)
    summary=dict(message_counts=dict(counts),ribbon_links=len(ribbons),ribbon_index_candidates=len(ENUMS),
        gender_rows=len(gender),gender_incompatible=sum(not r["compatible"] for r in gender),gender_patterns=dict(stats),
        gender_group_patterns=dict(Counter(",".join(map(str,sorted(v))) for v in groups.values())),
        wallpaper_labels=len(walls),wallpaper_texture_candidates=len(wallpapers),wallpaper_menu_textures=len(menu),
        wallpaper_unique_names=sorted({r["texture_name"] for r in wallpapers}),
        type_names=len(types),native_runtime_verified=0,external_enum_source=ENUM_REF)
    (a.out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    return int(len(ribbons)!=882 or len(gender)!=882 or any(not r["compatible"] for r in gender) or len(ENUMS)!=98)
if __name__=="__main__":raise SystemExit(main())
