/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8060; name: FUN_008f8060
 */


void FUN_008f8060(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  
  param_2 = param_2 + (param_3 & 0xff) * 8;
  if ((param_4 & 1) == 0) {
    lVar1 = *(long *)(param_2 + 0xe8);
    *param_1 = lVar1;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x110);
    *param_1 = lVar1;
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f8080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


