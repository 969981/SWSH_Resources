# Sword / Shield 1.3.2 function mapping and direct-call audit

Source: [Ghidra full analysis #42771375134](https://github.com/969981/SWSH_Resources/actions/runs/42771375134).

This mapping uses **globally unique exact machine function-body SHA-256** in both editions; same-entry comparisons alone do not constitute matches. Mapped direct-call edges are derived from original Ghidra references and verified contiguous function-body address ranges.

Results:

- \`unique_exact_body_function_map.csv\`: unique binary-body pairs including relocations
- \`exact_body_anchor_direct_call_delta.csv\`: mapped direct-callee agreement/disagreement for every anchor
- \`priority_direct_call_difference_candidates.csv\`: top 1,500 candidates for manual callgraph/logic examination
- \`top_same_address_changed_bytes.csv\`: 1,000 largest same-entry byte changes without assumed function identity
- \`summary.json\`: provenance and count reconciliation

This does not claim byte equality guarantees runtime equivalence or that direct-call graph changes prove gameplay logic changes. Further analysis should disassemble the compared caller/callee, examine relocations, recover function prototypes and cross-check gameplay behavior.
