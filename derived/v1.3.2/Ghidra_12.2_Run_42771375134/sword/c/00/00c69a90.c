/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c69a90; name: FUN_00c69a90
 */


void FUN_00c69a90(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c69aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x110))(*(long **)(param_1 + 0x90),param_2 & 1);
  return;
}


