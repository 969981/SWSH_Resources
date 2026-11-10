/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007603f0; name: FUN_007603f0
 */


bool FUN_007603f0(long param_1,ulong param_2,long *param_3)

{
  if (param_2 < *(ulong *)(param_1 + 0x30)) {
    return false;
  }
  return *param_3 + param_2 < *(long *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x30);
}


