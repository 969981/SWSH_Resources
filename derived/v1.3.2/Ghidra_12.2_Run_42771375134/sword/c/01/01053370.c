/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01053370; name: FUN_01053370
 */


void FUN_01053370(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01053384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x150) + 0x70))(*(long **)(param_1 + 0x150),param_2 & 1,0);
  return;
}


