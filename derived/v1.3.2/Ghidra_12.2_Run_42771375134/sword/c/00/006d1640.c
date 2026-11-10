/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d1640; name: FUN_006d1640
 */


void FUN_006d1640(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x128) != 0) {
      param_2 = *(long *)(param_2 + 0x128);
    }
    lVar1 = param_1;
    if (*(long *)(param_1 + 0x120) != 0) {
      lVar1 = *(long *)(param_1 + 0x120);
    }
    FUN_006d1360(lVar1,param_2);
  }
  if (param_3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    param_1 = *(long *)(param_1 + 0x128);
  }
  if (*(long *)(param_3 + 0x120) != 0) {
    param_3 = *(long *)(param_3 + 0x120);
  }
  FUN_006d14d0(param_1,param_3);
  return;
}


