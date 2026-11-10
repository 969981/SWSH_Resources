/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0030cee0; name: FUN_0030cee0
 */


void FUN_0030cee0(float param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5)

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
  float fVar11;
  
  fVar5 = *param_3 * *param_4 + param_3[1] * param_4[1] + param_3[2] * param_4[2];
  fVar1 = fabsf(fVar5);
  if (DAT_01d4c1cc <= fVar1) {
    fVar7 = fVar5 * param_4[1];
    fVar6 = fVar5 * *param_4;
    fVar5 = fVar5 * param_4[2];
    fVar8 = param_3[3];
    fVar1 = sqrtf(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    fVar1 = 1.0 / fVar1;
    fVar6 = fVar6 * fVar1;
    fVar7 = fVar7 * fVar1;
    fVar5 = fVar5 * fVar1;
    fVar8 = fVar8 * fVar1;
  }
  else {
    fVar6 = 0.0;
    fVar8 = 1.0;
    fVar7 = 0.0;
    fVar5 = 0.0;
  }
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  fVar9 = ((fVar8 * fVar3 - fVar2 * fVar6) - fVar4 * fVar5) + fVar1 * fVar7;
  fVar10 = ((fVar8 * fVar4 - fVar2 * fVar7) - fVar1 * fVar6) + fVar3 * fVar5;
  fVar11 = ((fVar8 * fVar1 - fVar2 * fVar5) - fVar3 * fVar7) + fVar4 * fVar6;
  fVar1 = fVar8 * fVar2 + fVar3 * fVar6 + fVar4 * fVar7 + fVar1 * fVar5;
  if (fVar1 < 0.0) {
    fVar9 = -fVar9;
    fVar10 = -fVar10;
    fVar11 = -fVar11;
    fVar1 = -fVar1;
  }
  *(bool *)param_5 = fVar1 < param_1;
  if (fVar1 < param_1) {
    fVar1 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
    if (fVar1 <= 0.0) {
      fVar9 = 0.0;
      fVar10 = 0.0;
      fVar11 = 0.0;
    }
    else {
      fVar1 = sqrtf(fVar1);
      fVar1 = 1.0 / fVar1;
      fVar9 = fVar9 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar11 = fVar11 * fVar1;
    }
    fVar1 = sqrtf(1.0 - param_1 * param_1);
    fVar9 = fVar9 * fVar1;
    fVar10 = fVar10 * fVar1;
    fVar11 = fVar11 * fVar1;
    fVar1 = param_1;
  }
  *param_2 = (fVar5 * fVar10 + fVar6 * fVar1 + fVar8 * fVar9) - fVar7 * fVar11;
  param_2[1] = (fVar6 * fVar11 + fVar7 * fVar1 + fVar8 * fVar10) - fVar5 * fVar9;
  param_2[2] = (fVar5 * fVar1 + fVar8 * fVar11 + fVar7 * fVar9) - fVar6 * fVar10;
  param_2[3] = ((fVar8 * fVar1 - fVar6 * fVar9) - fVar7 * fVar10) - fVar5 * fVar11;
  return;
}


