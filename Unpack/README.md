# Derived SWSH extraction area

Reserve `Unpack/v1.3.2/` for **derived** output generated from source files with known original paths. No RomFS binaries have been imported by this scaffold. Suggested statuses: `INDEXED_ONLY`, `SOURCE_PRESENT`, `PARSED`, `VERIFIED`, `FAILED`, `UNKNOWN_FORMAT`.

Keep source bytes immutable under their original owner-controlled directories. Add a manifest/checkpoint and tests before committing any generated artifact; default to ignored `artifacts/` for local experiments.
