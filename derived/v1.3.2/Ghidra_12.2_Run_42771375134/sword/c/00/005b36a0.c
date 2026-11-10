/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b36a0; name: FUN_005b36a0
 */


undefined4
FUN_005b36a0(float param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            int param_7,undefined4 param_8,undefined8 param_9,undefined8 param_10,
            undefined4 *param_11,undefined4 *param_12,undefined8 param_13,byte param_14)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
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
  long local_208;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  ulong local_160;
  float local_158;
  float fStack_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  float local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  
  lVar9 = param_3;
  do {
    lVar10 = lVar9;
    lVar9 = *(long *)(lVar10 + 0x120);
  } while (lVar9 != 0);
  plVar5 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar5 + 0x90))(plVar5,1);
  lVar9 = param_3;
  do {
    lVar10 = lVar9;
    lVar9 = *(long *)(lVar10 + 0x120);
  } while (lVar9 != 0);
  plVar5 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar5 + 0x88))(plVar5,1);
  lVar9 = param_4;
  do {
    lVar10 = lVar9;
    lVar9 = *(long *)(lVar10 + 0x120);
  } while (lVar9 != 0);
  plVar5 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar5 + 0x90))(plVar5,1);
  lVar9 = param_4;
  do {
    lVar10 = lVar9;
    lVar9 = *(long *)(lVar10 + 0x120);
  } while (lVar9 != 0);
  plVar5 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar5 + 0x88))(plVar5,1);
  lVar9 = param_6;
  do {
    lVar10 = lVar9;
    lVar9 = *(long *)(lVar10 + 0x120);
  } while (lVar9 != 0);
  plVar5 = *(long **)(lVar10 + 0xa8);
  (**(code **)(*plVar5 + 0x90))(plVar5,1);
  puVar2 = PTR_DAT_027139b0;
  iVar15 = *(int *)PTR_DAT_027139b0;
  if (iVar15 < 1) {
    local_1b0 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                     "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(local_1b0,0);
    *(long **)PTR_DAT_027139b8 = local_1b0;
    *(undefined4 *)puVar2 = 1;
    if (local_1b0 != (long *)0x0) goto LAB_005b37fc;
LAB_005b3888:
    iVar15 = 0;
  }
  else {
    local_1b0 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar15 + 1;
    if (iVar15 + 1 < 2) {
      if (local_1b0 == (long *)0x0) goto LAB_005b3888;
LAB_005b37fc:
      uVar14 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*local_1b0 + 0x20))(local_1b0);
      FUN_005b9b10(uVar14,local_1b0);
      iVar15 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar2 = iVar15;
  fVar27 = *(float *)(param_2 + 0x1e4);
  fVar24 = *(float *)(param_2 + 0x134);
  if ((*(char *)(param_2 + 0x144) == '\0') && (*(float *)(param_2 + 0x138) != 1.0)) {
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 200));
    fVar24 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xc4));
    fVar24 = fVar24 / fVar21;
  }
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 200));
  fVar28 = (float)param_11[0x1f];
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xc4));
  if (fVar22 <= fVar21) {
    fVar21 = (float)param_11[0x1e];
  }
  else {
    fVar28 = fVar28 * (fVar21 / fVar22);
    fVar21 = (fVar21 / fVar22) * (float)param_11[0x1e];
  }
  cVar1 = *(char *)(param_2 + 0x251);
  if ((*PTR_DAT_027139e0 == '\0') || (*(char *)(param_2 + 0x3f0) == '\0')) {
    uVar16 = 0;
    if (cVar1 == '\0') goto LAB_005b3928;
LAB_005b3964:
    fVar18 = *(float *)(param_2 + 0x2b0);
    fVar22 = powf(*(float *)(param_2 + 0x1b4) * 0.5,*(float *)(param_2 + 0x2b8));
    fVar26 = powf(*(float *)(param_2 + 0x19c) * 4.0,*(float *)(param_2 + 0x2b4));
    local_1f0 = powf(*(float *)(param_2 + 0x1a8) /
                     (*(float *)(param_2 + 0x1b0) - *(float *)(param_2 + 0x1a8)) + 1.0,
                     *(float *)(param_2 + 700));
    iVar15 = (int)uVar16;
    if (*(int *)(param_2 + 0x2ac) != 5) {
      local_1f4 = *(float *)(*(long *)(param_2 + 0x2e8) + (long)*(int *)(param_2 + 0x2ac) * 4);
      local_1f0 = ((8.0 / fVar18) * fVar22 * fVar26) / local_1f0;
      goto joined_r0x005b3930;
    }
    local_1f0 = 0.0;
    fVar22 = 0.0;
    if (0.0 < *(float *)(param_2 + 0x3e4)) {
      fVar22 = *(float *)(param_2 + 0x3e4) / *(float *)(param_2 + 0x1c0);
    }
    if (fVar22 <= 0.0) {
      fVar22 = 1.0;
    }
    fVar26 = *(float *)(param_2 + 0x2b0);
    if (fVar26 <= 0.0) {
      fVar26 = -fVar26;
    }
    fVar26 = fVar26 * fVar22;
    fVar22 = fVar26;
    if (1.0 < fVar26) {
      fVar22 = 1.0;
    }
    local_1f4 = 0.0;
    if (0.0 <= fVar26) {
      local_1f4 = fVar22;
    }
    if (iVar15 == 0) goto LAB_005b3a38;
LAB_005b3934:
    if (*(char *)(param_2 + 0x3f0) == '\0') {
      local_1fc = 0.0;
      local_1f8 = -0.0;
    }
    else {
      local_1fc = *(float *)(param_2 + 0x3f4) + *(float *)(param_2 + 0x3f4);
      local_1f8 = local_1fc * DAT_01d4bc88;
    }
    local_1fc = local_1fc * DAT_01d4bd94;
    if (cVar1 == '\0') goto LAB_005b3a4c;
LAB_005b3a80:
    fVar26 = *(float *)(*(long *)(param_2 + 0x2e0) + (long)*(int *)(param_2 + 0x2ac) * 4);
    fVar22 = (float)FUN_005b4b60(param_2,1);
    fVar22 = fVar26 * (fVar22 / DAT_01d4c058) * DAT_01d4c2a4;
  }
  else {
    uVar16 = (ulong)(*(float *)(param_2 + 0x3f4) + *(float *)(param_2 + 0x3f4) != 0.0);
    if (cVar1 != '\0') goto LAB_005b3964;
LAB_005b3928:
    local_1f0 = 0.0;
    local_1f4 = 0.5;
    iVar15 = (int)uVar16;
joined_r0x005b3930:
    if (iVar15 != 0) goto LAB_005b3934;
LAB_005b3a38:
    local_1fc = 0.0;
    local_1f8 = 0.0;
    if (cVar1 != '\0') goto LAB_005b3a80;
LAB_005b3a4c:
    fVar22 = *(float *)(param_2 + 0x278);
  }
  local_208 = param_2 + 0x1e8;
  fVar27 = fVar27 * 0.5;
  fVar18 = (float)FUN_005b4b60(param_2,cVar1 != '\0');
  local_11c = 0;
  local_124 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_f4 = 0;
  local_fc = 0;
  local_ec = 0x3f800000;
  local_100 = 0x3f800000;
  local_114 = 0x3f800000;
  local_128 = 0x3f800000;
  local_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_ac = 0x3f800000;
  local_c0 = 0x3f800000;
  local_d4 = 0x3f800000;
  local_e8 = 0x3f800000;
  fVar26 = *(float *)(param_2 + 0x1bc);
  fVar19 = cosf(fVar26);
  fVar20 = sinf(fVar26);
  fVar26 = 0.0;
  fStack_154 = fVar19 + 0.0;
  local_150 = (1.0 - fVar19) * 0.0;
  local_168 = CONCAT44(fVar20 + local_150,fStack_154);
  local_158 = local_150 - fVar20;
  fStack_144 = local_150 - fVar20 * 0.0;
  local_150 = local_150 + fVar20 * 0.0;
  local_140 = fVar19 * 0.0 + 1.0;
  local_14c = 0;
  local_160 = (ulong)(uint)fStack_144;
  local_134 = 0;
  local_13c = 0;
  local_12c = 0x3f800000;
  local_148 = local_150;
  FUN_00515cb0(&local_128,&local_128,&local_168);
  FUN_005156a0(&local_1a8,&local_128);
  local_d0 = local_190;
  uStack_d8 = (undefined4)local_198;
  local_d4 = (undefined4)((ulong)local_198 >> 0x20);
  uStack_e0 = (undefined4)local_1a0;
  local_dc = (undefined4)((ulong)local_1a0 >> 0x20);
  local_e8 = (undefined4)local_1a8;
  uStack_e4 = (undefined4)((ulong)local_1a8 >> 0x20);
  uStack_b0 = (undefined4)local_170;
  local_ac = (undefined4)((ulong)local_170 >> 0x20);
  uStack_b8 = (undefined4)local_178;
  local_b4 = (undefined4)((ulong)local_178 >> 0x20);
  local_c0 = (undefined4)local_180;
  uStack_bc = (undefined4)((ulong)local_180 >> 0x20);
  local_c8 = local_188;
  FUN_0059d300(param_6,0,0,1,0,0);
  FUN_0059d000(0,0);
  local_168 = 0;
  local_160 = 0;
  (**(code **)(**(long **)(param_2 + 0x20) + 0x198))
            (0x3f800000,*(long **)(param_2 + 0x20),0xff0,&local_168,0);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x160))(*(long **)(param_2 + 0x20),2);
  if (cVar1 == '\0') {
    lVar9 = (long)local_1b0 + uVar16 * 4;
    puVar11 = (undefined4 *)(lVar9 + 0x1afdc);
    uVar12 = 0xafbc;
  }
  else {
    lVar9 = (long)local_1b0 + uVar16 * 4;
    puVar11 = (undefined4 *)(lVar9 + 0x1b00c);
    uVar12 = 0xaffc;
  }
  plVar5 = (long *)local_1b0[6];
  if ((param_14 & 1) == 0) {
    puVar11 = (undefined4 *)(lVar9 + (ulong)(uVar12 | 0x10000));
  }
  (**(code **)(*plVar5 + 0xe8))(plVar5,*puVar11);
  pfVar6 = (float *)FUN_00573970();
  pfVar7 = (float *)FUN_00573980();
  (**(code **)(*plVar5 + 0xa0))(plVar5,(int)local_1b0[0x1c],local_208);
  pfVar6[0x16] = local_1f0;
  pfVar6[0x17] = local_1f4;
  pfVar6[0x18] = fVar27;
  pfVar6[0x1a] = local_1f8;
  pfVar6[0x1c] = 1.0 / fVar22;
  pfVar6[0x1d] = 1.0 / fVar18;
  pfVar6[0x20] = fVar24;
  pfVar6[0x1b] = local_1fc;
  pfVar6[0x14] = fVar27;
  pfVar6[0x15] = 0.0;
  pfVar6[0x19] = fVar27;
  pfVar6[0x1e] = 0.0;
  pfVar6[0x1f] = 0.0;
  pfVar6[0x21] = 1.0;
  pfVar6[0x22] = 1.0 / fVar24;
  pfVar6[0x23] = 1.0;
  fVar24 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 8));
  pfVar6[0x30] = 0.5 / fVar24;
  fVar24 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 0xc));
  pfVar6[0x31] = 0.5 / fVar24;
  pfVar6[0x34] = fVar28 * 0.5;
  pfVar6[0x35] = fVar28 * 0.5 * 0.5;
  pfVar6[0x36] = fVar21 * 0.5 * param_1;
  pfVar6[0x37] = fVar21 * 0.5 * 0.5;
  fVar27 = (float)NEON_ucvtf(param_11[1]);
  fVar24 = (float)NEON_ucvtf(*param_11);
  pfVar6[0x3a] = 0.0 - (1.0 / fVar24) * 0.5;
  pfVar6[0x3b] = 0.0 - (1.0 / fVar27) * 0.5;
  pfVar6[0x38] = 1.0 / fVar24;
  pfVar6[0x39] = 1.0 / fVar27;
  fVar24 = (float)NEON_ucvtf(*param_11);
  *pfVar7 = fVar24 + fVar24;
  fVar24 = (float)NEON_ucvtf(param_11[1]);
  pfVar7[1] = fVar24 + fVar24;
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 200));
  fVar27 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xc4));
  fVar24 = (float)param_11[0x1e] * 0.5;
  if (fVar27 < fVar21) {
    fVar24 = fVar24 * (fVar27 / fVar21);
  }
  pfVar7[2] = fVar24;
  pfVar7[3] = 0.0;
  fVar24 = (float)param_11[0x16];
  *pfVar6 = fVar24;
  fVar27 = (float)param_11[0x17];
  pfVar6[1] = fVar27;
  fVar21 = (float)param_11[0x18];
  pfVar6[2] = fVar21;
  fVar22 = (float)param_11[0x19];
  pfVar6[3] = fVar22;
  fVar28 = (float)param_11[0x1a];
  pfVar6[4] = fVar28;
  fVar18 = (float)param_11[0x1b];
  pfVar6[5] = fVar18;
  fVar19 = (float)param_11[0x1c];
  pfVar6[6] = fVar19;
  fVar20 = (float)param_11[0x1d];
  pfVar6[7] = fVar20;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 8));
  fVar21 = 0.0 / fVar23 + fVar21;
  pfVar6[2] = fVar21;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 0xc));
  fVar22 = 0.0 / fVar23 + fVar22;
  pfVar6[3] = fVar22;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 8));
  fVar19 = 0.0 / fVar23 + fVar19;
  pfVar6[6] = fVar19;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 0xc));
  fVar20 = 0.0 / fVar23 + fVar20;
  pfVar6[7] = fVar20;
  bVar3 = *(char *)(*(long *)(param_2 + 0x20) + 0x58) == '\0';
  fVar23 = 2.0;
  if (bVar3) {
    fVar23 = -2.0;
  }
  fVar25 = -1.0;
  if (bVar3) {
    fVar25 = 1.0;
  }
  pfVar6[2] = fVar21 + fVar21 + -1.0;
  pfVar6[3] = fVar25 + fVar22 * fVar23;
  *pfVar6 = fVar24 + fVar24;
  pfVar6[1] = fVar23 * fVar27;
  pfVar6[6] = fVar19 + fVar19 + -1.0;
  pfVar6[7] = fVar25 + fVar20 * fVar23;
  pfVar6[4] = fVar28 + fVar28;
  pfVar6[5] = fVar23 * fVar18;
  fVar24 = (float)NEON_ucvtf(*param_12);
  pfVar7[8] = fVar24 + fVar24;
  fVar24 = (float)NEON_ucvtf(param_12[1]);
  pfVar7[9] = fVar24 + fVar24;
  fVar24 = (float)param_12[0x1e] * 0.5;
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 200));
  fVar27 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xc4));
  if (fVar27 < fVar21) {
    fVar24 = fVar24 * (fVar27 / fVar21);
  }
  pfVar7[10] = fVar24;
  pfVar7[0xb] = 0.0;
  fVar24 = (float)param_12[0x16];
  pfVar6[8] = fVar24;
  fVar27 = (float)param_12[0x17];
  pfVar6[9] = fVar27;
  fVar21 = (float)param_12[0x18];
  pfVar6[10] = fVar21;
  fVar22 = (float)param_12[0x19];
  pfVar6[0xb] = fVar22;
  fVar28 = (float)param_12[0x1a];
  pfVar6[0xc] = fVar28;
  fVar18 = (float)param_12[0x1b];
  pfVar6[0xd] = fVar18;
  fVar19 = (float)param_12[0x1c];
  pfVar6[0xe] = fVar19;
  fVar20 = (float)param_12[0x1d];
  pfVar6[0xf] = fVar20;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 8));
  fVar21 = 0.0 / fVar23 + fVar21;
  pfVar6[10] = fVar21;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 0xc));
  fVar22 = 0.0 / fVar23 + fVar22;
  pfVar6[0xb] = fVar22;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 8));
  fVar19 = 0.0 / fVar23 + fVar19;
  pfVar6[0xe] = fVar19;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_6 + 0x80) + 0xc));
  fVar20 = 0.0 / fVar23 + fVar20;
  pfVar6[0xf] = fVar20;
  bVar3 = *(char *)(*(long *)(param_2 + 0x20) + 0x58) == '\0';
  fVar23 = 2.0;
  if (bVar3) {
    fVar23 = -2.0;
  }
  pfVar6[8] = fVar24 + fVar24;
  pfVar6[9] = fVar23 * fVar27;
  fVar24 = -1.0;
  if (bVar3) {
    fVar24 = 1.0;
  }
  pfVar6[10] = fVar21 + fVar21 + -1.0;
  pfVar6[0xb] = fVar24 + fVar22 * fVar23;
  pfVar6[0xe] = fVar19 + fVar19 + -1.0;
  pfVar6[0xf] = fVar24 + fVar20 * fVar23;
  pfVar6[0xc] = fVar28 + fVar28;
  pfVar6[0xd] = fVar23 * fVar18;
  pfVar6[0x32] = 0.0;
  if (uVar16 != 0) {
    if (*(char *)(param_2 + 0x3f0) == '\0') {
      fVar27 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar24 = *(float *)(param_2 + 0x3f4) + *(float *)(param_2 + 0x3f4);
      fVar27 = fVar24 * DAT_01d4bc88;
      if (fVar24 * DAT_01d4bc88 <= 0.0) {
        fVar27 = -(fVar24 * DAT_01d4bc88);
      }
      fVar24 = fVar24 * DAT_01d4bd94;
    }
    if (fVar24 <= 0.0) {
      fVar24 = -fVar24;
    }
    if (fVar27 <= fVar24) {
      fVar27 = fVar24;
    }
    fVar24 = *pfVar7;
    if (*pfVar7 <= pfVar7[1]) {
      fVar24 = pfVar7[1];
    }
    pfVar6[0x32] = fVar24 * (fVar27 + fVar27);
  }
  (**(code **)(*plVar5 + 0xb0))(plVar5,*(undefined4 *)((long)local_1b0 + 0xf4),pfVar6,0xf);
  (**(code **)(*plVar5 + 0xb0))(plVar5,*(undefined4 *)((long)local_1b0 + 0xfc),pfVar7,5);
  (**(code **)(*plVar5 + 200))(plVar5,*(undefined4 *)((long)local_1b0 + 0x144),&local_128,2);
  do {
    lVar9 = param_3;
    param_3 = *(long *)(lVar9 + 0x120);
  } while (param_3 != 0);
  (**(code **)(*plVar5 + 0xd0))(plVar5,(int)local_1b0[0x18],*(undefined8 *)(lVar9 + 0xa8));
  do {
    lVar9 = param_4;
    param_4 = *(long *)(lVar9 + 0x120);
  } while (param_4 != 0);
  (**(code **)(*plVar5 + 0xd0))
            (plVar5,*(undefined4 *)((long)local_1b0 + 0xc4),*(undefined8 *)(lVar9 + 0xa8));
  do {
    lVar9 = param_5;
    param_5 = *(long *)(lVar9 + 0x120);
  } while (param_5 != 0);
  (**(code **)(*plVar5 + 0xd0))(plVar5,(int)local_1b0[0x19],*(undefined8 *)(lVar9 + 0xa8));
  if (cVar1 == '\0') {
    plVar13 = (long *)0x0;
    puVar8 = (undefined8 *)(param_2 + 600);
  }
  else {
    if (*(char *)(param_2 + 0x12d) == '\0') {
      fVar24 = 0.0;
    }
    else {
      fVar24 = *(float *)(param_2 + 0x3ec);
      if (*(float *)(param_2 + 0x3e4) <= 0.0) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = *(float *)(param_2 + 0x3e4) / *(float *)(param_2 + 0x1c0);
        if (fVar27 < 0.0) goto LAB_005b42bc;
      }
      if (1.0 < fVar27) {
        fVar27 = 1.0;
      }
      if ((0.0 < fVar27) && (*(int *)(param_2 + 1000) != 1)) {
        fVar24 = powf(10.0,-(fVar24 + fVar24 + -1.0));
        fVar27 = powf(fVar27,fVar24);
        fVar24 = 0.0;
        lVar9 = 0;
        do {
          if (*(int *)(param_2 + 0x2f0) <= lVar9) goto LAB_005b42bc;
          lVar10 = lVar9 + 1;
          fVar21 = *(float *)(*(long *)(param_2 + 0x398) + lVar9 * 4 + 4);
          lVar9 = lVar10;
        } while (fVar21 <= 1.0 / fVar27);
        fVar22 = *(float *)(*(long *)(param_2 + 0x398) + lVar10 * 4 + -4);
        fVar27 = 1.0 - ((1.0 / fVar27 - fVar22) / (fVar21 - fVar22) + (float)((int)lVar10 + -1)) /
                       (float)*(int *)(param_2 + 0x2f0);
        if ((0.0 <= fVar27) && (fVar24 = fVar27, 1.0 < fVar27)) {
          fVar24 = 1.0;
        }
      }
    }
LAB_005b42bc:
    plVar13 = *(long **)(*(long *)(param_2 + (long)*(int *)(param_2 + 0x2a8) * 8 + 0x2f8) +
                        (long)(int)((1.0 - fVar24) * (float)*(int *)(param_2 + 0x2f0) * DAT_01d4c2dc
                                   ) * 8);
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x2c8) + (long)*(int *)(param_2 + 0x2ac) * 8);
  }
  plVar17 = (long *)*puVar8;
  (**(code **)(*plVar5 + 0xd0))(plVar5,(int)local_1b0[8],plVar17);
  if (plVar17 != (long *)0x0) {
    if (cVar1 == '\0') {
      uVar14 = 3;
    }
    else {
      uVar14 = 7;
    }
    (**(code **)(*plVar17 + 0x78))(plVar17,uVar14);
  }
  (**(code **)(*plVar5 + 0xd0))(plVar5,*(undefined4 *)((long)local_1b0 + 0x44),plVar13);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x78))(plVar13,7);
  }
  if (cVar1 == '\0') goto LAB_005b44c4;
  if (*(char *)(param_2 + 0x12d) != '\0') {
    fVar26 = *(float *)(param_2 + 0x3ec);
    if (*(float *)(param_2 + 0x3e4) <= 0.0) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = *(float *)(param_2 + 0x3e4) / *(float *)(param_2 + 0x1c0);
      if (fVar24 < 0.0) goto LAB_005b4450;
    }
    if (1.0 < fVar24) {
      fVar24 = 1.0;
    }
    if ((0.0 < fVar24) && (*(int *)(param_2 + 1000) != 1)) {
      fVar27 = powf(10.0,-(fVar26 + fVar26 + -1.0));
      fVar24 = powf(fVar24,fVar27);
      fVar26 = 0.0;
      lVar9 = 0;
      do {
        if (*(int *)(param_2 + 0x2f0) <= lVar9) goto LAB_005b4450;
        lVar10 = lVar9 + 1;
        fVar27 = *(float *)(*(long *)(param_2 + 0x398) + lVar9 * 4 + 4);
        lVar9 = lVar10;
      } while (fVar27 <= 1.0 / fVar24);
      fVar21 = *(float *)(*(long *)(param_2 + 0x398) + lVar10 * 4 + -4);
      fVar24 = 1.0 - ((1.0 / fVar24 - fVar21) / (fVar27 - fVar21) + (float)((int)lVar10 + -1)) /
                     (float)*(int *)(param_2 + 0x2f0);
      if ((0.0 <= fVar24) && (fVar26 = fVar24, 1.0 < fVar24)) {
        fVar26 = 1.0;
      }
    }
  }
LAB_005b4450:
  fVar24 = (1.0 - fVar26) * (float)*(int *)(param_2 + 0x2f0) * DAT_01d4c2dc;
  if (fVar24 <= 1.0) {
    if (fVar24 < 0.0) {
      fVar24 = (fVar24 + 1.0) - (float)(int)fVar24;
    }
  }
  else {
    fVar24 = fVar24 - (float)(int)fVar24;
  }
  *pfVar6 = fVar24;
  pfVar6[1] = 0.0;
  pfVar6[2] = 0.0;
  pfVar6[3] = 0.0;
  (**(code **)(*plVar5 + 0xb0))(plVar5,(int)local_1b0[0x20],pfVar6,1);
LAB_005b44c4:
  (**(code **)(**(long **)(param_2 + 0x20) + 0x148))(*(long **)(param_2 + 0x20),0xffffffff,1);
  (**(code **)(*plVar5 + 0x108))(plVar5,&local_168,0);
  (**(code **)(*plVar5 + 0x118))(plVar5,0);
  FUN_0056d090(local_1b0 + 6);
  (**(code **)(*plVar5 + 0x150))(plVar5,local_1b0[0x533e],param_9,0,0,0,1);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x48))(*(long **)(param_2 + 0x20),param_10,0);
  FUN_0059a530(plVar5);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x1d0))
            (*(long **)(param_2 + 0x20),4,param_8,0,0,param_7 + -1);
  (**(code **)(*plVar5 + 0x120))(plVar5);
  uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x160))(*(long **)(param_2 + 0x20),0);
  return uVar4;
}


