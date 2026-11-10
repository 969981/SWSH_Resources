/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146c4c0; name: FUN_0146c4c0
 */


bool FUN_0146c4c0(long param_1)

{
  if (*(long *)(param_1 + 0x208) == 0) {
    return true;
  }
  return *(int *)(*(long *)(param_1 + 0x208) + 0x60) == 0;
}


