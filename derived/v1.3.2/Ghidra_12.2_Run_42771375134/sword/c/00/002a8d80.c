/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a8d80; name: FUN_002a8d80
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_002a8d80(float *param_1,float *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float *pfVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined2 uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  undefined2 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_200;
  float fStack_1fc;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1a0;
  float fStack_19c;
  float local_190;
  float fStack_18c;
  float local_188;
  float *local_180;
  undefined1 auStack_178 [24];
  float local_160 [6];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float fStack_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  char local_88 [8];
  
  local_d0 = param_2[0xc];
  fStack_e4 = param_2[0xd];
  fStack_ec = param_2[0xe];
  local_f0 = -fStack_e4;
  local_100 = -local_d0;
  local_f8 = -fStack_ec;
  lVar12 = *(long *)(param_1 + 4);
  fStack_fc = local_f0;
  fStack_f4 = local_100;
  local_e8 = local_100;
  local_e0 = local_f8;
  local_dc = local_100;
  local_d8 = fStack_e4;
  local_d4 = fStack_ec;
  fStack_cc = local_f0;
  local_c8 = local_f8;
  local_c4 = local_d0;
  local_c0 = local_f0;
  local_bc = fStack_ec;
  local_b8 = local_d0;
  fStack_b4 = fStack_e4;
  local_b0 = local_f8;
  local_ac = local_d0;
  local_a8 = fStack_e4;
  local_a4 = fStack_ec;
  fVar18 = *param_2;
  fVar25 = param_2[1];
  fVar48 = param_2[2];
  fVar41 = param_2[3];
  fVar44 = param_2[4];
  fVar42 = param_2[5];
  fVar19 = param_2[6];
  fVar31 = param_2[7];
  fVar47 = param_2[8];
  fVar38 = param_2[9];
  fVar53 = fVar48 * local_100 - fVar42 * fStack_e4;
  fVar50 = fVar18 * local_100 - fVar41 * fStack_e4;
  fVar52 = fVar25 * local_100 - fVar44 * fStack_e4;
  fVar51 = param_2[10];
  fVar49 = param_2[0xb];
  local_160[1] = (fVar52 - fStack_ec * fVar31) + fVar51;
  local_160[0] = (fVar50 - fStack_ec * fVar19) + fVar38;
  local_160[2] = (fVar53 - fStack_ec * fVar47) + fVar49;
  local_160[3] = fVar50 + fStack_ec * fVar19 + fVar38;
  local_160[4] = fVar52 + fStack_ec * fVar31 + fVar51;
  local_160[5] = fVar53 + fStack_ec * fVar47 + fVar49;
  local_148 = local_100 * fVar18 + fStack_e4 * fVar41 + local_f8 * fVar19 + fVar38;
  local_144 = local_100 * fVar25 + fStack_e4 * fVar44 + local_f8 * fVar31 + fVar51;
  local_140 = local_100 * fVar48 + fStack_e4 * fVar42 + local_f8 * fVar47 + fVar49;
  local_13c = local_100 * fVar18 + fStack_e4 * fVar41 + fStack_ec * fVar19 + fVar38;
  fStack_138 = local_100 * fVar25 + fStack_e4 * fVar44 + fStack_ec * fVar31 + fVar51;
  local_12c = local_d0 * fVar25 + local_f0 * fVar44 + local_f8 * fVar31 + fVar51;
  local_128 = local_d0 * fVar48 + local_f0 * fVar42 + local_f8 * fVar47 + fVar49;
  local_134 = local_100 * fVar48 + fStack_e4 * fVar42 + fStack_ec * fVar47 + fVar49;
  local_130 = local_d0 * fVar18 + local_f0 * fVar41 + local_f8 * fVar19 + fVar38;
  local_11c = local_d0 * fVar48 + local_f0 * fVar42 + fStack_ec * fVar47 + fVar49;
  local_124 = local_d0 * fVar18 + local_f0 * fVar41 + fStack_ec * fVar19 + fVar38;
  fStack_120 = local_d0 * fVar25 + local_f0 * fVar44 + fStack_ec * fVar31 + fVar51;
  local_110 = local_d0 * fVar48 + fStack_e4 * fVar42 + local_f8 * fVar47 + fVar49;
  local_114 = local_d0 * fVar25 + fStack_e4 * fVar44 + local_f8 * fVar31 + fVar51;
  local_118 = local_d0 * fVar18 + fStack_e4 * fVar41 + local_f8 * fVar19 + fVar38;
  uVar11 = 0;
  pfVar14 = local_160 + 2;
  local_10c = local_d0 * fVar18 + fStack_e4 * fVar41 + fStack_ec * fVar19 + fVar38;
  local_108 = local_d0 * fVar25 + fStack_e4 * fVar44 + fStack_ec * fVar31 + fVar51;
  local_104 = local_d0 * fVar48 + fStack_e4 * fVar42 + fStack_ec * fVar47 + fVar49;
  do {
    if ((((0.0 <= pfVar14[-2] * *param_1) && (0.0 <= *pfVar14 * param_1[2])) &&
        (lVar10 = *(long *)(param_1 + 4), pfVar14[-2] * *param_1 < *(float *)(lVar10 + 0x40) + 1.0))
       && (*pfVar14 * param_1[2] < *(float *)(lVar10 + 0x44) + 1.0)) {
      fVar18 = *(float *)(*(long *)(param_1 + 6) + 0x10);
      uVar4 = FUN_00250220(lVar10,&local_180,&local_a0);
      lVar6 = *(long *)(lVar10 + 0x50);
      fVar19 = local_180._0_4_;
      if (*(char *)(lVar6 + (ulong)uVar4 * 4 + 2) < '\0') {
        uVar13 = *(int *)(lVar10 + 0x3c) + uVar4;
        fVar31 = (float)(int)*(short *)(lVar6 + (ulong)uVar4 * 4);
        fVar25 = (float)(int)*(short *)(lVar6 + (ulong)(uVar13 + 1) * 4);
        if (local_180._0_4_ < local_a0) {
          fVar38 = (float)(int)*(short *)(lVar6 + (ulong)(uVar4 + 1) * 4);
          fVar31 = local_a0 * (fVar38 - fVar31) + fVar31;
          goto LAB_002a921c;
        }
        fVar41 = (float)(int)*(short *)(lVar6 + (ulong)uVar13 * 4);
        fVar31 = local_180._0_4_ * (fVar41 - fVar31) + fVar31;
        fVar41 = fVar25 - fVar41;
        fVar19 = local_a0;
      }
      else {
        uVar13 = *(int *)(lVar10 + 0x3c) + uVar4;
        fVar41 = (float)(int)*(short *)(lVar6 + (ulong)uVar13 * 4);
        fVar25 = (float)(int)*(short *)(lVar6 + (ulong)(uVar4 + 1) * 4);
        if (1.0 <= local_180._0_4_ + local_a0) {
          fVar38 = (float)(int)*(short *)(lVar6 + (ulong)(uVar13 + 1) * 4);
          fVar31 = (1.0 - local_a0) * (fVar41 - fVar38) + fVar38;
          fVar19 = 1.0 - local_180._0_4_;
LAB_002a921c:
          fVar41 = fVar25 - fVar38;
        }
        else {
          fVar38 = (float)(int)*(short *)(lVar6 + (ulong)uVar4 * 4);
          fVar31 = local_a0 * (fVar25 - fVar38) + fVar38;
          fVar41 = fVar41 - fVar38;
        }
      }
      fVar18 = pfVar14[-1] - fVar18 * (fVar19 * fVar41 + fVar31);
      fVar19 = *(float *)(lVar12 + 0x58);
      if (((((fVar19 <= fVar18) && (fVar18 <= 0.0)) && (fVar19 <= 0.0)) ||
          (((fVar18 < fVar19 && (DAT_01d4bc1c < fVar18)) && (0.0 < fVar19)))) &&
         (iVar5 = FUN_00250830(param_1), iVar5 != -1)) {
        return 1;
      }
    }
    uVar11 = uVar11 + 1;
    pfVar14 = pfVar14 + 3;
    if (7 < uVar11) {
      local_180 = param_1;
      FUN_002506f0(param_1,auStack_178);
      uVar46 = 0;
      uVar11 = 0;
      pbVar15 = &DAT_01d4d5a1;
      do {
        uVar7 = (ulong)pbVar15[-1];
        uVar8 = (ulong)*pbVar15;
        local_190 = local_160[uVar7 * 3];
        fStack_18c = local_160[uVar7 * 3 + 1];
        local_188 = local_160[uVar7 * 3 + 2];
        local_a0 = local_160[uVar8 * 3] - local_190;
        fStack_9c = local_160[uVar8 * 3 + 1] - fStack_18c;
        local_98 = local_160[uVar8 * 3 + 2] - local_188;
        auVar43._8_8_ = uVar46;
        auVar43._0_8_ = 0x3f800000;
        local_88[0] = '\0';
        FUN_002abf30(auVar43,local_180,&local_190,&local_a0,local_88,auStack_178,0,0);
        if (local_88[0] != '\0') {
          return 1;
        }
        uVar11 = uVar11 + 1;
        pbVar15 = pbVar15 + 2;
      } while (uVar11 < 0xc);
      FUN_0023be70(&local_180,param_2);
      pfVar14 = local_180;
      fStack_1b8 = auStack_178._0_4_;
      fStack_1b4 = auStack_178._4_4_;
      local_1c0 = SUB84(local_180,0);
      fStack_1bc = (float)((ulong)local_180 >> 0x20);
      auVar3 = *(undefined1 (*) [12])(param_2 + 9);
      uVar34 = SUB42(local_160[2],0);
      uVar36 = (undefined2)((uint)local_160[2] >> 0x10);
      fVar31 = *param_1;
      fVar25 = (float)NEON_fminnm(local_160[0],DAT_01d4c18c);
      fVar18 = (float)NEON_fminnm(local_160[2],DAT_01d4c18c);
      fVar19 = local_160[0];
      if (local_160[0] <= DAT_01d4c5a8) {
        fVar19 = DAT_01d4c5a8;
      }
      if (local_160[2] <= DAT_01d4c5a8) {
        uVar34 = SUB42(DAT_01d4c5a8,0);
        uVar36 = (undefined2)((uint)DAT_01d4c5a8 >> 0x10);
      }
      fVar38 = local_160[3];
      if (fVar25 <= local_160[3]) {
        fVar38 = fVar25;
      }
      fVar25 = local_160[5];
      if (fVar18 <= local_160[5]) {
        fVar25 = fVar18;
      }
      fVar18 = local_160[3];
      if (local_160[3] <= fVar19) {
        fVar18 = fVar19;
      }
      uVar35 = SUB42(local_160[5],0);
      uVar37 = (short)((uint)local_160[5] >> 0x10);
      if (local_160[5] == (float)CONCAT22(uVar36,uVar34) ||
          local_160[5] < (float)CONCAT22(uVar36,uVar34)) {
        uVar35 = uVar34;
        uVar37 = uVar36;
      }
      fVar19 = local_148;
      if (fVar38 <= local_148) {
        fVar19 = fVar38;
      }
      fVar38 = local_140;
      if (fVar25 <= local_140) {
        fVar38 = fVar25;
      }
      fVar25 = local_148;
      if (local_148 <= fVar18) {
        fVar25 = fVar18;
      }
      uVar34 = SUB42(local_140,0);
      uVar36 = (short)((uint)local_140 >> 0x10);
      if (local_140 == (float)CONCAT22(uVar37,uVar35) || local_140 < (float)CONCAT22(uVar37,uVar35))
      {
        uVar34 = uVar35;
        uVar36 = uVar37;
      }
      fVar18 = local_13c;
      if (fVar19 <= local_13c) {
        fVar18 = fVar19;
      }
      fVar19 = local_134;
      if (fVar38 <= local_134) {
        fVar19 = fVar38;
      }
      fVar38 = local_13c;
      if (local_13c <= fVar25) {
        fVar38 = fVar25;
      }
      uVar35 = SUB42(local_134,0);
      uVar37 = (short)((uint)local_134 >> 0x10);
      if (local_134 == (float)CONCAT22(uVar36,uVar34) || local_134 < (float)CONCAT22(uVar36,uVar34))
      {
        uVar35 = uVar34;
        uVar37 = uVar36;
      }
      fVar25 = local_130;
      if (fVar18 <= local_130) {
        fVar25 = fVar18;
      }
      fVar18 = local_128;
      if (fVar19 <= local_128) {
        fVar18 = fVar19;
      }
      fVar19 = local_130;
      if (local_130 <= fVar38) {
        fVar19 = fVar38;
      }
      uVar34 = SUB42(local_128,0);
      uVar36 = (short)((uint)local_128 >> 0x10);
      if (local_128 == (float)CONCAT22(uVar37,uVar35) || local_128 < (float)CONCAT22(uVar37,uVar35))
      {
        uVar34 = uVar35;
        uVar36 = uVar37;
      }
      fVar38 = local_124;
      if (fVar25 <= local_124) {
        fVar38 = fVar25;
      }
      fVar25 = local_11c;
      if (fVar18 <= local_11c) {
        fVar25 = fVar18;
      }
      fVar18 = local_124;
      if (local_124 <= fVar19) {
        fVar18 = fVar19;
      }
      uVar35 = SUB42(local_11c,0);
      uVar37 = (short)((uint)local_11c >> 0x10);
      if (local_11c == (float)CONCAT22(uVar36,uVar34) || local_11c < (float)CONCAT22(uVar36,uVar34))
      {
        uVar35 = uVar34;
        uVar37 = uVar36;
      }
      fVar19 = local_118;
      if (fVar38 <= local_118) {
        fVar19 = fVar38;
      }
      fVar38 = local_110;
      if (fVar25 <= local_110) {
        fVar38 = fVar25;
      }
      fVar25 = local_118;
      if (local_118 <= fVar18) {
        fVar25 = fVar18;
      }
      uVar34 = SUB42(local_110,0);
      uVar36 = (short)((uint)local_110 >> 0x10);
      if (local_110 == (float)CONCAT22(uVar37,uVar35) || local_110 < (float)CONCAT22(uVar37,uVar35))
      {
        uVar34 = uVar35;
        uVar36 = uVar37;
      }
      fVar18 = local_10c;
      if (fVar19 <= local_10c) {
        fVar18 = fVar19;
      }
      fVar19 = local_104;
      if (fVar38 <= local_104) {
        fVar19 = fVar38;
      }
      fVar38 = local_10c;
      if (local_10c <= fVar25) {
        fVar38 = fVar25;
      }
      fVar18 = fVar18 * fVar31;
      fVar41 = param_1[2];
      iVar5 = *(int *)(lVar12 + 0x38);
      fVar25 = local_104;
      if (local_104 == (float)CONCAT22(uVar36,uVar34) || local_104 < (float)CONCAT22(uVar36,uVar34))
      {
        fVar25 = (float)CONCAT22(uVar36,uVar34);
      }
      if (0.0 <= fVar18) {
        uVar4 = iVar5 - 2;
        if (fVar18 <= (float)uVar4) {
          fVar18 = floorf(fVar18);
          uVar4 = (uint)fVar18;
          iVar5 = *(int *)(lVar12 + 0x38);
        }
      }
      else {
        uVar4 = 0;
      }
      if (fVar38 * fVar31 < 0.0) {
        uVar13 = 0;
        iVar5 = *(int *)(lVar12 + 0x3c);
      }
      else {
        uVar13 = iVar5 - 1;
        if (fVar38 * fVar31 <= (float)uVar13) {
          fVar18 = ceilf(fVar38 * fVar31);
          uVar13 = (uint)fVar18;
        }
        iVar5 = *(int *)(lVar12 + 0x3c);
      }
      if (0.0 <= fVar19 * fVar41) {
        uVar16 = iVar5 - 2;
        if (fVar19 * fVar41 <= (float)uVar16) {
          fVar19 = floorf(fVar19 * fVar41);
          uVar16 = (uint)fVar19;
          iVar5 = *(int *)(lVar12 + 0x3c);
        }
      }
      else {
        uVar16 = 0;
      }
      if (fVar25 * fVar41 < 0.0) {
        uVar17 = 0;
        if (uVar13 < uVar4) {
          return 0;
        }
      }
      else {
        uVar17 = iVar5 - 1;
        if (fVar25 * fVar41 <= (float)uVar17) {
          fVar19 = ceilf(fVar25 * fVar41);
          uVar17 = (uint)fVar19;
        }
        if (uVar13 < uVar4) {
          return 0;
        }
      }
      fVar25 = DAT_01d4c18c;
      local_1a0 = auVar3._0_4_;
      fStack_19c = auVar3._4_4_;
      auVar32._8_4_ = fStack_1b8;
      auVar32._0_8_ = pfVar14;
      local_1a0 = -local_1a0;
      fStack_19c = -fStack_19c;
      auVar20._0_8_ = CONCAT44(fStack_19c,local_1a0);
      auVar20._8_4_ = -auVar3._8_4_;
      auVar20._12_4_ = 0x80000000;
      auVar39._8_8_ = auVar20._8_8_;
      auVar39._0_8_ = auVar20._0_8_;
      auVar32._12_4_ = 0;
      auVar40._0_12_ = auVar39._0_12_;
      auVar40._12_4_ = 0;
      auVar43 = NEON_ext(auVar40,auVar40,8,1);
      auVar45 = NEON_ext(auVar32,auVar32,8,1);
      fVar18 = fStack_1b4 * fStack_1b4 + -0.5;
      fVar19 = local_1c0 * fStack_19c - fStack_1bc * local_1a0;
      uVar46 = NEON_ext(CONCAT44(fStack_1bc * auVar20._8_4_ - fStack_1b8 * fStack_19c,fVar19),
                        CONCAT44(auVar45._4_4_ * fStack_19c - fStack_1bc * auVar43._4_4_,
                                 auVar45._0_4_ * local_1a0 - local_1c0 * auVar43._0_4_),4,1);
      auVar27._0_4_ = local_1a0 * fVar18 - (float)uVar46 * fStack_1b4;
      auVar27._4_4_ = fStack_19c * fVar18 - (float)((ulong)uVar46 >> 0x20) * fStack_1b4;
      auVar27._8_4_ = auVar20._8_4_ * fVar18 - fVar19 * fStack_1b4;
      auVar27._12_4_ = 0.0 - fStack_1b4 * 0.0;
      local_1a0 = local_1c0 * local_1a0;
      fStack_19c = fStack_1bc * fStack_19c;
      auVar43 = NEON_ext(auVar27,auVar27,8,1);
      auVar45._4_4_ = fStack_19c;
      auVar45._0_4_ = local_1a0;
      auVar45._8_4_ = fStack_1b8 * auVar20._8_4_;
      auVar45._12_4_ = 0;
      auVar29._4_4_ = fStack_19c;
      auVar29._0_4_ = local_1a0;
      auVar29._8_4_ = fStack_1b8 * auVar20._8_4_;
      auVar29._12_4_ = 0;
      auVar45 = NEON_ext(auVar45,auVar29,8,1);
      fVar18 = local_1a0 + fStack_19c + auVar45._0_4_ + auVar45._4_4_;
      fVar19 = -local_1c0;
      fVar38 = -fStack_1bc;
      fVar41 = -fStack_1b8;
      auVar28._0_4_ = local_1c0 * fVar18 + auVar27._0_4_;
      auVar28._4_4_ = fStack_1bc * fVar18 + auVar27._4_4_;
      auVar28._8_4_ = fStack_1b8 * fVar18 + auVar43._0_4_;
      auVar28._12_4_ = fVar18 * 0.0 + 0.0;
      auVar45 = NEON_ext(auVar28,auVar28,8,1);
      uVar46 = *(undefined8 *)(param_2 + 0xc);
      fVar18 = param_2[0xe];
      lVar10 = *(long *)(param_1 + 6);
      fVar31 = fStack_1b4 * fStack_1b4 + -0.5;
      auVar33._4_4_ = fVar38;
      auVar33._0_4_ = fVar19;
      auVar33._8_4_ = fVar41;
      auVar33._12_4_ = 0;
      auVar2._4_4_ = fVar38;
      auVar2._0_4_ = fVar19;
      auVar2._8_4_ = fVar41;
      auVar2._12_4_ = 0;
      auVar43 = NEON_ext(auVar33,auVar2,8,1);
      do {
        if (uVar16 <= uVar17) {
          uVar9 = uVar16;
          do {
            uVar1 = uVar9 + uVar4 * *(int *)(lVar12 + 0x3c);
            (**(code **)(**(long **)(param_1 + 4) + 0x70))(&local_a0);
            if (((uint)local_a0 & 1) == 0) {
              lVar6 = *(long *)(param_1 + 4);
LAB_002a974c:
              if (*(char *)(*(long *)(lVar6 + 0x50) + (ulong)uVar1 * 4 + 3) < '\0') {
LAB_002a97c8:
                fVar47 = *(float *)(lVar10 + 0x14) * (float)uVar4;
                fVar42 = *(float *)(lVar10 + 0x10) *
                         (float)(int)*(short *)(*(long *)(lVar12 + 0x50) + (ulong)uVar1 * 4);
                fVar48 = *(float *)(lVar10 + 0x18) * (float)uVar9;
                local_200 = auVar43._0_4_;
                fStack_1fc = auVar43._4_4_;
                fVar44 = fVar19 * fVar42 - fVar38 * fVar47;
                uVar26 = NEON_ext(CONCAT44(fVar38 * fVar48 - fVar41 * fVar42,fVar44),
                                  CONCAT44(fStack_1fc * fVar42 - fVar38 * 0.0,
                                           local_200 * fVar47 - fVar19 * fVar48),4,1);
                auVar21._0_4_ = fVar31 * fVar47 + fStack_1b4 * (float)uVar26;
                auVar21._4_4_ = fVar31 * fVar42 + fStack_1b4 * (float)((ulong)uVar26 >> 0x20);
                auVar21._8_4_ = fVar31 * fVar48 + fStack_1b4 * fVar44;
                auVar21._12_4_ = fStack_1b4 * 0.0 + 0.0;
                auVar29 = NEON_ext(auVar21,auVar21,8,1);
                auVar30._0_4_ = fVar19 * fVar47;
                auVar30._4_4_ = fVar38 * fVar42;
                auVar30._8_4_ = fVar41 * fVar48;
                auVar30._12_4_ = 0;
                auVar33 = NEON_ext(auVar30,auVar30,8,1);
                fVar42 = auVar30._0_4_ + auVar30._4_4_ + auVar33._0_4_ + auVar33._4_4_;
                auVar22._0_4_ = fVar19 * fVar42 + auVar21._0_4_;
                auVar22._4_4_ = fVar38 * fVar42 + auVar21._4_4_;
                auVar22._8_4_ = fVar41 * fVar42 + auVar29._0_4_;
                auVar22._12_4_ = fVar42 * 0.0 + 0.0;
                auVar29 = NEON_ext(auVar22,auVar22,8,1);
                auVar23._0_4_ = auVar28._0_4_ + auVar28._0_4_ + auVar22._0_4_ + auVar22._0_4_;
                auVar23._4_4_ = auVar28._4_4_ + auVar28._4_4_ + auVar22._4_4_ + auVar22._4_4_;
                auVar23._8_4_ = auVar45._0_4_ + auVar45._0_4_ + auVar29._0_4_ + auVar29._0_4_;
                auVar23._12_4_ = 0;
                auVar29 = NEON_ext(auVar23,auVar23,8,1);
                local_1a0 = (float)uVar46;
                fStack_19c = (float)((ulong)uVar46 >> 0x20);
                auVar24._0_4_ = -(uint)(ABS(auVar23._0_4_) < local_1a0);
                auVar24._4_4_ = -(uint)(ABS(auVar23._4_4_) < fStack_19c);
                auVar24._8_4_ = -(uint)(ABS(auVar29._0_4_) < fVar18);
                auVar24._12_4_ = -(uint)(0.0 < fVar25);
                NEON_ext(auVar24,auVar24,8,1);
                if (CONCAT13((char)auVar24._12_4_,
                             CONCAT12((char)auVar24._8_4_,
                                      CONCAT11((char)auVar24._4_4_,(char)auVar24._0_4_))) == -1) {
                  return 1;
                }
              }
            }
            else {
              lVar6 = *(long *)(param_1 + 4);
              if ((((uVar4 != 0) && (uVar9 != 0)) && (uVar4 < *(int *)(lVar6 + 0x38) - 1U)) &&
                 (uVar9 < *(int *)(lVar6 + 0x3c) - 1U)) goto LAB_002a974c;
              if (((~*(byte *)(*(long *)(lVar6 + 0x50) + (ulong)uVar1 * 4 + 2) & 0x7f) != 0) ||
                 (uVar11 = FUN_002500a0(lVar6,uVar1,uVar4,uVar9,0x7f,&local_190), (uVar11 & 1) != 0)
                 ) goto LAB_002a97c8;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 <= uVar17);
        }
        uVar4 = uVar4 + 1;
        if (uVar13 < uVar4) {
          return 0;
        }
      } while( true );
    }
  } while( true );
}


