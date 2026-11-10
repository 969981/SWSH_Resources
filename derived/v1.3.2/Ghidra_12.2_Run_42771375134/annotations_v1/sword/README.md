# Sword 1.3.2 — annotated Ghidra C

Every function receives a Chinese function-level comment based on its Ghidra symbol, signature, body hash, direct callers/callees, direct string references and data refs. A unique exact-body counterpart is linked when supported by SHA-256 in both editions.

The original raw C files are untouched. Annotated C is in the ZIP reconstructed from the .partNNNN.bin files. The NDJSON index covers every Ghidra function, including functions whose decompilation still fails. function_comments.tsv is used to apply the same comments to the native Ghidra project.

Comments label inferred purposes and confidence explicitly. Ghidra-generated C is pseudocode, not Nintendo source; static references do not prove runtime behavior.
