/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01382cf0; name: FUN_01382cf0
 */


float FUN_01382cf0(long param_1)

{
  if ((uint)ABS(*(float *)(param_1 + 0xcc)) < 0x7f800001) {
    return *(float *)(param_1 + 0xcc) / DAT_01d4c4c4;
  }
  return 0.0;
}


