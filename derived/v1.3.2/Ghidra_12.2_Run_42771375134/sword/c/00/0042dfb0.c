/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042dfb0; name: FUN_0042dfb0
 */


float FUN_0042dfb0(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < *(float *)(param_2 + 0x24)) {
    fVar2 = *(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x7c);
    fVar1 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x78);
    fVar3 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x80);
    fVar4 = *(float *)(param_1 + 0x3c) * fVar1 + fVar2 * *(float *)(param_1 + 0x40) +
            fVar3 * *(float *)(param_1 + 0x44);
    fVar1 = *(float *)(param_1 + 0x54) * fVar1 + fVar2 * *(float *)(param_1 + 0x58) +
            fVar3 * *(float *)(param_1 + 0x5c);
    return SQRT(fVar4 * fVar4 + fVar1 * fVar1) / *(float *)(param_2 + 0x58);
  }
  return 0.0;
}


