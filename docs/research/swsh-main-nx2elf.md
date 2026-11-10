# Sword / Shield 1.3.2 ExeFS main -> ELF (nx2elf)

## Source and intended outputs

This procedure uses the **existing** repository copy of `tools/nx2elf`; it is not a submodule and does not require any ROM keys.

| Game | Immutable NSO input | Expected original size | Derived logical ELF |
| --- | --- | ---: | --- |
| Sword | `v1.3.2/0/sword_main` | 21,162,542 B | `v1.3.2/0/sword_main.elf` |
| Shield | `v1.3.2/0/shield_main` | 21,164,977 B | `v1.3.2/0/shield_main.elf` |

The binary outputs are **reconstructed** ELF64/AArch64 images, not original Nintendo-issued ELF/debug files. Function names, symbols and original debug information that were stripped from the NSOs are not restored by the container conversion.

## Repeatable build (Linux / GitHub Actions)

From repository root:

```bash
cmake -S tools/nx2elf -B artifacts/nx2elf-build -DCMAKE_BUILD_TYPE=Release
cmake --build artifacts/nx2elf-build --parallel 2
python3 scripts/convert_swsh_mains.py \
  --converter artifacts/nx2elf-build/nx2elf \
  --manifest manifests/v1.3.2/nx2elf-main-manifest.json \
  --max-git-mib 90 \
  --require-readelf
```

The script calls `nx2elf <input> --export-elf <output>` separately for Sword and Shield, verifies ELF magic, ELF64 little-endian encoding, AArch64 machine, header-table bounds and `readelf -h -l -S`, and records source/output byte sizes and SHA-256.

- If each ELF is at most 90 MiB, the corresponding `*.elf` is kept intact in `v1.3.2/0/`.
- For any output above 90 MiB, it is stored as `*.elf.part001`, `*.elf.part002`, etc. The script verifies the split stream's SHA-256 before removing the temporary unsplit output.
- The machine-readable record is `manifests/v1.3.2/nx2elf-main-manifest.json`; its `storage` and `stored_files` fields distinguish direct from sharded output.

To reassemble a split ELF (only if the manifest reports `storage: split`):

```bash
cat v1.3.2/0/sword_main.elf.part* > v1.3.2/0/sword_main.elf
sha256sum v1.3.2/0/sword_main.elf
```

Compare the hash to `output_sha256` in the corresponding manifest record. Repeat for Shield when applicable.

## CI pipeline and acceptance

Workflow: `.github/workflows/swsh-nx2elf-main.yml`; triggers on its initial commit to `master` or manually with `workflow_dispatch`. It checks out only the relevant binary sources, converter, script and manifests; compiles the already-vendored converter; validates outputs; and attempts a non-force `master` commit of **only** the derived ELF files and conversion manifest.

**Evidence grading:** A successful workflow establishes `PARSED` plus independent ELF header validation, not complete Ghidra code-coverage nor functional runtime equivalence. The actual SHA-256 values, sizes, converter source tree SHA and ELF table counts must be taken from the generated manifest, never from guesses.

## Ghidra import

Import Sword and Shield **separately** into Ghidra 12.2 as ELF64 for AArch64 LE. Keep the two program databases separate for direct function matching, decompilation and byte/CFG comparisons. Preserve the manifest beside future analysis exports.

## Provenance / legal

Do not edit the original `sword_main`, `shield_main` or `*.npdm`. A rebuilt ELF may still contain copyrighted executable game code. Follow applicable redistribution rights and project policy before publishing derived binaries.
