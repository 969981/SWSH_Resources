/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8fe60; name: FUN_00e8fe60
 */


bool FUN_00e8fe60(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(long *)(param_1 + 0x4c0) + 0xdc);
  return fVar1 <= 0.0 || 1.0 <= fVar1;
}


