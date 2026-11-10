/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00599940; name: FUN_00599940
 */


float * FUN_00599940(float param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
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
  float fVar12;
  
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar2 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
  bVar1 = true;
  if ((fVar2 != 0.0) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == 1.0;
  }
  if (!bVar1) {
    fVar9 = SQRT(fVar2);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar2);
    }
    fVar9 = 1.0 / fVar9;
    fVar7 = *param_3 * fVar9;
    fVar8 = fVar9 * param_3[1];
    fVar10 = fVar9 * param_3[3];
    fVar9 = fVar9 * param_3[2];
  }
  fVar12 = *param_4;
  fVar5 = param_4[1];
  fVar11 = param_4[2];
  fVar6 = param_4[3];
  fVar2 = fVar12 * fVar12 + fVar5 * fVar5 + fVar11 * fVar11 + fVar6 * fVar6;
  bVar1 = true;
  if ((fVar2 != 0.0) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == 1.0;
  }
  if (!bVar1) {
    fVar11 = SQRT(fVar2);
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar2);
    }
    fVar11 = 1.0 / fVar11;
    fVar12 = *param_4 * fVar11;
    fVar5 = fVar11 * param_4[1];
    fVar6 = fVar11 * param_4[3];
    fVar11 = fVar11 * param_4[2];
  }
  fVar2 = fVar10 * fVar6 + fVar9 * fVar11 + fVar8 * fVar5 + fVar7 * fVar12;
  if (fVar2 < 0.0) {
    fVar12 = -fVar12;
    fVar5 = -fVar5;
    fVar11 = -fVar11;
    fVar6 = -fVar6;
    fVar2 = -fVar2;
  }
  if ((((fVar7 != fVar12) || (fVar8 != fVar5)) || (fVar9 != fVar11)) || (fVar10 != fVar6)) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    fVar4 = fVar2 + -1.0;
    if (fVar4 <= 0.0) {
      fVar4 = -fVar4;
    }
    if (DAT_01d4bcf4 <= fVar4) {
      fVar2 = acosf(fVar2);
      fVar4 = sinf(fVar2);
      fVar3 = sinf((1.0 - param_1) * fVar2);
      fVar3 = fVar3 * (1.0 / fVar4);
      fVar2 = sinf(fVar2 * param_1);
      fVar2 = (1.0 / fVar4) * fVar2;
      fVar7 = fVar7 * fVar3 + fVar12 * fVar2;
      fVar8 = fVar8 * fVar3 + fVar5 * fVar2;
      fVar9 = fVar9 * fVar3 + fVar11 * fVar2;
      fVar10 = fVar10 * fVar3 + fVar6 * fVar2;
    }
    else {
      fVar7 = fVar7 + (fVar12 - fVar7) * param_1;
      fVar8 = fVar8 + (fVar5 - fVar8) * param_1;
      fVar9 = fVar9 + (fVar11 - fVar9) * param_1;
      fVar10 = fVar10 + (fVar6 - fVar10) * param_1;
      fVar2 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
      bVar1 = true;
      if ((fVar2 != 0.0) && (bVar1 = false, !NAN(fVar2))) {
        bVar1 = fVar2 == 1.0;
      }
      if (!bVar1) {
        fVar11 = SQRT(fVar2);
        if (NAN(fVar11)) {
          fVar11 = sqrtf(fVar2);
        }
        fVar11 = 1.0 / fVar11;
        fVar7 = fVar7 * fVar11;
        fVar8 = fVar8 * fVar11;
        fVar9 = fVar9 * fVar11;
        fVar10 = fVar10 * fVar11;
      }
    }
  }
  *param_2 = fVar7;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  return param_2;
}


