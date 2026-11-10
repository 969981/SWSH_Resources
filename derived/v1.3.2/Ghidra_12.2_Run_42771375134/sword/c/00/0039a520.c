/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a520; name: FUN_0039a520
 */


void FUN_0039a520(long *param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if ((plVar1 != (long *)0x0) && ((int)param_1[5] == 1)) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  }
  plVar1 = (long *)param_1[6];
  if ((plVar1 == (long *)0x0) || ((int)param_1[0xb] != 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0039a584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  return;
}


