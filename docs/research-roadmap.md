# SWSH research roadmap

## R0 — repository/quality foundation (implemented)
Inventory comparison, synthetic tests, Obsidian notes, non-destructive scripts, GitHub Actions. Keep the two existing source CSV files unchanged.

## R1 — ExeFS structural comparison (planned)
Read actual Sword/Shield `main` NSO headers, decompress supported sections with a tested tool, compare sections and functions after normalization. Parse NPDM fields. Do not confuse the two different Module IDs with function addresses.

## R2 — RomFS source and container audit (planned)
From locally accessible source binaries, audit `.arc`, `.bntx`, `.prmb`, `.gfpak`, and other observed extensions. Record input SHA-256, extractor version, output hashes and per-file status. An indexed path without source bytes remains `INDEXED_ONLY`.

## R3 — structured table exports (planned)
Export verified creature/species parameters, moves, egg moves, evolution, encounters, trainer data, and localized strings as CSV/JSON with raw field offsets and provenance. Use SWSH-specific schemas, not transplanted SV structures.

## R4 — conversion and incremental CI (planned)
Add parsers for textures/models/animations and checkpoint fingerprints of input SHA-256 + parser/version/schema/options. Report `VERIFIED`/`FAILED`/`UNKNOWN_FORMAT` across every original path; never skip a partial conversion as complete.

## Success criteria
Each tracked resource is accounted for without silently treating missing data as success. CI validates scripts using synthetic fixtures, and real-game data results always carry reproducible source evidence.
