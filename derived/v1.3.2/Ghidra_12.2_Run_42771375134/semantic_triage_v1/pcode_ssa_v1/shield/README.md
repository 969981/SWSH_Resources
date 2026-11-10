# shield — Ghidra 12.2 P-code SSA / CFG export

Source editable project: annotation run 42835143370.
Source static analysis baseline: run 42771375134.
Entry selection: ../priority_review_entries.txt (50 same-RVA review pairs).

- function_prototypes.tsv.gz: decompiler-inferred return types, parameters and calling conventions.
- cfg_blocks.tsv.gz and cfg_edges.tsv.gz: decompiler high-level basic blocks and directed edges.
- pcode_ops.tsv.gz: P-code operations, operation addresses, SSA input/output varnode IDs.
- ssa_varnodes.tsv.gz: varnode locations, sizes, high variables, inferred types and defining operations.
- function_status.tsv.gz: per-function decompilation/export status.
- pcode_ssa_summary.json: counts and completeness.

P-code SSA is a static decompiler representation. MULTIEQUAL operations are phi-like merges. It does not establish runtime behavior.
