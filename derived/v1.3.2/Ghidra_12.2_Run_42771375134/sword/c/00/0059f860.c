/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059f860; name: FUN_0059f860
 */


bool FUN_0059f860(long param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  if (((*(int *)(param_1 + 0x54) == param_2) && (*(int *)(param_1 + 0x58) == param_3)) &&
     (*(int *)(param_1 + 0x38) == param_4)) {
    return ((*(uint *)(param_1 + 0x2c) ^ param_5) & param_6) == 0;
  }
  return false;
}


