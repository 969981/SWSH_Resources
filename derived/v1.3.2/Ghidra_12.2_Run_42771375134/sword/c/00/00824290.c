/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00824290; name: FUN_00824290
 */


void FUN_00824290(long param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < param_2) {
    FUN_008241b0(param_1,param_2 - *(int *)(param_1 + 8));
    return;
  }
  return;
}


