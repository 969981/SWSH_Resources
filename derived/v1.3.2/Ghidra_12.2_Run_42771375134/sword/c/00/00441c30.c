/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441c30; name: FUN_00441c30
 */


void FUN_00441c30(long param_1,long *param_2)

{
  *(long **)(param_1 + 0xe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00441c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}


