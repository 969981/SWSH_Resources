# SWSH 1.3.2: relocation-normalized direct-call comparison

The original exact-body match mapped 22,520 pairs and flagged 15 differences among globally unique byte-identical callers. Every one of those 15 callers is relocated. Comparing absolute target addresses or the subset of target functions with unique byte hashes can therefore produce misleading call-difference labels.

This audit compares **callee RVA minus caller entry RVA** across the two versions for all known direct-call targets in contiguous function bodies, not just targets with unique byte fingerprints. It checks both the 15 earlier cases and every uniquely matched caller.

## Artifacts

- normalized_15_call_differences.csv: evidence classification for the 15 suspected changes
- all_anchor_relative_call_delta_candidates.csv: every relocated-normalized direct-call mismatch found in all 22,520 strong matches
- summary.json: aggregate counts and source-run evidence

Identical relative call offsets are consistent with pure address relocation. Non-identical offsets are **static reverse-engineering candidates**, not yet verified gameplay differences. Continue with CFG/SSA, function prototypes, data references and real runtime evidence.
