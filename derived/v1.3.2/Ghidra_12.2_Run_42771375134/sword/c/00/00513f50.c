/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00513f50; name: FUN_00513f50
 */


void FUN_00513f50(float param_1,float param_2,uint param_3,float *param_4,float *param_5,
                 uint param_6)

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
  float fVar13;
  float fVar14;
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  if (((param_6 & 1) == 0) || (param_1 * DAT_01d4bbc8 < 1.0)) {
    bVar1 = false;
    fVar8 = 1.0;
  }
  else {
    fVar8 = 1.0 / (param_1 * DAT_01d4bbc8);
    fVar8 = fVar8 + fVar8;
    bVar1 = true;
  }
  fVar13 = 1.0 / ((param_1 + param_1) * param_1);
  param_2 = param_2 / (float)param_3;
  fVar2 = expf(fVar13 * -25.0);
  fVar2 = fVar8 * fVar2;
  fVar3 = expf(fVar13 * -16.0);
  fVar4 = expf(fVar13 * -9.0);
  fVar5 = fVar8 * fVar3 + fVar8 * fVar4;
  fVar11 = 0.0;
  fVar6 = fVar5 * 0.5 + fVar5 * 0.5;
  fVar4 = 0.0;
  if (0.0 < fVar5) {
    fVar4 = (fVar8 * fVar3) / fVar5;
  }
  fVar5 = expf(fVar13 * -4.0);
  fVar3 = expf(-fVar13);
  fVar7 = fVar8 * fVar5 + fVar8 * fVar3;
  fVar3 = 0.0;
  if (0.0 < fVar7) {
    fVar3 = (fVar8 * fVar5) / fVar7;
  }
  fVar14 = fVar7 * 0.5 + fVar7 * 0.5;
  fVar5 = expf(-(fVar13 * 0.0));
  fVar7 = expf(-fVar13);
  fVar7 = fVar8 * fVar5 + fVar8 * fVar7;
  fVar9 = 0.0;
  if (0.0 < fVar7) {
    fVar9 = (fVar8 * fVar5) / fVar7;
  }
  fVar12 = fVar7 * 0.5 + fVar7 * 0.5;
  fVar5 = expf(fVar13 * -4.0);
  fVar7 = expf(fVar13 * -9.0);
  fVar7 = fVar8 * fVar5 + fVar8 * fVar7;
  fVar10 = 0.0;
  if (0.0 < fVar7) {
    fVar10 = (fVar8 * fVar5) / fVar7;
  }
  fVar7 = fVar7 * 0.5 + fVar7 * 0.5;
  fVar5 = expf(fVar13 * -16.0);
  fVar13 = expf(fVar13 * -25.0);
  fVar13 = fVar8 * fVar5 + fVar8 * fVar13;
  if (0.0 < fVar13) {
    fVar11 = (fVar8 * fVar5) / fVar13;
  }
  fVar8 = fVar13 * 0.5 + fVar13 * 0.5;
  if (!bVar1) {
    fVar5 = 1.0 / (fVar2 + 0.0 + fVar6 + fVar14 + fVar12 + fVar7 + fVar8);
    fVar2 = fVar5 * fVar2;
    fVar6 = fVar5 * fVar6;
    fVar14 = fVar5 * fVar14;
    fVar12 = fVar5 * fVar12;
    fVar7 = fVar5 * fVar7;
    fVar8 = fVar5 * fVar8;
  }
  *param_4 = param_2 + (param_2 * 0.0 - param_2) * fVar9;
  *param_5 = fVar12;
  param_4[1] = (param_2 - (param_2 + param_2)) * fVar3 - param_2;
  param_5[1] = fVar14;
  param_4[2] = param_2 * 3.0 + ((param_2 + param_2) - param_2 * 3.0) * fVar10;
  param_5[2] = fVar7;
  param_4[3] = param_2 * -3.0 + (param_2 * -4.0 - param_2 * -3.0) * fVar4;
  param_5[3] = fVar6;
  param_4[4] = param_2 * 5.0 + (param_2 * 4.0 - param_2 * 5.0) * fVar11;
  param_5[4] = fVar8;
  param_4[5] = param_2 * -5.0;
  param_5[5] = fVar2;
  return;
}


