#!/usr/bin/env python3
"""Read-only, ELF byte-checked Sword/Shield trainer ID function export.

Requires the already existing v1.3.2/0/{sword,shield}_main.elf files and
losslessly restored Ghidra SQLite files from Run 42771375134. Emits Markdown
and JSON under an ignored output directory. Never writes source/game files.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import sqlite3
import struct
from pathlib import Path

BASE = 0x100000
Q = chr(96)
SHA = {
    "sword": "4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43",
    "shield": "a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a",
}
FUNCTIONS = {
    "state_dispatch": (0x00D87D80, 0x00D87D80),
    "generate_id32": (0x01006F50, 0x01006F80),
    "write_id32": (0x01524CF0, 0x01524D20),
    "read_id32": (0x01524D00, 0x01524D30),
    "read_id6": (0x01524D10, 0x01524D40),
}
CALLS = {
    "sword": (0x01006F98, 0x01006FA4, 0x00D87F18, 0x00D87F4C),
    "shield": (0x01006FC8, 0x01006FD4, 0x00D87F18, 0x00D87F4C),
}


def load_elf(path: Path, expected: str):
    data = path.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != expected:
        raise ValueError(f"{path}: SHA-256 mismatch, got {digest}")
    if len(data) < 64 or data[:6] != b"\x7fELF\x02\x01":
        raise ValueError("Not little-endian ELF64")
    if struct.unpack_from("<H", data, 18)[0] != 183:
        raise ValueError("ELF machine is not AArch64")
    phoff = struct.unpack_from("<Q", data, 32)[0]
    phsize = struct.unpack_from("<H", data, 54)[0]
    phnum = struct.unpack_from("<H", data, 56)[0]
    if phsize < 56 or phsize > 256 or phnum < 1 or phnum > 256:
        raise ValueError("Bad ELF program-header count/size")
    if phoff + phnum * phsize > len(data):
        raise ValueError("Truncated program-header table")
    segments = []
    for i in range(phnum):
        p = phoff + i * phsize
        typ, flags, off, va, pa, size, memsize, align = struct.unpack_from(
            "<IIQQQQQQ", data, p
        )
        if typ == 1 and size:
            if off + size > len(data):
                raise ValueError("PT_LOAD extends beyond ELF")
            segments.append((va, off, size))
    if not segments:
        raise ValueError("No file-backed PT_LOAD ranges")
    return data, segments, digest


def byte_match(data: bytes, segments, gva: int, hex_bytes: str) -> bool:
    if not re.fullmatch(r"[0-9A-Fa-f]{8}", hex_bytes):
        return False
    expected = bytes.fromhex(hex_bytes)
    matched_offsets = set()
    for addr in (gva, gva - BASE):
        if addr < 0:
            continue
        for va, off, size in segments:
            if va <= addr and addr + 4 <= va + size:
                fileoff = off + addr - va
                if data[fileoff:fileoff + 4] == expected:
                    matched_offsets.add(fileoff)
    if len(matched_offsets) > 1:
        raise ValueError(f"Ambiguous ELF mappings for 0x{gva:08X}")
    return len(matched_offsets) == 1


def note(mnemonic: str) -> str:
    m = (mnemonic or "").lower()
    if m in ("bl", "blr"):
        return "调用；具体被调对象需查看reference记录"
    if m in ("ldr", "ldrb", "ldrh", "ldrsw", "ldp", "ldur"):
        return "读入内存内容"
    if m in ("str", "strb", "strh", "stp", "stur"):
        return "写入内存内容"
    if m in ("udiv", "sdiv", "msub"):
        return "除法/乘减；与其他指令配合判断取模"
    if m in ("cbz", "cbnz", "tbz", "tbnz") or m.startswith("b."):
        return "条件跳转"
    if m == "b":
        return "直接跳转"
    if m in ("adrp", "adr", "add", "sub", "mov", "movz", "movk"):
        return "地址/寄存器计算"
    if m in ("cmp", "cmn", "tst", "csel"):
        return "比较或条件选择"
    if m.startswith("ret"):
        return "返回"
    return "保留原生指令，尚未恢复字段语义"


def export_game(game: str, repo: Path, db_path: Path, out: Path) -> dict:
    data, segments, digest = load_elf(
        repo / "v1.3.2" / "0" / (game + "_main.elf"), SHA[game]
    )
    uri = "file:" + db_path.resolve().as_posix() + "?mode=ro"
    db = sqlite3.connect(uri, uri=True)
    db.row_factory = sqlite3.Row
    summary = {"game": game, "elf_sha256": digest, "functions": {}, "call_sites": {}}
    lines = [
        f"# {game.title()} v1.3.2 — 身份生成原生函数逐指令证据",
        "", f"ELF SHA-256: {Q}{digest}{Q}",
        "", "本文件从真实Ghidra SQLite逐条读取 ARM64 指令，并与ELF核对字节。",
        "Ghidra min/max 为函数地址包络，可能包含非连续代码间隙；"
        "这里不声称已经覆盖函数所有非连续地址范围。", "",
    ]
    with db:
        if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError(f"{game}: SQLite integrity_check failed")
        seen = {}
        for name, pair in FUNCTIONS.items():
            gva = pair[0 if game == "sword" else 1]
            row = db.execute(
                "SELECT * FROM functions WHERE lower(entry)=?",
                (f"{gva:08x}",),
            ).fetchone()
            lines.extend([f"## {name}: Ghidra 0x{gva:08X}, main+0x{gva-BASE:08X}", ""])
            if row is None:
                summary["functions"][name] = {"status": "NOT_FOUND"}
                lines.extend(["目标未在functions表中找到。", ""])
                continue
            mn, mx = row["min_addr"], row["max_addr"]
            if not mn or not mx or int(mn, 16) > int(mx, 16):
                raise ValueError(f"{name}: invalid min/max")
            instruction_rows = db.execute(
                "SELECT addr, bytes_hex, mnemonic, display_text FROM instructions "
                "WHERE addr BETWEEN ? AND ? ORDER BY addr", (mn, mx)
            ).fetchall()
            lines.extend([
                f"函数范围: {Q}{mn}{Q}..{Q}{mx}{Q}; body_bytes="
                f"{row['body_bytes']}; SHA256={Q}{row['body_sha256']}{Q}",
                "", "| Ghidra VA | main+RVA | 4字节指令 | 反汇编 | 注释和字节校验 |",
                "|---|---|---|---|---|",
            ])
            matches = 0
            errors = []
            for ins in instruction_rows:
                va = int(ins["addr"], 16)
                raw = ins["bytes_hex"] or ""
                okay = byte_match(data, segments, va, raw)
                status = "ELF_MATCH" if okay else "ELF_MISMATCH_OR_NO_BYTES"
                if okay:
                    matches += 1
                else:
                    errors.append(f"{va:08x}")
                seen[va] = {"mnemonic": ins["mnemonic"], "byte_status": status}
                asm = (ins["display_text"] or ins["mnemonic"] or "").replace("|", "/")
                comment = note(ins["mnemonic"])
                if va in CALLS[game]:
                    comment = "候选关键调用位置；必须核查CALL与具体目标；" + comment
                lines.append(
                    f"| {Q}0x{va:08X}{Q} | {Q}0x{va-BASE:08X}{Q} | "
                    f"{Q}{raw}{Q} | {Q}{asm}{Q} | {comment}; {status} |"
                )
            outcome = "ELF_MATCH" if matches == len(instruction_rows) and matches else "PARTIAL"
            summary["functions"][name] = {
                "gva": f"{gva:08x}", "rva": f"{gva-BASE:08x}",
                "body_min": mn, "body_max": mx,
                "body_bytes": row["body_bytes"], "body_sha256": row["body_sha256"],
                "ins_count": len(instruction_rows), "elf_verified": matches,
                "mismatched_vas": errors, "status": outcome,
            }
            lines.extend(["", f"本范围字节结果：{outcome} ({matches}/{len(instruction_rows)})", ""])
            refs = db.execute(
                "SELECT from_addr, to_addr, ref_type FROM references_full "
                "WHERE from_addr BETWEEN ? AND ? AND is_call=1 ORDER BY from_addr",
                (mn, mx),
            ).fetchall()
            if refs:
                lines.extend(["| CALL VA | 目标 VA | Ghidra 引用类型 |",
                              "|---|---|---|"])
                for ref in refs:
                    lines.append(
                        f"| {Q}{ref['from_addr']}{Q} | {Q}{ref['to_addr']}{Q} | "
                        f"{ref['ref_type']} |"
                    )
                lines.append("")
            dec = db.execute(
                "SELECT status, c, error FROM decompilation WHERE entry=?",
                (row["entry"],),
            ).fetchone()
            if dec and dec["status"] == "OK" and dec["c"]:
                lines.extend(["完整 Ghidra C（非原始开发源码）：", "",
                              Q * 3 + "c", dec["c"].rstrip(), Q * 3, ""])
            else:
                lines.extend([
                    "C反编译不可用：" +
                    (str(dec["status"]) + "/" + str(dec["error"]) if dec else "NO_ROW"),
                    "",
                ])
        lines.extend(["## 四个指定调用地址独立复核", "",
                      "| VA | mnemonic | ELF字节 | call判断 |",
                      "|---|---|---|---|"])
        for va in CALLS[game]:
            ins = seen.get(va)
            if ins is None:
                row = db.execute(
                    "SELECT mnemonic,bytes_hex FROM instructions WHERE lower(addr)=?",
                    (f"{va:08x}",),
                ).fetchone()
                if row:
                    ins = {
                        "mnemonic": row["mnemonic"],
                        "byte_status": ("ELF_MATCH" if byte_match(
                            data, segments, va, row["bytes_hex"] or ""
                        ) else "ELF_MISMATCH_OR_NO_BYTES"),
                    }
            if ins:
                m = (ins["mnemonic"] or "").lower()
                verdict = "CALL_INSTRUCTION" if m in ("bl", "blr") else "NOT_CALL"
                summary["call_sites"][f"{va:08x}"] = {
                    **ins, "classification": verdict
                }
                lines.append(
                    f"| {Q}0x{va:08X}{Q} | {ins['mnemonic']} | "
                    f"{ins['byte_status']} | {verdict} |"
                )
            else:
                summary["call_sites"][f"{va:08x}"] = {"classification": "NOT_FOUND"}
                lines.append(f"| {Q}0x{va:08X}{Q} | - | - | NOT_FOUND |")
        lines.extend(["", "提醒：静态指令匹配不等于真实运行时执行或持久化成功。", ""])
    out.mkdir(parents=True, exist_ok=True)
    (out / f"{game}-trainer-id-asm.md").write_text(
        "\n".join(lines), encoding="utf-8"
    )
    db.close()
    return summary


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--sword-sqlite", type=Path, required=True)
    p.add_argument("--shield-sqlite", type=Path, required=True)
    p.add_argument("--out", type=Path, default=Path("artifacts/swsh-trainer-id"))
    args = p.parse_args()
    results = [
        export_game("sword", args.repo, args.sword_sqlite, args.out),
        export_game("shield", args.repo, args.shield_sqlite, args.out),
    ]
    (args.out / "summary.json").write_text(
        json.dumps(results, indent=2, ensure_ascii=False) + "\n",
        encoding="utf-8",
    )
    print("Exported:", args.out)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
