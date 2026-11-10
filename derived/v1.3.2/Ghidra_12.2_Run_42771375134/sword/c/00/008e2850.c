/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2850; name: FUN_008e2850
 */


bool FUN_008e2850(long param_1,int param_2)

{
  if (((*(int *)(param_1 + 0x2d4) == param_2) || (*(int *)(param_1 + 0x2f0) == param_2)) ||
     (*(int *)(param_1 + 0x30c) == param_2)) {
    return true;
  }
  return *(int *)(param_1 + 0x328) == param_2;
}


