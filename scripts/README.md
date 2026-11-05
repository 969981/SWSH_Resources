# Scripts (Python 3.10+; standard library only)

## Export a 15-column inventory from actual local source files
```powershell
python scripts/export_inventory.py --root '.\v1.3.2' --out artifacts/sword_files.csv
.\scripts\Export-SWSHInventory.ps1 -Root '.\v1.3.2' -Output 'artifacts\sword_files.csv'
```

- Use the actual local extraction root; an old listing referring to `J:` is not a live drive.
- By default SHA-256 and SHA-1 are streamed for every file. `--skip-hash` is faster but not verification.
- Preserve the original NCA root in `RelativePath` if scanning above the `*_NCA` directories.
- The script does not modify, unpack or delete source files. Outputs inside the scan root are excluded if they exactly match `--out`.

## Compare both source inventories
```powershell
python scripts/compare_inventories.py --sword sword_1.3.2_file_inventory_full.csv --shield shield_1.3.2_file_inventory_full.csv --out-dir artifacts/swsh-compare
```

Output: `comparison_all.csv`, `comparison_differences.csv`, `summary.json`. Statuses are `IDENTICAL`, `CONTENT_DIFFERENT`, `ONLY_SWORD`, `ONLY_SHIELD`, `HASH_MISSING`, `SIZE_DIFFERENT_HASH_MISSING`. Use `--fail-on-unverified` to reject hashes that are missing.

## Tests
```powershell
python -m unittest discover -s tests -v
python -m compileall -q scripts tests
```

CI runs synthetic tests and performs an inventory-only comparison. It does not download or publish game executables. Windows PowerShell may require setting a narrowly scoped execution policy or running the Python command directly.
