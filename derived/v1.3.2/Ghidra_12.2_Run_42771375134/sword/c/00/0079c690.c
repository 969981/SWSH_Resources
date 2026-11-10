/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079c690; name: FUN_0079c690
 */


bool FUN_0079c690(undefined4 param_1,float param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float fVar5;
  float extraout_s0;
  float fVar6;
  float extraout_var;
  undefined1 auVar7 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar8 [16];
  undefined8 uVar16;
  undefined1 extraout_var_01 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar11 [16];
  undefined1 extraout_var_03 [12];
  undefined1 extraout_var_04 [12];
  undefined1 auVar12 [16];
  undefined1 extraout_var_05 [12];
  undefined1 auVar13 [16];
  undefined1 extraout_var_06 [12];
  undefined1 auVar14 [16];
  undefined1 extraout_var_07 [12];
  undefined1 auVar15 [16];
  float extraout_var_08;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_130;
  ulong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  
  if (param_5 == 0) {
    return false;
  }
  if (param_6 == 0) {
    return false;
  }
  puVar4 = (undefined8 *)(param_3 + 0x68);
  FUN_00518390(*puVar4);
  uVar1 = *(int *)(param_5 + 0xa4) - 1;
  if (6 < uVar1) {
    uVar1 = 0xffffffff;
  }
  FUN_00518470(*puVar4,0xffffffff,*(undefined1 *)(param_5 + 0x60));
  if (*(char *)(param_5 + 0x60) == '\0') {
    auVar7._0_4_ = exp2f(*(float *)(param_5 + 0xa0));
    auVar7._4_12_ = extraout_var_03;
    FUN_00518520(auVar7,*(undefined4 *)(param_5 + 0xdc),DAT_01d4c0cc,DAT_01d4c5a8,*puVar4,uVar1);
  }
  else {
    FUN_005184a0(*(undefined4 *)(param_5 + 100),0,*puVar4,0xffffffff);
    auVar7 = FUN_00518480(*puVar4,0xffffffff);
    FUN_00518520(auVar7,*(undefined4 *)(param_5 + 0xdc),DAT_01d4c0cc,DAT_01d4c5a8,*puVar4,uVar1);
    FUN_005184c0(*puVar4,0xffffffff,0);
    uVar3 = *puVar4;
    auVar8._0_4_ = exp2f(*(float *)(param_5 + 0x6c));
    auVar8._4_12_ = extraout_var_00;
    uVar16 = extraout_var_00._4_8_;
    auVar10._0_8_ = auVar8._0_8_;
    auVar9._0_4_ = exp2f(*(float *)(param_5 + 0x70));
    auVar9._4_12_ = extraout_var_01;
    auVar10._8_8_ = uVar16;
    FUN_00518490(auVar10,auVar9._0_8_,uVar3,0xffffffff);
    FUN_005184b0(*(undefined4 *)(param_5 + 0x74),*(undefined4 *)(param_5 + 0x78),
                 *(undefined4 *)(param_5 + 0x7c),*(undefined4 *)(param_5 + 0x80),*puVar4,0xffffffff)
    ;
    uVar21 = *(undefined4 *)(param_5 + 0x84);
    uVar22 = *(undefined4 *)(param_5 + 0x88);
    uVar23 = *(undefined4 *)(param_5 + 0x8c);
    uVar24 = *(undefined4 *)(param_5 + 0x90);
    uVar3 = *puVar4;
    uVar25 = *(undefined4 *)(param_5 + 0x94);
    uVar26 = *(undefined4 *)(param_5 + 0x98);
    auVar11._0_4_ = exp2f(*(float *)(param_5 + 0x9c));
    auVar11._4_12_ = extraout_var_02;
    FUN_005184d0(uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,auVar11._0_8_,uVar3,0xffffffff);
  }
  FUN_00518830(*puVar4,1);
  fVar18 = DAT_01d4c284;
  fVar6 = DAT_01d4bb38;
  FUN_00518840(*puVar4,1,1);
  FUN_00518890(*(undefined4 *)(param_5 + 0xac),*(undefined4 *)(param_5 + 0xb0),
               *(undefined4 *)(param_5 + 0xb4),0,*puVar4,1);
  FUN_00518850(*puVar4,1);
  FUN_00518880(*puVar4,1);
  FUN_00518860(*puVar4,1);
  FUN_00518870(*(undefined4 *)(param_5 + 0xc4),*(undefined4 *)(param_5 + 200),
               *(undefined4 *)(param_5 + 0xcc),*puVar4,1);
  FUN_005188a0(*puVar4,1);
  uVar21 = *(undefined4 *)(param_5 + 0xd4);
  uVar3 = *puVar4;
  FUN_00511040(&local_118,0x19);
  FUN_005188b0(uVar21,0x3f800000,uVar3,1,1,&local_118);
  uVar21 = *(undefined4 *)(param_5 + 0xd8);
  uVar3 = *puVar4;
  FUN_00511040(&local_118,0x19);
  FUN_005188c0(uVar21,0x3f800000,uVar3,1,1,&local_118);
  FUN_00518830(*puVar4,0);
  if (*(char *)(param_5 + 0xe0) != '\0') {
    FUN_00518820(*puVar4);
  }
  uVar1 = *(int *)(param_5 + 0xe4) - 1;
  if (uVar1 < 10) {
    uVar21 = *(undefined4 *)(&DAT_0213fb20 + (long)(int)uVar1 * 4);
    if (*(char *)(param_5 + 0xe1) != '\0') goto LAB_0079c964;
LAB_0079cb04:
    FUN_005183e0(*puVar4,0,uVar21);
  }
  else {
    uVar21 = 1;
    if (*(char *)(param_5 + 0xe1) == '\0') goto LAB_0079cb04;
LAB_0079c964:
    local_d8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    local_c4 = 0;
    uStack_c0 = 0;
    local_cc = 0;
    local_d4 = 0;
    local_ac = 0;
    local_b4 = 0;
    local_98 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = 0;
    local_100 = 0;
    local_118 = 0;
    local_110 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_00518400(*puVar4,&local_118);
    if (*(int *)(param_5 + 0xe4) == 0xb) {
      fVar5 = *(float *)(param_5 + 400);
      fVar17 = fVar5 * (float)*(undefined8 *)(param_5 + 0x180);
      fVar19 = fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x180) >> 0x20);
      fVar20 = fVar5 * (float)*(undefined8 *)(param_5 + 0x188);
      fVar5 = fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x188) >> 0x20);
      local_100 = CONCAT44(fVar5,fVar20);
      local_108 = CONCAT44(fVar19,fVar17);
      if (fVar17 + fVar19 + fVar20 == 0.0) {
        local_100 = CONCAT44(fVar5,0x38d1b717);
        local_108 = 0x38d1b71738d1b717;
      }
      local_f8 = *(undefined8 *)(param_5 + 0x194);
      fVar5 = *(float *)(param_5 + 0x1b0);
      local_f0 = CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x1a0) >> 0x20),
                          fVar5 * (float)*(undefined8 *)(param_5 + 0x1a0));
      local_e8 = CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x1a8) >> 0x20),
                          fVar5 * (float)*(undefined8 *)(param_5 + 0x1a8));
      local_e0 = *(undefined8 *)(param_5 + 0x1b4);
      local_d8 = *(undefined1 *)(param_5 + 0x1bc);
      fVar5 = *(float *)(param_5 + 0x1d0);
      local_d4 = CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x1c0) >> 0x20),
                          fVar5 * (float)*(undefined8 *)(param_5 + 0x1c0));
      local_cc = CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x1c8) >> 0x20),
                          fVar5 * (float)*(undefined8 *)(param_5 + 0x1c8));
      local_c4 = *(undefined4 *)(param_5 + 0x1d4);
      uStack_c0 = *(undefined4 *)(param_5 + 0x1d8);
      uStack_bc = *(undefined4 *)(param_5 + 0x1dc);
      uStack_b8 = *(undefined1 *)(param_5 + 0x1e0);
      local_b4 = *(undefined8 *)(param_5 + 0x1e4);
      local_ac = *(undefined1 *)(param_5 + 0x1ec);
      fVar5 = *(float *)(param_5 + 0x200);
      local_a8 = CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x1f0) >> 0x20),
                          fVar5 * (float)*(undefined8 *)(param_5 + 0x1f0));
      local_a0 = CONCAT44(fVar5 * (float)((ulong)*(undefined8 *)(param_5 + 0x1f8) >> 0x20),
                          fVar5 * (float)*(undefined8 *)(param_5 + 0x1f8));
      local_98 = *(undefined4 *)(param_5 + 0x204);
    }
    FUN_005183f0(*puVar4,&local_118);
    FUN_005183d0(*(undefined4 *)(param_5 + 0xe8),*(undefined4 *)(param_5 + 0xec),
                 *(undefined4 *)(param_5 + 0xf0),*puVar4,1);
  }
  FUN_00518450(*puVar4,*(undefined1 *)(param_5 + 0xf4));
  FUN_005184e0(*puVar4,0xffffffff,*(undefined1 *)(param_5 + 0xf5));
  if ((*(char *)(param_5 + 0xf4) == '\0') || (*(char *)(param_5 + 0xf5) == '\0')) {
    auVar7 = ZEXT416(*(uint *)(param_5 + 0xfc));
  }
  else {
    auVar7 = FUN_005184f0(*puVar4,0xffffffff);
  }
  FUN_00518460(auVar7,*(undefined4 *)(param_5 + 0xf8),DAT_01d4c5d0,*puVar4);
  FUN_005185e0(*puVar4,*(undefined1 *)(param_5 + 0x100));
  FUN_00518630(*puVar4,*(undefined1 *)(param_5 + 0x101));
  fVar5 = DAT_01d4c094;
  uVar3 = *puVar4;
  if (*(char *)(param_5 + 0x101) == '\0') {
    fVar19 = *(float *)(param_6 + 0xcc);
    fVar17 = fVar19 * DAT_01d4c094;
    if (*(float *)(param_6 + 200) <= fVar17) {
      fVar17 = *(float *)(param_6 + 200);
    }
    auVar14._0_4_ = tanf(*(float *)(param_6 + 0xd0) * 0.5);
    auVar14._4_12_ = extraout_var_06;
    FUN_005183a0(fVar17,fVar19,auVar14._0_8_,0,0,uVar3);
    fVar17 = *(float *)(param_6 + 0xcc);
    fVar5 = fVar17 * fVar5;
    if (*(float *)(param_6 + 200) <= fVar5) {
      fVar5 = *(float *)(param_6 + 200);
    }
    uVar3 = *puVar4;
    auVar15._0_4_ = tanf(*(float *)(param_6 + 0xd0) * 0.5);
    auVar15._4_12_ = extraout_var_07;
    FUN_005183b0(fVar5,fVar17,auVar15._0_8_,0,0,uVar3);
  }
  else {
    FUN_00518640(uVar3,1);
    fVar17 = DAT_01d4c094;
    fVar19 = *(float *)(param_6 + 0xcc);
    fVar5 = fVar19 * DAT_01d4c094;
    if (*(float *)(param_6 + 200) <= fVar5) {
      fVar5 = *(float *)(param_6 + 200);
    }
    uVar3 = *puVar4;
    auVar12._0_4_ = tanf(*(float *)(param_6 + 0xd0) * 0.5);
    auVar12._4_12_ = extraout_var_04;
    FUN_005183a0(fVar5,fVar19,auVar12._0_8_,*(undefined4 *)(param_5 + 0x104),
                 *(undefined4 *)(param_5 + 0x108),uVar3);
    fVar5 = *(float *)(param_6 + 0xcc);
    fVar17 = fVar5 * fVar17;
    if (*(float *)(param_6 + 200) <= fVar17) {
      fVar17 = *(float *)(param_6 + 200);
    }
    fVar19 = 1.0 - *(float *)(param_5 + 0x10c);
    if (fVar19 <= DAT_01d4c4d4) {
      fVar19 = DAT_01d4c4d4;
    }
    uVar3 = *puVar4;
    auVar13._0_4_ = tanf(*(float *)(param_6 + 0xd0) * fVar19 * 0.5);
    auVar13._4_12_ = extraout_var_05;
    FUN_005183b0(fVar17,fVar5,auVar13._0_8_,*(undefined4 *)(param_5 + 0x104),
                 *(undefined4 *)(param_5 + 0x108),uVar3);
    FUN_00518650(*(undefined4 *)(param_5 + 0x110),0x3f800000,0x3f800000,*puVar4,
                 *(undefined4 *)(param_5 + 0x114),0xffffffff);
  }
  FUN_00518500(*puVar4,*(undefined1 *)(param_5 + 0x118));
  if (*(char *)(param_5 + 0x118) != '\0') {
    FUN_00518510(*(undefined4 *)(param_5 + 0x11c),DAT_01d4c5a8,0,*puVar4);
    FUN_00518830(*puVar4,3);
    if (*(float *)(param_5 + 0x120) != 0.0) {
      FUN_005188d0(*puVar4,3);
    }
    if (*(float *)(param_5 + 0x124) != 1.0) {
      FUN_005188e0(*puVar4,3);
    }
    FUN_00518830(*puVar4,2);
    if (*(float *)(param_5 + 0x128) != 0.0) {
      FUN_00518840(*puVar4,2,1);
    }
    if (*(float *)(param_5 + 300) != 1.0) {
      FUN_00518850(*puVar4,2);
    }
    if (*(float *)(param_5 + 0x130) != 1.0) {
      FUN_00518860(*puVar4,2);
    }
    if (*(float *)(param_5 + 0x134) != 1.0) {
      FUN_00518880(*puVar4,2);
    }
  }
  FUN_00518600(*puVar4,*(undefined1 *)(param_5 + 0x138));
  if (*(char *)(param_5 + 0x138) != '\0') {
    auVar7 = *(undefined1 (*) [16])(param_5 + 0x140);
    local_118 = auVar7._0_8_;
    auVar7 = NEON_ext(auVar7,auVar7,8,1);
    local_110 = auVar7._0_8_;
    FUN_00518610(*puVar4,&local_118,*(undefined1 *)(param_5 + 0x154),
                 *(undefined1 *)(param_5 + 0x155));
  }
  if (*(char *)(param_5 + 0x156) == '\0') {
    FUN_00518560(*puVar4,0);
  }
  else {
    fVar5 = *(float *)(param_5 + 0x15c);
    FUN_00518560(*puVar4,fVar5 != 0.0);
    if (fVar5 != 0.0) {
      if (*(int *)(param_5 + 0x158) == 1) {
        FUN_00518580(*(undefined4 *)(param_5 + 0x15c),(*(float *)(param_5 + 0x164) * fVar6) / fVar18
                     ,0,fVar6,DAT_01d4c2ac);
      }
      else {
        FUN_00518570(*(undefined4 *)(param_5 + 0x15c),(*(float *)(param_5 + 0x160) * fVar6) / fVar18
                     ,*puVar4);
      }
      FUN_00518590(ZEXT816(0x3f800000),*puVar4,0);
      FUN_005185a0(DAT_01d4c158,0x3f800000,*puVar4);
    }
  }
  local_120 = *(undefined4 *)(param_5 + 0x210);
  local_11c = *(undefined4 *)(param_5 + 0x214);
  local_118 = 0;
  local_130 = 0;
  FUN_005185b0(*puVar4,5,&local_120,&local_118,&local_130,0);
  if (*(char *)(param_5 + 0x218) == '\0') {
    uVar23 = 0;
    uVar3 = *puVar4;
    local_118 = 0;
    local_110 = 0;
    uVar21 = DAT_01d4c158;
    uVar22 = uVar23;
  }
  else {
    if (*(int *)(param_5 + 0x21c) == 1) {
      FUN_00518540(ZEXT816(0x3f800000),*(undefined4 *)(param_5 + 0x220),
                   *(undefined4 *)(param_5 + 0x224),*(undefined4 *)(param_5 + 0x228),
                   *(undefined4 *)(param_5 + 0x22c),*puVar4,1,0);
      goto LAB_0079cf70;
    }
    if (*(int *)(param_5 + 0x21c) != 0) goto LAB_0079cf70;
    local_118 = *(undefined8 *)(param_5 + 0x240);
    uVar23 = *(undefined4 *)(param_5 + 0x250);
    uVar3 = *puVar4;
    local_110 = *(ulong *)(param_5 + 0x248) & 0xffffffff;
    uVar21 = *(undefined4 *)(param_5 + 0x234);
    uVar22 = *(undefined4 *)(param_5 + 0x230);
  }
  FUN_00518530(uVar23,uVar21,uVar22,uVar3,&local_118);
LAB_0079cf70:
  FUN_00518410(*puVar4,*(undefined1 *)(param_5 + 0x260));
  if (*(char *)(param_5 + 0x260) != '\0') {
    auVar7 = FUN_00707e40(param_6,param_5 + 0x280);
    if (0.0 < auVar7._12_4_) {
      fVar5 = 1.0 / auVar7._12_4_;
      FUN_00518440(auVar7._0_4_ * fVar5 * 0.5 + 0.5,0.5 - auVar7._4_4_ * fVar5 * 0.5,*puVar4);
      fVar17 = *(float *)(param_5 + 0x264);
      local_118 = CONCAT44(fVar17 * *(float *)(param_5 + 0x274),fVar17 * *(float *)(param_5 + 0x270)
                          );
      local_110 = CONCAT44(fVar17 * 0.0,fVar17 * *(float *)(param_5 + 0x278));
      FUN_00518420(*(undefined4 *)(param_5 + 0x290),*(undefined4 *)(param_5 + 0x294),
                   auVar7._8_4_ * fVar5 * 0.5 + 0.5,*(undefined4 *)(param_5 + 0x298),
                   *(undefined4 *)(param_5 + 0x29c),*(undefined4 *)(param_5 + 0x2a0),*puVar4,
                   &local_118,0);
      local_130 = *(undefined8 *)(param_5 + 0x2b0);
      local_128 = (ulong)*(uint *)(param_5 + 0x2b8);
      FUN_00518430(*(undefined4 *)(param_5 + 0x2a4),(*(float *)(param_5 + 0x2c0) * fVar6) / fVar18,
                   *(undefined4 *)(param_5 + 0x2c4),0x3f800000,*puVar4,&local_130);
    }
  }
  if ((((*(int *)(param_3 + 0xac) != 0) && (*(char *)(param_5 + 0xe1) != '\0')) &&
      (FUN_00518790(*puVar4,*(undefined1 *)(param_5 + 0x2d0)), *(char *)(param_5 + 0x2d0) != '\0'))
     && (FUN_00707e40(param_6,param_5 + 0x2e0), 0.0 < extraout_var_08)) {
    FUN_005187d0(extraout_s0 * (1.0 / extraout_var_08) * 0.5 + 0.5,
                 0.5 - extraout_var * (1.0 / extraout_var_08) * 0.5,*puVar4);
    fVar6 = tanf(*(float *)(param_6 + 0xd0) * 0.5);
    fVar18 = *(float *)(param_5 + 0x300);
    local_118 = CONCAT44(fVar18 * (float)((ulong)*(undefined8 *)(param_5 + 0x2f0) >> 0x20),
                         fVar18 * (float)*(undefined8 *)(param_5 + 0x2f0));
    local_110 = CONCAT44(fVar18 * 0.0,fVar18 * (float)*(undefined8 *)(param_5 + 0x2f8));
    FUN_005187c0(DAT_01d4bb78 / fVar6,DAT_01d4c5a4,*puVar4,&local_118,
                 *(undefined4 *)(param_5 + 0x2d4),0);
    FUN_005187a0(*puVar4,*(undefined4 *)(param_5 + 0x2d8));
    local_130 = 0x3f8000003f800000;
    local_128 = 0x3f800000;
    FUN_005187b0(*(undefined4 *)(param_5 + 0x304),*(undefined4 *)(param_5 + 0x308),0x3f000000,
                 *(undefined4 *)(param_5 + 0x30c),*(undefined4 *)(param_5 + 0x310),*puVar4,
                 &local_130);
  }
  FUN_00518670(param_1,param_1,0,0,*puVar4);
  FUN_00518680(*(float *)(param_5 + 0x168) * param_2,*(float *)(param_5 + 0x16c) * param_2,
               *(float *)(param_5 + 0x170) * param_2,
               1.0 - (1.0 - *(float *)(param_5 + 0x174)) * param_2,*puVar4);
  FUN_00518c30(*puVar4,*(undefined8 *)
                        (*(long *)(param_7 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170 + 0xb8))
  ;
  iVar2 = FUN_00518660(*puVar4,0);
  return iVar2 == 0;
}


