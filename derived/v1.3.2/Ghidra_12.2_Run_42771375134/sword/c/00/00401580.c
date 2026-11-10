/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401580; name: FUN_00401580
 */


void FUN_00401580(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x004015ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}


