# SWSH_Resources

Reproducible resource inventory and research workspace for **Pokémon Sword / Shield v1.3.2**.

## Repository state

- `sword_1.3.2_file_inventory_full.csv` and `shield_1.3.2_file_inventory_full.csv` are SHA-256 file inventories captured from two local extractions.
- `v1.3.2/0/` contains the checked-in ExeFS subset: Sword/Shield `main`, their `main.npdm`, plus four shared modules. These names are prefixed as `sword_` and `shield_` to avoid collision.
- Sword v1.3.2 RomFS outputs are stored under `v1.3.2/1/`: files up to 90 MiB are copied directly, and larger files are archived individually as split 7-Zip volumes. Shield RomFS remains inventory-only.
- Current inventory-level finding: 50,500 entries in each version; 50,498 normalized-path matches have the same SHA-256; only `0/main` and `0/main.npdm` differ. See [research evidence](docs/research/sword-vs-shield-1.3.2.md).

## Repository layout

| Path | Purpose |
| --- | --- |
| `v1.3.2/0/` | Original collected ExeFS files; never modify in place |
| `*_1.3.2_file_inventory_full.csv` | Immutable original extraction inventories |
| `docs/` | Obsidian-compatible technical notes and provenance |
| `scripts/` | Inventory export, Sword/Shield comparison and automation |
| `tests/` | Tests using synthetic, freely created data |
| `Unpack/` | Reserved for derivative conversion outputs |
| `manifests/` | Versioned checkpoint/provenance specification |
| `tools/` | Tool provenance and integration policy |

## Quick start

Compare the two existing 15-column inventories (no third-party packages needed):

```powershell
python scripts/compare_inventories.py --sword sword_1.3.2_file_inventory_full.csv --shield shield_1.3.2_file_inventory_full.csv --out-dir artifacts/swsh-compare
```

Exports `comparison_all.csv`, `comparison_differences.csv` and `summary.json` under the ignored `artifacts/` directory.

Scan a local extraction with the same 15-column schema:

```powershell
python scripts/export_inventory.py --root "X:\ROMS\Nintendo Switch\Pokemon\Pokemon Sword\v1.3.2" --out artifacts/sword_inventory.csv
# Or in PowerShell:
.\scripts\Export-SWSHInventory.ps1 -Root ".\v1.3.2" -Output "artifacts\sword_inventory.csv"
```

Use `--skip-hash` for a faster preliminary inventory, but un-hashed rows cannot support a confirmed identity comparison. The source scanner is read-only.

## ROMFS archive workflow

Windows PowerShell scripts in `scripts/` copy the Sword v1.3.2 RomFS into `v1.3.2/1/`, preserve its relative paths, and record source hashes in `docs/sword-v1.3.2-archive-manifest.csv`. Files up to 90 MiB remain uncompressed; larger files are archived individually as 90 MiB 7-Zip volumes. Compression outputs are tested and extracted to confirm the restored SHA-256 before they enter the target tree. Checkpoints and logs stay outside the repository.

```powershell
.\scripts\Copy-SWSH-Romfs.ps1
.\scripts\Verify-SWSH-Romfs.ps1
.\scripts\Push-SWSH-Romfs.ps1
```

The copy and push scripts support `-WhatIf`; the push script creates bounded, independently pushed batches. See the generated archive report for the result of a particular run.

## Research navigation

- [Documentation home](docs/README.md)
- [Repository and NCA layout](docs/repository-layout.md)
- [Provenance and evidence grading](docs/resource-provenance.md)
- [SWSH file families](docs/formats/swsh-file-families.md)
- [Sword vs Shield 1.3.2](docs/research/sword-vs-shield-1.3.2.md)
- [Sword/Shield 1.3.2 main NSO → ELF](docs/research/swsh-main-nx2elf.md)
- [Sword/Shield Ghidra 12.2 full analysis, lossless database and binary diff](docs/research/swsh-ghidra-full-analysis.md)
- [Roadmap](docs/research-roadmap.md)

## Legal and reproducibility notes

This repository documents game-file research. It is not permission to redistribute game assets; follow applicable law and licenses. The absence of files in this repo is not proof that they do not exist in the game. Each derived mapping should link back to source paths and verified hashes.
