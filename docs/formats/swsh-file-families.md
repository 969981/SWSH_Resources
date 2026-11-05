# Sword / Shield resource families

The uploaded 1.3.2 tree uses NCA `0/` for executable modules and `1/` for RomFS. Its extracted file hierarchy is **not** the Scarlet/Violet `data.trpfs` / Trinity virtual path model. Do not pass Sword/Shield files to a Trinity decoder merely by analogy.

| File or family | Example path or name | Known from | Current confidence |
| --- | --- | --- | --- |
| NSO0 executable | `0/main` | Header `4E534F30` in both inventories | CONFIRMED signature |
| NPDM metadata | `0/main.npdm` | Header `4D455441` (`META`) in both inventories | CONFIRMED signature |
| UI `.arc` | `1/bin/appli/bag/bin/bag_top_00.arc` | Extraction directory inventory | CONFIRMED path; internal format unverified |
| UI/layout `.bin` | `1/bin/appli/bag/bin/bag_top_00_lyt.bin` | Extraction directory inventory | CONFIRMED path; internal layout unverified |
| Texture `.bntx` | `1/bin/appli/icon_item/item_0001.bntx` | Extraction directory inventory | CONFIRMED path; texture conversion unverified |
| Structured `.prmb` | `1/bin/appli/chika/data_table/underground_exploration_info.prmb` | Extraction directory inventory | CONFIRMED path; schema unknown |
| Creature/game tables | Search inventories for `bin/pml/`, `bin/trainer/`, `bin/message/` | Directory/path discovery only | CANDIDATE semantics |

## Next steps
1. Count extension and top-level subsystem populations from the inventory.
2. Identify signatures using actual on-disk binary headers.
3. Implement one decoder per format, with synthetic fixtures and negative tests.
4. Join parsed IDs to game semantics only after verifying field offsets, versions and language alignment.
5. Store incomplete or ambiguous outputs as `PARSED` or `UNKNOWN_FORMAT`, not `VERIFIED`.
