/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c20b0; name: FUN_013c20b0
 */


void FUN_013c20b0(long param_1)

{
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
    (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
  }
  if (*(code **)(param_1 + 0x1b0) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013c20e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1b0))(param_1 + 0x1d0);
  return;
}


