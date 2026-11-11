# SWSH Research Vault

Obsidian-compatible entry point. Follow Markdown links; no Obsidian plugins are required.

## Read first
- [[repository-layout|Repository layout]] — checked-in files versus file inventory paths
- [[resource-provenance|Resource provenance]] — source SHA-256 and evidence labels
- [[formats/swsh-file-families|SWSH file families]] — known extensions and parsing priorities
- [[research/sword-vs-shield-1.3.2|Sword vs Shield 1.3.2]] — verified manifest comparison\n- [[obsidian/SWSH-v1.3.2/27-野生PKL版本隔离与原始字节级复核|SWSH Wild PKL 版本隔离复核]] — 4/4 原始成员到 PKHeX PKL 字节一致
- [[research/swsh-main-nx2elf|Sword/Shield ELF reconstruction]] — nx2elf provenance
- [[research/swsh-ghidra-full-analysis|Sword/Shield Ghidra 12.2 static analysis]] — native project, raw SQLite/NDJSON shards, C source and function-byte comparison
- [[research-roadmap|Research roadmap]] — next technical steps

- [[obsidian/SWSH-v1.3.2/28-剑盾训练家ID-双版ELF与Ghidra逐行审计|Trainer ID ELF / Ghidra audit]] — 4-byte RNG, raw ID, six-digit ID, profile copyback, exact dual-ELF export recipe

- [[obsidian/SWSH-v1.3.2/29-剑盾训练家ID-双版ARM64指令与盾版C|Dual-edition trainer ID ARM64 and Shield C]] — verified static BL targets and per-edition C pseudocode

## Note conventions
Use versioned identifiers (for example `SWSH-1.3.2`), full original NCA-relative paths, exact hashes and reproducible commands. Use `CONFIRMED`/`CANDIDATE`/`UNKNOWN`/`REJECTED` for assertions. Distinguish raw binary, decoded containers, structured records, and runtime-confirmed semantics.

## Current scope
Source inventories cover both Sword and Shield. The checked-in binary set includes the ExeFS group under `v1.3.2/0/` and Sword v1.3.2 RomFS outputs under `v1.3.2/1/`; files above 90 MiB are represented by per-file 7-Zip volume sets. Shield RomFS remains inventory-only.

- [[obsidian/SWSH-v1.3.2/30-剑盾训练家ID-Heap地址与Main原生指针链|SWSH Trainer ID heap/main pointer mapping]] — static main slot, dual dereference, SysBot heap offset correspondence and read-only runtime parity audit.
