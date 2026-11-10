/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c23d0; name: FUN_002c23d0
 */


undefined8
FUN_002c23d0(float param_1,float param_2,float *param_3,float *param_4,float *param_5,float *param_6
            ,float *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = param_4[2];
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar13 = param_3[2];
  fVar11 = *param_3;
  fVar12 = param_3[1];
  fVar7 = fVar9 - fVar12;
  fVar6 = fVar8 - fVar11;
  fVar5 = fVar10 - fVar13;
  fVar4 = (fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5) -
          (param_1 + param_2) * (param_1 + param_2);
  if (fVar4 <= 0.0) {
LAB_002c2510:
    *param_6 = 0.0;
  }
  else {
    fVar12 = ((fVar9 + param_5[1]) - fVar9) - (fVar12 - fVar12);
    fVar9 = ((fVar8 + *param_5) - fVar8) - (fVar11 - fVar11);
    fVar8 = ((fVar10 + param_5[2]) - fVar10) - (fVar13 - fVar13);
    fVar10 = fVar9 * fVar9 + fVar12 * fVar12 + fVar8 * fVar8;
    if (fVar10 == 0.0) goto LAB_002c2510;
    fVar5 = fVar6 * fVar9 + fVar7 * fVar12 + fVar5 * fVar8;
    fVar5 = fVar5 + fVar5;
    fVar4 = fVar5 * fVar5 + fVar4 * fVar10 * -4.0;
    if (fVar4 < 0.0) {
      return 0;
    }
    fVar6 = sqrtf(fVar4);
    fVar4 = 1.0 / (fVar10 + fVar10);
    fVar7 = fVar4 * (fVar6 - fVar5);
    fVar4 = fVar4 * (-fVar5 - fVar6);
    fVar5 = fVar7;
    if (fVar7 <= fVar4) {
      fVar5 = fVar4;
      fVar4 = fVar7;
    }
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 < 1.0;
        bVar2 = fVar4 == 1.0;
        bVar3 = false;
      }
    }
    *param_6 = fVar4;
    if (!bVar2 && bVar1 == bVar3) {
      return 0;
    }
    if (fVar4 != 0.0) {
      fVar5 = (fVar4 * param_5[1] + param_4[1]) - param_3[1];
      fVar6 = (fVar4 * param_5[2] + param_4[2]) - param_3[2];
      fVar4 = (fVar4 * *param_5 + *param_4) - *param_3;
      *param_7 = fVar4;
      param_7[1] = fVar5;
      param_7[2] = fVar6;
      goto LAB_002c253c;
    }
  }
  fVar4 = -*param_5;
  fVar5 = -param_5[1];
  fVar6 = -param_5[2];
  *param_7 = fVar4;
  param_7[1] = fVar5;
  param_7[2] = fVar6;
LAB_002c253c:
  fVar4 = sqrtf(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    *param_7 = fVar4 * *param_7;
    param_7[1] = fVar4 * param_7[1];
    param_7[2] = fVar4 * param_7[2];
  }
  return 1;
}


