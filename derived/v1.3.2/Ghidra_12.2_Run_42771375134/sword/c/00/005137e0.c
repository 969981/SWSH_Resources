/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005137e0; name: FUN_005137e0
 */


void FUN_005137e0(undefined1 param_1 [16],float param_2,uint param_3,uint param_4,float *param_5,
                 undefined4 *param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_00513220(&local_64,param_7 & 1);
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  fVar1 = param_2 / (float)param_3;
  fVar2 = -fVar1;
  param_2 = param_2 / (float)param_4;
  fVar3 = -param_2;
  fVar4 = fVar1 * 0.0;
  *param_5 = fVar2;
  param_5[1] = fVar3;
  *param_6 = local_64;
  param_5[4] = fVar4;
  param_5[5] = fVar3;
  param_5[6] = 0.0;
  param_5[7] = 0.0;
  param_6[1] = local_60;
  param_5[8] = fVar1;
  param_5[9] = fVar3;
  param_5[10] = 0.0;
  param_5[0xb] = 0.0;
  fVar3 = param_2 * 0.0;
  param_6[2] = local_5c;
  param_5[0xc] = fVar2;
  param_5[0xd] = fVar3;
  param_5[0xe] = 0.0;
  param_5[0xf] = 0.0;
  param_6[3] = local_58;
  param_5[0x10] = fVar4;
  param_5[0x11] = fVar3;
  param_5[0x12] = 0.0;
  param_5[0x13] = 0.0;
  param_6[4] = local_54;
  param_5[0x14] = fVar1;
  param_5[0x15] = fVar3;
  param_5[0x16] = 0.0;
  param_5[0x17] = 0.0;
  param_6[5] = local_50;
  param_5[0x18] = fVar2;
  param_5[0x19] = param_2;
  param_5[0x1a] = 0.0;
  param_5[0x1b] = 0.0;
  param_6[6] = local_4c;
  param_5[0x1c] = fVar4;
  param_5[0x1d] = param_2;
  param_5[0x1e] = 0.0;
  param_5[0x1f] = 0.0;
  param_6[7] = local_48;
  param_5[0x20] = fVar1;
  param_5[0x21] = param_2;
  param_5[0x22] = 0.0;
  param_5[0x23] = 0.0;
  param_6[8] = local_44;
  return;
}


