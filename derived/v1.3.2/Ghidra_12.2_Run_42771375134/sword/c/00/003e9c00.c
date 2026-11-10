/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9c00; name: FUN_003e9c00
 */


void FUN_003e9c00(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x928);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  }
  plVar1 = *(long **)(param_1 + 0x930);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  return;
}


