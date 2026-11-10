/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005714c0; name: FUN_005714c0
 */


void FUN_005714c0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
  (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0057150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
  return;
}


