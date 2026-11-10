/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115ed70; name: FUN_0115ed70
 */


void FUN_0115ed70(long param_1)

{
  FUN_01159840(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0115ed9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x730) + 0x50))();
  return;
}


