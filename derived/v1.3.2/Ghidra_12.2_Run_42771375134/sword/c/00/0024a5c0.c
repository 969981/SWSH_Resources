/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024a5c0; name: FUN_0024a5c0
 */


undefined8
FUN_0024a5c0(float param_1,float param_2,float *param_3,float *param_4,float *param_5,float *param_6
            ,float *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = sqrtf((*param_3 - *param_5) * (*param_3 - *param_5) +
                (param_3[1] - param_5[1]) * (param_3[1] - param_5[1]) +
                (param_3[2] - param_5[2]) * (param_3[2] - param_5[2]));
  fVar6 = (fVar5 - param_2) + -10.0;
  fVar5 = 0.0;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar12 = *param_3 + *param_4 * fVar6;
  fVar10 = param_3[1] + param_4[1] * fVar6;
  fVar11 = param_4[2] * fVar6 + param_3[2];
  fVar8 = param_5[1] - fVar10;
  fVar13 = *param_5 - fVar12;
  fVar9 = param_5[2] - fVar11;
  fVar7 = fVar13 * fVar13 + fVar8 * fVar8 + fVar9 * fVar9;
  if (fVar7 <= param_2 * param_2) {
    if (param_7 != (float *)0x0) {
      *param_7 = fVar12;
      param_7[1] = fVar10;
      param_7[2] = fVar11;
    }
    *param_6 = 0.0;
LAB_0024a70c:
    uVar4 = 1;
    *param_6 = fVar6 + fVar5;
  }
  else {
    fVar5 = *param_4 * fVar13 + param_4[1] * fVar8 + param_4[2] * fVar9;
    fVar8 = fVar5 - (param_1 - fVar6);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 < fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar8) && !NAN(param_2)) {
        bVar1 = fVar8 < param_2;
        bVar2 = fVar8 == param_2;
        bVar3 = false;
      }
    }
    if ((bVar2 || bVar1 != bVar3) &&
       (fVar7 = param_2 * param_2 - (fVar7 - fVar5 * fVar5), 0.0 <= fVar7)) {
      fVar7 = sqrtf(fVar7);
      fVar5 = fVar5 - fVar7;
      *param_6 = fVar5;
      if (fVar5 <= param_1 - fVar6) {
        if (param_7 != (float *)0x0) {
          fVar7 = param_4[1];
          fVar8 = param_4[2];
          *param_7 = fVar12 + fVar5 * *param_4;
          param_7[1] = fVar10 + fVar5 * fVar7;
          param_7[2] = fVar11 + fVar5 * fVar8;
          fVar5 = *param_6;
        }
        goto LAB_0024a70c;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


