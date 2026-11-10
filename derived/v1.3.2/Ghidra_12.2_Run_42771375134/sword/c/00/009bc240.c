/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bc240; name: FUN_009bc240
 */


void FUN_009bc240(long *param_1,long *param_2)

{
  if (param_2 == param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009bc250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


