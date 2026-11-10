/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013e960; name: FUN_0013e960
 */


void FUN_0013e960(long param_1)

{
  FUN_0013e9b0();
  (**(code **)(*(long *)(param_1 + 0x1d0) + 0x40))(param_1 + 0x1d0);
  (**(code **)(*(long *)(param_1 + 0x218) + 0x40))(param_1 + 0x218);
                    /* WARNING: Could not recover jumptable at 0x0013e9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x260) + 0x40))(param_1 + 0x260);
  return;
}


