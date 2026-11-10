/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6e60; name: FUN_004d6e60
 */


float FUN_004d6e60(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x34));
  return (fVar1 * DAT_01d4c5c4) / *(float *)(param_1 + 0x54);
}


