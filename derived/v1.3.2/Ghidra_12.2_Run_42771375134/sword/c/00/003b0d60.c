/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0d60; name: FUN_003b0d60
 */


void FUN_003b0d60(long param_1,undefined4 *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x220))(*param_2,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x003b0da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x238))(param_2[2]);
  return;
}


