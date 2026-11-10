/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01507190; name: FUN_01507190
 */


void FUN_01507190(long param_1,uint param_2,uint param_3,long *param_4)

{
  long lVar1;
  
  FUN_008787c0(*param_4);
  lVar1 = *param_4;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if ((param_2 < 0x20) && (param_3 < 0x1e)) {
    FUN_008664a0(lVar1,param_1 + (ulong)param_2 * 0x2850 + (ulong)param_3 * 0x158 + 0x60);
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01507218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


