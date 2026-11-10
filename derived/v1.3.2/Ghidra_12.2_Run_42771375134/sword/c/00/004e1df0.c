/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e1df0; name: FUN_004e1df0
 */


void FUN_004e1df0(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                 undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined *puVar1;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  FUN_004c29b0(param_1,param_6,param_7,param_8,0);
  FUN_004097a0(param_1 + 0xb,param_2);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xff;
  local_60 = 0xff;
  local_58 = 0;
  FUN_004a4500(param_1 + 0xe,&local_80,1);
  puVar1 = PTR_DAT_02713610;
  param_1[0x17] = param_3;
  param_1[0x18] = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x19] = param_5;
  param_1[0x1a] = param_9;
  param_1[0xb] = (long)(puVar1 + 200);
  param_1[0xe] = (long)(puVar1 + 0x138);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_004e2d70(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = param_11;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = param_12;
  *(byte *)((long)param_1 + 0x17c) = *(byte *)((long)param_1 + 0x17c) & 0xf0 | 4;
  (**(code **)(*(long *)param_1[0x18] + 0x10))();
  return;
}


