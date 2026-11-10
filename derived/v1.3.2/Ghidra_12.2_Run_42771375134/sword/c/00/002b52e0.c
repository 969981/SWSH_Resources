/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b52e0; name: FUN_002b52e0
 */


undefined8 FUN_002b52e0(float *param_1,float *param_2,long param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = *param_1;
  fVar2 = param_1[1];
  fVar4 = param_1[2];
  pfVar1 = param_2 + 3;
  fVar6 = param_2[4];
  fVar7 = param_2[5];
  fVar5 = param_1[3] + *param_2 * fVar3 + param_2[1] * fVar2 + param_2[2] * fVar4;
  fVar9 = param_1[3] + fVar3 * *pfVar1 + fVar2 * fVar6 + fVar4 * fVar7;
  if (fVar5 < fVar9) {
    pfVar1 = param_2;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    fVar9 = fVar5;
  }
  fVar5 = *pfVar1;
  *(float *)(param_3 + 0x24) = fVar3;
  *(float *)(param_3 + 0x28) = fVar2;
  *(float *)(param_3 + 0x2c) = fVar4;
  fVar8 = param_2[6];
  *(float *)(param_3 + 0x18) = fVar5 - fVar9 * fVar3;
  *(float *)(param_3 + 0x1c) = fVar6 - fVar9 * fVar2;
  *(float *)(param_3 + 0x30) = fVar9 - fVar8;
  *(float *)(param_3 + 0x20) = fVar7 - fVar9 * fVar4;
  return 1;
}


