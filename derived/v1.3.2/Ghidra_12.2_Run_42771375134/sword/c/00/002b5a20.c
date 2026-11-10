/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b5a20; name: FUN_002b5a20
 */


void FUN_002b5a20(float *param_1,float *param_2)

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
  
  fVar4 = *param_1;
  fVar6 = param_1[1];
  fVar2 = param_1[3];
  fVar5 = param_1[4];
  param_2[0xb] = (param_1[2] + param_1[5]) * 0.5;
  param_2[9] = (fVar4 + fVar2) * 0.5;
  param_2[10] = (fVar6 + fVar5) * 0.5;
  fVar2 = sqrtf((*param_1 - param_1[3]) * (*param_1 - param_1[3]) +
                (param_1[1] - param_1[4]) * (param_1[1] - param_1[4]) +
                (param_1[2] - param_1[5]) * (param_1[2] - param_1[5]));
  fVar4 = param_1[6];
  param_2[0xe] = fVar4;
  param_2[0xc] = fVar4 + fVar2 * 0.5;
  param_2[0xd] = fVar4;
  if (fVar2 == 0.0) {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 1.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 1.0;
  }
  else {
    fVar6 = param_1[3] - *param_1;
    fVar5 = param_1[5] - param_1[2];
    fVar4 = param_1[4] - param_1[1];
    fVar2 = sqrtf(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if (0.0 < fVar2) {
      fVar2 = 1.0 / fVar2;
      fVar6 = fVar6 * fVar2;
      fVar4 = fVar4 * fVar2;
      fVar5 = fVar5 * fVar2;
    }
    fVar2 = fabsf(fVar4);
    if (fVar2 <= DAT_01d4c2dc) {
      fVar2 = fVar5 * fVar5;
      fVar9 = -fVar6;
      fVar1 = sqrtf(fVar2 + 0.0 + fVar6 * fVar6);
      if (fVar1 <= 0.0) {
        fVar7 = 0.0;
        fVar1 = fVar5;
      }
      else {
        fVar1 = 1.0 / fVar1;
        fVar7 = fVar1 * 0.0;
        fVar9 = fVar1 * fVar9;
        fVar2 = fVar5 * fVar5 * fVar1;
        fVar1 = fVar5 * fVar1;
      }
      fVar2 = fVar2 - fVar6 * fVar9;
      fVar3 = fVar4 * fVar9;
      fVar8 = -(fVar4 * fVar1);
    }
    else {
      fVar8 = -fVar4;
      fVar2 = sqrtf(fVar4 * fVar4 + fVar5 * fVar5 + 0.0);
      fVar9 = 0.0;
      fVar7 = 0.0;
      if (fVar2 <= 0.0) {
        fVar3 = 0.0;
        fVar2 = fVar5;
      }
      else {
        fVar2 = 1.0 / fVar2;
        fVar3 = fVar2 * 0.0;
        fVar8 = fVar2 * fVar8;
        fVar2 = fVar5 * fVar2;
      }
      fVar1 = 1.0;
    }
    *param_2 = fVar6;
    param_2[1] = fVar4;
    param_2[2] = fVar5;
    param_2[3] = fVar1;
    param_2[4] = fVar7;
    param_2[5] = fVar9;
    param_2[6] = fVar3;
    param_2[7] = fVar2;
    param_2[8] = fVar8;
  }
  return;
}


