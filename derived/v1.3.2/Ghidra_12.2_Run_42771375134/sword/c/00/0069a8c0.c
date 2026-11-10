/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069a8c0; name: FUN_0069a8c0
 */


float FUN_0069a8c0(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x19) != '\0') {
    fVar1 = (float)(int)*(float *)(param_1 + 0xc);
  }
  return (fVar1 - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 0x14);
}


