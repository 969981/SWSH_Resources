/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9e10; name: FUN_003a9e10
 */


void FUN_003a9e10(long *param_1)

{
  long *plVar1;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003a9e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x20))();
    return;
  }
  plVar1 = (long *)FUN_003aa860();
                    /* WARNING: Could not recover jumptable at 0x003a9e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


