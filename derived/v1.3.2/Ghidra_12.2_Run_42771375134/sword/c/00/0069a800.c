/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069a800; name: FUN_0069a800
 */


void FUN_0069a800(float param_1,long param_2)

{
  float fVar1;
  
  *(float *)(param_2 + 0x14) = param_1;
  if (param_1 < *(float *)(param_2 + 0x10)) {
    *(float *)(param_2 + 0x10) = param_1;
    fVar1 = *(float *)(param_2 + 0xc);
  }
  else {
    fVar1 = *(float *)(param_2 + 0xc);
  }
  if (fVar1 <= param_1) {
    return;
  }
  *(float *)(param_2 + 0xc) = param_1;
  return;
}


