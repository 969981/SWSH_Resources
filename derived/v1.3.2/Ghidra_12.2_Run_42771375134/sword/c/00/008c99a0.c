/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c99a0; name: FUN_008c99a0
 */


void FUN_008c99a0(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_016b2eb0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008c99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5e8) + 0x50))();
  return;
}


