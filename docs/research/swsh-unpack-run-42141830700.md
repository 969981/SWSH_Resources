# Sword 1.3.2 actual full-shard run — 2026-11-06

[Open Actions run 42141830700](https://github.com/969981/SWSH_Resources/actions/runs/42141830700)

The updated pipeline completed its **16 real-source unpack shards**; each matrix shard succeeded.
The global reconciliation intentionally returned **PARTIAL** because the remaining unsupported formats are not silently counted as decoded.

| Metric | Value |
|---|---:|
| Source paths | **50,494** |
| Per-source processing reports | **50,494** |
| Source paths not reported | **0** |
| Duplicate / unexpected records | **0 / 0** |
| Native parsed/extracted/metadata results | **36,405** |
| Remaining unsupported formats | **14,089** |
| Parser/runtime failures | **0** |
| Increase versus first real run 42140398411 | **+5,770 PARSED** |

### Actual adapters and counts

- pkNX AHTB hash tables: 11,068
- pkNX Sword/Shield text DAT: 11,060
- pkNX GF packs (actual member extraction): 7,699
- RIFF WAVE metadata inspection: 1,372 (metadata only; WAV already natively playable)
- Gen8 egg move sets: 1,251
- Gen8 evolution sets: 1,192
- Gen8 Waza FlatBuffers: 827
- SARC archives: 807
- Trainer data/teams: 437 each
- Trainer classes: 254
- Personal table: 1

Note: **PARSED** here includes structured metadata (RIFF WAVE) and container-member extraction, not necessarily a conversion to every possible human-editable end format.

### Remaining major unsupported groups

`.bntx` (3,067), unknown `.bin` (2,416), `.bseq` (1,597), `.bnk` (1,283), `.amx` (966), `.gfbmdl` (923), `.gfbcama` (722), `.ptcl` (588), `.gfbcam` (584), `.gfbanm` (465), plus shader and ancillary formats. These require independently verified format readers and exporters, not file extension substitutions.

### Publication status and reproducibility

The runner created real per-file derived outputs and uploaded each shard's outputs as `swsh-derived-<shard>` GitHub Actions artifacts. They are **not permanently saved under Git `Unpack/`**, and the configured raw-output artifact retention is 1 day. Report artifacts have longer retention. Since the source includes copyrighted assets and the outputs can be many gigabytes, the workflow intentionally does not silently commit/push those binaries.

`Unpack/v1.3.2/reports/coverage-summary.json` in the repository records the official per-run status and parser counts. Re-run the manually dispatchable `.github/workflows/swsh-full-unpack.yml` for the same source commit and decode version.

### Completion boundary

Fully automatic source restoration, SHA verification, sharding and reconciliation: **implemented and executed**. Full semantic conversion of all 50,494 file formats: **not yet complete**; 14,089 real format gaps remain.
