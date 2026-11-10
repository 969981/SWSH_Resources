/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00513580; name: FUN_00513580
 */


void FUN_00513580(float param_1,float param_2,uint param_3,uint param_4,float *param_5,
                 float *param_6,uint param_7)

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
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  fVar3 = param_1 * DAT_01d4bbc8;
  fVar8 = param_2 / (float)param_3;
  param_2 = param_2 / (float)param_4;
  fVar9 = 1.0 / ((param_1 + param_1) * param_1);
  fVar1 = expf(-(fVar9 * 0.0));
  fVar7 = param_2 * 0.0;
  *param_5 = fVar8 * 0.0;
  param_5[1] = fVar7;
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  *param_6 = fVar1;
  fVar1 = expf(-fVar9);
  fVar9 = expf(fVar9 * -4.0);
  fVar9 = fVar1 + fVar9;
  fVar2 = 2.0 - fVar1 / fVar9;
  fVar1 = fVar9 * 0.5;
  fVar5 = fVar1 + fVar1;
  if (fVar9 <= 0.0) {
    fVar2 = 2.0;
  }
  fVar4 = fVar8 * -fVar2;
  fVar6 = fVar8 * fVar2;
  fVar9 = param_2 * -fVar2;
  param_2 = param_2 * fVar2;
  param_5[6] = 0.0;
  param_5[7] = 0.0;
  param_5[4] = fVar4;
  param_5[5] = fVar7;
  param_6[1] = fVar5;
  param_5[8] = fVar6;
  param_5[9] = fVar7;
  param_5[10] = 0.0;
  param_5[0xb] = 0.0;
  param_6[2] = fVar5;
  param_5[0xc] = fVar8 * 0.0;
  param_5[0xd] = fVar9;
  param_5[0xe] = 0.0;
  param_5[0xf] = 0.0;
  param_6[3] = fVar5;
  param_5[0x10] = fVar7;
  param_5[0x11] = param_2;
  param_5[0x12] = 0.0;
  param_5[0x13] = 0.0;
  param_6[4] = fVar5;
  fVar1 = fVar1 * fVar1 * 4.0;
  param_5[0x14] = fVar4;
  param_5[0x15] = fVar9;
  param_5[0x16] = 0.0;
  param_5[0x17] = 0.0;
  param_6[5] = fVar1;
  param_5[0x18] = fVar6;
  param_5[0x19] = fVar9;
  param_5[0x1a] = 0.0;
  param_5[0x1b] = 0.0;
  param_6[6] = fVar1;
  param_5[0x1c] = fVar4;
  param_5[0x1d] = param_2;
  param_5[0x1e] = 0.0;
  param_5[0x1f] = 0.0;
  param_6[7] = fVar1;
  param_5[0x20] = fVar6;
  param_5[0x21] = param_2;
  param_5[0x22] = 0.0;
  param_5[0x23] = 0.0;
  param_6[8] = fVar1;
  if ((param_7 & 1) == 0 || fVar3 < 1.0) {
    fVar3 = 1.0 / (*param_6 + 0.0 + param_6[1] + param_6[2] + param_6[3] + param_6[4] + param_6[5] +
                   param_6[6] + param_6[7] + fVar1);
    *param_6 = fVar3 * *param_6;
    param_6[1] = fVar3 * param_6[1];
    param_6[2] = fVar3 * param_6[2];
    param_6[3] = fVar3 * param_6[3];
    param_6[4] = fVar3 * param_6[4];
    param_6[5] = fVar3 * param_6[5];
    param_6[6] = fVar3 * param_6[6];
    fVar9 = fVar3 * param_6[7];
  }
  else {
    fVar3 = (1.0 / (param_1 * DAT_01d4bbc8)) * DAT_01d4bfb4;
    *param_6 = fVar3 * *param_6;
    param_6[1] = fVar3 * param_6[1];
    param_6[2] = fVar3 * param_6[2];
    param_6[3] = fVar3 * param_6[3];
    param_6[4] = fVar3 * param_6[4];
    param_6[5] = fVar3 * param_6[5];
    param_6[6] = fVar3 * param_6[6];
    fVar9 = fVar3 * param_6[7];
  }
  param_6[7] = fVar9;
  param_6[8] = fVar3 * fVar1;
  return;
}


