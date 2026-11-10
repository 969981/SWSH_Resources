/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b5110; name: FUN_002b5110
 */


undefined8 FUN_002b5110(float *param_1,float *param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_28;
  float local_24;
  
  local_80 = param_1[3] - *param_1;
  local_78 = param_1[5] - param_1[2];
  fStack_7c = param_1[4] - param_1[1];
  local_90 = param_2[3] - *param_2;
  local_88 = param_2[5] - param_2[2];
  fStack_8c = param_2[4] - param_2[1];
  FUN_00234f30(param_1,&local_80,param_2,&local_90,&local_24,&local_28);
  fVar3 = param_2[6];
  fVar1 = param_1[6];
  fVar6 = param_2[1] + local_28 * (param_2[4] - param_2[1]);
  fVar7 = *param_2 + local_28 * (param_2[3] - *param_2);
  fVar5 = param_2[2] + local_28 * (param_2[5] - param_2[2]);
  fVar10 = (param_1[1] + local_24 * (param_1[4] - param_1[1])) - fVar6;
  fVar9 = (*param_1 + local_24 * (param_1[3] - *param_1)) - fVar7;
  fVar8 = (param_1[2] + local_24 * (param_1[5] - param_1[2])) - fVar5;
  fVar4 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
  fVar2 = sqrtf(fVar4);
  if (DAT_01d4c1cc <= fVar4) {
    fVar4 = 1.0 / fVar2;
    fVar9 = fVar9 * fVar4;
    fVar10 = fVar4 * fVar10;
    fVar4 = fVar4 * fVar8;
    *(float *)(param_3 + 0x24) = fVar9;
    *(float *)(param_3 + 0x28) = fVar10;
    *(float *)(param_3 + 0x2c) = fVar4;
  }
  else {
    fVar4 = 0.0;
    *(undefined8 *)(param_3 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_3 + 0x2c) = 0;
    fVar9 = 1.0;
    fVar10 = 0.0;
  }
  *(float *)(param_3 + 0x30) = fVar2 - (fVar1 + fVar3);
  fVar1 = param_2[6];
  *(float *)(param_3 + 0x18) = fVar7 + fVar1 * fVar9;
  *(float *)(param_3 + 0x1c) = fVar6 + fVar1 * fVar10;
  *(float *)(param_3 + 0x20) = fVar5 + fVar1 * fVar4;
  return 1;
}


