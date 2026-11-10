/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005124b0; name: FUN_005124b0
 */


void FUN_005124b0(float param_1,uint param_2,uint param_3,undefined8 *param_4,float *param_5)

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
  
  fVar2 = DAT_01d4c734;
  fVar7 = DAT_01d4c3fc;
  fVar8 = DAT_01d4bff0;
  fVar4 = DAT_01d4bdb4;
  fVar5 = param_1 / (float)param_2;
  *param_4 = 0;
  param_4[1] = 0;
  param_1 = param_1 / (float)param_3;
  fVar9 = fVar5 * fVar7;
  fVar7 = param_1 * fVar7;
  fVar6 = fVar5 * fVar8;
  fVar8 = param_1 * fVar8;
  fVar3 = param_1 * 0.0;
  *param_5 = 1.0;
  fVar1 = DAT_01d4bee8;
  param_4[3] = 0;
  *(float *)(param_4 + 2) = fVar5 * fVar4;
  *(float *)((long)param_4 + 0x14) = fVar3;
  param_5[1] = 1.8;
  *(float *)(param_4 + 4) = fVar5 * fVar2;
  *(float *)((long)param_4 + 0x24) = fVar3;
  param_4[5] = 0;
  param_5[2] = 1.8;
  *(float *)(param_4 + 6) = fVar5 * 0.0;
  *(float *)((long)param_4 + 0x34) = param_1 * fVar4;
  param_4[7] = 0;
  param_5[3] = 1.8;
  *(float *)(param_4 + 8) = fVar3;
  *(float *)((long)param_4 + 0x44) = param_1 * fVar2;
  param_4[9] = 0;
  param_5[4] = 1.8;
  *(float *)(param_4 + 10) = fVar9;
  *(float *)((long)param_4 + 0x54) = fVar7;
  param_4[0xb] = 0;
  param_5[5] = 2.0306249;
  *(float *)(param_4 + 0xc) = fVar6;
  *(float *)((long)param_4 + 100) = fVar7;
  param_4[0xd] = 0;
  param_5[6] = 2.0306249;
  *(float *)(param_4 + 0xe) = fVar9;
  *(float *)((long)param_4 + 0x74) = fVar8;
  param_4[0xf] = 0;
  param_5[7] = 2.0306249;
  *(float *)(param_4 + 0x10) = fVar6;
  *(float *)((long)param_4 + 0x84) = fVar8;
  param_4[0x11] = 0;
  fVar4 = 1.0 / (*param_5 + 0.0 + param_5[1] + param_5[2] + param_5[3] + param_5[4] + param_5[5] +
                 param_5[6] + param_5[7] + fVar1);
  *param_5 = fVar4 * *param_5;
  param_5[1] = fVar4 * param_5[1];
  param_5[2] = fVar4 * param_5[2];
  param_5[3] = fVar4 * param_5[3];
  param_5[4] = fVar4 * param_5[4];
  param_5[5] = fVar4 * param_5[5];
  param_5[6] = fVar4 * param_5[6];
  param_5[7] = fVar4 * param_5[7];
  param_5[8] = fVar4 * fVar1;
  return;
}


