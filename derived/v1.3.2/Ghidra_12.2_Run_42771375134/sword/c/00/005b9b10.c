/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b9b10; name: FUN_005b9b10
 */


void FUN_005b9b10(long *param_1)

{
  DAT_02763970 = DAT_02763970 + -1;
                    /* WARNING: Could not recover jumptable at 0x005b9b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


