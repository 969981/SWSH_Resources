/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006033a0; name: FUN_006033a0
 */


void FUN_006033a0(long param_1)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0x30) == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006033ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))();
  return;
}


