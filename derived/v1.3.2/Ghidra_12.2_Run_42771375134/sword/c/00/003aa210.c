/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa210; name: FUN_003aa210
 */


void FUN_003aa210(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  if (*param_2 == 0) {
    plVar1 = (long *)param_2[2];
  }
  else {
    plVar1 = (long *)FUN_003aa860();
  }
                    /* WARNING: Could not recover jumptable at 0x003aa24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(param_1);
  return;
}


