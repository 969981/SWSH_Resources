/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9e00; name: FUN_007a9e00
 */


void FUN_007a9e00(undefined4 param_1,undefined8 param_2)

{
  if (DAT_029f4e00 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007a9e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_029f4e00 + 0x28))(DAT_029f4e00,param_1,param_2);
  return;
}


