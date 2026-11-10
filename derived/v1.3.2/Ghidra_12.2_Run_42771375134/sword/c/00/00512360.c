/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00512360; name: FUN_00512360
 */


void FUN_00512360(float param_1,uint param_2,uint param_3,float *param_4,undefined8 *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_5[3] = 0;
  param_5[5] = 0;
  param_5[7] = 0;
  param_5[9] = 0;
  fVar1 = param_1 / (float)param_2;
  *param_5 = 0;
  param_5[1] = 0;
  *param_6 = param_4[4];
  fVar2 = 0.0;
  fVar4 = *param_4 + param_4[1];
  param_1 = param_1 / (float)param_3;
  fVar5 = 0.0;
  fVar3 = fVar1 * 0.0;
  if (0.0 < fVar4) {
    fVar5 = *param_4 / fVar4;
  }
  *(float *)(param_5 + 2) = fVar3 + (-fVar1 - fVar3) * fVar5;
  param_6[1] = fVar4 * 0.5;
  *(float *)((long)param_5 + 0x14) = -param_1;
  param_6[1] = param_6[1] + param_6[1];
  fVar6 = param_4[2] + param_4[5];
  fVar4 = param_1 * 0.0;
  fVar5 = 0.0;
  if (0.0 < fVar6) {
    fVar5 = param_4[2] / fVar6;
  }
  *(float *)((long)param_5 + 0x24) = fVar4 + (-param_1 - fVar4) * fVar5;
  param_6[2] = fVar6 * 0.5;
  *(float *)(param_5 + 4) = fVar1;
  param_6[2] = param_6[2] + param_6[2];
  fVar6 = param_4[3] + param_4[6];
  fVar5 = 0.0;
  if (0.0 < fVar6) {
    fVar5 = param_4[3] / fVar6;
  }
  *(float *)((long)param_5 + 0x34) = param_1 + (fVar4 - param_1) * fVar5;
  param_6[3] = fVar6 * 0.5;
  *(float *)(param_5 + 6) = -fVar1;
  param_6[3] = param_6[3] + param_6[3];
  fVar5 = param_4[7] + param_4[8];
  if (0.0 < fVar5) {
    fVar2 = param_4[7] / fVar5;
  }
  *(float *)(param_5 + 8) = fVar1 + (fVar3 - fVar1) * fVar2;
  param_6[4] = fVar5 * 0.5;
  *(float *)((long)param_5 + 0x44) = param_1;
  param_6[4] = param_6[4] + param_6[4];
  return;
}


