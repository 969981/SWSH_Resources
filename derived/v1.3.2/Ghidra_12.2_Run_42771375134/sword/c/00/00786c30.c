/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00786c30; name: FUN_00786c30
 */


void FUN_00786c30(undefined8 param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00786c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2,PTR_DAT_027155e8);
  return;
}


