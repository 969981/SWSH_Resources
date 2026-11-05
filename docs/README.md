# SWSH Research Vault

Obsidian-compatible entry point. Follow Markdown links; no Obsidian plugins are required.

## Read first
- [[repository-layout|Repository layout]] — checked-in files versus file inventory paths
- [[resource-provenance|Resource provenance]] — source SHA-256 and evidence labels
- [[formats/swsh-file-families|SWSH file families]] — known extensions and parsing priorities
- [[research/sword-vs-shield-1.3.2|Sword vs Shield 1.3.2]] — verified manifest comparison
- [[research-roadmap|Research roadmap]] — next technical steps

## Note conventions
Use versioned identifiers (for example `SWSH-1.3.2`), full original NCA-relative paths, exact hashes and reproducible commands. Use `CONFIRMED`/`CANDIDATE`/`UNKNOWN`/`REJECTED` for assertions. Distinguish raw binary, decoded containers, structured records, and runtime-confirmed semantics.

## Current scope
Source inventories cover both Sword and Shield. The checked-in binary set includes the ExeFS group under `v1.3.2/0/` and Sword v1.3.2 RomFS outputs under `v1.3.2/1/`; files above 90 MiB are represented by per-file 7-Zip volume sets. Shield RomFS remains inventory-only.
