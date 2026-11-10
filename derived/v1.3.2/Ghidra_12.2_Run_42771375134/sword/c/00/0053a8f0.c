/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053a8f0; name: FUN_0053a8f0
 */


undefined8 FUN_0053a8f0(float param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  fStack_6c = param_1 * 0.0 + 0.0;
  local_70 = param_1 * DAT_01d4c508 + 1.0;
  fStack_5c = param_1 * DAT_01d4c0e0 + 1.0;
  fStack_34 = param_1 * 0.0 + 1.0;
  local_48 = param_1 * DAT_01d4c5d8 + 1.0;
  param_1 = 1.0 - param_1;
  local_68 = fStack_6c;
  fStack_64 = fStack_6c;
  local_60 = fStack_6c;
  local_58 = fStack_6c;
  fStack_54 = fStack_6c;
  local_50 = fStack_6c;
  fStack_4c = fStack_6c;
  fStack_44 = fStack_6c;
  local_40 = fStack_6c;
  fStack_3c = fStack_6c;
  local_38 = fStack_6c;
  FUN_005101e0(param_1,param_1,param_1,auStack_b0,0);
  FUN_00515cb0(&local_f0,auStack_b0,&local_70);
  local_118 = local_d8;
  local_120 = local_e0;
  local_128 = local_e8;
  local_130 = local_f0;
  local_f8 = local_b8;
  local_100 = local_c0;
  local_108 = local_c8;
  local_110 = local_d0;
  lVar1 = param_2 + (long)param_3 * 0x40 + 0x9b4;
  FUN_00515cb0(lVar1,lVar1,&local_130);
  *(undefined1 *)(param_2 + param_3 + 0xb34) = 1;
  return 0;
}


