/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d4670; name: FUN_004d4670
 */


void FUN_004d4670(long param_1)

{
  long *plVar1;
  
  *(int *)(param_1 + 0x34c) = *(int *)(param_1 + 0x34c) + -1;
  if ((*(long *)(param_1 + 0x328) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 0x328) + 0x60), plVar1 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004d4694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))();
  return;
}


