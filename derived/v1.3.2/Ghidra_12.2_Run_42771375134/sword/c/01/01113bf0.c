/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01113bf0; name: FUN_01113bf0
 */


void FUN_01113bf0(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x01113bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}


