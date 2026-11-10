# Sword / Shield v1.3.2: Ghidra 12.2 full machine-code atlas

## Scope

The two **verified reconstructed** ELF64/AArch64 inputs are immutable:

| Game | ELF | Source SHA-256 |
| --- | --- | --- |
| Sword | \`v1.3.2/0/sword_main.elf\` | \`4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43\` |
| Shield | \`v1.3.2/0/shield_main.elf\` | \`a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a\` |

The ELFs were rebuilt from the game-distributed NSOs using the vendored \`nx2elf\`. Ghidra reconstructs function boundaries, control flow and *C-like pseudocode*; it does **not** recover Nintendo's original source, omitted debugging information or original symbol names.

## Reproducible workflow

- Analysis: \`.github/workflows/swsh-ghidra-full.yml\`. Two independent Ghidra 12.2/JDK 25 jobs, one per game, run on GitHub-hosted Ubuntu.
- The official \`ghidra_12.2_PUBLIC_20261016.zip\` is checked by SHA-256 \`2c2cd776db3c1f6a097ba418922378ac3649cadd5e844a6f5f088ae628a7be67\`.
- The actual Ghidra headless post-script is \`tools/ghidra/SWSHExport.java\`. It enumerates discovered functions, instruction bytes, symbols, initialized memory, typed data and references, and **attempts to decompile every recognized function**, recording both successes and failures.
- The function-byte SHA-256 is calculated over all actual Ghidra function-body address ranges in ascending order. A null hash is reported as unavailable, **not** guessed.
- \`tools/ghidra/swsh_build_sqlite.py\` reads the Ghidra-generated NDJSON and creates indexed, verified SQLite tables. \`tools/ghidra/swsh_extract_c.py\` extracts C and per-function success/failure records.
- After both analysis jobs succeed, \`.github/workflows/swsh-ghidra-publish.yml\` downloads the actual job artifacts, validates provenance, losslessly splits files, compares Sword with Shield, restores the raw-byte parts to verify SHA-256 and pushes Git-safe batches to \`master\`. It never force-pushes.

No Ghidra output is marked complete merely because the workflow was submitted. Consult the specific **completed** run's manifests before claiming functions or C pseudocode were recovered.

## Git layout after a successful publishing run

\`\`\`text
derived/v1.3.2/Ghidra_12.2_Run_<RUN_ID>/
├── sword/
│   ├── project/SWSH_sword.gpr
│   ├── project/SWSH_sword.rep/...
│   ├── project_parts/...
│   ├── database/sword.sqlite.part0000.bin
│   ├── ndjson/events.part0000.ndjson
│   ├── c/00/0000....c
│   ├── sqlite_manifest.json
│   ├── decompiled_manifest.json
│   ├── decompiled_index.csv
│   └── parts_manifest.json
├── shield/
│   └── (equivalent)
├── comparison/
│   ├── same_entry_function_comparison.csv
│   ├── same_machine_bytes_different_entry_candidates.csv
│   └── summary.json
└── README.md
\`\`\`

Files under \`database\` are **uncompressed SQLite byte slices**, not separate databases. Every shard has a size and SHA-256, along with the original complete database's SHA-256. NDJSON files are **plain UTF-8, line-aligned JSON**, not compressed fragments. A \`*.c\` is one Ghidra-successful function, with its original address in the filename and pseudocode provenance in the header. All failures appear in \`decompiled_index.csv\`.

Native Ghidra project files appear unarchived as \`.gpr\` plus \`.rep/\`; individual internal \`.rep\` files over 45 MiB go in \`project_parts/\` and must be rebuilt before opening the project. No ordinary Git blob exceeds 45 MiB, safely below GitHub's 100 MB limit.

## Restore raw SQLite, NDJSON and the editable Ghidra project

Run from the repository root, using the actual successful source run ID:

\`\`\`bash
python3 tools/ghidra/swsh_restore_split.py \
  --source derived/v1.3.2/Ghidra_12.2_Run_<RUN_ID>/sword \
  --out /tmp/SWSH-sword-restored
python3 tools/ghidra/swsh_restore_split.py \
  --source derived/v1.3.2/Ghidra_12.2_Run_<RUN_ID>/shield \
  --out /tmp/SWSH-shield-restored
\`\`\`

These commands require **new empty output directories**. They reconstruct the original byte streams exactly, check SHA-256 for each chunk and full output, check SQLite \`PRAGMA integrity_check\`, counts and the NDJSON record total, and restore the full \`.gpr/.rep\` native project. Open the restored \`.gpr\` in **Ghidra 12.2** (do not open before restoring oversized internal files).

SQLite example:

\`\`\`sql
SELECT entry, name, body_bytes, body_sha256 FROM functions ORDER BY entry LIMIT 20;
SELECT entry, status, error FROM decompilation WHERE status != 'OK';
SELECT from_addr, to_addr FROM call_edges LIMIT 20;
SELECT addr, preview FROM string_items WHERE preview LIKE '%Pokemon%' LIMIT 30;
SELECT entry, c FROM decompilation WHERE status = 'OK' LIMIT 1;
\`\`\`

## Sword ↔ Shield cross-version analysis

\`tools/ghidra/swsh_compare.py\` compares **real Ghidra body-byte hashes**, not merely same-sized ELF sections or names. Its output distinguishes:

- \`SAME_ENTRY_MATCHED_MACHINE_BYTES\`: same entry address and equal SHA-256 of actual function-body bytes;
- \`SAME_ENTRY_DIFFERENT_MACHINE_BYTES\`: same entry address, different bytes;
- \`ONLY_SWORD\`, \`ONLY_SHIELD\`: not present among Ghidra-discovered functions for the other game;
- \`BYTE_HASH_UNAVAILABLE\`: parsing/memory evidence insufficient.
- Unique equal body-byte hashes at different entries are **candidate correspondences** and have a separate CSV.

Same entry address is **not proof** of same function role; byte equality also does not prove runtime equivalence when external data or calls differ. C output is pseudocode and its textual hash is a secondary analysis fingerprint, not a semantic proof. Sections with missing or timed-out function recovery remain explicitly unverified.

## Acceptance criteria and provenance

1. Both original ELF SHA-256 values are checked.
2. Official Ghidra 12.2 download SHA-256 checked; JDK25 used.
3. Both independent headless analyses end with Ghidra-generated **complete** event summaries, at least one recovered function/instruction, a decompile status per discovered function, and a native \`.gpr/.rep\`.
4. SQLite per-event counts agree with Ghidra's summary, and \`integrity_check\` succeeds.
5. C index has one row per attempted function; the number of actual \`.c\` files equals the number of successful nonempty C outputs; failures are not hidden.
6. The publisher confirms both versions' hashes and reconstructs raw SQLite and line-aligned NDJSON byte-exactly.
7. A successful Git push is required before declaring branch publication complete. The source-run and publisher-run pages retain the audit trail.

**Processing-state note:** 'full' refers to exhaustive enumeration and decompilation attempts against the functions found by this particular Ghidra static-analysis run. It is not a claim that every native routine, stripped symbol, indirect call target or dynamic gameplay path has been recovered. Validation in the real game is \`NOT_OBSERVED\`.

## Tool provenance

The Java exporter/SQLite/C exporter use the same event schema and batch processing approach as the earlier HOME 4.1.0 static Ghidra pipeline, adapted here to Sword/Shield-specific original ELF checks and genuine cross-edition body-byte comparison. Synthetic unit tests live at \`tests/test_swsh_ghidra_pipeline.py\`.
