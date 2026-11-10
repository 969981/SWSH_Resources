/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005115a0; name: FUN_005115a0
 */


undefined8 * FUN_005115a0(undefined8 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
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
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  if ((param_2 == 0x19) || (param_2 == -1)) {
    local_1a0 = 0;
    local_198 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    fStack_6c = 0.0;
    local_70 = 0.0;
    fStack_7c = 0.0;
    local_80 = 0.0;
    local_1b0._4_4_ = 0.0;
    local_1b0._0_4_ = 0.0;
    fVar4 = 0.0;
    fVar3 = 0.0;
  }
  else {
    FUN_00510a10(&local_1b0);
    local_80 = (float)local_1a8;
    local_70 = (float)local_1a0;
    fVar4 = (float)local_198;
    fStack_7c = local_1a8._4_4_;
    fStack_6c = local_1a0._4_4_;
    fVar3 = local_198._4_4_;
  }
  local_84 = 0;
  local_74 = 0;
  local_88 = (1.0 - (float)local_1b0) - local_1b0._4_4_;
  local_78 = (1.0 - local_80) - fStack_7c;
  local_68 = (1.0 - local_70) - fStack_6c;
  local_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  uStack_58 = 0;
  local_54 = 0x3f800000;
  local_90 = (float)local_1b0;
  fStack_8c = local_1b0._4_4_;
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
  local_178 = local_138;
  local_180 = local_140;
  local_188 = local_148;
  local_190 = local_150;
  local_158 = local_118;
  local_160 = local_120;
  local_168 = local_128;
  local_170 = local_130;
  FUN_005156a0(&local_90,&local_190);
  param_1[2] = CONCAT44(fStack_7c,local_80);
  param_1[3] = CONCAT44(local_74,local_78);
  *param_1 = CONCAT44(fStack_8c,local_90);
  param_1[1] = CONCAT44(local_84,local_88);
  param_1[6] = CONCAT44(local_5c,uStack_60);
  param_1[7] = CONCAT44(local_54,uStack_58);
  param_1[4] = CONCAT44(fStack_6c,local_70);
  param_1[5] = CONCAT44(local_64,local_68);
  return param_1;
}


