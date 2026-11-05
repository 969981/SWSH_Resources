# Sword vs Shield — 1.3.2 manifest comparison

Status: **CONFIRMED at file SHA-256 inventory level**, not yet a code-flow or gameplay difference analysis.

## Inputs
- `sword_1.3.2_file_inventory_full.csv` — 50,500 rows, root `f13bc7b678b5c86998ff4e847e180142_NCA/`.
- `shield_1.3.2_file_inventory_full.csv` — 50,500 rows, root `87e41bc80e9051bc263fb39af949f462_NCA/`.
- Comparison key: `0/...` or `1/...` after stripping source-specific NCA roots.
- Comparison evidence: equal nonempty SHA-256, not equal filename or byte length.

## Observations
| Area | Files per version | Identical SHA-256 | Different SHA-256 |
| --- | ---: | ---: | ---: |
| ExeFS (`0/`) | 6 | 4 | 2 |
| RomFS (`1/`) | 50,494 | 50,494 | 0 |
| **Total** | **50,500** | **50,498** | **2** |

Different paths:
1. `0/main`: Sword 21,162,542 bytes, Shield 21,164,977 bytes; NSO0 executables.
2. `0/main.npdm`: both 1,540 bytes but different SHA-256; `META` signature.

The remaining four ExeFS modules `rtld`, `sdk`, `subsdk0`, `subsdk1` match by SHA-256. These observations support shared RomFS parsing across both versions **for these specific v1.3.2 extracted inventories**; they do not prove all gameplay behavior is identical.

## Reproduce
```powershell
python scripts/compare_inventories.py --sword sword_1.3.2_file_inventory_full.csv --shield shield_1.3.2_file_inventory_full.csv --out-dir artifacts/swsh-compare
```

Read `summary.json` for row counts, compare `comparison_differences.csv` for the two binaries and preserve original NCA paths from `comparison_all.csv`.

## Open questions
- Which executable code/data ranges differ in the actual uncompressed NSO sections?
- Which NPDM fields account for the metadata difference?
- Are edition-specific encounters and story branches selected by title / runtime conditions?
- Does the byte-identical RomFS result persist with different patch compositions?

These questions are `UNKNOWN` until NSO/NPDM-level analysis with verified source bytes and a reproducible disassembly or field parser.
