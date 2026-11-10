/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005113f0; name: FUN_005113f0
 */


undefined8 * FUN_005113f0(undefined8 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110 [6];
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  
  if ((param_2 == 0x19) || (param_2 == -1)) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = 0;
    fStack_6c = 0.0;
    local_70 = 0.0;
    fStack_7c = 0.0;
    local_80 = 0.0;
    local_170._4_4_ = 0.0;
    local_170._0_4_ = 0.0;
    fVar4 = 0.0;
    fVar3 = 0.0;
  }
  else {
    FUN_00510a10(&local_170);
    local_80 = (float)local_168;
    local_70 = (float)local_160;
    fVar4 = (float)local_158;
    fStack_7c = local_168._4_4_;
    fStack_6c = local_160._4_4_;
    fVar3 = local_158._4_4_;
  }
  local_84 = 0;
  local_74 = 0;
  local_88 = (1.0 - (float)local_170) - local_170._4_4_;
  local_78 = (1.0 - local_80) - fStack_7c;
  local_68 = (1.0 - local_70) - fStack_6c;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0x3f800000;
  local_90 = (float)local_170;
  fStack_8c = local_170._4_4_;
  FUN_005156a0(&local_d0,&local_90);
  fVar1 = 1.0 / fVar3;
  local_110[3] = 0.0;
  local_110[4] = 0.0;
  fVar5 = fVar3 * fVar1;
  fVar2 = fVar4 * fVar1;
  fVar1 = fVar1 * ((1.0 - fVar4) - fVar3);
  local_110[0] = fVar2 * local_d0 + fVar5 * local_c0 + fVar1 * local_b0;
  local_110[5] = fVar2 * fStack_cc + fVar5 * fStack_bc + fVar1 * fStack_ac;
  local_110[1] = 0.0;
  local_110[2] = 0.0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_dc = 0;
  local_e4 = 0;
  local_e8 = fVar2 * local_c8 + fVar5 * local_b8 + fVar1 * local_a8;
  local_d4 = 0x3f800000;
  FUN_00515cb0(&local_150,local_110,&local_90);
  param_1[2] = local_140;
  param_1[3] = uStack_138;
  *param_1 = local_150;
  param_1[1] = uStack_148;
  param_1[6] = local_120;
  param_1[7] = uStack_118;
  param_1[4] = local_130;
  param_1[5] = uStack_128;
  return param_1;
}


