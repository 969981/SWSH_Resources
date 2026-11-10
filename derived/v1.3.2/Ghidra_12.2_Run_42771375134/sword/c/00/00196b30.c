/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00196b30; name: FUN_00196b30
 */


void FUN_00196b30(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 8) == '\0')) {
    return;
  }
  lVar2 = *(long *)(param_1 + -8);
  plVar1 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x00196b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 - lVar2);
  return;
}


