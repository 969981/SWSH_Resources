# SWSH tools — pinned vendor snapshot

This directory mirrors the **six common tool source trees** from [969981/SV_Resources/tools](https://github.com/969981/SV_Resources/tree/master/tools), pinned to SV commit `eca581cb23d5bd84595eca3810d0dee4bd8b60fd`. The synchronization copies real Git-tracked files, **not** submodules or download-only links. See `upstream.json` after the import job completes.

| Directory | Upstream | Intended use in Pokémon Sword / Shield 1.3.2 |
| --- | --- | --- |
| [pkNX](pkNX) | [kwsch/pkNX](https://github.com/kwsch/pkNX) | Gen 8 / SWSH data parsing, dumping, validation; check the exact format and game revision |
| [PokeDocs](PokeDocs) | [pkZukan/PokeDocs](https://github.com/pkZukan/PokeDocs) | Reference schemas, including `SWSH/`; do not assume every schema matches v1.3.2 |
| [Switch-Toolbox](Switch-Toolbox) | [KillzXGaming/Switch-Toolbox](https://github.com/KillzXGaming/Switch-Toolbox) | Model, texture and container inspection when file signatures match |
| [nx2elf](nx2elf) | [shuffle2/nx2elf](https://github.com/shuffle2/nx2elf) | NSO to AArch64 ELF for separately named Sword and Shield main programs |
| [gftool](gftool) | [pkZukan/gftool](https://github.com/pkZukan/gftool) | Trinity/GF-format research and a potential parser reference; **not** a verified SWSH TRPFS decoder |
| [SCVI_Extract](SCVI_Extract) | [psthrn42/SCVI_Extract](https://github.com/psthrn42/SCVI_Extract) | Legacy SV-oriented extraction comparison only; **not** a verified SWSH unpacker |

The vendored `gftool` snapshot includes SV's local **.NET 10 / .slnx changes** and nested NxMiddleware source. The `pkNX` snapshot may also differ from the corresponding original upstream commit. Preserve both upstream commit references and actual copied tree hashes; do not silently revert local patches.

## Synchronization

[Sync pinned SWSH vendor tools](../.github/workflows/sync-swsh-tools.yml) imports these six directories from the exact SV commit, validates their Git tree hashes, and commits changes to SWSH `master` with the repository's scoped Actions token. It uses sparse partial Git clones to avoid reading the very large `v1.3.2/` game-file directory. A manual `workflow_dispatch` re-run is supported. Future upstream upgrades require consciously changing the pinned source commit and expected tree hashes.

Verify source identity after import:

```bash
python scripts/verify_vendor_tools.py
```

This verifies *snapshot identity*, not successful extraction, GUI operation, or Sword/Shield format compatibility. For application tests, first run synthetic data and build applicable projects independently. Real game files, decryption keys, proprietary runtime DLLs, derived ROM bytes and bulk outputs must not be generated or committed by the import workflow.

Third-party projects retain their own original licenses and dependencies. Review redistribution rights for bundled binary dependencies, especially under Switch-Toolbox, before copying to a publicly distributed repository.

## SWSH-specific usage

- Keep raw `v1.3.2/` source bytes and original inventories immutable.
- Compare tool outputs with `sword_1.3.2_file_inventory_full.csv` and `shield_1.3.2_file_inventory_full.csv` and record SHA-256 provenance.
- Write repeatable extraction scripts and validated outputs under versioned `Unpack/` paths; unsupported formats remain `UNKNOWN`, not `CONFIRMED`.
- This is a dependency import, **not** a claim that every SWSH asset has been decoded.
