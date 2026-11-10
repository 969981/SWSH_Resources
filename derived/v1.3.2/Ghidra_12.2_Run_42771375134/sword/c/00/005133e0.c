/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005133e0; name: FUN_005133e0
 */


void FUN_005133e0(undefined1 param_1 [16],float param_2,uint param_3,uint param_4,
                 undefined8 *param_5,undefined4 *param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_64;
  float fStack_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  
  FUN_00513220(&local_64,param_7 & 1);
  param_5[3] = 0;
  param_5[5] = 0;
  param_5[7] = 0;
  param_5[9] = 0;
  fVar1 = param_2 / (float)param_3;
  *param_5 = 0;
  param_5[1] = 0;
  *param_6 = local_54;
  fVar2 = 0.0;
  fVar5 = 0.0;
  fStack_60 = local_64 + fStack_60;
  param_2 = param_2 / (float)param_4;
  fVar3 = fVar1 * 0.0;
  if (0.0 < fStack_60) {
    fVar5 = local_64 / fStack_60;
  }
  *(float *)(param_5 + 2) = fVar3 + (-fVar1 - fVar3) * fVar5;
  param_6[1] = fStack_60 * 0.5;
  *(float *)((long)param_5 + 0x14) = -param_2;
  param_6[1] = (float)param_6[1] + (float)param_6[1];
  local_50 = local_5c + local_50;
  fVar4 = param_2 * 0.0;
  fVar5 = 0.0;
  if (0.0 < local_50) {
    fVar5 = local_5c / local_50;
  }
  *(float *)((long)param_5 + 0x24) = fVar4 + (-param_2 - fVar4) * fVar5;
  param_6[2] = local_50 * 0.5;
  *(float *)(param_5 + 4) = fVar1;
  param_6[2] = (float)param_6[2] + (float)param_6[2];
  local_4c = local_58 + local_4c;
  fVar5 = 0.0;
  if (0.0 < local_4c) {
    fVar5 = local_58 / local_4c;
  }
  *(float *)((long)param_5 + 0x34) = param_2 + (fVar4 - param_2) * fVar5;
  param_6[3] = local_4c * 0.5;
  *(float *)(param_5 + 6) = -fVar1;
  param_6[3] = (float)param_6[3] + (float)param_6[3];
  fStack_44 = local_48 + fStack_44;
  if (0.0 < fStack_44) {
    fVar2 = local_48 / fStack_44;
  }
  *(float *)(param_5 + 8) = fVar1 + (fVar3 - fVar1) * fVar2;
  param_6[4] = fStack_44 * 0.5;
  *(float *)((long)param_5 + 0x44) = param_2;
  param_6[4] = (float)param_6[4] + (float)param_6[4];
  return;
}


