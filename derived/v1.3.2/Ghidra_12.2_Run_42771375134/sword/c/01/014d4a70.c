/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d4a70; name: FUN_014d4a70
 */


void FUN_014d4a70(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (param_3 < 2) {
    uVar1 = param_3;
  }
  lVar2 = *(long *)(param_2 + (ulong)uVar1 * 8 + 0x18b0);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014d4a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


