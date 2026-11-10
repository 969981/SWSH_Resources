/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9c30; name: FUN_003a9c30
 */


void FUN_003a9c30(long *param_1)

{
  long *plVar1;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003a9c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x58))();
    return;
  }
  plVar1 = (long *)FUN_003aa860();
                    /* WARNING: Could not recover jumptable at 0x003a9c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}


