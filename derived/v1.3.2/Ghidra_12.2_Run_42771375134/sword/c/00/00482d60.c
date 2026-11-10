/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482d60; name: FUN_00482d60
 */


void FUN_00482d60(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x80);
  if ((plVar1 == (long *)0x0) && (plVar1 = *(long **)(param_1 + 0x78), plVar1 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00482d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x108))();
  return;
}


