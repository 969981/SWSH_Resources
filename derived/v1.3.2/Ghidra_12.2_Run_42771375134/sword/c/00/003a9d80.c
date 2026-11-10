/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9d80; name: FUN_003a9d80
 */


void FUN_003a9d80(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*param_1 == 0) {
    plVar1 = (long *)param_1[2];
  }
  else {
    plVar1 = (long *)FUN_003aa860();
  }
                    /* WARNING: Could not recover jumptable at 0x003a9dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return;
}


