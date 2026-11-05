# AGENTS.md — SWSH_Resources

## Mission
Maintain an evidence-based, reproducible Pokémon Sword/Shield (SWSH) resource and reverse-engineering workspace. Treat source bytes as immutable. Separate verified observations from inferred gameplay semantics.

## Existing source contract
- `v1.3.2/0/` currently contains version-specific `sword_main`, `shield_main`, both NPDM files and the common ExeFS modules. Do not rename, alter or replace these files.
- `sword_1.3.2_file_inventory_full.csv` and `shield_1.3.2_file_inventory_full.csv` are existing full extraction manifests. Do not rewrite or normalize them in place.
- The inventory CSVs describe 50,500 files per version; the checked-in repository currently contains only the ExeFS subset, not all listed RomFS resources. Never conflate *indexed* with *present in repository*.
- The inventory uses distinct NCA root identifiers. Normalize only in derived comparisons, preserving original `RelativePath` and SHA-256.

## Directory responsibilities
- `docs/`: Obsidian-compatible research notes, structure, formats, provenance, evidence and investigation roadmap.
- `scripts/`: repeatable read-only export, comparison and verification tools. Favor Python standard library and PowerShell wrappers.
- `tests/`: synthetic fixtures and unit tests, with no copyrighted game files.
- `.github/workflows/`: conservative CI for synthetic tests and inventory comparisons. CI must not publish copyrighted binaries.
- `Unpack/`: derivative extraction outputs only, segregated by version and source path; do not treat incomplete conversion as verified.
- `manifests/`: small machine-readable provenance/checkpoint data; do not place original game archives here.
- `tools/`: documentation of upstream dependencies and pinned versions before importing tools. Do not silently vendor large external repositories.

## Non-negotiable safeguards
1. Do not modify, rename, overwrite or delete the source files in `v1.3.2/0/` or the two root inventories.
2. Never commit ROM keys, title keys, credentials, proprietary decryption components, installers, transient work directories or unlicensed data.
3. Preserve source path, version, byte length, SHA-256 and relevant tool version for derived outputs.
4. Compare Sword/Shield content by normalized relative path **and SHA-256**; a same-sized file is not confirmed identical. Missing hashes must remain `HASH_MISSING`.
5. `CONFIRMED` means demonstrated by bytes, format validation or runtime evidence; otherwise use `CANDIDATE`, `UNKNOWN` or `REJECTED`. Filename similarity alone never proves game semantics.
6. Keep large generated model/texture exports and binary copies out of normal commits. Prefer manifests and documented local reproduction; check redistribution rights.
7. Only edit the explicit intended paths, avoid broad staging, never force-push or rewrite history, and reconcile a changed branch HEAD before pushing.
8. Tests use synthetic fixtures. Record what was actually tested; no fabricated pass results.
9. Do not assume that SWSH uses Scarlet/Violet Trinity formats. Verify SWSH containers independently before attaching a decoder.
10. Update relevant `docs/` pages when changing scripts, schema interpretation, file mappings or evidence claims.

## Standard workflow
1. Read `README.md`, `docs/README.md`, `docs/repository-layout.md`, and `docs/resource-provenance.md`.
2. Inspect current HEAD, the relevant source inventory and existing outputs.
3. Plan non-destructive changes; run scripts on read-only inputs with output directed under ignored `artifacts/` or `Unpack/` (when explicitly tracked).
4. Run `python -m unittest discover -s tests -v` and the applicable inventory comparison.
5. Document modified paths, a reproducible command, validation evidence, any unknowns, and the resulting commit SHA.
