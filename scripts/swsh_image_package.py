#!/usr/bin/env python3
"""SWSHImageResources: category index, static semantic links and FLYT UV evidence."""
import argparse,json,math,re,hashlib,struct
from collections import Counter,defaultdict
from pathlib import Path
from swsh_image_resource_audit import CAT,readcsv,bntx,sarc,pokemon_map,item_map,checked,num,endian_at,digest

CATEGORIES={"icon_pokemon":"pokemon","icon_item":"items","icon_ribbon":"ribbons_marks",
 "icon_type":"types","icon_player":"avatars","icon_company":"company_logos","logo_brand":"brand_logos",
 "icon_stamp":"stamps","pokecamp_cooking":"curry","townmap":"maps","trlicence":"trainer_cards",
 "common_bg":"backgrounds","net_bg":"backgrounds"}
def classify(source,name):
    if source=="pokebox" and re.search(r"wallpaper|wall_paper|box_bg|boxbg",name,re.I):
        return "wallpapers_candidate"
    if source=="pokecamp" and re.search(r"curry|cooking",name,re.I):
        return "curry"
    return CATEGORIES.get(source,"ui")
def write(path,rows):
    with path.open("w",encoding="utf-8") as f:
        for r in rows:f.write(json.dumps(r,ensure_ascii=False,separators=(",",":"))+"\n")
def cstr(data,off,stop):
    if not 0<=off<stop<=len(data):raise ValueError("string bounds")
    end=data.find(b"\0",off,stop)
    if end<0:raise ValueError("unterminated name")
    return data[off:end].decode("utf-8",errors="replace")
def flyt(data):
    """Parse version 9 Cafe FLYT sections, not final shader/render semantics."""
    if data[:4]!=b"FLYT":raise ValueError("not FLYT")
    e=endian_at(data,4)
    h=num(data,6,"H",e);size=num(data,12,"I",e);n=num(data,16,"H",e)
    version=data[8:12].hex()
    if size!=len(data) or h<20:raise ValueError("FLYT header mismatch")
    pos=h; sections=[]
    for i in range(n):
        k=checked(data,pos,4).decode("ascii");sz=num(data,pos+4,"I",e)
        if sz<8:raise ValueError("FLYT section too short")
        sections.append((i,k,checked(data,pos,sz)));pos+=sz
    if pos!=size:raise ValueError("FLYT section coverage mismatch")
    if version!="00000009":return dict(version=version,status="UNSUPPORTED_VERSION",sections=[k for _,k,_ in sections],panes=[])
    textures=[];materials=[];panes=[]
    for i,k,s in sections:
        if k=="txl1":
            cnt=num(s,8,"H",e)
            for j in range(cnt):
                ptr=12+num(s,12+4*j,"I",e)
                textures.append(cstr(s,ptr,len(s)))
        if k=="mat1":
            cnt=num(s,8,"H",e)
            offsets=[num(s,12+4*j,"I",e) for j in range(cnt)]
            for j,off in enumerate(offsets):
                end=offsets[j+1] if j+1<cnt else len(s)
                if off+44>end:raise ValueError("material bounds")
                name=checked(s,off,28).split(b"\0",1)[0].decode("utf-8",errors="replace")
                flags=num(s,off+28,"I",e);tc=flags&3;mc=(flags>>2)&3
                if off+44+tc*4+mc*20>end:raise ValueError("material texture map bounds")
                ids=[num(s,off+44+4*m,"h",e) for m in range(tc)]
                transforms=[list(struct.unpack(e+"5f",checked(s,off+44+tc*4+20*m,20))) for m in range(mc)]
                materials.append(dict(name=name,flags=flags,texture_ids=ids,transforms=transforms))
        if k=="pic1":
            if len(s)<104:raise ValueError("pic1 too short")
            name=checked(s,12,24).split(b"\0",1)[0].decode("utf-8",errors="replace")
            mat=num(s,100,"H",e);uv_count=s[102]
            uvs=[list(struct.unpack(e+"8f",checked(s,104+32*m,32))) for m in range(uv_count)]
            if any(not math.isfinite(x) for uv in uvs for x in uv):raise ValueError("nonfinite UV")
            panes.append(dict(section=i,pane=name,material_index=mat,uvs=uvs))
    for p in panes:
        m=materials[p["material_index"]] if p["material_index"]<len(materials) else None
        p["material"]=m;p["texture_names"]=[textures[i] if 0<=i<len(textures) else None for i in m["texture_ids"]] if m else []
    return dict(version=version,status="PARSED",sections=[k for _,k,_ in sections],panes=panes)

def rect(uv,w,h):
    if len(uv)!=8 or not all(0<=x<=1 for x in uv):return None
    x0,y0,x1,y1=uv[0],uv[1],uv[6],uv[7]
    if not (x0<x1 and y0<y1) or any(abs(a-b)>1e-6 for a,b in zip(uv,[x0,y0,x1,y0,x0,y1,x1,y1])):return None
    raw=[x0*w,y0*h,x1*w,y1*h];rounded=[round(x) for x in raw]
    return rounded if all(abs(a-b)<1e-3 for a,b in zip(raw,rounded)) else None

def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--pixels",type=Path,required=True)
    p.add_argument("--out",type=Path,default=Path("artifacts/SWSHImageResources"))
    p.add_argument("--png-dir",type=Path,help="optional local PNGs produced with parity --png; only byte-verified copies")
    p.add_argument("--crop-candidates",action="store_true",help="write raw UV crops only, never rendered pane")
    a=p.parse_args()
    if not a.out.resolve().is_relative_to((a.root/"artifacts").resolve()):p.error("output must be under artifacts/")
    if a.crop_candidates and not a.png_dir:p.error("--crop-candidates requires --png-dir")
    a.out.mkdir(parents=True,exist_ok=True)
    inventory=readcsv(a.root/CAT/"image_source_inventory.csv")
    bypath={s["source_path"]:s for s in inventory}
    assets=[];source_names=defaultdict(list);arc_names=defaultdict(list);links=[];errors=[];layouts=[];crops=[];counts=Counter()
    for line in a.pixels.open(encoding="utf-8"):
        r=json.loads(line);src=bypath[r["source_path"]];name=r["texture_name"];cat=classify(src["category"],name)
        row=dict(asset_id=r["asset_id"],category=cat,source_category=src["category"],source_path=r["source_path"],
            source_commit=r["source_commit"],source_sha256=r["source_sha256"],member_chain=r["member_chain"],
            texture_index=r["texture_index"],texture_name=name,width=r["width"],height=r["height"],
            rgba_sha256=r["rgba_sha256"],format_raw=r["format_raw"],parity_exact=r["parity"]["exact"],
            alpha_kind=r["alpha_kind"],pixel_profile="MIP0_RGBA8_NO_TRANSFER",
            status="PIXEL_EXACT" if r["parity"]["exact"] else "PIXEL_DIFFERENCE_REVIEW",
            local_png=None)
        counts["assets"]+=1;counts["category:"+cat]+=1
        if a.png_dir:
            from PIL import Image
            srcpng=a.png_dir/(hashlib.sha256(r["asset_id"].encode()).hexdigest()+".png")
            try:
                with Image.open(srcpng) as im:
                    im.load()
                    if im.mode!="RGBA" or im.size!=(r["width"],r["height"]) or digest(im.tobytes())!=r["rgba_sha256"]:raise ValueError("PNG pixel mismatch")
                dest=Path("png")/cat/f'{r["width"]}x{r["height"]}_{r["rgba_sha256"]}.png'
                full=a.out/dest;full.parent.mkdir(parents=True,exist_ok=True)
                if not full.exists():full.write_bytes(srcpng.read_bytes())
                row["local_png"]=dest.as_posix();counts["png_links"]+=1
            except Exception as e:errors.append(dict(asset_id=r["asset_id"],error=str(e)))
        assets.append(row)
        source_names[(src["category"],Path(r["source_path"]).name)].append(row)
        arc_names[(r["source_path"],name)].append(row)
    def link(rows,**fields):
        for r in rows:links.append(dict(asset_id=r["asset_id"],**fields))
    cap=(a.root/"v1.3.2/1/bin/appli/icon_pokemon/pokecaplist.bin").read_bytes()
    pnames={n for cat,n in source_names if cat=="icon_pokemon"}
    imnames={n for cat,n in source_names if cat=="icon_item"}
    for r in pokemon_map(cap,pnames):
        if r["filename_match"]:
            link(source_names["icon_pokemon",r["filename"]],kind="pokemon_resource_token",record_index=r["record_index"],
                 species_token=r["species_token"],form_token=r["form_token"],gender_raw=r["gender_raw"],variant_raw=r["variant_raw"],
                 species_id=None,form_id=None,gender=None,shiny=None,status="CAPLIST_FILENAME_MATCH")
    items=readcsv(a.root/CAT/"item_properties.csv")
    for r in item_map(items,imnames):
        if r["sprite_filename"]:
            matched=source_names["icon_item",r["sprite_filename"]]
            link(matched,kind="item_sprite",item_id=r["item_id"],item_sprite=r["item_sprite"],status="STATIC_TABLE_MATCH")
            if r["ball_candidate"]:link(matched,kind="ball_candidate",item_id=r["item_id"],ball_id=None,group_index_raw=r["group_index_raw"],status="STATIC_GROUP_CANDIDATE")
    for r in assets:
        if r["category"]=="ribbons_marks":
            m=re.match(r"ribbon_(\d+)(?:_([a-z]))?",Path(r["source_path"]).stem)
            if m:link([r],kind="ribbon_mark_candidate",resource_number=int(m[1]),variant=m[2],ribbon_id=None,mark_id=None,status="FILENAME_CANDIDATE")
        if r["category"]=="types":
            m=re.match(r"typeIcon_(?:text_)?(\d+)_([^_]+)_",r["texture_name"],re.I)
            if m:link([r],kind="type_candidate",resource_number=int(m[1]),resource_label=m[2],type_id=None,status="BRTI_NAME_CANDIDATE")
    def visit(data,src,chain):
        if data[:4]==b"SARC":
            if len(chain)>=8:raise ValueError("archive depth limit")
            for i,name,h,part in sarc(data):visit(part,src,chain+[dict(index=i,name=name,name_hash=h)])
        elif data[:4]==b"FLYT":
            counts["flyt_seen"]+=1
            try:
                f=flyt(data);counts["flyt_"+f["status"]]+=1
                for pane in f["panes"]:
                    layout=dict(source_path=src,member_chain=chain,version=f["version"],**pane)
                    layouts.append(layout)
                    if len(pane["uvs"])!=1 or len(pane["texture_names"])!=1:continue
                    matched=arc_names.get((src,pane["texture_names"][0]),[])
                    if len(matched)!=1:continue
                    r=matched[0];box=rect(pane["uvs"][0],r["width"],r["height"])
                    if box is None:continue
                    c=dict(source_path=src,member_chain=chain,pane=pane["pane"],asset_id=r["asset_id"],box=box,
                           full_texture=box==[0,0,r["width"],r["height"]],material=pane["material"],
                           status="RAW_UV_RECT_CANDIDATE_NOT_RENDERED")
                    if a.crop_candidates and r["local_png"]:
                        from PIL import Image
                        with Image.open(a.out/r["local_png"]) as im:
                            crop=im.crop(tuple(box));raw=crop.tobytes()
                            dest=Path("crop_candidates")/(digest(json.dumps(c,sort_keys=True).encode())+".png")
                            (a.out/dest).parent.mkdir(parents=True,exist_ok=True);crop.save(a.out/dest)
                            c.update(local_png=dest.as_posix(),rgba_sha256=digest(raw))
                    crops.append(c)
            except Exception as e:errors.append(dict(source_path=src,member_chain=chain,error=str(e)))
    for s in inventory:
        if s["container_type"]!="ARC":continue
        try:
            data=(a.root/s["source_path"]).read_bytes()
            if hashlib.sha1(f"blob {len(data)}\0".encode()+data).hexdigest()!=s["git_blob_sha1"]:raise ValueError("source identity mismatch")
            visit(data,s["source_path"],[])
        except Exception as e:errors.append(dict(source_path=s["source_path"],error=str(e)))
    for name,rows in (("assets",assets),("semantic_links",links),("layout_panes",layouts),("atlas_uv_candidates",crops),("errors",errors)):
        write(a.out/(name+".jsonl"),rows)
    summary=dict(counts=dict(counts),semantic_links=dict(Counter(r["kind"] for r in links)),layout_panes=len(layouts),
                 uv_rect_candidates=len(crops),subrect_candidates=sum(not r["full_texture"] for r in crops),
                 errors=len(errors),pixel_exact=sum(r["parity_exact"] for r in assets),
                 scope="Static classification and UV candidates; not native rendering",source_pixels=str(a.pixels))
    (a.out/"manifest.json").write_text(json.dumps(summary,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,indent=2))
    return int(len(assets)!=15407 or bool(errors))
if __name__=="__main__":raise SystemExit(main())
