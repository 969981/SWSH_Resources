/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca3b0; name: FUN_004ca3b0
 */


void FUN_004ca3b0(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ca3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2,param_3,param_1[2]);
    return;
  }
  plVar1 = (long *)*param_3;
  *param_3 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined2 *)(param_3 + 1) = 0;
  return;
}


