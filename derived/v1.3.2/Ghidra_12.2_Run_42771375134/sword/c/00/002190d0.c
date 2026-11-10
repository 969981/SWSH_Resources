/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002190d0; name: FUN_002190d0
 */


void FUN_002190d0(long param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_50;
  long local_48;
  ulong local_40;
  float local_38;
  
  fVar3 = sqrtf(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  fVar1 = DAT_01d4bacc;
  *(float *)(param_1 + 4) = param_2[3];
  local_50 = 0;
  local_40 = 0;
  fVar3 = fVar3 * fVar1;
  local_48 = (ulong)(uint)(*param_2 + 0.0) << 0x20;
  local_38 = fVar3;
  uVar2 = FUN_00218e10(param_1,&local_50);
  *(float *)(param_1 + 4) = param_2[4];
  local_50 = 0;
  local_48 = 0;
  local_40 = (ulong)(uint)(param_2[1] + 0.0);
  local_38 = fVar3;
  uVar2 = FUN_00218e10(uVar2,&local_50);
  *(float *)(param_1 + 4) = param_2[5];
  local_50 = 0;
  local_48 = 0;
  local_40 = (ulong)(uint)(param_2[2] + 0.0) << 0x20;
  local_38 = fVar3;
  FUN_00218e10(uVar2,&local_50);
  return;
}


