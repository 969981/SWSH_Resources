# Resource provenance & evidence rules

## Immutable inputs
Existing `v1.3.2/0/` files and the two root 15-column CSVs must remain unchanged. A CSV row is metadata, not proof that the named file is checked into Git. Record original `RelativePath` including the NCA identifier.

## Inventory schema
`RelativePath`, `Region`, `Extension`, `SizeBytes`, `SizeMiB`, `Magic4Hex`, `Magic4ASCII`, `Header64Hex`, `Tail32Hex`, `FileTypeByMagic`, `NSO_ModuleId_0x40`, `SHA256`, `SHA1`, `ModifiedUTC`, `Error`.

Compare normalized `0/` or `1/` relative paths for equivalent file positions; retain original source paths in the output. Content equality is `CONFIRMED` only when **nonempty SHA-256** matches. Byte-length equality alone is inconclusive. `FileTypeByMagic` is a signature observation, not a guarantee that the full structure parses.

## Per-derived-file provenance
```json
{
  "source_version": "1.3.2",
  "game": "sword|shield|shared",
  "source_relative_path": "<original_NCA>/1/bin/...",
  "source_sha256": "<64 hex characters>",
  "source_size_bytes": 0,
  "parser": "<name>",
  "parser_version": "<pinned commit or release>",
  "output_relative_path": "Unpack/v1.3.2/...",
  "output_sha256": "<64 hex characters>",
  "state": "INDEXED_ONLY|SOURCE_PRESENT|PARSED|VERIFIED|FAILED|UNKNOWN_FORMAT",
  "evidence": "<exact command and checks>"
}
```

The object above is a **template**, not a populated record. Never use placeholders as factual hashes.

## Evidence labels
- `CONFIRMED`: sourced from an exact file hash / verified parser output / executable or runtime trace.
- `CANDIDATE`: plausible but not demonstrated.
- `UNKNOWN`: evidence missing.
- `REJECTED`: evidence rules out the hypothesis.

All inferred species IDs, tables, language mappings, scripts, and executable branches remain `CANDIDATE` until proven with source-backed validation. No copyrighted test binaries in CI.
