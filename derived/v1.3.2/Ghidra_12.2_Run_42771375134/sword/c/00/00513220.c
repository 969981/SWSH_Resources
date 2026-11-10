/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00513220; name: FUN_00513220
 */


void FUN_00513220(float param_1,float *param_2,uint param_3)

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
  if ((param_3 & 1) == 0) {
    bVar1 = false;
    fVar8 = 1.0;
  }
  else {
    bVar1 = 1.0 <= param_1 * DAT_01d4bbc8;
    fVar8 = 1.0;
    if (bVar1) {
      fVar8 = 1.0 / (param_1 * DAT_01d4bbc8);
    }
  }
  fVar11 = 1.0 / ((param_1 + param_1) * param_1);
  fVar9 = -(fVar11 + fVar11);
  fVar2 = expf(fVar9);
  fVar10 = -fVar11;
  *param_2 = fVar8 * fVar2;
  fVar3 = expf(fVar10);
  param_2[1] = fVar8 * fVar3;
  fVar4 = expf(fVar9);
  param_2[2] = fVar8 * fVar4;
  fVar5 = expf(fVar10);
  fVar6 = DAT_01d4bc1c;
  param_2[3] = fVar8 * fVar5;
  fVar6 = expf(fVar11 * fVar6);
  param_2[4] = fVar8 * fVar6;
  fVar11 = expf(fVar10);
  param_2[5] = fVar8 * fVar11;
  fVar7 = expf(fVar9);
  param_2[6] = fVar8 * fVar7;
  fVar10 = expf(fVar10);
  param_2[7] = fVar8 * fVar10;
  fVar9 = expf(fVar9);
  fVar9 = fVar8 * fVar9;
  param_2[8] = fVar9;
  if (!bVar1) {
    fVar8 = 1.0 / (fVar8 * fVar2 + 0.0 + fVar8 * fVar3 + fVar8 * fVar4 + fVar8 * fVar5 +
                   fVar8 * fVar6 + fVar8 * fVar11 + fVar8 * fVar7 + fVar8 * fVar10 + fVar9);
    *param_2 = fVar8 * *param_2;
    param_2[1] = fVar8 * param_2[1];
    param_2[4] = fVar8 * param_2[4];
    param_2[5] = fVar8 * param_2[5];
    param_2[2] = fVar8 * param_2[2];
    param_2[3] = fVar8 * param_2[3];
    param_2[8] = fVar8 * fVar9;
    param_2[6] = fVar8 * param_2[6];
    param_2[7] = fVar8 * param_2[7];
  }
  return;
}


