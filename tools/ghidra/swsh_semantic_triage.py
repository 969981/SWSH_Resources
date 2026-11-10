#!/usr/bin/env python3
"""Evidence-backed Sword/Shield 1.3.2 same-RVA function semantic triage.

Uses verified Ghidra 12.2 SQLite exports from run 42771375134.
Same RVA is a candidate alignment, never proof of function identity.
"""
from __future__ import annotations
import argparse,csv,gzip,hashlib,json,re,sqlite3,sys,math,time
from collections import Counter,defaultdict
from pathlib import Path

HERE=Path(__file__).resolve().parent
sys.path.insert(0,str(HERE))
import swsh_callgraph_map as cg

FIELD_RE=re.compile(r"\*\s*\(\s*([^*]+?)\s*\*\s*\)\s*\(\s*\(?\s*(?:long\s*\)?\s*)?param_(\d+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)")
INDEX_RE=re.compile(r"param_(\d+)\s*\[\s*(0x[0-9a-fA-F]+|\d+)\s*\]")
FLOW_CONTROL={"CONDITIONAL_JUMP","UNCONDITIONAL_JUMP","COMPUTED_JUMP","TERMINATOR","CALL_TERMINATOR","COMPUTED_CALL_TERMINATOR"}

def hx(s):
    s=str(s or "").strip().lower()
    if ":" in s:s=s.rsplit(":",1)[1]
    return int(s.removeprefix("0x"),16)

def clean(s,n=200):
    s=re.sub(r"\s+"," ",str(s or "")).strip()
    return s[:n]+("…" if len(s)>n else "")

def c_header(code):
    for line in (code or "").splitlines():
        line=line.strip()
        if line and not line.startswith(("/*","*","//")):return clean(line,320)
    return ""

def field_offsets(code):
    out=set()
    for typ,param,offset in FIELD_RE.findall(code or ""):
        value=int(offset,0) if offset.startswith("0x") else int(offset)
        out.add("param_%s+%s:%s"%(param,hex(value),clean(typ,50)))
    for param,index in INDEX_RE.findall(code or ""):
        value=int(index,0) if index.startswith("0x") else int(index)
        out.add("param_%s[%s] (byte-offset≈%s)"%(param,index,hex(value*8)))
    return sorted(out)

def get_decomp(db,entries):
    result={}
    for off in range(0,len(entries),400):
        chunk=entries[off:off+400];ph=",".join("?" for _ in chunk)
        for e,status,code,error in db.execute(f"select entry,status,c,error from decompilation where entry in ({ph})",chunk):
            code=code or ""
            result[e]={"status":status or "MISSING","code":code,
                "sha256":hashlib.sha256(code.encode()).hexdigest() if code else "",
                "header":c_header(code),"fields":field_offsets(code),"error":clean(error,300)}
    return result

def evidence(db,fn):
    if int(fn["body_bytes"])!=hx(fn["max_addr"])-hx(fn["min_addr"])+1:return {"available":False}
    lo,hi=fn["min_addr"],fn["max_addr"]
    ins=list(db.execute("select addr,bytes_hex,mnemonic,display_text,flow_type from instructions where addr>=? and addr<=? order by addr",(lo,hi)))
    refs=list(db.execute("select from_addr,to_addr,ref_type,is_call,is_jump,is_data,is_read,is_write from references_full where from_addr>=? and from_addr<=? order by from_addr,to_addr",(lo,hi)))
    by_addr={r[0]:r for r in ins};branches=[]
    for src,dst,typ,call,jump,data,read,write in refs:
        if jump:
            try:branches.append((hx(src)-hx(fn["entry"]),typ,hx(dst)-hx(fn["entry"])))
            except Exception:pass
    flows=Counter(r[4] or "" for r in ins)
    control={k:v for k,v in flows.items() if k in FLOW_CONTROL}
    strings=set()
    targets=sorted({r[1] for r in refs if r[5] or r[6] or r[7]})
    for off in range(0,len(targets),400):
        chunk=targets[off:off+400];ph=",".join("?" for _ in chunk)
        for (value,) in db.execute(f"select distinct preview from defined_data where is_string=1 and preview is not null and addr in ({ph})",chunk):
            if value:strings.add(clean(value,240))
    return {"available":True,"instructions":ins,"by_addr":by_addr,"branches":sorted(set(branches)),
        "control":dict(control),"strings":sorted(strings),"call_refs":sum(bool(r[3]) for r in refs),
        "data_refs":sum(bool(r[5] or r[6] or r[7]) for r in refs)}

def compare_instructions(a,b):
    ai=a["by_addr"];bi=b["by_addr"];common=sorted(ai.keys()&bi.keys())
    changed=[x for x in common if ai[x][1]!=bi[x][1]]
    mn=[x for x in common if ai[x][2]!=bi[x][2]]
    flow=[x for x in common if ai[x][4]!=bi[x][4]]
    display=[x for x in common if ai[x][3]!=bi[x][3]]
    return {"available":True,"common":len(common),"changed":len(changed),"ratio":round(len(changed)/max(1,len(common)),6),
        "mnemonic_changed":len(mn),"flow_changed":len(flow),"display_changed":len(display),
        "sword_only":len(ai.keys()-bi.keys()),"shield_only":len(bi.keys()-ai.keys()),
        "changed_sample":[{"address":"0x"+x,"sword":clean(ai[x][3],120),"shield":clean(bi[x][3],120),
          "sword_bytes":ai[x][1],"shield_bytes":bi[x][1]} for x in changed[:20]]}

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--sword",type=Path,required=True);p.add_argument("--shield",type=Path,required=True)
    p.add_argument("--out",type=Path,required=True);p.add_argument("--top",type=int,default=200)
    args=p.parse_args();args.out.mkdir(parents=True,exist_ok=True)
    sf,sd,se,ss=cg.load(args.sword,"sword");hf,hd,he,hs=cg.load(args.shield,"shield")
    s2h={};h2s={};duplicate=0
    for digest in sd.keys()&hd.keys():
        if len(sd[digest])==len(hd[digest])==1:
            s=sd[digest][0];h=hd[digest][0];s2h[s]=h;h2s[h]=s
        else:duplicate+=1
    candidates=[e for e in sorted(sf.keys()&hf.keys()) if sf[e].get("body_sha256") and hf[e].get("body_sha256") and sf[e]["body_sha256"]!=hf[e]["body_sha256"]]
    if len(candidates)!=11301:raise ValueError("Expected 11,301 candidates, found "+str(len(candidates)))
    sr=defaultdict(set);hr=defaultdict(set)
    for src,dsts in se.items():
        for dst in dsts:sr[dst].add(src)
    for src,dsts in he.items():
        for dst in dsts:hr[dst].add(src)
    sdb=sqlite3.connect("file:"+str(args.sword.resolve())+"?mode=ro",uri=True)
    hdb=sqlite3.connect("file:"+str(args.shield.resolve())+"?mode=ro",uri=True)
    sc=get_decomp(sdb,candidates);hc=get_decomp(hdb,candidates)
    results=[];counts=Counter();started=time.time()
    for idx,e in enumerate(candidates,1):
        s=sf[e];h=hf[e]
        if e in s2h and s2h[e]!=e:identity="SWORD_BODY_MATCHES_OTHER_SHIELD_ENTRY"
        elif e in h2s and h2s[e]!=e:identity="SHIELD_BODY_MATCHES_OTHER_SWORD_ENTRY"
        else:identity="NO_UNIQUE_EXACT_BODY_IDENTITY"
        s_callers=sr.get(e,set());h_callers=hr.get(e,set())
        smap={s2h[x] for x in s_callers if x in s2h};hmap={x for x in h_callers if x in h2s}
        ccall=len(smap&hmap);dcall=len(smap^hmap);jcall=ccall/max(1,ccall+dcall)
        scallee={s2h[x] for x in se.get(e,set()) if x in s2h};hcallee={x for x in he.get(e,set()) if x in h2s}
        ccal=len(scallee&hcallee);dcal=len(scallee^hcallee);jcal=ccal/max(1,ccal+dcal)
        if ccall and ccal and jcall>=.5 and jcal>=.5:support="STRONG_CALLER_AND_CALLEE_CONTEXT"
        elif ccall and jcall>=.5:support="CALLER_CONTEXT_MATCH"
        elif ccal and jcal>=.5:support="CALLEE_CONTEXT_MATCH"
        else:support="WEAK_OR_UNAVAILABLE_CONTEXT"
        size_s=int(s.get("body_bytes") or 0);size_h=int(h.get("body_bytes") or 0)
        contiguous_s=size_s==hx(s["max_addr"])-hx(s["min_addr"])+1
        contiguous_h=size_h==hx(h["max_addr"])-hx(h["min_addr"])+1
        a=evidence(sdb,s) if contiguous_s else {"available":False}
        b=evidence(hdb,h) if contiguous_h else {"available":False}
        metrics={"available":False}
        if a["available"] and b["available"]:
            metrics=compare_instructions(a,b)
            cfg_same=a["branches"]==b["branches"] and a["control"]==b["control"]
            strings_same=set(a["strings"])==set(b["strings"])
            calls_same=scallee==hcallee
            score=100*(not cfg_same)+80*(not calls_same)+50*(not strings_same)+30*(size_s!=size_h)
            score+=25*(metrics["mnemonic_changed"]>0)+20*(metrics["flow_changed"]>0)
            score+=8*(sc[e]["sha256"]!=hc[e]["sha256"])+min(15,round(math.log2(max(size_s,size_h,1))))
            if not cfg_same:kind="BRANCH_INSTRUCTION_ADDRESS_OR_TARGET_CHANGE"
            elif not calls_same:kind="EXACT_MAPPED_CALLEE_CHANGE"
            elif not strings_same:kind="STRING_REFERENCE_CHANGE"
            elif size_s!=size_h:kind="FUNCTION_BOUNDARY_OR_SIZE_CHANGE"
            elif metrics["mnemonic_changed"]:kind="INSTRUCTION_MNEMONIC_CHANGE"
            elif metrics["display_changed"]:kind="OPERAND_OR_IMMEDIATE_CHANGE"
            elif metrics["changed"]:kind="ENCODING_CHANGE_WITH_STABLE_DECODED_TEXT"
            else:kind="NO_COMMON_INSTRUCTION_DELTA"
        else:
            cfg_same=None;strings_same=None;calls_same=None;score=30 if size_s!=size_h else 8
            kind="NON_CONTIGUOUS_GHIDRA_BODY_REQUIRES_BLOCK_RANGES"
        record={"entry":"0x"+e,"identity_evidence":identity,"identity_support":support,
            "identity_support_score":round((jcall+jcal)/2,6),"triage_class":kind,"priority_score":score,
            "sword_name":s["name"],"shield_name":h["name"],"sword_body_bytes":size_s,"shield_body_bytes":size_h,
            "sword_contiguous":contiguous_s,"shield_contiguous":contiguous_h,
            "mapped_common_callers":ccall,"mapped_caller_delta":dcall,"mapped_caller_jaccard":round(jcall,6),
            "mapped_common_callees":ccal,"mapped_callee_delta":dcal,"mapped_callee_jaccard":round(jcal,6),
            "branch_address_signature_same":cfg_same,"exact_mapped_callees_same":calls_same,"string_reference_same":strings_same,
            "sword_decompile_status":sc[e]["status"],"shield_decompile_status":hc[e]["status"],
            "sword_c_header":sc[e]["header"],"shield_c_header":hc[e]["header"],
            "sword_field_offsets":sc[e]["fields"],"shield_field_offsets":hc[e]["fields"],
            "sword_body_sha256":s["body_sha256"],"shield_body_sha256":h["body_sha256"],
            "instruction_metrics":metrics if metrics["available"] else {},
            "sword_strings":a.get("strings",[]),"shield_strings":b.get("strings",[]),
            "sword_branch_edges":a.get("branches",[]),"shield_branch_edges":b.get("branches",[])}
        results.append(record);counts[kind]+=1
        if idx%500==0:print("processed",idx,"/",len(candidates),flush=True)
    results.sort(key=lambda r:(-r["priority_score"],r["entry"]))
    with gzip.open(args.out/"same_entry_semantic_diff.ndjson.gz","wt",encoding="utf-8",newline="\n",compresslevel=6) as out:
        for r in results:out.write(json.dumps(r,ensure_ascii=False,separators=(",",":"))+"\n")
    fields=["entry","identity_evidence","identity_support","identity_support_score","triage_class","priority_score",
      "sword_name","shield_name","sword_body_bytes","shield_body_bytes","sword_contiguous","shield_contiguous",
      "mapped_common_callers","mapped_caller_delta","mapped_caller_jaccard","mapped_common_callees","mapped_callee_delta",
      "mapped_callee_jaccard","branch_address_signature_same","exact_mapped_callees_same","string_reference_same",
      "sword_decompile_status","shield_decompile_status","sword_c_header","shield_c_header","sword_field_offsets","shield_field_offsets"]
    with (args.out/"same_entry_semantic_diff.csv").open("w",encoding="utf-8",newline="") as out:
        w=csv.DictWriter(out,fieldnames=fields,extrasaction="ignore");w.writeheader()
        for r in results:w.writerow({k:json.dumps(r[k],ensure_ascii=False) if isinstance(r[k],list) else r[k] for k in fields})
    strong=[r for r in results if r["identity_evidence"]=="NO_UNIQUE_EXACT_BODY_IDENTITY" and r["identity_support"]=="STRONG_CALLER_AND_CALLEE_CONTEXT"]
    strong.sort(key=lambda r:(-r["priority_score"],r["entry"]))
    with (args.out/"priority_semantic_review.csv").open("w",encoding="utf-8",newline="") as out:
        w=csv.DictWriter(out,fieldnames=fields,extrasaction="ignore");w.writeheader()
        for r in strong:w.writerow({k:json.dumps(r[k],ensure_ascii=False) if isinstance(r[k],list) else r[k] for k in fields})
    with (args.out/"priority_assembly_review.md").open("w",encoding="utf-8") as out:
        out.write("# Sword / Shield 1.3.2 — priority assembly review\n\n")
        out.write("Only pairs with both exact-body-mapped caller and callee support are included. Same RVA is not identity proof. The branch signature compares source/target RVAs, not high-level CFG block topology.\n")
        for r in strong[:args.top]:
            out.write("\n## "+r["entry"]+" — "+r["triage_class"]+" (score "+str(r["priority_score"])+")\n\n")
            out.write("- Identity support: "+r["identity_support"]+"; caller Jaccard "+str(r["mapped_caller_jaccard"])+"; callee Jaccard "+str(r["mapped_callee_jaccard"])+"\n")
            out.write("- Branch-address signature same: "+str(r["branch_address_signature_same"])+"; exact mapped callees same: "+str(r["exact_mapped_callees_same"])+"; strings same: "+str(r["string_reference_same"])+"\n")
            out.write("- C prototypes: Sword: "+clean(r["sword_c_header"],200)+"; Shield: "+clean(r["shield_c_header"],200)+"\n")
            for x in r.get("instruction_metrics",{}).get("changed_sample",[])[:16]:
                out.write("- "+x["address"]+": Sword: "+x["sword"]+"; Shield: "+x["shield"]+"\n")
    summary={"status":"SAME_RVA_CANDIDATES_SEMANTICALLY_TRIAGED","source_run_id":42771375134,
      "same_rva_changed_body_candidates":len(results),
      "instruction_level_pairs_compared":sum(bool(r["instruction_metrics"]) for r in results),
      "non_contiguous_pairs":sum(not r["sword_contiguous"] or not r["shield_contiguous"] for r in results),
      "unique_exact_body_pairs":len(s2h),"unique_exact_body_relocated_pairs":sum(a!=b for a,b in s2h.items()),
      "identity_reclassification":dict(Counter(r["identity_evidence"] for r in results)),
      "identity_support_for_unmatched_same_rva_pairs":dict(Counter(r["identity_support"] for r in results if r["identity_evidence"]=="NO_UNIQUE_EXACT_BODY_IDENTITY")),
      "triage_classes":dict(counts),"strong_context_candidates":len(strong),
      "strong_context_branch_address_signature_changes":sum(r["branch_address_signature_same"] is False for r in strong),
      "strong_context_call_deltas":sum(r["exact_mapped_callees_same"] is False for r in strong),
      "strong_context_string_deltas":sum(r["string_reference_same"] is False for r in strong),
      "elapsed_seconds":round(time.time()-started,2),
      "limitations":["Same RVA is only a candidate alignment.","Exact body SHA-256 anchors are stronger identity evidence but do not prove semantic equivalence.",
       "Only contiguous Ghidra function-body ranges are compared instruction by instruction.",
       "Direct call edges omit unresolved indirect dispatch.","All conclusions are static; runtime behavior is not asserted."]}
    (args.out/"summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    (args.out/"README.md").write_text("""# Sword / Shield 1.3.2 — semantic triage v1

Source Ghidra 12.2 run: 42771375134. This report covers every same-RVA function pair whose Ghidra function-body SHA-256 differs.

- same_entry_semantic_diff.csv: sortable metrics and recovered C headers/field-offset hints.
- same_entry_semantic_diff.ndjson.gz: complete per-candidate static evidence.
- priority_semantic_review.csv: candidate pairs supported by both exact-body-mapped callers and callees.
- priority_assembly_review.md: selected instruction-level comparisons for the strongest-context pairs; raw branch-address changes are not asserted to be CFG topology changes.
- summary.json: count reconciliation and evidence limitations.

Same RVA is not function identity. Strong caller/callee context is a candidate alignment, not proof. Ghidra pseudocode is not original source. Static Raw branch-address signature differences do not by themselves prove a CFG topology change. Compare the Ghidra high-level P-code block graph before calling a control-flow change. CFG/P-code evidence does not prove runtime behavior.
""",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    sdb.close();hdb.close()

if __name__=="__main__":main()
