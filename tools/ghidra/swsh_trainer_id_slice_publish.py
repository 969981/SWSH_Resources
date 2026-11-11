#!/usr/bin/env python3
"""Publish byte-backed Ghidra-C and ARM64 instruction windows as one Obsidian note.

Runs in CI on SPARSE-CHECKED-OUT, immutable Sword/Shield ELFs and Ghidra
artifacts. Does not modify source binaries. A linear disassembly window is
NOT a proven whole function body when Ghidra reports non-contiguous ranges.
"""
from __future__ import annotations

import hashlib
import json
import re
import shutil
import subprocess
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
GITHUB_DIR = "derived/v1.3.2/Ghidra_12.2_Run_42771375134"
SWORD_C = ROOT / GITHUB_DIR / "sword" / "c"
SHIELD_ZIP = ROOT / GITHUB_DIR / "annotations_v1" / "shield"
OUT = ROOT / "docs" / "obsidian" / "SWSH-v1.3.2" / "29-剑盾训练家ID-双版ARM64指令与盾版C.md"
Q = chr(96)
SHA = {
    "sword": "4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43",
    "shield": "a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a",
}
# Do not silently assert lengths are exact: upper ends are conservative
# linear extraction windows chosen from adjacent Ghidra entries/known anchors.
WINDOWS = {
    "state": (0x00D87D80, 0x00D87FC0),
    "generator": (0x01006F50, 0x01007280),
    "setter": (0x01524CF0, 0x01524D00),
    "raw_get": (0x01524D00, 0x01524D10),
    "six_get": (0x01524D10, 0x01524D30),
}
SHIELD_SHIFT = {"state": 0, "generator": 0x30, "setter": 0x30, "raw_get": 0x30, "six_get": 0x30}
CALLS = {
    "sword": {0x01006F98: "CSPRNG", 0x01006FA4: "ID32 setter",
              0x00D87F18: "dispatch call #1", 0x00D87F4C: "dispatch call #2"},
    "shield": {0x01006FC8: "CSPRNG", 0x01006FD4: "ID32 setter",
               0x00D87F18: "dispatch call #1", 0x00D87F4C: "dispatch call #2"},
}


def get_source_c(game: str, entry: int, zf: zipfile.ZipFile) -> str:
    name = f"{entry:08x}.c"
    if game == "sword":
        original = SWORD_C / f"{entry:08x}"[:2] / name
        return original.read_text(encoding="utf-8")
    paths = [n for n in zf.namelist() if n.lower().endswith("/" + name)]
    if len(paths) != 1:
        raise RuntimeError(f"Shield C entry {name} ambiguous/missing: {paths[:5]}")
    return zf.read(paths[0]).decode("utf-8")


def llvm_disassembler() -> str:
    for name in ("llvm-objdump", "llvm-objdump-20", "llvm-objdump-19", "llvm-objdump-18", "llvm-objdump-17"):
        if shutil.which(name):
            return name
    raise RuntimeError("LLVM objdump unavailable on runner")


def comment(mnemonic: str) -> str:
    m = mnemonic.lower()
    if m == "bl":
        return "BL: 有返回的直接调用（按实际目标检查语义）"
    if m == "blr":
        return "BLR: 间接调用（目标需要寄存器证据）"
    if m in ("ldr", "ldrb", "ldrh", "ldur", "ldp"):
        return "读取内存/栈字段"
    if m in ("str", "strb", "strh", "stur", "stp"):
        return "写入内存/保存寄存器"
    if m in ("udiv", "msub"):
        return "除法/乘减组合，候选取模"
    if m in ("cbz", "cbnz", "tbz", "tbnz") or m.startswith("b."):
        return "条件跳转"
    if m.startswith("ret"):
        return "函数返回"
    if m == "adrp":
        return "构造相对页地址"
    return "原始指令；未恢复确定的业务字段"


def disasm(elf: Path, begin_rva: int, end_rva: int) -> tuple[list[str], str]:
    objdump = llvm_disassembler()
    for base, mode in ((0, "RVA"), (0x100000, "GhidraVA")):
        proc = subprocess.run(
            [objdump, "-d", "--no-show-raw-insn",
             f"--start-address=0x{begin_rva+base:x}",
             f"--stop-address=0x{end_rva+base:x}", str(elf)],
            capture_output=True, text=True, check=True,
        )
        lines = []
        for line in proc.stdout.splitlines():
            # With --no-show-raw-insn LLVM emits: <address>: <mnemonic> <operands>
            match = re.match(r"^\s*([0-9a-fA-F]+):\s+([a-zA-Z.][a-zA-Z0-9.]*)\b(.*)$", line)
            if match:
                addr = int(match.group(1), 16)
                if begin_rva + base <= addr < end_rva + base:
                    mnemonic = match.group(2)
                    gva = addr if base else addr + 0x100000
                    lines.append((addr, gva, line.strip(), mnemonic))
        if lines and (lines[0][0] == begin_rva + base):
            return lines, mode
    raise RuntimeError(f"No valid AArch64 disassembly for {elf} at {begin_rva:08x}")


def main() -> None:
    parts = [
        SHIELD_ZIP / "shield_annotated_c.zip.part0000.bin",
        SHIELD_ZIP / "shield_annotated_c.zip.part0001.bin",
    ]
    m = json.loads((SHIELD_ZIP / "annotated_c_parts_manifest.json").read_text(encoding="utf-8"))
    # Write only into the ignored artifacts/ work tree.
    tmp = ROOT / "artifacts" / "swsh-trainer-id" / "shield_annotated_c.zip"
    tmp.parent.mkdir(parents=True, exist_ok=True)
    digest = hashlib.sha256()
    with tmp.open("wb") as dst:
        for part in parts:
            with part.open("rb") as inp:
                while block := inp.read(1 << 20):
                    digest.update(block)
                    dst.write(block)
    if digest.hexdigest() != m["zip_sha256"]:
        raise ValueError("Shield annotated C archive hash does not match manifest")
    text = [
        "# 剑盾 v1.3.2 — 双版原始 ARM64 指令窗口与 Ghidra C",
        "", "> 自动生成：分别核对两份 ELF 的 SHA-256，使用 LLVM 反汇编指定线性窗口；"
        "C 来自 Sword Ghidra 独立导出及 Shield Ghidra annotated C ZIP。"
        "这不是 Nintendo 原始代码，也**不等于 Ghidra 完整非连续函数体枚举**。",
        "", "参见 [[28-剑盾训练家ID-双版ELF与Ghidra逐行审计]]。",
        "",
    ]
    with zipfile.ZipFile(tmp) as zf:
        for game in ("sword", "shield"):
            elf = ROOT / "v1.3.2" / "0" / (game + "_main.elf")
            actual = hashlib.sha256(elf.read_bytes()).hexdigest()
            if actual != SHA[game]:
                raise ValueError(f"{game} ELF hash mismatch: {actual}")
            text += [f"## {game.title()}", "", f"Verified SHA256: {Q}{actual}{Q}", ""]
            for role, (start, stop) in WINDOWS.items():
                shift = SHIELD_SHIFT[role] if game == "shield" else 0
                a, b = start + shift, stop + shift
                assembly, offset_type = disasm(elf, a - 0x100000, b - 0x100000)
                text += [
                    f"### {role} — Ghidra {Q}0x{a:08X}{Q}, main+{Q}0x{a-0x100000:08X}{Q}",
                    "", f"Linear window (not exact-body proof): {Q}0x{a:08X}{Q}..{Q}0x{b:08X}{Q}; objdump mapping {offset_type}",
                    "", "| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |",
                    "|---|---|---|---|",
                ]
                for addr, gva, ins, mnemonic in assembly:
                    hint = comment(mnemonic)
                    if gva in CALLS[game]:
                        hint = f"关键调用候选[{CALLS[game][gva]}]；" + hint
                    text.append(
                        f"| {Q}0x{gva:08X}{Q} | {Q}0x{gva-0x100000:08X}{Q} | "
                        f"{Q}{ins.replace('|','/')}{Q} | {hint} |"
                    )
                text += ["", "本函数的完整 Ghidra C 伪代码：", "", Q * 3 + "c",
                         get_source_c(game, a, zf).rstrip(), Q * 3, ""]
    text += [
        "## 静态证据边界", "",
        "LLVM 指令窗口来自哈希验证的完整 ELF；函数名/原始 ID 语义来自同版 Ghidra C。"
        " 窗口终点是保守选择，若有跨窗口/非连续函数体，必须回 Ghidra SQLite 获取精确 CFG。"
        " 运行时写回、初始化状态码语义与持久化均仍需实机验证。", "",
    ]
    OUT.write_text("\n".join(text), encoding="utf-8")
    print(f"Wrote {OUT}, lines={len(text)}")


if __name__ == "__main__":
    main()
