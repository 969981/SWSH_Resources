/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055f270; name: FUN_0055f270
 */


uint FUN_0055f270(ulong param_1,ulong param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,undefined4 param_8,long param_9,long param_10,
                 ulong param_11,long param_12,ulong param_13,int param_14,undefined8 param_15,
                 undefined8 param_16,float param_17,undefined8 param_18,float param_19,
                 undefined8 param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23,
                 undefined4 param_24,undefined4 param_25,undefined4 param_26,undefined4 param_27,
                 byte param_28,float *param_29,undefined8 param_30,int param_31,int param_32,
                 float param_33,undefined8 param_34)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float fStack_144;
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
  float fStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  
  puVar2 = PTR_DAT_027139b0;
  iVar6 = *(int *)PTR_DAT_027139b0;
  if (iVar6 < 1) {
    plVar12 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar12,0);
    *(long **)PTR_DAT_027139b8 = plVar12;
    *(undefined4 *)puVar2 = 1;
    if (plVar12 != (long *)0x0) goto LAB_0055f30c;
LAB_0055f394:
    iVar6 = 0;
  }
  else {
    plVar12 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar6 + 1;
    if (iVar6 + 1 < 2) {
      if (plVar12 == (long *)0x0) goto LAB_0055f394;
LAB_0055f30c:
      uVar14 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar12 + 0x20))(plVar12);
      FUN_005b9b10(uVar14,plVar12);
      iVar6 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar2 = iVar6;
  FUN_005714c0(plVar12,2,3,3);
  fVar22 = 1.0;
  if ((param_13 & 1) == 0) {
    param_6 = 1.0;
  }
  fVar15 = DAT_01d4c570;
  if ((param_10 == 0) || ((*(byte *)(param_10 + 0x5e) >> 2 & 1) == 0)) {
LAB_0055f3c8:
    if (param_6 != 0.0) {
      fVar15 = param_6;
    }
    uVar14 = 0;
    bVar1 = false;
    fVar30 = fVar15;
  }
  else {
    uVar21 = *(int *)(param_10 + 0x44) - 0x48;
    fVar30 = DAT_01d4c570;
    if (((uVar21 < 0x1c) && ((1 << (ulong)(uVar21 & 0x1f) & 0x8280049U) != 0)) ||
       (*(int *)(param_10 + 0x44) == 0x1d)) {
      bVar1 = false;
      if (param_6 != 0.0) {
        fVar30 = param_6;
      }
LAB_0055f428:
      fVar15 = fVar30 * DAT_01d4c568;
      uVar14 = 1;
    }
    else {
      if (param_6 != 0.0) goto LAB_0055f3c8;
      if (*(char *)(*(long *)(param_9 + 0x20) + 0x14ef7) != '\0') {
        bVar1 = true;
        goto LAB_0055f428;
      }
      uVar14 = 0;
      bVar1 = false;
    }
  }
  if (((param_11 & 1) != 0) &&
     ((**(code **)(**(long **)(param_9 + 0x20) + 0x40))(*(long **)(param_9 + 0x20),0), param_10 != 0
     )) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x38))(*(long **)(param_9 + 0x20),0,param_10,0);
  }
  if (bVar1) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x130))(*(long **)(param_9 + 0x20),uVar14);
  }
  if ((param_10 != 0) && (param_17 == DAT_01d4c5a8)) {
    uVar21 = *(uint *)(param_10 + 0x44);
    if ((0x3b < uVar21) || ((1L << ((ulong)uVar21 & 0x3f) & 0xf80007800007800U) == 0)) {
      if ((uVar21 == 0) || ((uVar21 | 1) != 0x19)) {
        param_17 = DAT_01d4bb68;
        switch(uVar21) {
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x57:
        case 0x58:
        case 0x5b:
        case 0x5d:
          goto switchD_0055fc50_caseD_1c;
        default:
          param_17 = DAT_01d4c5f0;
          if (1 < uVar21 - 0x55 || uVar21 == 0) {
            param_17 = 0.0;
          }
          goto joined_r0x0055fc74;
        }
      }
      param_17 = DAT_01d4bf58;
      goto joined_r0x0055fc74;
    }
    param_17 = DAT_01d4bc7c;
  }
switchD_0055fc50_caseD_1c:
joined_r0x0055fc74:
  uVar28 = param_2;
  if (param_10 != 0) {
    uVar21 = NEON_ucvtf(*(undefined4 *)(param_10 + 0x50));
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_10 + 0x4c));
    if ((float)param_1 != 0.0) {
      fVar16 = (float)param_1;
    }
    param_1 = (ulong)(uint)fVar16;
    uVar28 = (ulong)uVar21;
    if ((float)param_2 != 0.0) {
      uVar28 = param_2 & 0xffffffff;
    }
  }
  (**(code **)(**(long **)(param_9 + 0x20) + 0x88))(*(long **)(param_9 + 0x20),&local_158);
  fVar29 = (float)param_1;
  fVar17 = fVar29 + param_3;
  fVar27 = (float)uVar28;
  fVar18 = fVar27 + param_4;
  fVar16 = param_3;
  if (param_3 <= fVar17) {
    fVar16 = fVar17;
    fVar17 = param_3;
  }
  fVar19 = (float)NEON_ucvtf(local_150);
  fVar32 = param_4;
  if (param_4 <= fVar18) {
    fVar32 = fVar18;
    fVar18 = param_4;
  }
  uVar31 = 0;
  fVar23 = fVar19;
  if (fVar17 <= fVar19) {
    fVar23 = fVar17;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar17) {
    fVar20 = fVar23;
  }
  local_118 = (float)(int)fVar20;
  fVar23 = (float)NEON_ucvtf(local_14c);
  fVar17 = fVar23;
  if (fVar18 <= fVar23) {
    fVar17 = fVar18;
  }
  fVar24 = 0.0;
  if (0.0 <= fVar18) {
    fVar24 = fVar17;
  }
  fStack_114 = (float)(int)fVar24;
  if (fVar16 <= fVar19) {
    fVar19 = fVar16;
  }
  fVar17 = 0.0;
  if (0.0 <= fVar16) {
    fVar17 = fVar19;
  }
  if (fVar32 <= fVar23) {
    fVar23 = fVar32;
  }
  fVar16 = 0.0;
  if (0.0 <= fVar32) {
    fVar16 = fVar23;
  }
  local_108 = 0x3f80000000000000;
  local_110 = CONCAT44((int)(fVar16 - fVar24),(int)(fVar17 - fVar20));
  (**(code **)(**(long **)(param_9 + 0x20) + 0x80))(*(long **)(param_9 + 0x20),&local_118);
  fVar17 = fStack_114;
  fVar16 = local_118;
  if ((*(float *)(param_9 + 0x138) * param_5 <= 0.0) ||
     (lVar7 = *(long *)(param_9 + 0x420), lVar7 == 0)) {
    fVar18 = 0.0;
    bVar3 = false;
    lVar7 = 0;
    plVar11 = plVar12 + 0x5350;
    fVar32 = 0.0;
  }
  else {
    lVar10 = lVar7;
    do {
      lVar9 = lVar10;
      lVar10 = *(long *)(lVar9 + 0x120);
    } while (lVar10 != 0);
    plVar11 = (long *)(lVar9 + 0xa8);
    fVar32 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x58));
    bVar3 = true;
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x54));
  }
  lVar10 = *plVar11;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x58));
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x54));
  local_d8 = 0;
  fStack_cc = *(float *)(param_12 + 0x8c) * fVar23 + *(float *)(param_12 + 0x94);
  local_d0 = *(float *)(param_12 + 0x88) * fVar19 + *(float *)(param_12 + 0x90);
  if (bVar3) {
    local_c0 = fVar18 * *(float *)(lVar7 + 0x88) + *(float *)(lVar7 + 0x90);
    local_bc = fVar32 * *(float *)(lVar7 + 0x8c) + *(float *)(lVar7 + 0x94);
  }
  else {
    local_c0 = 0.0;
    local_bc = 0.0;
  }
  local_c8 = 0;
  cVar5 = *(char *)(param_9 + 0x18c);
  if (*(char *)(param_9 + 0x180) == '\0') {
    local_b8 = 0.0;
    fStack_b4 = 0.0;
    local_b0 = 0.0;
    local_ac = 0.0;
  }
  else {
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = 0.0 <= *(float *)(param_9 + 0x198);
    }
    fVar20 = (float)FUN_00578930(*(undefined4 *)(param_9 + 0x124),*(undefined4 *)(param_9 + 0x128),
                                 bVar3);
    cVar5 = *(char *)(param_9 + 0x18c);
    if (cVar5 == '\0') {
      if (*(char *)(param_9 + 0x180) == '\0') {
        fVar22 = 0.0;
        fVar24 = 0.0;
      }
      else {
        fVar22 = *(float *)(param_9 + 0x184);
        fVar24 = *(float *)(param_9 + 0x188);
      }
      fVar22 = fVar22 * (fVar24 * (*(float *)(param_9 + 0x158) + DAT_01d4c30c) + DAT_01d4bc70);
    }
    local_b0 = fVar20 * fVar22;
    local_ac = (fVar22 + fVar22) * *(float *)(param_9 + 0x160) * 0.5;
    fVar24 = *(float *)(param_9 + 0x15c) * (local_b0 + local_b0) * 0.5;
    fStack_b4 = -fVar22 - local_ac;
    local_b8 = -(fVar20 * fVar22) - fVar24;
    local_b0 = local_b0 - fVar24;
    local_ac = fVar22 - local_ac;
  }
  fVar22 = *(float *)(param_9 + 0x198);
  if (cVar5 != '\0') {
    uVar31 = *(undefined4 *)(param_9 + 0x158);
    if (0.0 <= fVar22) {
      if (fVar22 <= 1.0 / fVar27) {
        fVar22 = 1.0 / fVar27;
      }
    }
  }
  bVar3 = param_29 == (float *)0x0;
  if (!bVar3) {
    local_ac = local_ac - fStack_b4;
    fVar20 = param_29[2];
    fVar24 = param_29[3];
    fVar25 = *param_29;
    fVar26 = param_29[1];
    fStack_b4 = fStack_b4 + local_ac * fVar24;
    fVar33 = (float)local_d8 + (local_d0 - (float)local_d8) * fVar20;
    fVar34 = local_d8._4_4_ + (fStack_cc - local_d8._4_4_) * fVar24;
    local_b0 = local_b0 - local_b8;
    local_d0 = fVar33 + (local_d0 - (float)local_d8) * fVar25;
    fStack_cc = fVar34 + (fStack_cc - local_d8._4_4_) * fVar26;
    local_d8 = CONCAT44(fVar34,fVar33);
    local_b8 = local_b8 + local_b0 * fVar20;
    local_b0 = local_b8 + local_b0 * fVar25;
    local_bc = local_bc - local_c8._4_4_;
    local_c0 = local_c0 - (float)local_c8;
    local_c8._4_4_ = local_c8._4_4_ + local_bc * fVar24;
    local_c8._0_4_ = (float)local_c8 + local_c0 * fVar20;
    local_c0 = (float)local_c8 + local_c0 * fVar25;
    local_bc = local_c8._4_4_ + local_bc * fVar26;
    local_ac = fStack_b4 + local_ac * fVar26;
  }
  (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),param_31);
  if (param_31 == 0) {
    FUN_00540cf0(*(undefined8 *)(param_9 + 0x20),0);
  }
  else {
    uVar13 = 1;
    FUN_00540cf0(*(undefined8 *)(param_9 + 0x20),1);
    uVar21 = param_31 - 1;
    if (uVar21 < 5) {
      uVar8 = -(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2;
      uVar4 = *(undefined4 *)(&DAT_01d6c310 + uVar8);
      uVar13 = *(undefined4 *)(&DAT_01d6c330 + uVar8);
    }
    else {
      uVar4 = 2;
    }
    FUN_00540d10(*(undefined8 *)(param_9 + 0x20),uVar4,uVar13);
  }
  fVar16 = (float)NEON_ucvtf(fVar16);
  fVar17 = (float)NEON_ucvtf(fVar17);
  if (param_19 < 0.0) {
    param_19 = *(float *)(param_9 + 0x164);
  }
  if (param_14 == -1) {
    if (param_33 <= 0.0) {
      param_33 = -param_33;
    }
    uVar21 = 4;
    if (param_32 != 1) {
      uVar21 = 1;
    }
    if (bVar3 && (fVar29 == fVar19 && fVar27 == fVar23)) {
      uVar21 = 1;
    }
    local_158 = 1.0 / (float)uVar21;
    if (1 < uVar21) {
      local_148 = local_158;
      fStack_144 = local_158;
      local_140 = local_158;
      local_13c = local_158;
      local_138 = local_158;
      local_134 = local_158;
      local_130 = local_158;
      local_12c = local_158;
      if (3 < uVar21) {
        local_128 = local_158;
        local_124 = local_158;
        local_120 = local_158;
        local_11c = local_158;
      }
    }
    if (uVar21 == 4) {
      fVar22 = (float)NEON_fminnm(param_33,0x3f800000);
      local_e8 = fVar22 * 0.5 * (local_d0 / fVar19);
      local_f4 = fVar22 * 0.5 * (fStack_cc / fVar23);
      fStack_114 = -local_f4;
      local_f8 = -local_e8;
      local_110 = 0;
      local_108 = CONCAT44(fStack_114,local_e8);
      local_100 = 0;
      local_f0 = 0;
      local_e0 = 0;
      local_e4 = local_f4;
      local_118 = local_f8;
    }
    else if (uVar21 == 1) {
      local_118 = 0.0;
      fStack_114 = 0.0;
      local_110 = 0;
    }
    do {
      lVar7 = param_12;
      param_12 = *(long *)(lVar7 + 0x120);
    } while (param_12 != 0);
    fStack_154 = local_158;
    local_150 = local_158;
    local_14c = local_158;
    uVar21 = FUN_00575610(param_3 - fVar16,param_4 - fVar17,param_1,uVar28,local_d8 & 0xffffffff,
                          local_d8._4_4_,plVar12,uVar21,&local_118,&local_158,
                          *(undefined8 *)(lVar7 + 0xa8),param_34,0,0);
  }
  else {
    do {
      lVar7 = param_12;
      param_12 = *(long *)(lVar7 + 0x120);
    } while (param_12 != 0);
    uVar21 = FUN_0057c980(param_3 - fVar16,param_4 - fVar17,param_1,uVar28,param_19,param_5,fVar15,
                          param_7,plVar12,&local_d8,*(undefined8 *)(lVar7 + 0xa8),lVar10,param_14,
                          param_15,param_16,param_18,param_8,param_17,uVar31,
                          *(undefined4 *)(param_9 + 400),*(undefined4 *)(param_9 + 0x194),fVar22,
                          param_9 + 0x19c,*(undefined4 *)(param_9 + 0x2e8),
                          *(undefined4 *)(param_9 + 0x178),fVar30,param_20,param_21,
                          bVar3 && (fVar29 == fVar19 && fVar27 == fVar23),
                          bVar3 && (fVar29 == fVar18 && fVar27 == fVar32) ||
                          lVar10 == plVar12[0x5350],param_22,param_23,param_24,param_25,param_26,
                          param_27,param_28 & 1,0);
  }
  if (param_31 != 0) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x160))(*(long **)(param_9 + 0x20),0);
  }
  if (bVar1) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x130))(*(long **)(param_9 + 0x20),0);
  }
  return uVar21 & (int)uVar21 >> 0x1f;
}


