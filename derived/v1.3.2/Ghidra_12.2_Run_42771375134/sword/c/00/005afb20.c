/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005afb20; name: FUN_005afb20
 */


float FUN_005afb20(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x3e4)) {
    return *(float *)(param_1 + 0x3e4) / *(float *)(param_1 + 0x1c0);
  }
  return 0.0;
}


