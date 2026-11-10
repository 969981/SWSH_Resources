/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005150e0; name: FUN_005150e0
 */


void FUN_005150e0(float param_1,float param_2,uint param_3,undefined4 *param_4,float *param_5,
                 uint param_6)

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
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  fVar8 = param_1 * DAT_01d4bbc8;
  fVar10 = 1.0 / ((param_1 + param_1) * param_1);
  fVar1 = expf(-(fVar10 * param_2 * param_2));
  fVar2 = expf(-(fVar10 * (param_2 + param_2) * (param_2 + param_2)));
  fVar3 = expf(-(fVar10 * param_2 * 3.0 * param_2 * 3.0));
  fVar4 = expf(-(fVar10 * param_2 * 4.0 * param_2 * 4.0));
  fVar5 = expf(-(fVar10 * param_2 * 5.0 * param_2 * 5.0));
  fVar6 = expf(-(fVar10 * param_2 * 6.0 * param_2 * 6.0));
  fVar7 = expf(-(fVar10 * param_2 * 7.0 * param_2 * 7.0));
  fVar9 = 1.0 / (float)param_3;
  fVar10 = expf(-(param_2 * 0.0 * param_2 * 0.0 * fVar10));
  if ((param_6 & 1) == 0 || fVar8 < 1.0) {
    fVar8 = fVar10 + fVar1 + fVar1 + fVar2 + fVar2 + fVar3 + fVar3 + fVar4 + fVar4 + fVar5 + fVar5 +
            fVar6 + fVar6 + fVar7 + fVar7;
  }
  fVar8 = 1.0 / fVar8;
  *param_5 = fVar8 * fVar10;
  *param_4 = 0;
  param_5[1] = fVar8 * fVar1;
  param_4[1] = fVar9;
  param_5[2] = fVar8 * fVar1;
  param_4[2] = -fVar9;
  param_5[3] = fVar8 * fVar2;
  param_4[3] = fVar9 + fVar9;
  param_5[4] = fVar8 * fVar2;
  param_4[4] = -(fVar9 + fVar9);
  param_5[5] = fVar8 * fVar3;
  param_4[5] = fVar9 * 3.0;
  param_5[6] = fVar8 * fVar3;
  param_4[6] = fVar9 * -3.0;
  param_5[7] = fVar8 * fVar4;
  param_4[7] = fVar9 * 4.0;
  param_5[8] = fVar8 * fVar4;
  param_4[8] = fVar9 * -4.0;
  param_5[9] = fVar8 * fVar5;
  param_4[9] = fVar9 * 5.0;
  param_5[10] = fVar8 * fVar5;
  param_4[10] = fVar9 * -5.0;
  param_5[0xb] = fVar8 * fVar6;
  param_4[0xb] = fVar9 * 6.0;
  param_5[0xc] = fVar8 * fVar6;
  param_4[0xc] = fVar9 * -6.0;
  param_5[0xd] = fVar8 * fVar7;
  param_4[0xd] = fVar9 * 7.0;
  param_5[0xe] = fVar8 * fVar7;
  param_4[0xe] = fVar9 * -7.0;
  return;
}


