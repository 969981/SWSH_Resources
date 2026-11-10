/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b3460; name: FUN_004b3460
 */


void FUN_004b3460(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 1) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x004b3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}


