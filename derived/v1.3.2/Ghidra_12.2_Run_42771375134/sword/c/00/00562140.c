/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00562140; name: FUN_00562140
 */


void FUN_00562140(float *param_1,float *param_2,float *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = 1.0 / *param_3;
  fVar3 = (fVar3 * (*param_2 - *param_3 * 0.5)) / (fVar3 + -1.0);
  fVar4 = 1.0 / param_3[1];
  fVar7 = fVar3 + fVar3 + -1.0;
  fVar3 = (fVar4 * (param_2[1] - param_3[1] * 0.5)) / (fVar4 + -1.0);
  fVar4 = fVar3 + fVar3 + -1.0;
  fVar3 = fVar7 * fVar7 + fVar4 * fVar4;
  if ((fVar3 != 0.0) && (fVar3 != 1.0)) {
    fVar6 = SQRT(fVar3);
    if (!NAN(fVar6)) goto LAB_005621e8;
    fVar3 = sqrtf(fVar3);
  }
  fVar6 = fVar3;
LAB_005621e8:
  fVar3 = DAT_01d4bdf4;
  fVar8 = DAT_01d4bdf4 / (float)*param_4;
  fVar1 = cosf(fVar8 * 0.5);
  fVar4 = atan2f(fVar4,fVar7);
  fVar4 = (fVar4 - (float)param_4[1]) + DAT_01d4c05c;
  if (fVar4 <= fVar3) {
    if (fVar4 < 0.0) {
      fVar4 = (fVar4 - (float)(int)(fVar4 / fVar3) * fVar3) + fVar3;
    }
  }
  else {
    fVar4 = fVar4 - (float)(int)(fVar4 / fVar3) * fVar3;
  }
  fVar4 = fVar4 / fVar8 - (float)(int)(fVar4 / fVar8);
  fVar3 = fVar8 * fVar4 - fVar8 * 0.5;
  if (fVar3 <= 0.0) {
    fVar3 = -fVar3;
  }
  fVar7 = cosf(fVar3);
  fVar3 = 1.0 - (float)param_4[4];
  if (0.0 <= (float)param_4[3]) {
    fVar3 = (float)param_4[4];
  }
  if (fVar3 <= fVar4) {
    fVar4 = sinf(((fVar4 - fVar3) * (1.0 / (1.0 - fVar3)) + 1.0) * DAT_01d4bb38);
    fVar4 = powf(-fVar4,0.75);
    fVar3 = -(((1.0 - fVar3) / fVar3) * fVar4);
  }
  else {
    fVar3 = sinf((fVar4 / fVar3) * DAT_01d4bb38);
    fVar3 = powf(fVar3,0.75);
  }
  iVar2 = *param_4;
  fVar8 = (float)param_4[2];
  fVar5 = (float)param_4[3];
  fVar4 = sinf(fVar8 * DAT_01d4bb38);
  fVar3 = (fVar1 / fVar7) * (fVar4 * fVar8 * fVar5 * (fVar3 / (float)iVar2) + 1.0);
  fVar3 = fVar6 / (fVar3 + (float)param_4[2] * (1.0 - fVar3));
  fVar3 = 1.0 - (fVar6 + fVar3 * (fVar3 - fVar6));
  fVar4 = 1.0;
  if (fVar3 <= 0.0) {
    fVar4 = 0.0;
  }
  param_4[5] = (int)fVar1;
  *param_1 = fVar3;
  param_1[1] = fVar3;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  return;
}


