/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115b1c0; name: FUN_0115b1c0
 */


void FUN_0115b1c0(long param_1)

{
  long *plVar1;
  
  if ((*(char *)(param_1 + 0x748) == '\0') || (*(char *)(param_1 + 0x749) != '\x02')) {
    return;
  }
  FUN_01159840(param_1,1);
  plVar1 = (long *)FUN_00ffdc80(param_1 + 0x100,"grid_VSSorting");
                    /* WARNING: Could not recover jumptable at 0x0115b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))();
  return;
}


