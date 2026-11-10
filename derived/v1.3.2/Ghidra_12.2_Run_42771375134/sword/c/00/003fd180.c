/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fd180; name: FUN_003fd180
 */


void FUN_003fd180(float param_1,float param_2,long param_3,long param_4,float *param_5,long param_6)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (ulong)*(uint *)(param_3 + 0x18) & 0x1fffffff;
  pfVar1 = (float *)(*(long *)(param_6 + 8) + uVar2 * 0x18);
  fVar4 = (pfVar1[3] - *pfVar1) * 0.5;
  fVar3 = (pfVar1[5] - pfVar1[2]) * 0.5;
  fVar5 = (pfVar1[4] - pfVar1[1]) * 0.5;
  fVar3 = sqrtf(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar4 = sqrtf(*param_5 * *param_5 + param_5[1] * param_5[1] + param_5[2] * param_5[2]);
  *(float *)(param_4 + uVar2 * 4) =
       fVar3 * fVar4 * param_2 + *(float *)(*(long *)(param_3 + 0x40) + 0x3c) + param_1;
  return;
}


