# Sword / Shield 1.3.2 — semantic triage v1

Source Ghidra 12.2 run: 42771375134. This report covers every same-RVA function pair whose Ghidra function-body SHA-256 differs.

- same_entry_semantic_diff.csv: sortable metrics and recovered C headers/field-offset hints.
- same_entry_semantic_diff.ndjson.gz: complete per-candidate static evidence.
- priority_semantic_review.csv: candidate pairs supported by both exact-body-mapped callers and callees.
- priority_assembly_review.md: selected instruction-level comparisons for the strongest-context pairs.
- summary.json: count reconciliation and evidence limitations.

Same RVA is not function identity. Strong caller/callee context is a candidate alignment, not proof. Ghidra pseudocode is not original source. Static CFG/P-code evidence does not prove runtime behavior.
