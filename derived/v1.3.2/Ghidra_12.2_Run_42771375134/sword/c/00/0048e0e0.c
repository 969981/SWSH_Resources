/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e0e0; name: FUN_0048e0e0
 */


void FUN_0048e0e0(long param_1)

{
  if (((*(byte *)(param_1 + 0x16d) >> 3 & 1) == 0) && (*(long **)(param_1 + 0x200) != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x0048e0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x200) + 200))();
    return;
  }
  return;
}


