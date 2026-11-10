/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a0970; name: FUN_010a0970
 */


void FUN_010a0970(long param_1)

{
  if (*(uint *)(param_1 + 0x50) < 0x1e) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) + 1;
    FUN_010a0c10(param_1);
    return;
  }
  FUN_010a09c0(param_1);
  FUN_010a0c10(param_1);
  return;
}


