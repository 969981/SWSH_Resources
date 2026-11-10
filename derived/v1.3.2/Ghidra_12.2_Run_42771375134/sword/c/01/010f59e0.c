/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f59e0; name: FUN_010f59e0
 */


void FUN_010f59e0(long param_1,int param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x600);
  if (lVar1 == 0) {
    return;
  }
  FUN_016b2d70(lVar1,param_3 & 1);
  return;
}


