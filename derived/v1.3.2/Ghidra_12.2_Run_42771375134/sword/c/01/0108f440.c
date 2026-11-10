/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108f440; name: FUN_0108f440
 */


void FUN_0108f440(long param_1,undefined8 *param_2,ulong param_3)

{
  if ((param_3 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x4e0) + 0x68))(*(long **)(param_1 + 0x4e0),*param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0108f484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4e8) + 0x68))(*(long **)(param_1 + 0x4e8),*param_2);
  return;
}


