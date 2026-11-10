/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a5a0; name: FUN_0039a5a0
 */


void FUN_0039a5a0(long *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  
  if ((uint)((int)param_1[2] << 5) < param_2) {
    FUN_00190b50(param_1 + 1,param_2);
  }
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  }
  if ((uint)((int)param_1[8] << 5) < param_3) {
    FUN_00190b50(param_1 + 7,param_3);
  }
  plVar1 = (long *)param_1[6];
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0039a62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_3);
  return;
}


