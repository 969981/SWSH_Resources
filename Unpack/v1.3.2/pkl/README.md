# Sword / Shield v1.3.2 — Wild Encounter PKL

Four byte-exact **PKHeX** wild encounter resources for Pokémon Sword and Shield v1.3.2. The `.pkl` extension denotes a pkNX/PKHeX **Mini/BinLinker** data file, **not a Python pickle**.

| File | Game | Method | Areas | Final templates | Bytes |
| --- | --- | --- | ---: | ---: | ---: |
| `encounter_sw_hidden.pkl` | Sword | Hidden (暗雷) | 62 | 863 | 4,720 |
| `encounter_sw_symbol.pkl` | Sword | Symbol (明雷) | 123 | 1,050 | 6,476 |
| `encounter_sh_symbol.pkl` | Shield | Symbol (明雷) | 123 | 1,057 | 6,508 |
| `encounter_sh_hidden.pkl` | Shield | Hidden (暗雷) | 62 | 855 | 4,696 |

## Source and validation

- ROM source: `bin/archive/field/resident/data_table.gfpak` (1.3.2).
- Original ROM-derived catalog: [wild_encounters.csv](../catalog/wild_encounters.csv), 35,960 raw slots in 372 source member/zone tables.
- [Existing byte-exact audit](../catalog/wild_pkl_version_audit.json) reconstructed all four PKL byte arrays from the original source-derived CSV with pkNX area mapping, allowed weather, weather bleed semantics, duplicate-slot folding, hidden shaking-tree fix and Mini serialization. The audit obtained **4/4 byte-identical** matches against a pinned PKHeX revision.
- This directory's actual four binaries were transferred byte-for-byte from [kwsch/PKHeX commit 0660d1e](https://github.com/kwsch/PKHeX/tree/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Resources/legality/wild/Gen8). Their Git Blob SHA-1 values match the upstream blobs. **This transfer is not a fresh independent full-ROM reserialization.**
- SHA-256, source-member SHA-256, expected file size and region counts are stored in [manifest.json](manifest.json).
- Reference license: [PKHeX GPL-3.0](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/LICENSE).

## Verify

From repository root run:

```powershell
python scripts/verify_swsh_wild_pkl.py
```

Checks all four byte sizes, SHA-256 hashes and `ss` Mini headers, region counts and 4-byte-aligned offset maps.

## Important scope boundary

These four PKL cover **regular wild Symbol/Hidden encounters** only. Static encounters, gifts, NPC trades, Max Raid nest tables, Dynamax Adventure / underground encounters and online distribution events require their own independently validated sources; those are **not merged into wild PKL**. Game-runtime weather probability and event availability are not established by this static dataset.
