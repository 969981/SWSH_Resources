/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050fe90; name: FUN_0050fe90
 */


undefined8 * FUN_0050fe90(float param_1,float param_2,float param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_1a0 [64];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  local_a0 = fVar1 + 0.0;
  local_90 = (1.0 - fVar1) * 0.0;
  local_98 = local_90 - fVar2;
  local_80 = fVar2 + local_90;
  fStack_9c = local_90 + fVar2 * 0.0;
  local_90 = local_90 - fVar2 * 0.0;
  fStack_8c = fVar1 * 0.0 + 1.0;
  local_84 = 0;
  local_94 = 0;
  local_6c = 0;
  local_74 = 0;
  local_64 = 0x3f800000;
  local_88 = fStack_9c;
  fStack_7c = local_90;
  local_78 = local_a0;
  fVar1 = cosf(param_2);
  fVar2 = sinf(param_2);
  local_e0 = fVar1 * 0.0 + 1.0;
  fStack_bc = (1.0 - fVar1) * 0.0;
  local_dc = fStack_bc + fVar2 * 0.0;
  fStack_d8 = fStack_bc - fVar2 * 0.0;
  fStack_c8 = fVar2 + fStack_bc;
  fStack_bc = fStack_bc - fVar2;
  local_cc = fVar1 + 0.0;
  local_c4 = 0;
  local_d4 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_a4 = 0x3f800000;
  local_d0 = fStack_d8;
  local_c0 = local_dc;
  local_b8 = local_cc;
  fVar1 = cosf(param_3);
  fVar2 = sinf(param_3);
  local_108 = (1.0 - fVar1) * 0.0;
  local_120 = fVar1 + 0.0;
  local_104 = 0;
  local_114 = 0;
  fStack_11c = fVar2 + local_108;
  local_110 = local_108 - fVar2;
  local_118 = local_108 - fVar2 * 0.0;
  local_108 = local_108 + fVar2 * 0.0;
  local_f8 = fVar1 * 0.0 + 1.0;
  local_ec = 0;
  local_f4 = 0;
  local_e4 = 0x3f800000;
  fStack_10c = local_120;
  local_100 = local_108;
  fStack_fc = local_118;
  FUN_00515cb0(auStack_1a0,&local_120,&local_e0);
  FUN_00515cb0(&local_160,auStack_1a0,&local_a0);
  param_4[2] = local_150;
  param_4[3] = uStack_148;
  *param_4 = local_160;
  param_4[1] = uStack_158;
  param_4[6] = local_130;
  param_4[7] = uStack_128;
  param_4[4] = local_140;
  param_4[5] = uStack_138;
  return param_4;
}


