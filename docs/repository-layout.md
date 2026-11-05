# Repository layout (SWSH 1.3.2)

## Currently tracked
```text
SWSH_Resources/
├─ sword_1.3.2_file_inventory_full.csv
├─ shield_1.3.2_file_inventory_full.csv
├─ v1.3.2/
│  └─ 0/
│     ├─ sword_main
│     ├─ sword_main.npdm
│     ├─ shield_main
│     ├─ shield_main.npdm
│     ├─ rtld
│     ├─ sdk
│     ├─ subsdk0
│     └─ subsdk1
├─ docs/
├─ scripts/
├─ tests/
├─ Unpack/
├─ manifests/
└─ tools/
```

`0/` = ExeFS. The full inventory CSV additionally records an extracted NCA `1/` RomFS tree, but those source bytes have not been committed here.

## Original extraction roots
- Sword inventory root: `f13bc7b678b5c86998ff4e847e180142_NCA/`
- Shield inventory root: `87e41bc80e9051bc263fb39af949f462_NCA/`
- Their original paths intentionally stay intact in the inventories. The comparison script removes *only* the NCA root when joining equivalent paths.

## Source vs derived
- `v1.3.2/0/`: existing immutable source collection.
- `Unpack/v1.3.2/`: reserve for generated ExeFS summaries or per-file RomFS secondary conversions **after actual source bytes are available**. Preserve the raw path as provenance.
- `manifests/v1.3.2/`: optional small status/index JSON; each entry should refer to input hashes and output hashes. No unknown entry becomes `CONFIRMED` automatically.
- `artifacts/` (gitignored): temporary reports, CSV diffs, local binary conversion, test artifacts.

## File state taxonomy
`INDEXED_ONLY` = exists only in an inventory; `SOURCE_PRESENT` = bytes verified in checked-in or user-specified local source; `PARSED` = parser produced output; `VERIFIED` = validated against an independent format/schema or round-trip test; `FAILED`/`UNKNOWN_FORMAT` = specifically recorded blocker. These are processing states, not inferred gameplay semantics.
