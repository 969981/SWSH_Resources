/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6a2f0; name: FUN_00c6a2f0
 */


void FUN_00c6a2f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x90) + 0x168))();
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c6a328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


