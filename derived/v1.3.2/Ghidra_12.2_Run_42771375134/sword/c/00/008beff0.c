/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008beff0; name: FUN_008beff0
 */


void FUN_008beff0(long param_1)

{
  if (*(uint *)(param_1 + 0x5f0) < 4) {
    FUN_008d08d0(*(long *)(param_1 + 0x5d0) + (ulong)*(uint *)(param_1 + 0x5f0) * 0x30);
    *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5f0) + 1;
  }
  return;
}


