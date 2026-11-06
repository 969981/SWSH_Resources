# SWSH 1.3.2 full secondary unpack — real Actions baseline

**Actual run:** [42140398411](https://github.com/969981/SWSH_Resources/actions/runs/42140398411) (2026-11-06)  
**Commit:** `49d789180260641d27b59b64c93b4ed34f980b9d`  
**Status:** **PARTIAL** (verified real-game processing; never claim full format coverage).

## End-to-end reconciliation

| Metric | Result |
| --- | ---: |
| Sword RomFS original paths expected | 50,494 |
| All paths with a final processing record | 50,494 |
| Missing | 0 |
| Duplicate | 0 |
| Unexpected | 0 |
| Native parse/extraction success (`PARSED`) | **30,635** |
| Unsupported format (`UNSUPPORTED_FORMAT`) | **19,850** |
| Parser failures (`FAILED`) | **9** |

Source coverage is 100% **accounting**, NOT 100% semantic decoding. Approximately 60.7% were processed by the initially implemented native SWSH parser set. Source SHA-256 was verified in each shard; the large split 7z recovery flow was executed in the same run.

## What succeeded

The separate .NET 10 SWSH headless decoder compiled and was launched from 16 sharded GitHub hosted runners (6 concurrent). It actually extracted:
- 11,068 AHTB `.tbl` files
- 11,060 SWSH `.dat` text files
- 7,699 `.gfpak` packs (member bytes, FNV path hashes, manifests)
- 807 SARC-signature `.arc` containers
- 1 `personal_total.bin` table

Output files are stored as workflow **Artifacts**, not automatically committed into Git; generated binary results can be large and are subject to limited artifact retention, quotas and redistribution rights.

## Why this run was PARTIAL

All 9 decoder failures were `bin/message/grammar/<language>.dat`: the initial decoder incorrectly sent grammar-format DAT files to the standard SWSH text parser. The new decoder explicitly excludes grammar DAT from that parser pending format verification.

The unsupported 19,850 files include these largest extension groups:

| Extension | Files |
| --- | ---: |
| `.bin` | 5,987 |
| `.bntx` | 3,067 |
| `.bseq` | 1,597 |
| `.wav` | 1,372 |
| `.bnk` | 1,283 |
| `.amx` | 966 |
| `.gfbmdl` | 923 |
| `.wazabin` | 827 |
| `.gfbcama` | 722 |
| `.ptcl` | 588 |
| `.gfbcam` | 584 |
| `.gfbanm` | 465 |

The follow-up decoder revision adds native `EvolutionSet8`, `EggMoves7`, `TrainerData8`, `TrainerPoke8`, `TrainerClass8`, SWSH Waza FlatBuffers and RIFF/WAV metadata. These are **subsequent code changes**, not included in the baseline totals above; do not attribute coverage improvements until a new real run confirms them.

## Gate for declaring complete

1. Every source path accounted for with intact provenance (already achieved in baseline).
2. Each recognized native container genuinely unpacked; recursion and decompression errors recorded.
3. Every requested exportable native format verified independently with meaningful output, including BNTX textures, models, animation, script, audio.
4. Format-level `UNKNOWN` and `FAILED` counts must be explicitly reported as blockers; `SOURCE_VERIFIED` is not `PARSED`.
5. Always re-run a global final reconciliation. Partial must remain a failure signal even when 16 shard jobs themselves ran.

For details see `docs/swsh-full-parallel-unpack-plan.md`.
