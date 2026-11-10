# Shield 1.3.2 — Ghidra 12.2 full static export

Source: [Actions #42771375134](https://github.com/969981/SWSH_Resources/actions/runs/42771375134).

- \`project/SWSH_shield.gpr\` and \`.rep/\`: editable native Ghidra program; restore project_parts first if present.
- \`database/\`: losslessly split **raw SQLite bytes** (not ZIP or gzip).
- \`ndjson/\`: **plain** JSON-lines parts, each part ends on a whole JSON record.
- \`c/\`: 47979 individual C pseudocode files; 5 failures or empty results are recorded in \`decompiled_index.csv\`.
- \`parts_manifest.json\`: original and each-shard SHA-256 and counts.

Restore using \`python3 tools/ghidra/swsh_restore_split.py --source <this-directory> --out <empty-directory>\`.
These files are Ghidra-derived static analysis, not Nintendo's original source code.
