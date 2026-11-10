/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00513d10; name: FUN_00513d10
 */


void FUN_00513d10(float param_1,float param_2,uint param_3,float *param_4,float *param_5,
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
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  if (((param_6 & 1) == 0) || (param_1 * DAT_01d4bbc8 < 1.0)) {
    bVar1 = false;
    fVar6 = 1.0;
  }
  else {
    fVar6 = 1.0 / (param_1 * DAT_01d4bbc8);
    fVar6 = fVar6 + fVar6;
    bVar1 = true;
  }
  fVar10 = 1.0 / ((param_1 + param_1) * param_1);
  param_2 = param_2 / (float)param_3;
  fVar2 = expf(fVar10 * -9.0);
  fVar2 = fVar6 * fVar2;
  fVar3 = expf(fVar10 * -4.0);
  fVar4 = expf(-fVar10);
  fVar4 = fVar6 * fVar3 + fVar6 * fVar4;
  fVar8 = 0.0;
  fVar5 = 0.0;
  if (0.0 < fVar4) {
    fVar5 = (fVar6 * fVar3) / fVar4;
  }
  fVar9 = fVar4 * 0.5 + fVar4 * 0.5;
  fVar3 = expf(-(fVar10 * 0.0));
  fVar4 = expf(-fVar10);
  fVar4 = fVar6 * fVar3 + fVar6 * fVar4;
  fVar7 = 0.0;
  if (0.0 < fVar4) {
    fVar7 = (fVar6 * fVar3) / fVar4;
  }
  fVar11 = fVar4 * 0.5 + fVar4 * 0.5;
  fVar3 = expf(fVar10 * -4.0);
  fVar4 = expf(fVar10 * -9.0);
  fVar4 = fVar6 * fVar3 + fVar6 * fVar4;
  if (0.0 < fVar4) {
    fVar8 = (fVar6 * fVar3) / fVar4;
  }
  fVar6 = fVar4 * 0.5 + fVar4 * 0.5;
  if (!bVar1) {
    fVar3 = 1.0 / (fVar2 + 0.0 + fVar9 + fVar11 + fVar6);
    fVar2 = fVar3 * fVar2;
    fVar9 = fVar3 * fVar9;
    fVar11 = fVar3 * fVar11;
    fVar6 = fVar3 * fVar6;
  }
  *param_4 = param_2 + (param_2 * 0.0 - param_2) * fVar7;
  *param_5 = fVar11;
  param_4[1] = (param_2 - (param_2 + param_2)) * fVar5 - param_2;
  param_5[1] = fVar9;
  param_4[2] = param_2 * 3.0 + ((param_2 + param_2) - param_2 * 3.0) * fVar8;
  param_5[2] = fVar6;
  param_4[3] = param_2 * -3.0;
  param_5[3] = fVar2;
  return;
}


