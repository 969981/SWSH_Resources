/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc870; name: FUN_003bc870
 */


void FUN_003bc870(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x003bc898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


