/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e830f0; name: FUN_00e830f0
 */


void FUN_00e830f0(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x180))(0,param_1,PTR_DAT_0271e870);
                    /* WARNING: Could not recover jumptable at 0x00e83134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f0))(param_1,0);
  return;
}


