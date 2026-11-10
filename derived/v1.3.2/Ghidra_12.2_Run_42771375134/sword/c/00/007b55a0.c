/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b55a0; name: FUN_007b55a0
 */


void FUN_007b55a0(long param_1)

{
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_007bdc50();
  }
  if (*(long **)(param_1 + 0x58) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007b55d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x70))();
  return;
}


