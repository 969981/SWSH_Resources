/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1380; name: FUN_003b1380
 */


void FUN_003b1380(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x68))(*(long **)(param_1 + 0x20),param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x003b13c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x70))(*(long **)(param_1 + 0x20),param_2);
  return;
}


