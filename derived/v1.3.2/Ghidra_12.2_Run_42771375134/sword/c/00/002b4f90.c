/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b4f90; name: FUN_002b4f90
 */


undefined8 FUN_002b4f90(float *param_1,float *param_2,long param_3)

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
  
  fVar3 = *param_2;
  fVar2 = param_2[1];
  fVar1 = param_2[2];
  fVar6 = param_2[3] - fVar3;
  fVar5 = param_2[6];
  fVar4 = param_1[3];
  fVar8 = param_2[4] - fVar2;
  fVar7 = param_2[5] - fVar1;
  fVar9 = fVar6 * (*param_1 - fVar3) + fVar8 * (param_1[1] - fVar2) + fVar7 * (param_1[2] - fVar1);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar10 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
    if (fVar10 <= fVar9) {
      fVar9 = 1.0;
    }
    else {
      fVar9 = fVar9 / fVar10;
    }
  }
  fVar3 = (fVar3 + fVar6 * fVar9) - *param_1;
  fVar2 = (fVar2 + fVar8 * fVar9) - param_1[1];
  fVar7 = (fVar1 + fVar7 * fVar9) - param_1[2];
  fVar6 = fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2;
  fVar1 = sqrtf(fVar6);
  if (DAT_01d4c1cc <= fVar6) {
    fVar6 = 1.0 / fVar1;
    fVar3 = fVar6 * fVar3;
    fVar2 = fVar6 * fVar2;
    fVar6 = fVar6 * fVar7;
    *(float *)(param_3 + 0x24) = fVar3;
    *(float *)(param_3 + 0x28) = fVar2;
    *(float *)(param_3 + 0x2c) = fVar6;
  }
  else {
    fVar6 = 0.0;
    *(undefined8 *)(param_3 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_3 + 0x2c) = 0;
    fVar3 = 1.0;
    fVar2 = 0.0;
  }
  *(float *)(param_3 + 0x30) = fVar1 - (fVar4 + fVar5);
  fVar1 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = param_1[1];
  *(float *)(param_3 + 0x18) = fVar4 * fVar3 + *param_1;
  *(float *)(param_3 + 0x1c) = fVar4 * fVar2 + fVar5;
  *(float *)(param_3 + 0x20) = fVar4 * fVar6 + fVar1;
  return 1;
}


