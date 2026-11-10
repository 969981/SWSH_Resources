/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024a920; name: FUN_0024a920
 */


void FUN_0024a920(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_1c4;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  ulong uStack_188;
  undefined *local_178;
  undefined8 *local_170;
  undefined *puStack_168;
  undefined8 *local_160;
  undefined1 auStack_158 [8];
  undefined1 local_150 [8];
  float fStack_148;
  undefined1 local_140 [8];
  float fStack_138;
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  float local_10c;
  float fStack_108;
  undefined8 local_104;
  undefined1 local_fc;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  fStack_1a4 = *param_4;
  local_1a0 = param_4[1];
  fStack_19c = param_4[2];
  local_1b0 = -fStack_1a4;
  fStack_1ac = -local_1a0;
  local_1a8 = -fStack_19c;
  local_1b8 = 0.0;
  local_1c0 = 0.0;
  if (*param_5 != 0.0) {
    local_1c0 = 1.0 / *param_5;
  }
  fStack_1bc = 0.0;
  if (param_5[1] != 0.0) {
    fStack_1bc = 1.0 / param_5[1];
  }
  if (param_5[2] != 0.0) {
    local_1b8 = 1.0 / param_5[2];
  }
  local_1c4 = 0x7f7fffff;
  uVar2 = FUN_0024bc20(param_6,&local_1b0,param_5,&local_1c0,param_2,param_3,&local_1c4,0);
  if (((uVar2 & 1) == 0) || (((*param_3 == 0.0 && (param_3[1] == 0.0)) && (param_3[2] == 0.0)))) {
    fVar6 = param_5[2] * param_1;
    fVar7 = *param_5 * param_1;
    param_1 = param_5[1] * param_1;
    fVar8 = fVar7 - *param_5 * DAT_01d4bec4;
    fVar9 = param_1 - param_5[1] * DAT_01d4bec4;
    local_f0 = *(undefined8 *)param_4;
    fVar5 = fVar6 - param_5[2] * DAT_01d4bec4;
    local_a0 = CONCAT44(param_6[1] - fVar9,*param_6 - fVar8);
    uStack_90 = CONCAT44(param_6[4] - fVar9,param_6[3] - fVar8);
    local_80 = CONCAT44(param_6[7] - fVar9,param_6[6] - fVar8);
    fVar4 = param_4[2];
    uStack_e8 = (ulong)(uint)fVar4;
    local_b0 = 5;
    local_fc = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_104 = 0x37f7fffff;
    local_160 = &local_d0;
    uStack_98 = (ulong)(uint)(param_6[2] - fVar5);
    uStack_88 = (ulong)(uint)(param_6[5] - fVar5);
    local_ac = 0;
    local_c0 = &DAT_7f7fffff00000000;
    uStack_b8 = 0x7f7fffff7f7fffff;
    puStack_168 = PTR_DAT_02711e58 + 0x10;
    uStack_78 = (ulong)(uint)(param_6[8] - fVar5);
    uVar3 = NEON_fminp(CONCAT44(fVar4,fVar4),local_f0,4);
    local_170 = &local_120;
    local_178 = PTR_DAT_02711e60 + 0x10;
    uVar3 = NEON_fminp(uVar3,uVar3,4);
    local_d8 = (float)uVar3;
    local_10c = DAT_01d4c158 * local_d8;
    local_190 = CONCAT44(((param_6[1] - fVar9) + (param_6[4] - fVar9) + (param_6[7] - fVar9)) *
                         0.333333,((*param_6 - fVar8) + (param_6[3] - fVar8) + (param_6[6] - fVar8))
                                  * 0.333333);
    uStack_188 = (ulong)(uint)(((param_6[2] - fVar5) + (param_6[5] - fVar5) + (param_6[8] - fVar5))
                              * 0.333333);
    local_e0 = 0;
    local_110 = 0;
    local_198 = 0x7f7fffff7f7fffff;
                    /* try { // try from 0024aba4 to 0024abc7 has its CatchHandler @ 0024ac88 */
    fStack_108 = local_10c;
    local_d0 = local_190;
    uStack_c8 = uStack_188;
    iVar1 = FUN_0024ae60(&puStack_168,&local_178,&local_190,&local_198,auStack_130,local_140,
                         local_150,auStack_158);
    if (iVar1 == 2) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      fVar5 = param_5[2];
      fVar4 = param_5[1];
      *param_3 = -*param_5;
      param_3[1] = -fVar4;
      param_3[2] = -fVar5;
    }
    else {
      fVar4 = local_150._0_4_;
      fVar5 = local_150._4_4_;
      *param_2 = fVar7 + local_140._0_4_;
      param_2[1] = param_1 + local_140._4_4_;
      param_2[2] = fVar6 + fStack_138;
      if (0.0 < fVar6 * fStack_148 + fVar7 * fVar4 + param_1 * fVar5) {
        fVar4 = -fVar4;
        fVar5 = -fVar5;
        fStack_148 = -fStack_148;
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = fStack_148;
    }
  }
  return;
}


