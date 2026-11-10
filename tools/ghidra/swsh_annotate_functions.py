#!/usr/bin/env python3
"""Build evidence-backed Chinese annotations for every Sword/Shield 1.3.2 Ghidra function.

The original C exports are never modified. This writes annotated C ZIPs, a
machine-readable NDJSON index, and Base64 TSV comments for Ghidra PLATE_COMMENT.
All semantic descriptions are explicitly hypotheses derived from Ghidra's
static symbols/references/call graph; no runtime behavior is claimed.
"""
from __future__ import annotations

import argparse
import base64
import bisect
import csv
import gzip
import hashlib
import json
import re
import sqlite3
import zipfile
from collections import defaultdict, Counter
from pathlib import Path

EXPECTED_ELF_SHA = {
    "sword": "4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43",
    "shield": "a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a",
}
EXPECTED_FUNCTIONS = {"sword": 47983, "shield": 47984}
ZIP_PART_LIMIT = 45 * 1024 * 1024
AUTO_NAME = re.compile(r"^(?:FUN_|sub_|thunk_FUN_|thunk_sub_|LAB_|switchD_|caseD_|ram_)", re.I)
SAFE_TEXT = re.compile(r"[\x00-\x08\x0b\x0c\x0e-\x1f]")


def clean(value, limit=180):
    if value is None:
        return ""
    text = str(value).replace("*/", "* /").replace("\r", " ").replace("\n", " ")
    text = SAFE_TEXT.sub(" ", text)
    text = re.sub(r"\s+", " ", text).strip()
    return text[:limit] + ("…" if len(text) > limit else "")


def address_number(value):
    if value is None:
        raise ValueError("Missing address")
    text = str(value).strip().lower()
    if ":" in text:
        text = text.rsplit(":", 1)[1]
    text = text.removeprefix("0x")
    return int(text, 16)


def address_key(value):
    return address_number(value)


def format_address(value):
    number = value if isinstance(value, int) else address_number(value)
    return format(number, "08x") if number <= 0xffffffff else format(number, "x")


def digest_file(path):
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(4 << 20), b""):
            h.update(block)
    return h.hexdigest()


def read_manifest(path, game):
    data = json.loads(path.read_text(encoding="utf-8"))
    if data.get("status") != "COMPLETE":
        raise ValueError(game + ": SQLite artifact manifest is not COMPLETE")
    if data.get("elf_sha256") != EXPECTED_ELF_SHA[game]:
        raise ValueError(game + ": ELF SHA-256 mismatch in SQLite manifest")
    return data


def load_functions(db, game):
    integrity = db.execute("PRAGMA integrity_check").fetchone()[0]
    if integrity != "ok":
        raise ValueError(game + ": SQLite integrity_check failed: " + str(integrity))
    metadata = dict(db.execute("SELECT key,value FROM metadata"))
    if metadata.get("original_elf_sha256") != EXPECTED_ELF_SHA[game]:
        raise ValueError(game + ": SQLite original ELF SHA-256 mismatch")
    if metadata.get("analysis_completed", "").lower() != "true":
        raise ValueError(game + ": Ghidra analysis was not marked complete")
    rows = db.execute(
        "SELECT entry,name,namespace,min_addr,max_addr,body_bytes,body_sha256,"
        "signature,is_thunk,is_external,source FROM functions ORDER BY entry"
    ).fetchall()
    if len(rows) != EXPECTED_FUNCTIONS[game]:
        raise ValueError(game + ": unexpected function count " + str(len(rows)))
    functions = {}
    by_hash = defaultdict(list)
    intervals = []
    for row in rows:
        item = {
            "entry": row[0], "name": row[1] or "anonymous",
            "namespace": row[2] or "", "min_addr": row[3], "max_addr": row[4],
            "body_bytes": int(row[5] or 0), "body_sha256": row[6] or "",
            "signature": row[7] or "", "is_thunk": bool(row[8]),
            "is_external": bool(row[9]), "source": row[10] or "",
        }
        key = address_key(item["entry"])
        if key in functions:
            raise ValueError(game + ": duplicate normalized function entry")
        item["key"] = key
        functions[key] = item
        if item["body_sha256"] and len(item["body_sha256"]) == 64 and item["body_bytes"] > 0:
            by_hash[item["body_sha256"]].append(key)
        try:
            start = address_number(item["min_addr"])
            end = address_number(item["max_addr"])
        except (ValueError, TypeError):
            continue
        if start <= end and item["body_bytes"] == end - start + 1:
            intervals.append((start, end, key))
    intervals.sort()
    starts = [x[0] for x in intervals]
    prefix_max = []
    furthest = -1
    for start, end, key in intervals:
        furthest = max(furthest, end)
        prefix_max.append(furthest)
    def owner_for(source):
        try:
            addr = address_number(source)
        except (ValueError, TypeError):
            return None
        idx = bisect.bisect_right(starts, addr) - 1
        if idx < 0 or addr > intervals[idx][1]:
            return None
        if idx > 0 and prefix_max[idx - 1] >= addr:
            return None
        return intervals[idx][2]
    return functions, by_hash, owner_for, len(intervals), metadata


def build_cross_map(left, right):
    lfn, lhash, *_ = left
    rfn, rhash, *_ = right
    mapping = {}
    reverse = {}
    ambiguous = 0
    for digest in set(lhash) & set(rhash):
        a, b = lhash[digest], rhash[digest]
        if len(a) == 1 and len(b) == 1:
            mapping[a[0]] = b[0]
            reverse[b[0]] = a[0]
        else:
            ambiguous += 1
    return mapping, reverse, ambiguous


def symbol_lookup(db, targets):
    """Fetch only symbols referenced by call/data targets, not the full symbol table."""
    result = {}
    values = sorted({str(x) for x in targets if x})
    for offset in range(0, len(values), 400):
        chunk = values[offset:offset + 400]
        placeholders = ",".join("?" for _ in chunk)
        query = (
            "SELECT addr,name,namespace,symbol_type,is_primary FROM symbols "
            "WHERE addr IN (" + placeholders + ") ORDER BY is_primary DESC,id"
        )
        for addr, name, namespace, symbol_type, primary in db.execute(query, chunk):
            key = address_key(addr)
            if key not in result:
                result[key] = {
                    "name": clean(name, 120), "namespace": clean(namespace, 100),
                    "type": clean(symbol_type, 60), "primary": bool(primary),
                }
    return result


def collect_relationships(db, functions, owner_for):
    call_targets = defaultdict(set)
    callers = defaultdict(set)
    string_refs = defaultdict(dict)
    reads = defaultdict(set)
    writes = defaultdict(set)
    target_raw = set()
    string_data = {
        address_key(addr): clean(preview, 180)
        for addr, preview in db.execute(
            "SELECT addr,preview FROM defined_data WHERE is_string=1 AND preview IS NOT NULL"
        )
    }
    for row in db.execute(
        "SELECT from_addr,to_addr,is_call,is_data,is_read,is_write "
        "FROM references_full ORDER BY id"
    ):
        source, target, is_call, is_data, is_read, is_write = row
        owner = owner_for(source)
        if owner is None:
            continue
        try:
            target_key = address_key(target)
        except (ValueError, TypeError):
            continue
        if is_call:
            call_targets[owner].add(target_key)
            target_raw.add(target)
            if target_key in functions:
                callers[target_key].add(owner)
        if target_key in string_data and (is_data or is_read or is_write):
            string_refs[owner][target_key] = string_data[target_key]
        else:
            if is_read:
                reads[owner].add(target_key)
                target_raw.add(target)
            if is_write:
                writes[owner].add(target_key)
                target_raw.add(target)
    symbols = symbol_lookup(db, target_raw)
    return call_targets, callers, string_refs, reads, writes, symbols


def counterpart_info(item, other_functions, other_hash_counts, exact_map, game):
    key = item["key"]
    if key in exact_map:
        other_key = exact_map[key]
        other = other_functions[other_key]
        return {
            "status": "UNIQUE_EXACT_BODY_MATCH",
            "game": "shield" if game == "sword" else "sword",
            "entry": other["entry"],
            "evidence": "唯一 SHA-256 完全相同的 Ghidra 函数体字节",
        }
    other = other_functions.get(key)
    if other is not None:
        if item["body_sha256"] and item["body_sha256"] == other["body_sha256"]:
            return {
                "status": "SAME_RVA_HASH_AMBIGUOUS",
                "game": "shield" if game == "sword" else "sword",
                "entry": other["entry"],
                "evidence": "同 RVA 字节哈希相同，但至少一侧存在重复哈希，不能唯一映射",
            }
        return {
            "status": "SAME_RVA_DIFFERENT_BODY",
            "game": "shield" if game == "sword" else "sword",
            "entry": other["entry"],
            "evidence": "同 RVA 存在函数，但机器码哈希不同；不能仅据地址认定为同一函数",
        }
    if item["body_sha256"] and len(other_hash_counts.get(item["body_sha256"], [])) > 0:
        return {
            "status": "DUPLICATE_HASH_NOT_UNIQUELY_MAPPED",
            "game": "shield" if game == "sword" else "sword",
            "entry": "",
            "evidence": "另一版本存在相同哈希，但不是唯一函数对",
        }
    return {
        "status": "NO_EXACT_BODY_MATCH",
        "game": "shield" if game == "sword" else "sword",
        "entry": "",
        "evidence": "未找到唯一且完全相同的函数体字节",
    }


def target_label(key, functions, symbols):
    if key in functions:
        f = functions[key]
        return "0x" + f["entry"] + " " + clean(f["name"], 90)
    sym = symbols.get(key)
    if sym and sym["name"]:
        return "0x" + format_address(key) + " " + sym["name"]
    return "0x" + format(key, "x")


def infer_role(item, caller_count, callee_labels, strings):
    name = item["name"]
    if item["is_external"]:
        return ("外部/导入函数声明；当前数据库没有可供本次分析解释的内部实现。", "结构性")
    if item["is_thunk"]:
        return ("Ghidra 将其标记为 thunk/跳板候选；应继续确认实际转发目标及重定位。", "结构性")
    if not AUTO_NAME.match(name):
        return (
            "Ghidra 符号名提供职责线索（" + clean(name, 100) +
            "）；该名称不是对实际业务用途的独立验证。",
            "符号线索"
        )
    lowered = " ".join(callee_labels).lower()
    tags = []
    if any(x in lowered for x in ("memcpy", "memmove", "memset", "memcmp")):
        tags.append("内存/缓冲区操作")
    if any(x in lowered for x in ("malloc", "calloc", "realloc", "operator new", "operator delete", "free")):
        tags.append("内存分配或释放")
    if any(x in lowered for x in ("strlen", "strcmp", "strstr", "strncpy", "wcscmp", "string")):
        tags.append("字符串处理")
    if any(x in lowered for x in ("snprintf", "sprintf", "printf", "vsnprintf", "format")):
        tags.append("格式化文本")
    if any(x in lowered for x in ("fopen", "fread", "fwrite", "open", "read", "write")):
        tags.append("输入/输出")
    if strings:
        tags.append("字符串/资源引用")
    if tags:
        return (
            "未命名函数；从已识别的直接调用目标与字符串引用看，可能涉及" +
            "、".join(dict.fromkeys(tags)) +
            "。这只是静态线索，需检查调用点、参数和控制流。",
            "低（启发式）"
        )
    if len(callee_labels) >= 8:
        return (
            "未命名函数，存在多个已识别直接调用目标，属于调度/协调逻辑候选；"
            "需结合 CFG、参数流和调用者确认。",
            "低（结构推断）"
        )
    if caller_count >= 8 and len(callee_labels) <= 2:
        return (
            "未命名函数被多个函数直接调用、下游调用较少，属于共享辅助函数候选；"
            "尚不能确定具体职责。",
            "低（结构推断）"
        )
    if not callee_labels:
        return (
            "未命名函数，当前未发现可归属的直接调用目标，属于叶子函数候选；"
            "间接调用和运行时分派不在此结论范围内。",
            "低（结构推断）"
        )
    return (
        "未命名函数；目前只能确认其静态调用关系，具体用途待结合汇编、"
        "参数类型、数据引用及上层调用链进一步恢复。",
        "未定"
    )


def make_comment(game, item, counterpart, callers, callees, strings, reads, writes,
                 role, confidence, attribution):
    game_cn = "宝可梦剑 1.3.2" if game == "sword" else "宝可梦盾 1.3.2"
    name = clean(item["name"], 140) or "anonymous"
    lines = [
        "/*",
        " * [SWSH 自动注释 v1 | Ghidra 12.2]",
        " * 版本：" + game_cn,
        " * 函数入口：0x" + item["entry"],
        " * Ghidra 名称：" + name,
        " * 命名空间：" + (clean(item["namespace"], 120) or "(global)"),
        " * Ghidra 签名：" + (clean(item["signature"], 260) or "(未恢复)"),
        " * 函数体大小：" + str(item["body_bytes"]) + " bytes",
        " * 函数体 SHA-256：" + (item["body_sha256"] or "(unavailable)"),
    ]
    if counterpart["status"] == "UNIQUE_EXACT_BODY_MATCH":
        lines.append(
            " * 跨版本对应：" + counterpart["game"] + " 0x" + counterpart["entry"] +
            "（唯一函数体字节完全匹配；地址相同/搬迁不代表语义等价）"
        )
    else:
        lines.append(" * 跨版本对应：" + counterpart["status"] + "；" + counterpart["evidence"])
        if counterpart.get("entry"):
            lines.append(" * 对照入口：0x" + counterpart["entry"])
    lines.append(
        " * 直接调用关系：可归属调用者 " + str(len(callers)) +
        "；直接调用目标 " + str(len(callees))
    )
    if callers:
        lines.append(" * 调用者：" + "；".join(callers[:6]) +
                     ("；…（其余见 NDJSON 注释索引）" if len(callers) > 6 else ""))
    if callees:
        lines.append(" * 调用目标：" + "；".join(callees[:8]) +
                     ("；…（其余见 NDJSON 注释索引）" if len(callees) > 8 else ""))
    lines.append(
        " * 字符串引用：" + (
            "；".join("0x" + addr + " \"" + clean(value, 100) + "\""
                     for addr, value in strings[:5]) if strings else "(未发现可归属的直接字符串引用)"
        )
    )
    lines.append(
        " * 数据读取引用：" + ("、".join("0x" + x for x in reads[:6]) or "(未记录)")
    )
    lines.append(
        " * 数据写入引用：" + ("、".join("0x" + x for x in writes[:6]) or "(未记录)")
    )
    lines.append(" * 用途说明：" + role)
    lines.append(" * 判断可信度：" + confidence)
    if not attribution:
        lines.append(" * 归属限制：函数体非连续或存在地址区间重叠；未强行归属调用/数据引用。")
    lines.extend([
        " * 证据边界：只使用 Ghidra 静态符号、函数体、直接引用和字符串数据。",
        " * 不覆盖函数指针/虚调用/动态分派；不证明实机行为，也不是任天堂原始源码。",
        " */",
        "",
    ])
    return "\n".join(lines)


def zip_split(zip_path, out_dir):
    parts = []
    with zip_path.open("rb") as stream:
        index = 0
        while True:
            block = stream.read(ZIP_PART_LIMIT)
            if not block:
                break
            name = zip_path.name + ".part" + str(index).zfill(4) + ".bin"
            path = out_dir / name
            path.write_bytes(block)
            parts.append({"path": name, "size": len(block), "sha256": digest_file(path)})
            index += 1
    return {
        "zip_name": zip_path.name, "zip_size": zip_path.stat().st_size,
        "zip_sha256": digest_file(zip_path), "parts": parts,
        "rebuild": "cat " + zip_path.name + ".part*.bin > " + zip_path.name,
    }


def annotate_game(game, db_path, manifest_path, supplemental_dirs, out_dir,
                  other, exact_map, other_hashes):
    out_dir.mkdir(parents=True, exist_ok=True)
    manifest = read_manifest(manifest_path, game)
    db = sqlite3.connect("file:" + str(db_path.resolve()) + "?mode=ro", uri=True)
    try:
        functions, hash_map, owner_for, contiguous_count, metadata = load_functions(db, game)
        call_targets, callers, string_refs, reads, writes, symbols = (
            collect_relationships(db, functions, owner_for)
        )
        original_rows = db.execute(
            "SELECT f.entry,d.status,d.c,d.error FROM functions f "
            "LEFT JOIN decompilation d ON d.entry=f.entry ORDER BY f.entry"
        )
        records = {}
        c_success = 0
        c_fail = 0
        zip_path = out_dir / (game + "_annotated_c.zip")
        comments_path = out_dir / "function_comments.tsv"
        ndjson_path = out_dir / "function_annotations.ndjson.gz"
        index_path = out_dir / "function_annotations.csv"
        with zipfile.ZipFile(zip_path, "w", compression=zipfile.ZIP_DEFLATED,
                             compresslevel=6, allowZip64=True) as zf:
            zf.writestr("README.txt",
                "Ghidra 12.2 generated C pseudocode with evidence-backed Chinese function comments.\n"
                "This is not Nintendo original source. Static analysis only; runtime behavior not proven.\n"
                "Each C file begins with an automatically generated function-level comment.\n")
            for entry, status, c_text, error in original_rows:
                key = address_key(entry)
                item = functions[key]
                counterpart = counterpart_info(item, other[0], other_hashes, exact_map, game)
                attribution = owner_for(item["min_addr"]) == key if item["min_addr"] else False
                out_keys = sorted(call_targets.get(key, set()))
                caller_keys = sorted(callers.get(key, set()))
                callee_labels = [target_label(x, functions, symbols) for x in out_keys]
                caller_labels = [
                    "0x" + functions[x]["entry"] + " " + clean(functions[x]["name"], 90)
                    for x in caller_keys
                ]
                string_items = sorted(
                    ((format_address(addr), value) for addr, value in string_refs.get(key, {}).items()),
                    key=lambda x: x[0]
                )
                read_items = sorted(format_address(x) for x in reads.get(key, set()))
                write_items = sorted(format(x, "x") for x in writes.get(key, set()))
                role, confidence = infer_role(item, len(caller_keys), callee_labels, string_items)
                comment = make_comment(
                    game, item, counterpart, caller_labels, callee_labels,
                    string_items, read_items, write_items, role, confidence, attribution
                )
                normalized_status = status or "MISSING_STATUS"
                has_c = normalized_status == "OK" and isinstance(c_text, str) and bool(c_text.strip())
                if has_c:
                    c_success += 1
                    preface = (
                        "/* Recovered by Ghidra 12.2, not original Nintendo source.\n"
                        " * SWSH v1.3.2 original ELF SHA256: " + EXPECTED_ELF_SHA[game] + "\n"
                        " * Ghidra function entry: " + str(entry) + "; name: " +
                        clean(item["name"], 140) + "\n"
                        " */\n\n"
                    )
                    member = game + "/c/" + format_address(key)[:2] + "/" + format_address(key) + ".c"
                    zf.writestr(member, comment + preface + c_text.rstrip() + "\n")
                    normalized_status = "OK_ORIGINAL"
                else:
                    c_fail += 1
                records[key] = {
                    "game": game, "entry": str(entry), "name": item["name"],
                    "namespace": item["namespace"], "signature": item["signature"],
                    "min_addr": item["min_addr"], "max_addr": item["max_addr"],
                    "body_bytes": item["body_bytes"], "body_sha256": item["body_sha256"],
                    "is_thunk": item["is_thunk"], "is_external": item["is_external"],
                    "symbol_source": item["source"], "decompile_status": normalized_status,
                    "decompile_error": clean(error, 400),
                    "counterpart": counterpart,
                    "direct_callers": [
                        {"entry": functions[x]["entry"], "name": functions[x]["name"]}
                        for x in caller_keys
                    ],
                    "direct_callees": [
                        {"entry": functions[x]["entry"], "name": functions[x]["name"]}
                        if x in functions else {
                            "entry": "0x" + format(x, "x"),
                            "name": symbols.get(x, {}).get("name", "")
                        } for x in out_keys
                    ],
                    "string_references": [
                        {"address": "0x" + addr, "value": value}
                        for addr, value in string_items
                    ],
                    "data_reads": ["0x" + x for x in read_items],
                    "data_writes": ["0x" + x for x in write_items],
                    "reference_attribution": "CONTIGUOUS_UNAMBIGUOUS" if attribution else "SKIPPED",
                    "purpose_hypothesis": role, "confidence": confidence,
                    "comment": comment,
                }

        supplemental_added = 0
        supplemental_status = Counter()
        for directory in supplemental_dirs:
            if not directory.exists():
                continue
            for path in sorted(directory.rglob("*.c")):
                try:
                    key = address_key(path.stem)
                except ValueError:
                    continue
                if key not in records:
                    continue
                record = records[key]
                if record["decompile_status"] == "OK_ORIGINAL":
                    continue
                raw = path.read_text(encoding="utf-8", errors="replace")
                if not raw.strip():
                    continue
                retry_tier = "300S" if "300s" in str(path).lower() or "hard" in str(path).lower() else "180S"
                record["decompile_status"] = "OK_RETRY_" + retry_tier
                member = game + "/c_retry/" + format_address(key) + ".c"
                zf.writestr(member, record["comment"] + raw.rstrip() + "\n")
                supplemental_added += 1
                supplemental_status[retry_tier] += 1

        expected_original_c = int(manifest.get("decompiled_ok", manifest.get("c_success", -1)))
        if c_success != expected_original_c:
            raise ValueError(game + ": original C count mismatch: " +
                             str(c_success) + " != " + str(expected_original_c))
        if supplemental_added != 3:
            raise ValueError(game + ": expected 3 verified retry C files, found " +
                             str(supplemental_added))
        if len(records) != EXPECTED_FUNCTIONS[game]:
            raise ValueError(game + ": annotation count mismatch")
        if c_success + supplemental_added != (47981 if game == "sword" else 47982):
            raise ValueError(game + ": annotated C total differs from verified retry totals")

        with gzip.open(ndjson_path, "wt", encoding="utf-8", newline="\n", compresslevel=6) as stream:
            for key in sorted(records):
                stream.write(json.dumps(records[key], ensure_ascii=False, separators=(",", ":")) + "\n")
        with comments_path.open("w", encoding="utf-8", newline="") as stream:
            for key in sorted(records):
                entry = records[key]["entry"]
                encoded = base64.b64encode(records[key]["comment"].encode("utf-8")).decode("ascii")
                stream.write(entry + "\t" + encoded + "\n")
        with index_path.open("w", encoding="utf-8", newline="") as stream:
            writer = csv.writer(stream)
            writer.writerow(("entry", "name", "decompile_status", "body_bytes",
                             "counterpart_status", "counterpart_entry", "callers",
                             "callees", "strings", "purpose_hypothesis", "confidence"))
            for key in sorted(records):
                r = records[key]
                writer.writerow((
                    r["entry"], r["name"], r["decompile_status"], r["body_bytes"],
                    r["counterpart"]["status"], r["counterpart"]["entry"],
                    len(r["direct_callers"]), len(r["direct_callees"]),
                    len(r["string_references"]), r["purpose_hypothesis"], r["confidence"]
                ))
        split = zip_split(zip_path, out_dir)
        (out_dir / "annotated_c_parts_manifest.json").write_text(
            json.dumps(split, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
        summary = {
            "status": "ANNOTATED_GHIDRA_FUNCTIONS",
            "game": game,
            "version": "1.3.2",
            "ghidra": "12.2",
            "source_run_id": 42771375134,
            "original_elf_sha256": EXPECTED_ELF_SHA[game],
            "functions_annotated": len(records),
            "contiguous_unambiguous_function_bodies": contiguous_count,
            "original_decompiled_c": c_success,
            "supplemental_retry_c": supplemental_added,
            "annotated_c_total": c_success + supplemental_added,
            "remaining_without_c": len(records) - c_success - supplemental_added,
            "retry_tiers": dict(supplemental_status),
            "unique_exact_cross_version_body_matches": len(exact_map),
            "function_annotations_ndjson_gz_sha256": digest_file(ndjson_path),
            "function_comments_tsv_sha256": digest_file(comments_path),
            "annotated_c_zip": split,
            "evidence_boundary": (
                "Function-level comments are evidence-backed static hypotheses. "
                "No automatic claim of exact gameplay purpose or runtime behavior. "
                "Original C and original SQLite/Ghidra exports remain unchanged."
            ),
        }
        (out_dir / "summary.json").write_text(
            json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
        (out_dir / "README.md").write_text(
            "# " + ("Sword" if game == "sword" else "Shield") + " 1.3.2 — annotated Ghidra C\n\n"
            "Every function receives a Chinese function-level comment based on its Ghidra symbol, "
            "signature, body hash, direct callers/callees, direct string references and data refs. "
            "A unique exact-body counterpart is linked when supported by SHA-256 in both editions.\n\n"
            "The original raw C files are untouched. Annotated C is in the ZIP reconstructed from "
            "the .partNNNN.bin files. The NDJSON index covers every Ghidra function, including "
            "functions whose decompilation still fails. function_comments.tsv is used to apply "
            "the same comments to the native Ghidra project.\n\n"
            "Comments label inferred purposes and confidence explicitly. Ghidra-generated C is "
            "pseudocode, not Nintendo source; static references do not prove runtime behavior.\n",
            encoding="utf-8"
        )
        return summary
    finally:
        db.close()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--sword-db", type=Path, required=True)
    parser.add_argument("--shield-db", type=Path, required=True)
    parser.add_argument("--sword-manifest", type=Path, required=True)
    parser.add_argument("--shield-manifest", type=Path, required=True)
    parser.add_argument("--sword-supplemental", type=Path, action="append", default=[])
    parser.add_argument("--shield-supplemental", type=Path, action="append", default=[])
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    dbs = {}
    for game, path in (("sword", args.sword_db), ("shield", args.shield_db)):
        db = sqlite3.connect("file:" + str(path.resolve()) + "?mode=ro", uri=True)
        db.row_factory = None
        dbs[game] = db
    try:
        left = load_functions(dbs["sword"], "sword")
        right = load_functions(dbs["shield"], "shield")
        sword_to_shield, shield_to_sword, ambiguous = build_cross_map(left, right)
        if len(sword_to_shield) != 22520:
            raise ValueError("Cross-version exact-body map count mismatch: " + str(len(sword_to_shield)))
        relocated = sum(a != b for a, b in sword_to_shield.items())
        if relocated != 10011:
            raise ValueError("Cross-version relocated exact-body map count mismatch: " + str(relocated))
        summaries = {}
        summaries["sword"] = annotate_game(
            "sword", args.sword_db, args.sword_manifest, args.sword_supplemental,
            args.out / "sword", right, sword_to_shield, right[1]
        )
        summaries["shield"] = annotate_game(
            "shield", args.shield_db, args.shield_manifest, args.shield_supplemental,
            args.out / "shield", left, shield_to_sword, left[1]
        )
        combined = {
            "status": "BOTH_EDITIONS_ANNOTATED",
            "source_run_id": 42771375134,
            "unique_exact_body_pairs": len(sword_to_shield),
            "relocated_exact_body_pairs": relocated,
            "ambiguous_duplicate_hash_groups_excluded": ambiguous,
            "sword": summaries["sword"],
            "shield": summaries["shield"],
            "combined_annotated_c_total": (
                summaries["sword"]["annotated_c_total"] +
                summaries["shield"]["annotated_c_total"]
            ),
            "combined_functions_annotated": (
                summaries["sword"]["functions_annotated"] +
                summaries["shield"]["functions_annotated"]
            ),
        }
        args.out.mkdir(parents=True, exist_ok=True)
        (args.out / "combined_summary.json").write_text(
            json.dumps(combined, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
        print(json.dumps(combined, ensure_ascii=False, indent=2))
    finally:
        for db in dbs.values():
            db.close()


if __name__ == "__main__":
    main()
