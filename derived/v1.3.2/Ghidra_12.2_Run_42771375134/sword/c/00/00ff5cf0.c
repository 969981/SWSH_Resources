/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff5cf0; name: FUN_00ff5cf0
 */


void FUN_00ff5cf0(long param_1)

{
  if (*(long **)(param_1 + 0x90) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
                    /* WARNING: Could not recover jumptable at 0x00ff5d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
  return;
}


