#!/usr/bin/env python3
"""Export checked-in SWSH parsed JSON into small, inspectable CSVs; raw sources are never modified."""
import argparse,csv,json,re,hashlib
from collections import Counter
from pathlib import Path

def sha(p):
    return hashlib.sha256(p.read_bytes()).hexdigest()
def make_csv(out,name,fields,records):
    rows=list(records)
    if not rows:return 0
    target=out/(name+".csv")
    with target.open("w",newline="",encoding="utf-8-sig") as f:
        w=csv.DictWriter(f,fieldnames=fields,extrasaction="ignore")
        w.writeheader();w.writerows(rows)
    return len(rows)
def run(root,out):
    out.mkdir(parents=True,exist_ok=True);stats={};inputs=set()
    def load(p):
        inputs.add(p.relative_to(root).as_posix())
        return json.loads(p.read_text(encoding="utf-8-sig"))
    personal=root/"bin/pml/personal/personal_total.bin.json"
    if personal.is_file():
        data=load(personal);fields=["index","speciesModelId","form","present","hp","atk","def","spa","spd","spe","type1","type2","catchRate","ability1","ability2","abilityHidden","baseExp","baseFriendship"]
        stats["species_personal"]=make_csv(out,"species_personal",fields,data)
    moves=[]
    for p in sorted((root/"bin/pml/waza").glob("waza*.wazabin.json")):
        m=re.fullmatch(r"waza(\d+)\.wazabin\.json",p.name)
        if m:
            v=load(p);v["move_id"]=int(m.group(1));v["source_json"]=p.relative_to(root).as_posix();moves.append(v)
    stats["moves"]=make_csv(out,"moves",["move_id","type","category","quality","power","accuracy","pp","priority","target","critStage","hitMin","hitMax","inflict","inflictPercent","source_json"],moves)
    evol=[]
    for p in sorted((root/"bin/pml/evolution").glob("evo_*.bin.json")):
        m=re.fullmatch(r"evo_(\d+)\.bin\.json",p.name)
        if m:
            for v in load(p):evol.append({"source_personal_index":int(m.group(1)),**v})
    stats["evolution"]=make_csv(out,"evolution",["source_personal_index","slot","method","argument","species","form","level"],evol)
    trainers=[];held=[]
    for p in sorted((root/"bin/trainer/trainer_poke").glob("trainer_poke_*.bin.json")):
        m=re.fullmatch(r"trainer_poke_(\d+)\.bin\.json",p.name)
        if not m:continue
        for index,v in enumerate(load(p)):
            row={"trainer_id":int(m.group(1)),"slot":v.get("slot",index),**{k:v.get(k) for k in ["species","form","level","heldItem","nature","ability","gender","dynamaxLevel","canGigantamax","shiny"]}}
            for typ,n in [("moves",4),("ivs",6),("evs",6)]:
                for i,value in enumerate(v.get(typ,[])[:n]):row[f"{typ}_{i}"]=value
            trainers.append(row)
            if v.get("heldItem",0):held.append({"trainer_id":row["trainer_id"],"slot":row["slot"],"species":row["species"],"held_item_id":v["heldItem"]})
    tfields=["trainer_id","slot","species","form","level","heldItem","nature","ability","gender","dynamaxLevel","canGigantamax","shiny"]+[f"{k}_{i}" for k,n in [("moves",4),("ivs",6),("evs",6)] for i in range(n)]
    stats["trainer_party"]=make_csv(out,"trainer_party",tfields,trainers)
    stats["trainer_held_items"]=make_csv(out,"trainer_held_items",["trainer_id","slot","species","held_item_id"],held)
    egg=[]
    for p in sorted((root/"bin/pml/tamagowaza").glob("*.json")):
        v=load(p)
        if isinstance(v,dict) and isinstance(v.get("moves"),list):
            for item in v["moves"]:egg.append({"record":p.name,"form_table_index":v.get("formTableIndex"),"move_id":item})
    stats["egg_moves"]=make_csv(out,"egg_moves",["record","form_table_index","move_id"],egg)
    report={"game":"SWSH 1.3.2","source":"already parsed JSON in repository","rows":stats,"source_json_count":len(inputs),"source_json_files_sha256":{i:sha(root/i) for i in sorted(inputs)},"scope":"No wild encounter/lock/shiny semantics inferred"}
    (out/"summary.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps({"rows":stats,"source_json_count":len(inputs)},ensure_ascii=False))
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--root",type=Path,default=Path("Unpack/v1.3.2/parsed"))
    p.add_argument("--out",type=Path,default=Path("Unpack/v1.3.2/catalog"))
    a=p.parse_args();run(a.root,a.out)
if __name__=="__main__":main()
