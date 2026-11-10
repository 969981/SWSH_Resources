/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6880; name: FUN_006f6880
 */


void FUN_006f6880(long param_1)

{
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f6890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x60))();
  return;
}


