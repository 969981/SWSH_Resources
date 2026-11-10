/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae730; name: FUN_003ae730
 */


void FUN_003ae730(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x68))(*(long **)(param_1 + 0x20),param_2 + 0x10);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x70))(*(long **)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x003ae780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
  return;
}


