/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00584670; name: FUN_00584670
 */


undefined8
FUN_00584670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            long param_6,long param_7,undefined8 *param_8,undefined8 *param_9,undefined8 param_10,
            undefined8 param_11,float *param_12,undefined4 param_13,undefined8 param_14,
            undefined4 param_15,float *param_16,byte param_17)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_7f8;
  float fStack_7f4;
  float local_7f0;
  undefined4 local_7ec;
  float local_7e8;
  float fStack_7e4;
  float local_7e0;
  undefined4 local_7dc;
  float local_7d8;
  float fStack_7d4;
  float local_7d0;
  undefined4 local_7cc;
  float local_7c8;
  float fStack_7c4;
  float local_7c0;
  undefined4 local_7bc;
  undefined1 local_7b8 [8];
  float local_7b0 [62];
  undefined8 local_6b8 [128];
  long local_2b8 [2];
  undefined1 auStack_2a8 [64];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  ulong local_230;
  undefined1 auStack_228 [64];
  undefined1 auStack_1e8 [28];
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 auStack_1b0 [28];
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c [2];
  uint local_174;
  uint local_170;
  int local_16c;
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
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  if ((param_12 == (float *)0x0) || (*param_12 == 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar3 = *param_8;
  local_120 = param_8[1];
  local_118 = param_8[2];
  local_110 = param_8[3];
  local_128._0_4_ = (float)uVar3;
  fVar23 = (float)local_128;
  local_128._4_4_ = (float)((ulong)uVar3 >> 0x20);
  fVar24 = local_128._4_4_;
  fVar30 = (float)local_120;
  local_108 = param_8[4];
  local_100 = param_8[5];
  local_f8 = param_8[6];
  local_f0 = param_8[7];
  local_168 = *param_9;
  local_160 = param_9[1];
  fVar18 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_ +
           (float)local_120 * (float)local_120;
  local_158 = param_9[2];
  local_150 = param_9[3];
  local_148 = param_9[4];
  local_140 = param_9[5];
  local_138 = param_9[6];
  local_130 = param_9[7];
  if ((fVar18 != 0.0) && (fVar18 != 1.0)) {
    fVar21 = SQRT(fVar18);
    if (NAN(fVar21)) {
      local_128 = uVar3;
      fVar21 = sqrtf(fVar18);
    }
    fVar21 = 1.0 / fVar21;
    local_128._0_4_ = fVar23 * fVar21;
    local_128._4_4_ = fVar24 * fVar21;
    fVar30 = fVar30 * fVar21;
  }
  fVar23 = (float)local_118;
  fVar24 = local_118._4_4_;
  local_120 = CONCAT44(local_120._4_4_,fVar30);
  fVar30 = (float)local_110;
  fVar18 = (float)local_118 * (float)local_118 + local_118._4_4_ * local_118._4_4_ +
           (float)local_110 * (float)local_110;
  if ((fVar18 != 0.0) && (fVar18 != 1.0)) {
    fVar21 = SQRT(fVar18);
    if (NAN(fVar21)) {
      fVar21 = sqrtf(fVar18);
    }
    fVar21 = 1.0 / fVar21;
    local_118._0_4_ = fVar23 * fVar21;
    local_118._4_4_ = fVar24 * fVar21;
    fVar30 = fVar30 * fVar21;
  }
  fVar23 = (float)local_108;
  fVar24 = local_108._4_4_;
  local_110 = CONCAT44(local_110._4_4_,fVar30);
  fVar30 = (float)local_100;
  fVar18 = (float)local_108 * (float)local_108 + local_108._4_4_ * local_108._4_4_ +
           (float)local_100 * (float)local_100;
  if ((fVar18 != 0.0) && (fVar18 != 1.0)) {
    fVar21 = SQRT(fVar18);
    if (NAN(fVar21)) {
      fVar21 = sqrtf(fVar18);
    }
    fVar21 = 1.0 / fVar21;
    local_108._0_4_ = fVar23 * fVar21;
    local_108._4_4_ = fVar24 * fVar21;
    fVar30 = fVar30 * fVar21;
  }
  fVar23 = (float)local_168;
  fVar24 = local_168._4_4_;
  local_100 = CONCAT44(local_100._4_4_,fVar30);
  fVar30 = (float)local_160;
  fVar18 = (float)local_168 * (float)local_168 + local_168._4_4_ * local_168._4_4_ +
           (float)local_160 * (float)local_160;
  if ((fVar18 != 0.0) && (fVar18 != 1.0)) {
    fVar21 = SQRT(fVar18);
    if (NAN(fVar21)) {
      fVar21 = sqrtf(fVar18);
    }
    fVar21 = 1.0 / fVar21;
    local_168._0_4_ = fVar23 * fVar21;
    local_168._4_4_ = fVar24 * fVar21;
    fVar30 = fVar30 * fVar21;
  }
  fVar23 = (float)local_158;
  fVar24 = local_158._4_4_;
  local_160 = CONCAT44(local_160._4_4_,fVar30);
  fVar30 = (float)local_150;
  fVar18 = (float)local_158 * (float)local_158 + local_158._4_4_ * local_158._4_4_ +
           (float)local_150 * (float)local_150;
  if ((fVar18 != 0.0) && (fVar18 != 1.0)) {
    fVar21 = SQRT(fVar18);
    if (NAN(fVar21)) {
      fVar21 = sqrtf(fVar18);
    }
    fVar21 = 1.0 / fVar21;
    local_158._0_4_ = fVar23 * fVar21;
    local_158._4_4_ = fVar24 * fVar21;
    fVar30 = fVar30 * fVar21;
  }
  fVar23 = (float)local_148;
  fVar24 = local_148._4_4_;
  local_150 = CONCAT44(local_150._4_4_,fVar30);
  fVar30 = (float)local_140;
  fVar18 = (float)local_148 * (float)local_148 + local_148._4_4_ * local_148._4_4_ +
           (float)local_140 * (float)local_140;
  if ((fVar18 != 0.0) && (fVar18 != 1.0)) {
    fVar21 = SQRT(fVar18);
    if (NAN(fVar21)) {
      fVar21 = sqrtf(fVar18);
    }
    fVar21 = 1.0 / fVar21;
    local_148._0_4_ = fVar23 * fVar21;
    local_148._4_4_ = fVar24 * fVar21;
    fVar30 = fVar30 * fVar21;
  }
  local_140 = CONCAT44(local_140._4_4_,fVar30);
  FUN_00583080(param_1,param_2,param_3,param_4,param_5,&local_128,&local_168,param_10,param_11,
               param_12,param_13,param_14,param_15,&local_174,&local_16c,&local_170,local_17c + 1,
               local_17c,auStack_1b0,auStack_1e8);
  if (local_16c == 0) {
    if (param_5 == param_6) {
      return 0;
    }
    bVar8 = true;
    bVar7 = true;
    local_16c = 1;
    local_170 = 1;
    local_17c[1] = 0.0;
    local_17c[0] = 0.0;
  }
  else {
    bVar7 = local_16c == 1;
    bVar8 = local_170 == 1;
  }
  uVar1 = 0;
  if (!(bool)(bVar7 & bVar8)) {
    uVar1 = param_15;
  }
  if ((param_17 & 1) != 0) {
    (**(code **)(**(long **)(param_4 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_4 + 0x20) + 0x140))(*(long **)(param_4 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_4 + 0x20) + 0x150))(*(long **)(param_4 + 0x20),0);
  }
  lVar11 = param_5;
  do {
    lVar13 = lVar11;
    lVar11 = *(long *)(lVar13 + 0x120);
  } while (lVar11 != 0);
  plVar9 = *(long **)(lVar13 + 0xa8);
  uVar2 = *(undefined4 *)PTR_DAT_02713c88;
  if (!bVar5) {
    uVar2 = *(undefined4 *)PTR_DAT_02713c90;
  }
  (**(code **)(*plVar9 + 0x78))(plVar9,uVar2);
  lVar11 = param_6;
  do {
    lVar13 = lVar11;
    lVar11 = *(long *)(lVar13 + 0x120);
  } while (lVar11 != 0);
  plVar9 = *(long **)(lVar13 + 0xa8);
  (**(code **)(*plVar9 + 0x78))(plVar9,uVar2);
  if (param_7 != 0) {
    lVar11 = param_7;
    do {
      lVar13 = lVar11;
      lVar11 = *(long *)(lVar13 + 0x120);
    } while (lVar11 != 0);
    plVar9 = *(long **)(lVar13 + 0xa8);
    (**(code **)(*plVar9 + 0x78))(plVar9,uVar2);
  }
  FUN_005156a0(auStack_228,param_10);
  local_250 = local_110;
  local_258 = local_118;
  local_260 = local_120;
  local_268 = local_128;
  local_240 = local_100;
  local_238 = 0;
  local_248 = local_108;
  local_230 = local_f0 & 0xffffffff00000000;
  FUN_00515cb0(auStack_2a8,auStack_228,&local_268);
  fVar23 = *(float *)(param_5 + 0x88);
  fVar24 = *(float *)(param_5 + 0x8c);
  fVar18 = *(float *)(param_5 + 0x90);
  fVar30 = *(float *)(param_5 + 0x94);
  local_2b8[0] = param_7;
  local_2b8[1] = param_5;
  if (0 < local_16c) {
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x54));
    fVar22 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x58));
    uVar14 = 0;
    lVar11 = param_5;
    fVar21 = local_17c[0];
    do {
      if (uVar14 == local_16c - 1U) {
        fVar28 = *param_16;
        fVar29 = param_16[1];
        fVar27 = param_16[2];
        fVar31 = param_16[3];
        puVar10 = &local_170;
        lVar13 = param_6;
      }
      else {
        fVar31 = 1.0;
        lVar13 = local_2b8[uVar14 & 1];
        fVar27 = 1.0;
        fVar29 = 1.0;
        fVar28 = 1.0;
        puVar10 = &local_174;
      }
      uVar4 = *puVar10;
      FUN_0059d300(lVar13,0,0,1,0,0);
      FUN_0059d000(0,0);
      if (0 < (int)uVar4) {
        fVar20 = 1.0 / (float)(int)uVar4;
        uVar17 = 0;
        puVar16 = local_6b8;
        pfVar12 = local_7b0;
        do {
          fVar32 = fVar21 * (float)(int)uVar17;
          FUN_00599940(fVar32,&local_e8,auStack_1b0,auStack_1e8);
          local_7d0 = fStack_e4 * fStack_e4 + fStack_e4 * fStack_e4;
          fVar34 = local_e0 * local_e0 + local_e0 * local_e0;
          fStack_7f4 = local_e8 * fStack_e4 + local_e8 * fStack_e4;
          local_7e0 = fStack_e4 * local_e0 + fStack_e4 * local_e0;
          fVar26 = local_e8 * fStack_dc + local_e8 * fStack_dc;
          fVar33 = local_e8 * local_e8 + local_e8 * local_e8;
          local_7f0 = local_e8 * local_e0 + local_e8 * local_e0;
          fVar35 = fStack_e4 * fStack_dc + fStack_e4 * fStack_dc;
          fVar25 = local_e0 * fStack_dc + local_e0 * fStack_dc;
          fStack_7d4 = local_7e0 + fVar26;
          local_7e0 = local_7e0 - fVar26;
          local_7e8 = fStack_7f4 + fVar25;
          fStack_7f4 = fStack_7f4 - fVar25;
          local_7d8 = local_7f0 - fVar35;
          local_7f0 = local_7f0 + fVar35;
          local_7f8 = (1.0 - local_7d0) - fVar34;
          fStack_7e4 = (1.0 - fVar34) - fVar33;
          local_7d0 = (1.0 - fVar33) - local_7d0;
          local_7c8 = -(local_7d8 * 0.0 + local_7f8 * 0.0 + local_7e8 * 0.0);
          local_7c0 = -(local_7d0 * 0.0 + local_7f0 * 0.0 + local_7e0 * 0.0);
          fStack_7c4 = -(fStack_7d4 * 0.0 + fStack_7f4 * 0.0 + fStack_7e4 * 0.0);
          local_7cc = 0;
          local_7dc = 0;
          local_7ec = 0;
          local_7bc = 0x3f800000;
          FUN_0050f980(local_194 + fVar32 * (local_1cc - local_194),
                       local_190 + fVar32 * (local_1c8 - local_190),
                       local_18c + fVar32 * (local_1c4 - local_18c),
                       local_188 + fVar32 * (local_1c0 - local_188),
                       local_184 + fVar32 * (local_1bc - local_184),
                       local_180 + fVar32 * (local_1b8 - local_180),&local_e8,0,1);
          FUN_00515cb0(&local_7f8,&local_7f8,&local_e8);
          FUN_00515cb0(&local_e8,auStack_2a8,&local_7f8);
          uVar6 = local_b8;
          uVar3 = uStack_d0;
          puVar16[2] = local_d8;
          puVar16[3] = uVar3;
          uVar3 = CONCAT44(fStack_dc,local_e0);
          *puVar16 = CONCAT44(fStack_e4,local_e8);
          puVar16[1] = uVar3;
          uVar3 = local_b0;
          puVar16[6] = uVar6;
          puVar16[7] = uVar3;
          uVar3 = uStack_c0;
          puVar16[4] = local_c8;
          puVar16[5] = uVar3;
          FUN_005156a0(&local_e8,puVar16);
          uVar3 = uStack_d0;
          uVar17 = uVar17 + 1;
          puVar16[2] = local_d8;
          puVar16[3] = uVar3;
          pfVar12[-2] = fVar28 * fVar20;
          uVar3 = CONCAT44(fStack_dc,local_e0);
          pfVar12[-1] = fVar29 * fVar20;
          *puVar16 = CONCAT44(fStack_e4,local_e8);
          puVar16[1] = uVar3;
          uVar3 = local_b0;
          *pfVar12 = fVar27 * fVar20;
          pfVar12[1] = fVar31 * fVar20;
          puVar16[6] = local_b8;
          puVar16[7] = uVar3;
          uVar3 = uStack_c0;
          pfVar12 = pfVar12 + 4;
          puVar16[4] = local_c8;
          puVar16[5] = uVar3;
          puVar16 = puVar16 + 8;
        } while (uVar4 != uVar17);
      }
      do {
        lVar15 = lVar11;
        lVar11 = *(long *)(lVar15 + 0x120);
      } while (lVar11 != 0);
      FUN_00579ce0(0,0,fVar19,fVar22,0,0,fVar23 * fVar19 + fVar18,fVar24 * fVar22 + fVar30,param_4,
                   (ulong)uVar4,local_6b8,param_12,local_7b8,*(undefined8 *)(lVar15 + 0xa8),uVar1,0)
      ;
      if ((int)uVar14 < local_16c + -1) {
        FUN_0053fd40(*(undefined8 *)(param_4 + 0x20));
      }
      fVar21 = fVar21 * (float)(int)local_174;
      uVar14 = uVar14 + 1;
      lVar11 = lVar13;
    } while ((int)uVar14 < local_16c);
  }
  do {
    lVar11 = param_5;
    param_5 = *(long *)(lVar11 + 0x120);
  } while (param_5 != 0);
  plVar9 = *(long **)(lVar11 + 0xa8);
  (**(code **)(*plVar9 + 0x78))(plVar9,0);
  do {
    lVar11 = param_6;
    param_6 = *(long *)(lVar11 + 0x120);
  } while (param_6 != 0);
  plVar9 = *(long **)(lVar11 + 0xa8);
  (**(code **)(*plVar9 + 0x78))(plVar9,0);
  if (param_7 != 0) {
    do {
      lVar11 = param_7;
      param_7 = *(long *)(lVar11 + 0x120);
    } while (param_7 != 0);
    plVar9 = *(long **)(lVar11 + 0xa8);
    (**(code **)(*plVar9 + 0x78))(plVar9,0);
  }
  return 0;
}


