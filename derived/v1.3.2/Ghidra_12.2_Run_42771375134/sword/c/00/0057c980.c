/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057c980; name: FUN_0057c980
 */


/* WARNING: Removing unreachable block (ram,0x0057d914) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0057c980(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
            undefined4 param_6,float param_7,undefined1 param_8 [16],long param_9,
            undefined4 *param_10,long *param_11,long *param_12,uint param_13,undefined8 param_14,
            float *param_15,float *param_16,float param_17,float param_18,float param_19,
            float param_20,float param_21,float param_22,undefined4 *param_23)

{
  float fVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 uVar20;
  uint uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  char *pcVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  ulong uVar34;
  undefined4 *in_stack_00000050;
  undefined4 in_stack_00000058;
  byte in_stack_00000060;
  byte in_stack_00000068;
  float in_stack_00000070;
  float in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  byte in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined4 local_19c;
  float local_198;
  undefined8 local_194;
  undefined8 local_18c;
  float local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  float local_170;
  undefined8 local_16c;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  
  bVar11 = false;
  if ((in_stack_00000078 == 0.0) && (bVar11 = false, !NAN(in_stack_00000070))) {
    bVar11 = in_stack_00000070 == 0.0;
  }
  plVar22 = (long *)(param_9 + 0x29ab8);
  if (bVar11) {
    plVar22 = (long *)(param_9 + 0x29a88);
  }
  bVar11 = param_7 != 0.0;
  lVar31 = *plVar22;
  bVar12 = param_7 != 1.0;
  uVar34 = param_8._0_8_;
  fVar32 = param_17;
  if ((param_13 < 0x10) && ((1 << (ulong)(param_13 & 0x1f) & 0xbaa8U) != 0)) {
    uVar34 = (ulong)(uint)(param_8._0_4_ / param_17);
    fVar32 = 1.0;
  }
  if (7 < param_13 - 2) {
    param_5 = param_5 / fVar32;
  }
  fVar33 = 0.003921569;
  if (param_18 != DAT_01d4c5a8) {
    fVar33 = param_18;
  }
  bVar15 = true;
  fStack_10c = param_17;
  (**(code **)(**(long **)(param_9 + 0x20) + 0xf0))(*(long **)(param_9 + 0x20),1);
  if ((float)param_10[8] == 0.0) {
    if (((float)param_10[9] == 0.0) && ((float)param_10[10] == 0.0)) {
      bVar15 = (float)param_10[0xb] != 0.0;
    }
    else {
      bVar15 = true;
    }
  }
  bVar9 = false;
  if ((0.0 < param_19) && (bVar15)) {
    bVar9 = 0.0 < param_22 || 0.0 < param_20;
    bVar15 = bVar9;
  }
  bVar13 = fVar33 != 0.0;
  plVar22 = *(long **)(param_9 + 0x29a70);
  bVar14 = fVar33 != DAT_01d4c18c;
  fVar1 = 0.0;
  if (bVar14) {
    fVar1 = fVar33;
  }
  if ((param_15 == (float *)0x0) ||
     (((((fStack_10c = *param_15, fStack_10c == 1.0 && (fStack_10c = param_15[1], fStack_10c == 0.0)
         ) && (fStack_10c = param_15[2], fStack_10c == 0.0)) &&
       ((fStack_10c = param_15[3], fStack_10c == 0.0 &&
        (fStack_10c = param_15[4], fStack_10c == 0.0)))) &&
      ((((fStack_10c = param_15[5], fStack_10c == 1.0 &&
         ((fStack_10c = param_15[6], fStack_10c == 0.0 &&
          (fStack_10c = param_15[7], fStack_10c == 0.0)))) &&
        (fStack_10c = param_15[8], fStack_10c == 0.0)) &&
       ((((fStack_10c = param_15[9], fStack_10c == 0.0 &&
          (fStack_10c = param_15[10], fStack_10c == 1.0)) &&
         (fStack_10c = param_15[0xb], fStack_10c == 0.0)) &&
        (((fStack_10c = param_15[0xc], fStack_10c == 0.0 &&
          (fStack_10c = param_15[0xd], fStack_10c == 0.0)) &&
         ((fStack_10c = param_15[0xe], fStack_10c == 0.0 &&
          (fStack_10c = param_15[0xf], fStack_10c == 1.0)))))))))))) {
    bVar10 = false;
    if (param_16 == (float *)0x0) goto LAB_0057cc18;
LAB_0057cc6c:
    fStack_10c = *param_16;
    if ((((fStack_10c == 1.0) && (fStack_10c = param_16[1], fStack_10c == 0.0)) &&
        ((fStack_10c = param_16[2], fStack_10c == 0.0 &&
         (((fStack_10c = param_16[3], fStack_10c == 0.0 &&
           (fStack_10c = param_16[4], fStack_10c == 0.0)) &&
          (fStack_10c = param_16[5], fStack_10c == 1.0)))))) &&
       (((((fStack_10c = param_16[6], fStack_10c == 0.0 &&
           (fStack_10c = param_16[7], fStack_10c == 0.0)) &&
          (fStack_10c = param_16[8], fStack_10c == 0.0)) &&
         ((fStack_10c = param_16[9], fStack_10c == 0.0 &&
          (fStack_10c = param_16[10], fStack_10c == 1.0)))) &&
        ((fStack_10c = param_16[0xb], fStack_10c == 0.0 &&
         ((((fStack_10c = param_16[0xc], fStack_10c == 0.0 &&
            (fStack_10c = param_16[0xd], fStack_10c == 0.0)) &&
           (fStack_10c = param_16[0xe], fStack_10c == 0.0)) &&
          (fStack_10c = param_16[0xf], fStack_10c == 1.0)))))))) {
      uVar21 = 2;
      if (!bVar13 || !bVar14) {
        uVar21 = 0;
      }
      goto LAB_0057cc30;
    }
    uVar21 = 2;
    if (!bVar13 || !bVar14) {
      uVar21 = 0;
    }
    uVar23 = 4;
    if (!bVar15) {
      uVar23 = 0;
    }
    uVar28 = 0;
    uVar25 = 0;
    uVar24 = 8;
    if (!bVar9) {
      uVar24 = 0;
    }
    uVar29 = 1;
  }
  else {
    bVar10 = true;
    if (param_16 != (float *)0x0) goto LAB_0057cc6c;
LAB_0057cc18:
    uVar21 = 2;
    if (!bVar13 || !bVar14) {
      uVar21 = 0;
    }
LAB_0057cc30:
    uVar23 = 4;
    if (!bVar15) {
      uVar23 = 0;
    }
    uVar24 = 8;
    if (!bVar9) {
      uVar24 = 0;
    }
    uVar29 = 0;
    if (param_5 == 1.0) {
      uVar28 = 0;
      uVar25 = 0;
    }
    else {
      uVar25 = 0x10;
      uVar28 = 1;
    }
  }
  bVar13 = bVar13 && bVar14;
  uVar16 = 0x3f800000;
  uVar26 = 0x20;
  if (!bVar10) {
    uVar26 = 0;
  }
  uVar27 = 0x40;
  if (!bVar11 || !bVar12) {
    uVar27 = 0;
  }
  uVar25 = uVar21 | uVar27 | uVar24 | uVar23 | uVar26 | uVar29 | uVar25;
  if (*(int *)(param_9 + (ulong)uVar25 * 0x40 + (long)(int)param_13 * 4 + 0x20760) != 0)
  goto LAB_0057ce44;
  if ((param_13 < 0x10) && ((1 << (ulong)(param_13 & 0x1f) & 0xbaa8U) != 0)) {
    iVar19 = 0;
LAB_0057cde8:
    if (bVar9) {
      if (((fVar33 != DAT_01d4c18c) && (fVar33 != 0.0)) && (uVar28 == 1)) goto LAB_0057d150;
      uVar28 = uVar28 | uVar29 ^ 1;
      uVar21 = 0x10;
      if (uVar28 == 0) {
        uVar21 = 0;
      }
      iVar19 = *(int *)(param_9 + (ulong)(uVar25 | uVar21 | 2) * 0x40 + (long)(int)param_13 * 4 +
                       0x20760);
      bVar13 = true;
    }
  }
  else {
    if (uVar28 != 0) {
      iVar19 = 0;
      uVar28 = 1;
      goto LAB_0057cde8;
    }
    uVar21 = 0;
    if (uVar29 == 0) {
      uVar21 = 0x10;
    }
    uVar28 = uVar29 ^ 1;
    iVar19 = *(int *)(param_9 + (ulong)(uVar25 | uVar21) * 0x40 + (long)(int)param_13 * 4 + 0x20760)
    ;
    if (iVar19 == 0) goto LAB_0057cde8;
  }
  if (iVar19 != 0) {
LAB_0057ce44:
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    fStack_114 = fVar32;
    local_118 = (float)FUN_0057bb40(uVar34,param_9,param_13,param_14);
    fStack_110 = (float)uVar16;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x134),&local_118);
    local_cc = in_stack_00000058;
    local_d0 = 0x3f800000;
    local_c8 = *in_stack_00000050;
    local_c4 = in_stack_00000050[1];
    local_c0 = in_stack_00000050[2];
    local_bc = in_stack_00000050[3];
    local_b8 = *param_23;
    local_b4 = param_23[1];
    local_b0 = param_23[2];
    local_ac = param_23[3];
    local_d8 = param_5;
    uStack_d4 = param_6;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&local_d8,3);
    if (bVar11 && bVar12) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
                (1.0 / param_7,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 300));
    }
    if (bVar10) {
      if (param_15 == (float *)0x0) {
        param_15 = &local_118;
        fStack_10c = 0.0;
        uStack_108 = 0;
        fStack_114 = 0.0;
        fStack_110 = 0.0;
        local_f8 = 0;
        local_100 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        local_dc = 0x3f800000;
        local_f0 = 0x3f800000;
        local_104 = 0x3f800000;
        local_118 = 1.0;
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x138),param_15);
    }
    if (uVar29 != 0) {
      if (param_16 == (float *)0x0) {
        fStack_10c = 0.0;
        uStack_108 = 0;
        fStack_114 = 0.0;
        fStack_110 = 0.0;
        local_f8 = 0;
        local_100 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        local_dc = 0x3f800000;
        local_f0 = 0x3f800000;
        local_104 = 0x3f800000;
        local_118 = 1.0;
      }
      else {
        local_100 = *(undefined8 *)(param_16 + 6);
        uStack_108 = (undefined4)*(undefined8 *)(param_16 + 4);
        local_104 = (undefined4)((ulong)*(undefined8 *)(param_16 + 4) >> 0x20);
        local_118 = (float)*(undefined8 *)param_16;
        fStack_114 = (float)((ulong)*(undefined8 *)param_16 >> 0x20);
        fStack_110 = (float)*(undefined8 *)(param_16 + 2);
        fStack_10c = (float)((ulong)*(undefined8 *)(param_16 + 2) >> 0x20);
        local_f8 = *(undefined8 *)(param_16 + 8);
        uStack_e0 = (undefined4)*(undefined8 *)(param_16 + 0xe);
        local_dc = (undefined4)((ulong)*(undefined8 *)(param_16 + 0xe) >> 0x20);
        uStack_e8 = (undefined4)*(undefined8 *)(param_16 + 0xc);
        uStack_e4 = (undefined4)((ulong)*(undefined8 *)(param_16 + 0xc) >> 0x20);
        local_f0 = (undefined4)*(undefined8 *)(param_16 + 10);
        uStack_ec = (undefined4)((ulong)*(undefined8 *)(param_16 + 10) >> 0x20);
      }
      local_1cc = 0;
      local_1d4 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1a4 = 0;
      local_18c = 0;
      local_194 = 0;
      local_1ac = 0;
      local_19c = 0x3f800000;
      local_180 = 0;
      uStack_178 = 0;
      local_164 = 0;
      local_16c = 0;
      local_15c = 0x3f800000;
      local_1d8 = param_6;
      local_1c4 = param_6;
      local_1b0 = param_6;
      local_198 = param_5;
      local_184 = param_5;
      local_170 = param_5;
      FUN_00515cb0(&local_218,&local_1d8,&local_118);
      local_140 = local_200;
      local_148 = local_208;
      local_150 = local_210;
      local_158 = local_218;
      local_120 = local_1e0;
      local_128 = local_1e8;
      local_130 = local_1f0;
      local_138 = local_1f8;
      FUN_00515cb0(&local_218,&local_198,&local_118);
      local_100 = local_200;
      uStack_108 = (undefined4)local_208;
      local_104 = (undefined4)((ulong)local_208 >> 0x20);
      fStack_110 = (float)local_210;
      fStack_10c = (float)((ulong)local_210 >> 0x20);
      local_118 = (float)local_218;
      fStack_114 = (float)((ulong)local_218 >> 0x20);
      uStack_e0 = (undefined4)local_1e0;
      local_dc = (undefined4)((ulong)local_1e0 >> 0x20);
      uStack_e8 = (undefined4)local_1e8;
      uStack_e4 = (undefined4)((ulong)local_1e8 >> 0x20);
      local_f0 = (undefined4)local_1f0;
      uStack_ec = (undefined4)((ulong)local_1f0 >> 0x20);
      local_f8 = local_1f8;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x13c),&local_118);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x140),&local_158);
    }
    if (param_11 == (long *)0x0) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = (**(code **)(*param_11 + 0x80))(param_11);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_11);
      (**(code **)(*param_11 + 0x88))(param_11,in_stack_00000060 & 1);
      (**(code **)(*param_11 + 0x90))(param_11,1);
    }
    if (param_12 == (long *)0x0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = (**(code **)(*param_12 + 0x80))(param_12);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x3c),param_12);
      (**(code **)(*param_12 + 0x88))(param_12,in_stack_00000068 & 1);
      (**(code **)(*param_12 + 0x90))(param_12,1);
    }
    if (bVar13) {
      fStack_110 = -fVar1;
      fStack_10c = 0.0;
      fStack_114 = fVar1;
      if (fVar1 < 0.0) {
        fStack_110 = fVar1 * -0.5;
        fStack_114 = 0.0;
      }
      if (plVar22 == *(long **)(param_9 + 0x29a78)) {
        fStack_114 = 0.0;
        fStack_110 = 0.0;
      }
      local_118 = fVar1;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x130),&local_118);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x4c),plVar22);
      if (plVar22 == *(long **)(param_9 + 0x29a78)) {
        uVar20 = 1;
      }
      else {
        uVar20 = 0xd;
      }
      (**(code **)(*plVar22 + 0x78))(plVar22,uVar20);
    }
    if (bVar9) {
      if (0.0 <= param_22) {
        local_118 = -0.5 / param_22;
        if (param_22 <= param_21) {
          param_22 = 1.0;
        }
        else {
          param_22 = param_21 / param_22;
        }
        fStack_114 = 0.5 - local_118 * param_21;
        fStack_10c = param_22 * param_22;
      }
      else {
        fStack_114 = 1.0;
        local_118 = 0.0;
        fStack_10c = 1.0;
      }
      fStack_110 = param_19;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x114),&local_118);
      (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
                (param_20 * 0.5,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x118));
    }
    else {
      fStack_114 = param_21 * param_21 + 1.0;
      local_118 = -1.0;
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x114),&local_118);
    }
    if (((DAT_027606f0 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_027606f0), iVar19 != 0)) {
      DAT_027605ec = 1;
      __cxa_guard_release(&DAT_027606f0);
    }
    if (((DAT_027606f8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_027606f8), iVar19 != 0)) {
      DAT_027605f0 = 0x3391;
      __cxa_guard_release(&DAT_027606f8);
    }
    if (((DAT_02760700 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_02760700), iVar19 != 0)) {
      DAT_027605f4 = 0x61e9b;
      __cxa_guard_release(&DAT_02760700);
    }
    if (((DAT_02760708 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_02760708), iVar19 != 0)) {
      DAT_027605f8 = 0xbf1;
      __cxa_guard_release(&DAT_02760708);
    }
    if ((in_stack_000000a0 & 1) != 0) {
      DAT_027605ec = DAT_027605ec * 0x5d588b65 + 0x1000001;
      DAT_027605f0 = DAT_027605f0 * 0x5d588b65 + 0x1000001;
      DAT_027605f4 = DAT_027605f4 * 0x5d588b65 + 0x1000001;
      DAT_027605f8 = DAT_027605f8 * 0x5d588b65 + 0x1000001;
    }
    NEON_ucvtf(*(undefined4 *)(lVar31 + 0x4c));
    NEON_ucvtf(*(undefined4 *)(lVar31 + 0x50));
    _DAT_02760c18 = 0xbf80000040000000;
    DAT_02760c3c = 0xbf800000;
    DAT_02760c44._0_4_ = 0x3f800000;
    DAT_02760c28._0_4_ = in_stack_00000088;
    DAT_02760c44._4_4_ = in_stack_00000080;
    ram0x02760c2c = 0;
    ram0x02760c34 = 0x4000000000000000;
    DAT_02760c4c = 0;
    DAT_02760c54._0_4_ = 0;
    DAT_02760c24 = 0;
    DAT_02760c20 = in_stack_00000078 * DAT_01d4bec4;
    DAT_02760c40 = in_stack_00000070 * 0.5;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,4);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),lVar31);
    if (bVar13) {
      NEON_ucvtf((int)plVar22[10]);
      NEON_ucvtf(*(undefined4 *)((long)plVar22 + 0x4c));
      if (plVar22 == *(long **)(param_9 + 0x29a78)) {
        fVar32 = 1.0;
        if (DAT_01d4c1bc <= param_3) {
          fVar32 = DAT_01d4c1bc / param_3;
        }
        fVar33 = 1.0;
        if (DAT_01d4c010 <= param_4) {
          fVar33 = DAT_01d4c010 / param_4;
        }
        if (fVar32 <= fVar33) {
          fVar32 = fVar33;
        }
        (**(code **)(*plVar22 + 0x78))(plVar22,fVar32 == 1.0);
      }
      else {
        (**(code **)(*plVar22 + 0x78))(plVar22,0xd);
      }
      uVar18 = FUN_005729b0(param_1,param_2,param_3,param_4,*param_10,param_10[1],param_10[2],
                            param_10[3],param_9,in_stack_000000a8);
    }
    else {
      uVar18 = FUN_005729b0(param_1,param_2,param_3,param_4,*param_10,param_10[1],param_10[2],
                            param_10[3],param_9,in_stack_000000a8);
    }
    if (param_11 != (long *)0x0) {
      (**(code **)(*param_11 + 0x78))(param_11,uVar16);
    }
    if (param_12 != (long *)0x0) {
      (**(code **)(*param_11 + 0x78))(param_11,uVar17);
    }
    return uVar18;
  }
LAB_0057d150:
  pcVar30 = "false";
  if (param_13 - 3 < 0xd) {
    pcVar30 = (&PTR_DAT_025fb030)[(int)(param_13 - 3)];
  }
  if (*(int *)PTR_DAT_02713970 == 0) {
    return 0xfffffffc;
  }
  if (*(int *)PTR_DAT_02713980 == 0) {
    return 0xfffffffc;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x4875);
  pcVar2 = "true";
  if (!bVar13) {
    pcVar2 = "false";
  }
  pcVar3 = "true";
  if (!bVar15) {
    pcVar3 = "false";
  }
  pcVar4 = "true";
  if (!bVar9) {
    pcVar4 = "false";
  }
  pcVar5 = "true";
  if (uVar28 == 0) {
    pcVar5 = "false";
  }
  pcVar6 = "true";
  if (uVar29 == 0) {
    pcVar6 = "false";
  }
  pcVar7 = "true";
  if (!bVar10) {
    pcVar7 = "false";
  }
  pcVar8 = "true";
  if (!bVar11 || !bVar12) {
    pcVar8 = "false";
  }
  FUN_00517ae0("CTextureUtil::DrawRectGPU_TonemapHDR(): 0x%04x, HDRTMAP_IsPremap(eTonemap: %d): %s,\n\tbFullColorDither: %s, bVignette: %s, bVignetteSim: %s, bExposure: %s,\n\tbPreColorMatrix: %s, bColorMatrix: %s, bGammaCorrect: %s\n"
               ,(ulong)uVar25,param_13,pcVar30,pcVar2,pcVar3,pcVar4,pcVar5,pcVar6,pcVar7,pcVar8);
  return 0xfffffffc;
}


