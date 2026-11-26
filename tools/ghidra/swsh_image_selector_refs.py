#!/usr/bin/env python3
"""Read-only image-resource native evidence from previously published Ghidra SQLite."""
import argparse
import hashlib
import json
import re
import sqlite3
from pathlib import Path
from swsh_restore_split import combine, checksum
from swsh_trainer_id_extract import load_elf, SHA, byte_match

RUN = Path("derived/v1.3.2/Ghidra_12.2_Run_42771375134")
PAT = re.compile(r"ribbon_|mes_ribbon|mes_another_name|wallpaper|pokecaplist|poke_icon|icon_pokemon|icon_ribbon|item_hash_to_index",re.I)
def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--game",choices=["sword","shield"],required=True)
    ap.add_argument("--out",type=Path,required=True)
    a=ap.parse_args()
    a.out.mkdir(parents=True,exist_ok=True)
    src=RUN/a.game
    spec=json.loads((src/"parts_manifest.json").read_text(encoding="utf-8"))
    assert spec["game"]==a.game and spec["status"]=="UNCOMPRESSED_SPLIT_VERIFIED"
    elf,segments,sha=load_elf(Path("v1.3.2/0")/(a.game+"_main.elf"),SHA[a.game])
    dbpath=a.out.parent/(a.game+".sqlite")
    if dbpath.exists():
        raise ValueError("refusing to overwrite restored DB")
    combine(src/"database",spec["sqlite"],dbpath)
    db=sqlite3.connect(dbpath.resolve().as_uri()+"?mode=ro",uri=True)
    db.row_factory=sqlite3.Row
    if db.execute("PRAGMA quick_check").fetchone()[0]!="ok":
        raise ValueError("SQLite quick_check failed")
    meta=dict(db.execute("SELECT key,value FROM metadata"))
    if meta.get("original_elf_sha256")!=sha:
        raise ValueError("Ghidra input SHA differs from ELF")
    strings=[dict(r) for r in db.execute("SELECT addr,preview,byte_length FROM string_items") if PAT.search(r["preview"] or "")]
    # Independent literal scan; retain virtual addresses, not guesses of callers.
    literals=[]
    for va,off,n in segments:
        for m in re.finditer(rb"[\x20-\x7e]{4,}\x00",elf[off:off+n]):
            s=m.group()[:-1].decode("ascii")
            if PAT.search(s):
                literals.append(dict(elf_va=hex(va+m.start()),file_offset=hex(off+m.start()),text=s))
    functions={}
    refs=[]
    def owner(addr):
        # Ghidra body bounding range is a candidate owner (can contain holes).
        return db.execute("SELECT entry,name,min_addr,max_addr,body_sha256 FROM functions WHERE min_addr<=? AND max_addr>=? ORDER BY min_addr DESC LIMIT 1",(addr,addr)).fetchone()
    def save_owner(addr):
        f=owner(addr)
        if f:
            functions[f["entry"]]=dict(f)
    for s in strings:
        frontier=[(s["addr"],0)]
        seen=set()
        while frontier:
            target,depth=frontier.pop()
            if target in seen: continue
            seen.add(target)
            for r in db.execute("SELECT * FROM references_full WHERE to_addr=?",(target,)):
                row=dict(r); row.update(anchor=s["addr"],depth=depth)
                refs.append(row)
                ins=db.execute("SELECT addr FROM instructions WHERE addr=?",(r["from_addr"],)).fetchone()
                if ins: save_owner(r["from_addr"])
                elif depth<1 and r["is_data"]: frontier.append((r["from_addr"],depth+1))
    # Decompiler text match is an independent candidate route, not proof of data flow.
    for r in db.execute("SELECT entry,c FROM decompilation WHERE status='OK' AND (lower(c) LIKE '%ribbon%' OR lower(c) LIKE '%wallpaper%' OR lower(c) LIKE '%pokecaplist%' OR lower(c) LIKE '%poke_icon%')"):
        c=r["c"] or ""
        if PAT.search(c):
            f=db.execute("SELECT entry,name,min_addr,max_addr,body_sha256 FROM functions WHERE entry=?",(r["entry"],)).fetchone()
            if f: functions[f["entry"]]=dict(f)
    rows=[]
    for entry,f in sorted(functions.items()):
        d=db.execute("SELECT status,c,error FROM decompilation WHERE entry=?",(entry,)).fetchone()
        ins=[]
        if int(f["max_addr"],16)-int(f["min_addr"],16)>0x20000:
            rows.append(dict(**f,owner_evidence="OVERSIZED_BOUNDING_RANGE_EXCLUDED",instruction_count=0,elf_matched=0,offset_1a_candidates=[],instructions=[],call_edges=[],decompilation=None))
            continue
        for r in db.execute("SELECT addr,bytes_hex,mnemonic,display_text FROM instructions WHERE addr>=? AND addr<=? ORDER BY addr",(f["min_addr"],f["max_addr"])):
            q=dict(r)
            try: q["elf_byte_match"]=byte_match(elf,segments,int(q["addr"],16),q["bytes_hex"] or "")
            except ValueError: q["elf_byte_match"]=False
            ins.append(q)
        edges=[dict(r) for r in db.execute("SELECT from_addr,to_addr,ref_type FROM call_edges WHERE from_addr>=? AND from_addr<=?",(f["min_addr"],f["max_addr"]))]
        c=dict(d) if d else None
        rows.append(dict(**f,owner_evidence="Ghidra bounding range or pseudocode literal; requires review",
                         instruction_count=len(ins),elf_matched=sum(i["elf_byte_match"] for i in ins),
                         offset_1a_candidates=[i for i in ins if re.search(r"\b(?:ldrh|ldurh)\b",i["mnemonic"] or "",re.I) and re.search(r"(?:0x1a|\b26\b)",i["display_text"] or "",re.I)],
                         instructions=ins,call_edges=edges,decompilation=c))
    summary=dict(game=a.game,elf_sha256=sha,sqlite_sha256=checksum(dbpath),literal_count=len(literals),defined_string_count=len(strings),
                 reference_count=len(refs),candidate_function_count=len(rows),
                 entries=[dict(entry=r["entry"],instruction_count=r["instruction_count"],elf_matched=r["elf_matched"],offset_1a_candidates=len(r["offset_1a_candidates"])) for r in rows],
                 status="STATIC_CANDIDATES_ONLY",runtime_verified=0,oversized_ranges_excluded=sum(r["owner_evidence"]=="OVERSIZED_BOUNDING_RANGE_EXCLUDED" for r in rows))
    for name,payload in (("summary",summary),("elf_literals",literals),("strings",strings),("references",refs),("functions",rows)):
        (a.out/(name+".json")).write_text(json.dumps(payload,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    db.close()
if __name__=="__main__": main()
