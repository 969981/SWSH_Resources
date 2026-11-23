# Sword/Shield v1.3.2 — Raids, distributions and Max Lair

These are the five fixed-width Pokémon Sword/Shield Gen8 legality encounter binaries, transferred byte-for-byte from [PKHeX at 0660d1e](https://github.com/kwsch/PKHeX/tree/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Resources/legality/wild/Gen8) ([GPL-3.0](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/LICENSE)). They are **NOT** the PKHeX Mini container used by the four `symbol/hidden` PKLs.

| File | Game | PKHeX type | Record size | Records |
| --- | --- | --- | ---: | ---: |
| `encounter_sw_nest.pkl` | Sword | Stock Raid Nest | 10 B | 2,156 |
| `encounter_sh_nest.pkl` | Shield | Stock Raid Nest | 10 B | 2,151 |
| `encounter_sw_dist.pkl` | Sword | Distribution Raid | 16 B | 1,171 |
| `encounter_sh_dist.pkl` | Shield | Distribution Raid | 16 B | 1,179 |
| `encounter_swsh_underground.pkl` | Shared | Dynamax Adventure (Max Lair) | 14 B | 273 |

## Exact record layouts

- **Nest (10 B)**: `species:u16LE, form:u8, gender:u8, ability:u8, gigantamax:u8, nest_index:u8, min_rank:u8, max_rank:u8, flawless_iv_count:u8`. Rank is zero-based and the PKHeX reference derives levels from (15–20, 25–30, 35–40, 45–50, 55–60).
- **Distribution (16 B)**: `species:u16LE, form:u8, ability:u8, move1..4:u16LE, level:u8, dynamax_and_gmax:u8, flawless_and_shiny:u8, distribution_index:u8`. G-Max = upper bit of byte 13; Dynamax Level = lower 7 bits. Flawless count = low nibble of byte 14. Shiny policy = high nibble: 0 Random, 1 Never, 2 Always.
- **Max Lair (14 B)**: `species:u16LE, form:u8, level:u8, move1..4:u16LE, ability:u8, gigantamax:u8`. The pinned PKHeX reference uses one shared source for both versions because the capture location is identical in hosted adventures. Shiny is processed **after the adventure choice**, not simply from these records.

## Provenance and limits

This batch contains **byte-identical upstream PKHeX reference resources** with hashes and layout validation in [manifest.json](manifest.json). **Max Lair is now independently reproduced byte-for-byte (273 records, 3,822 bytes) from original `v1.3.2/1/bin/appli/chika/data_table/underground_exploration_poke.bin` using `scripts/rebuild_swsh_max_lair.py`.** Normal nest and historical distribution tables have **not** yet been fully reconstructed byte-for-byte from ROM / BCAT data. The original nest source is identified as `data_table.gfpak` member `000008_A5963232100F7DEE.bin` (394 tables, 4,728 raw entries), and its candidate templates have partial parity with the curated PKHeX references. See `scripts/audit_swsh_raw_nests.py`. The original source's key relationships (`TableID`, `LevelTableID`, drop/reward IDs) also require independent joins for a complete raid database.

The distribution entries are a *curated PKHeX reference snapshot*, **not a statement that an event is live on 2026-11-23**, and not an exhaustive historical event-calendar record. Do not infer probability or actual game version from fixed entries alone.

## Validate and export readable CSV/JSON

From the repository root:

```powershell
python scripts/export_swsh_special_encounters.py --validate-only
python scripts/rebuild_swsh_max_lair.py --validate-only
python scripts/audit_swsh_raw_nests.py --validate-only
python scripts/export_swsh_special_encounters.py --out-dir artifacts/swsh-special
```

This also checks the existing original-ROM-derived fixed/gift/trade CSV row indexes and writes readable summaries. Source provenance: [SWSH 1.3.2 semantic catalog](../../catalog/semantic-summary.json). For the 268 unresolved weather-bleed cases use the separately existing GDB observation intake; its current casebook contains no game-verified branch results.
