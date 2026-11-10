/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7ad20; name: FUN_00a7ad20
 */


void FUN_00a7ad20(long param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xbd0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,param_2 & 1);
  }
  plVar1 = *(long **)(param_1 + 0xbd8);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a7ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x198))(plVar1,param_2 & 1);
  return;
}


