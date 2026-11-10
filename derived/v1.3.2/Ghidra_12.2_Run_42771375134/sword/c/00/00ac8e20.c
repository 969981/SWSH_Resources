/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac8e20; name: FUN_00ac8e20
 */


void FUN_00ac8e20(long *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ac8e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1,param_2 & 1,2);
  return;
}


