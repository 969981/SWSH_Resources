/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006028c0; name: FUN_006028c0
 */


void FUN_006028c0(long param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006028c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}


