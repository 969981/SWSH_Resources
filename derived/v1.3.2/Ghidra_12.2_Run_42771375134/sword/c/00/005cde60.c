/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cde60; name: FUN_005cde60
 */


void FUN_005cde60(long *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x280))(param_2,0);
  if (param_1[0xc] != 0) {
    FUN_005e24e0(param_1[0xc],param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x005cdeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1);
  return;
}


