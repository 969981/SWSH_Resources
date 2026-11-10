/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00594320; name: FUN_00594320
 */


undefined8
FUN_00594320(float param_1,long param_2,long param_3,long param_4,long param_5,float *param_6,
            uint param_7,float *param_8,uint param_9,byte param_10,byte param_11,uint param_12,
            uint param_13)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_178;
  uint local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  fVar17 = *param_6;
  fVar21 = param_6[1];
  fVar20 = fVar17;
  if (fVar17 <= 0.0) {
    fVar20 = -fVar17;
  }
  if (fVar21 <= 0.0) {
    fVar21 = -fVar21;
  }
  fVar22 = param_6[2];
  fVar23 = param_6[3];
  if (fVar22 <= 0.0) {
    fVar22 = -fVar22;
  }
  if (fVar23 <= 0.0) {
    fVar23 = -fVar23;
  }
  bVar3 = false;
  if ((fVar20 == fVar21) && (bVar3 = false, !NAN(fVar21) && !NAN(fVar22))) {
    bVar3 = fVar21 == fVar22;
  }
  bVar4 = false;
  if ((bVar3) && (bVar4 = false, !NAN(fVar22) && !NAN(fVar23))) {
    bVar4 = fVar22 == fVar23;
  }
  if (bVar4) {
    bVar3 = true;
    local_178 = fVar20;
  }
  else {
    fVar24 = fVar21;
    if (fVar21 <= fVar20) {
      fVar24 = fVar20;
    }
    fVar25 = fVar22;
    if (fVar22 <= fVar24) {
      fVar25 = fVar24;
    }
    local_178 = fVar23;
    if (fVar23 <= fVar25) {
      local_178 = fVar25;
    }
    bVar3 = false;
    param_11 = 0.0 <= fVar17 | param_11;
  }
  if ((((*param_8 == 1.0) && (param_8[1] == 1.0)) && (param_8[2] == 1.0)) && (param_8[3] == 1.0)) {
    bVar4 = (bool)(bVar3 ^ 1);
  }
  else {
    bVar4 = true;
  }
  if ((param_10 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  if (((param_11 & 1) == 0) &&
     ((((param_7 < 0xf && ((1 << (ulong)(param_7 & 0x1f) & 0x4924U) != 0)) ||
       ((param_7 < 0x15 && ((0x109209U >> (ulong)(param_7 & 0x1f) & 1) != 0)))) ||
      ((param_7 < 0x15 && ((1 << (ulong)(param_7 & 0x1f) & 0x106000U) != 0)))))) {
    lVar10 = param_3;
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x120);
    } while (lVar10 != 0);
    if ((*(byte *)(*(long *)(lVar11 + 0xa8) + 0x5e) >> 1 & 1) == 0) goto LAB_005944d4;
    lVar10 = param_4;
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x120);
    } while (lVar10 != 0);
    if ((*(byte *)(*(long *)(lVar11 + 0xa8) + 0x5e) >> 1 & 1) == 0) goto LAB_005944d4;
    iVar13 = 0;
    uVar15 = 2;
  }
  else {
LAB_005944d4:
    uVar15 = 3;
    iVar13 = 1;
  }
  local_16c = param_13;
  lVar10 = param_3;
  do {
    lVar11 = lVar10;
    lVar10 = *(long *)(lVar11 + 0x120);
  } while (lVar10 != 0);
  plVar6 = *(long **)(lVar11 + 0xa8);
  (**(code **)(*plVar6 + 0x88))(plVar6,iVar13);
  lVar10 = param_4;
  do {
    lVar11 = lVar10;
    lVar10 = *(long *)(lVar11 + 0x120);
  } while (lVar10 != 0);
  plVar6 = *(long **)(lVar11 + 0xa8);
  (**(code **)(*plVar6 + 0x88))(plVar6,iVar13);
  if (param_12 == 0) {
    uVar14 = *(uint *)(param_3 + 0x54);
  }
  else {
    uVar14 = param_12;
  }
  uVar9 = param_13;
  if (param_13 == 0) {
    uVar9 = *(uint *)(param_3 + 0x58);
  }
  fVar17 = *(float *)(param_3 + 0x88);
  fVar26 = *(float *)(param_3 + 0x8c);
  fVar24 = *(float *)(param_3 + 0x90);
  fVar25 = *(float *)(param_3 + 0x94);
  if (param_12 == 0) {
    uVar2 = *(uint *)(param_4 + 0x54);
  }
  else {
    uVar2 = param_12;
  }
  uVar12 = param_13;
  if (param_13 == 0) {
    uVar12 = *(uint *)(param_4 + 0x58);
  }
  uVar16 = *(undefined4 *)(*(long *)(param_3 + 0x80) + 8);
  if (iVar13 == 0) {
    if (bVar3) {
      FUN_00513bc0(local_178,0x3f800000,uVar16,&local_b4,&local_e4,param_9 & 1);
    }
    else {
      uVar1 = param_9 & 1;
      FUN_00513bc0(fVar20,0x3f800000,uVar16,&local_118,&local_e4,uVar1);
      FUN_00513bc0(fVar21,0x3f800000,uVar16,&fStack_110,&local_d8,uVar1);
      FUN_00513bc0(fVar22,0x3f800000,uVar16,&local_108,&local_cc,uVar1);
      FUN_00513bc0(fVar23,0x3f800000,uVar16,&fStack_100,&local_c0,uVar1);
      local_b4 = (local_118 + 0.0 + fStack_110 + local_108 + fStack_100) * 0.25;
      local_b0 = (local_114 + 0.0 + local_10c + local_104 + local_fc) * 0.25;
      if (uVar15 != 2) {
        local_ac = (fStack_110 + 0.0 + local_108 + fStack_100 + local_f8) * 0.25;
      }
    }
  }
  else {
    if (bVar3) {
      pfVar8 = &local_e4;
      fVar18 = local_178;
    }
    else {
      uVar1 = param_9 & 1;
      FUN_00514ba0(fVar20,0x3f800000,uVar16,&local_b4,&local_e4,uVar1);
      FUN_00514ba0(fVar21,0x3f800000,uVar16,&local_b4,&local_d8,uVar1);
      FUN_00514ba0(fVar22,0x3f800000,uVar16,&local_b4,&local_cc,uVar1);
      pfVar8 = &local_c0;
      fVar18 = fVar23;
    }
    FUN_00514ba0(fVar18,0x3f800000,uVar16,&local_b4,pfVar8,param_9 & 1);
  }
  fVar18 = SQRT(param_1);
  if (NAN(fVar18)) {
    fVar18 = sqrtf(param_1);
  }
  local_148 = fVar18 * local_e4;
  local_13c = local_148;
  local_144 = local_148;
  local_140 = local_148;
  if (bVar4) {
    if (!bVar3) {
      local_144 = fVar18 * local_d8;
      local_140 = fVar18 * local_cc;
      local_13c = fVar18 * local_c0;
    }
    fVar19 = fVar18 * local_e0;
    if (bVar3) {
      local_134 = fVar19;
      local_130 = fVar19;
      local_12c = fVar19;
    }
    else {
      local_134 = fVar18 * local_d4;
      local_130 = fVar18 * local_c8;
      local_12c = fVar18 * local_bc;
    }
    bVar5 = ((fVar19 == 0.0 && local_134 == 0.0) && local_130 == 0.0) && local_12c == 0.0;
    if (uVar15 != 2) {
      fVar19 = fVar18 * local_dc;
      if (bVar3) {
        local_124 = fVar19;
        local_120 = fVar19;
        local_11c = fVar19;
      }
      else {
        local_124 = fVar18 * local_d0;
        local_120 = fVar18 * local_c4;
        local_11c = fVar18 * local_b8;
      }
      bVar5 = bVar5 && (((fVar19 == 0.0 && local_124 == 0.0) && local_120 == 0.0) &&
                       local_11c == 0.0);
      goto LAB_005949d8;
    }
  }
  else {
    local_134 = fVar18 * local_e0;
    bVar5 = local_134 == 0.0;
    local_130 = local_134;
    local_12c = local_134;
    if (uVar15 != 2) {
      local_124 = fVar18 * local_dc;
      bVar5 = local_134 == 0.0 && local_124 == 0.0;
      local_120 = local_124;
      local_11c = local_124;
LAB_005949d8:
      local_f8 = local_ac;
      local_128 = fVar18 * local_dc;
      local_f4 = 0.0;
      uStack_f0 = 0;
      local_ec = 0;
    }
  }
  local_fc = 0.0;
  fStack_100 = 0.0;
  local_104 = 0.0;
  local_108 = local_b0;
  local_10c = 0.0;
  fStack_110 = 0.0;
  local_114 = 0.0;
  local_118 = local_b4;
  local_138 = fVar18 * local_e0;
  if (bVar5) {
    uVar15 = 1;
  }
  uVar7 = FUN_0059d300(param_4,0,0,1,0,0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  FUN_0059d000(0,0);
  lVar10 = param_3;
  do {
    lVar11 = lVar10;
    lVar10 = *(long *)(lVar11 + 0x120);
  } while (lVar10 != 0);
  uVar7 = FUN_00575a10(0,0,(float)uVar2,(float)uVar12,0,0,fVar17 * (float)uVar14 + fVar24,
                       fVar26 * (float)uVar9 + fVar25,param_2,uVar15,&local_118,&local_148,
                       *(undefined8 *)(lVar11 + 0xa8),param_7,0);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  if (param_12 == 0) {
    uVar14 = *(uint *)(param_4 + 0x54);
    if (param_13 == 0) goto LAB_00594b14;
LAB_00594ab8:
    fVar17 = *(float *)(param_4 + 0x88);
    fVar24 = *(float *)(param_4 + 0x8c);
    fVar26 = *(float *)(param_4 + 0x90);
    fVar25 = *(float *)(param_4 + 0x94);
    uVar9 = param_13;
    if (param_12 != 0) goto LAB_00594ac8;
LAB_00594b28:
    param_12 = *(uint *)(param_5 + 0x54);
    if (param_13 == 0) goto LAB_00594b38;
LAB_00594ad4:
    uVar16 = *(undefined4 *)(*(long *)(param_4 + 0x80) + 0xc);
    if (iVar13 != 0) goto LAB_00594ae0;
LAB_00594b4c:
    if (bVar3) {
      FUN_00513bc0(local_178,0x3f800000,uVar16,&local_b4,&local_e4,param_9 & 1);
    }
    else {
      param_9 = param_9 & 1;
      FUN_00513bc0(fVar20,0x3f800000,uVar16,&local_168,&local_e4,param_9);
      FUN_00513bc0(fVar21,0x3f800000,uVar16,&local_160,&local_d8,param_9);
      FUN_00513bc0(fVar22,0x3f800000,uVar16,&local_158,&local_cc,param_9);
      FUN_00513bc0(fVar23,0x3f800000,uVar16,&local_150,&local_c0,param_9);
      local_b4 = (local_168 + 0.0 + local_160 + local_158 + local_150) * 0.25;
      if ((1 < uVar15) &&
         (local_b0 = (local_164 + 0.0 + local_15c + local_154 + local_14c) * 0.25, uVar15 == 3)) {
        local_ac = (local_160 + 0.0 + local_158 + local_150 + local_148) * 0.25;
      }
    }
  }
  else {
    uVar14 = param_12;
    if (param_13 != 0) goto LAB_00594ab8;
LAB_00594b14:
    uVar9 = *(uint *)(param_4 + 0x58);
    fVar17 = *(float *)(param_4 + 0x88);
    fVar24 = *(float *)(param_4 + 0x8c);
    fVar26 = *(float *)(param_4 + 0x90);
    fVar25 = *(float *)(param_4 + 0x94);
    if (param_12 == 0) goto LAB_00594b28;
LAB_00594ac8:
    if (param_13 != 0) goto LAB_00594ad4;
LAB_00594b38:
    local_16c = *(uint *)(param_5 + 0x58);
    uVar16 = *(undefined4 *)(*(long *)(param_4 + 0x80) + 0xc);
    if (iVar13 == 0) goto LAB_00594b4c;
LAB_00594ae0:
    if (bVar3) {
      pfVar8 = &local_e4;
      fVar23 = local_178;
    }
    else {
      uVar2 = param_9 & 1;
      FUN_00514ba0(fVar20,0x3f800000,uVar16,&local_b4,&local_e4,uVar2);
      FUN_00514ba0(fVar21,0x3f800000,uVar16,&local_b4,&local_d8,uVar2);
      FUN_00514ba0(fVar22,0x3f800000,uVar16,&local_b4,&local_cc,uVar2);
      pfVar8 = &local_c0;
    }
    FUN_00514ba0(fVar23,0x3f800000,uVar16,&local_b4,pfVar8,param_9 & 1);
  }
  fVar23 = *param_8;
  fVar22 = param_8[1];
  fVar21 = param_8[2];
  fVar20 = param_8[3];
  local_13c = fVar18 * local_e4;
  if (bVar4) {
    if (bVar3) {
      local_148 = local_13c * fVar23;
      local_144 = local_13c * fVar22;
      local_140 = local_13c * fVar21;
      local_13c = local_13c * fVar20;
    }
    else {
      local_148 = fVar18 * fVar23 * local_e4;
      local_144 = fVar18 * fVar22 * local_d8;
      local_140 = fVar18 * fVar21 * local_cc;
      local_13c = fVar18 * fVar20 * local_c0;
    }
    if (uVar15 < 2) goto LAB_00594fbc;
    if (bVar3) {
      local_e0 = fVar18 * local_e0;
      local_138 = local_e0 * fVar23;
      local_134 = local_e0 * fVar22;
      local_130 = local_e0 * fVar21;
      local_12c = local_e0 * fVar20;
    }
    else {
      local_138 = fVar18 * fVar23 * local_e0;
      local_134 = fVar18 * fVar22 * local_d4;
      local_130 = fVar18 * fVar21 * local_c8;
      local_12c = fVar18 * fVar20 * local_bc;
    }
    fStack_100 = 0.0;
    local_fc = 0.0;
    local_108 = 0.0;
    local_104 = local_b0;
    if (uVar15 != 3) goto LAB_00594fbc;
    if (bVar3) {
      fVar18 = fVar18 * local_dc;
      local_128 = fVar18 * fVar23;
      local_124 = fVar18 * fVar22;
      local_120 = fVar18 * fVar21;
      local_11c = fVar18 * fVar20;
    }
    else {
      local_128 = fVar18 * fVar23 * local_dc;
      local_124 = fVar18 * fVar22 * local_d0;
      local_120 = fVar18 * fVar21 * local_c4;
      local_11c = fVar18 * fVar20 * local_b8;
    }
  }
  else {
    local_148 = local_13c * fVar23;
    local_144 = local_13c * fVar22;
    local_140 = local_13c * fVar21;
    local_13c = local_13c * fVar20;
    if (uVar15 < 2) goto LAB_00594fbc;
    local_e0 = fVar18 * local_e0;
    local_138 = local_e0 * fVar23;
    local_134 = local_e0 * fVar22;
    local_130 = local_e0 * fVar21;
    local_12c = local_e0 * fVar20;
    local_108 = 0.0;
    local_104 = local_b0;
    fStack_100 = 0.0;
    local_fc = 0.0;
    if (uVar15 != 3) goto LAB_00594fbc;
    fVar18 = fVar18 * local_dc;
    local_128 = fVar18 * fVar23;
    local_124 = fVar18 * fVar22;
    local_120 = fVar18 * fVar21;
    local_11c = fVar18 * fVar20;
  }
  local_fc = 0.0;
  fStack_100 = 0.0;
  local_104 = local_b0;
  local_108 = 0.0;
  local_f8 = 0.0;
  local_f4 = local_ac;
  uStack_f0 = 0;
  local_ec = 0;
LAB_00594fbc:
  local_10c = 0.0;
  fStack_110 = 0.0;
  local_114 = local_b4;
  local_118 = 0.0;
  uVar7 = FUN_0059d300(param_5,0,0,1,0,0);
  if (-1 < (int)uVar7) {
    FUN_0059d000(0,0);
    lVar10 = param_4;
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x120);
    } while (lVar10 != 0);
    uVar7 = FUN_00575a10(0,0,(float)param_12,(float)local_16c,0,0,fVar17 * (float)uVar14 + fVar26,
                         fVar24 * (float)uVar9 + fVar25,param_2,uVar15,&local_118,&local_148,
                         *(undefined8 *)(lVar11 + 0xa8),param_7,0);
    if (-1 < (int)uVar7) {
      do {
        lVar10 = param_3;
        param_3 = *(long *)(lVar10 + 0x120);
      } while (param_3 != 0);
      plVar6 = *(long **)(lVar10 + 0xa8);
      (**(code **)(*plVar6 + 0x88))(plVar6,0);
      do {
        lVar10 = param_4;
        param_4 = *(long *)(lVar10 + 0x120);
      } while (param_4 != 0);
      plVar6 = *(long **)(lVar10 + 0xa8);
      (**(code **)(*plVar6 + 0x88))(plVar6,0);
      uVar7 = 0;
    }
  }
  return uVar7;
}


