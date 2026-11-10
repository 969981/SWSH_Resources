/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b4ea0; name: FUN_002b4ea0
 */


undefined8 FUN_002b4ea0(float *param_1,float *param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = param_2[1] - param_1[1];
  fVar6 = *param_2 - *param_1;
  fVar2 = param_1[3];
  fVar3 = param_2[3];
  fVar7 = param_2[2] - param_1[2];
  fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
  fVar1 = sqrtf(fVar4);
  if (DAT_01d4c1cc <= fVar4) {
    fVar4 = 1.0 / fVar1;
    fVar6 = fVar6 * fVar4;
    fVar5 = fVar5 * fVar4;
    fVar7 = fVar7 * fVar4;
    *(float *)(param_3 + 0x24) = fVar6;
    *(float *)(param_3 + 0x28) = fVar5;
    *(float *)(param_3 + 0x2c) = fVar7;
  }
  else {
    fVar7 = 0.0;
    *(undefined8 *)(param_3 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_3 + 0x2c) = 0;
    fVar6 = 1.0;
    fVar5 = 0.0;
  }
  *(float *)(param_3 + 0x30) = fVar1 - (fVar2 + fVar3);
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  *(float *)(param_3 + 0x18) = fVar2 * fVar6 + *param_1;
  *(float *)(param_3 + 0x1c) = fVar2 * fVar5 + fVar3;
  *(float *)(param_3 + 0x20) = fVar2 * fVar7 + fVar1;
  return 1;
}


