/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8be20; name: FUN_00c8be20
 */


bool FUN_00c8be20(long param_1,long *param_2,int param_3)

{
  if (*(long *)(param_1 + 0x88) == *param_2) {
    return *(int *)(param_1 + 0xd0) == param_3;
  }
  return false;
}


