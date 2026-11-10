/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01493de0; name: FUN_01493de0
 */


void FUN_01493de0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_400;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e4;
  undefined8 local_3dc;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a4;
  undefined8 local_39c;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_364;
  undefined8 local_35c;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined8 local_31c;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined8 local_2dc;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  float local_200;
  float local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float fStack_1bc;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  float local_180;
  float fStack_17c;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  fVar10 = (float)*(int *)(param_1 + 8);
  fVar9 = (float)*(int *)(param_1 + 4);
  local_1f8 = 0x3f800000;
  local_1fc = fVar10 / DAT_01d4beac;
  local_200 = fVar9 / DAT_01d4c030;
  cVar4 = *(char *)(param_1 + 0x68);
  if (cVar4 == '\0') {
    local_1f4 = *(undefined8 *)(param_1 + 0x14);
    local_1ec = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    local_1f4 = *(undefined8 *)(param_1 + 0x24);
    local_1ec = *(undefined8 *)(param_1 + 0x2c);
  }
  puVar7 = (undefined8 *)(param_1 + 0x14);
  puVar6 = (undefined8 *)(param_1 + 0x24);
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x50));
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x4c));
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  fVar13 = fVar13 / *(float *)PTR_FloatPi_02715160;
  fVar11 = (float)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10));
  fVar14 = (fVar15 / fVar12) * DAT_01d4c6b8;
  fVar15 = (float)*(int *)(param_1 + 0x10);
  if (fVar14 <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    if (fVar14 <= DAT_01d4c580) {
      uVar8 = 1;
    }
    else if (fVar14 <= DAT_01d4bde8) {
      uVar8 = 2;
    }
    else {
      fVar16 = DAT_01d4c6b8;
      if (DAT_01d4c6b8 < fVar14) goto LAB_01493f98;
      uVar8 = 3;
    }
    uVar1 = (ulong)(uVar8 - 1);
    uVar2 = (ulong)uVar8;
    fVar14 = fVar14 - (float)(&DAT_0216f42c)[uVar1 * 4];
    fVar16 = 1.0 / ((float)(&DAT_0216f42c)[uVar2 * 4] - (float)(&DAT_0216f42c)[uVar1 * 4]);
    fVar17 = fVar14 * fVar14 * fVar16;
    fVar19 = fVar14 * fVar16 * fVar17;
    fVar18 = fVar16 * fVar17 * 3.0;
    fVar16 = fVar16 * fVar19 + fVar16 * fVar19;
    fVar16 = *(float *)(&UNK_0216f434 + uVar2 * 0x10) * (fVar19 - fVar17) +
             *(float *)(&UNK_0216f438 + uVar1 * 0x10) * (fVar14 + (fVar19 - (fVar17 + fVar17))) +
             (float)(&DAT_0216f430)[uVar2 * 4] * (fVar18 - fVar16) +
             (float)(&DAT_0216f430)[uVar1 * 4] * ((fVar16 - fVar18) + 1.0);
  }
LAB_01493f98:
  local_1b8 = 0;
  pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 +
                    ((ulong)(long)(fVar13 * DAT_01d4c05c) >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)((uint)(long)(fVar13 * DAT_01d4c05c) & 0xffffff) * DAT_01d4bc78;
  fVar14 = ((fVar16 / DAT_01d4c6b8) * fVar12) / fVar12;
  fVar18 = *pfVar3 + pfVar3[2] * fVar17;
  fVar16 = pfVar3[1] + pfVar3[3] * fVar17;
  local_1c0 = (fVar18 * fVar15 + fVar14 * fVar18 * fVar11 + fVar9) / DAT_01d4c030;
  fStack_1bc = (fVar16 * fVar15 + fVar14 * fVar16 * fVar11 + fVar10) / DAT_01d4beac;
  if (cVar4 == '\0') {
    local_1b4 = *puVar7;
    uStack_1ac = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    local_1b4 = *puVar6;
    uStack_1ac = *(undefined8 *)(param_1 + 0x2c);
  }
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x54));
  fVar14 = (fVar14 / fVar12) * DAT_01d4c6b8;
  if (fVar14 <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    if (fVar14 <= DAT_01d4c580) {
      uVar8 = 1;
    }
    else if (fVar14 <= DAT_01d4bde8) {
      uVar8 = 2;
    }
    else {
      fVar16 = DAT_01d4c6b8;
      if (DAT_01d4c6b8 < fVar14) goto LAB_01494140;
      uVar8 = 3;
    }
    uVar1 = (ulong)(uVar8 - 1);
    uVar2 = (ulong)uVar8;
    fVar14 = fVar14 - (float)(&DAT_0216f42c)[uVar1 * 4];
    fVar16 = 1.0 / ((float)(&DAT_0216f42c)[uVar2 * 4] - (float)(&DAT_0216f42c)[uVar1 * 4]);
    fVar17 = fVar14 * fVar14 * fVar16;
    fVar19 = fVar14 * fVar16 * fVar17;
    fVar18 = fVar16 * fVar17 * 3.0;
    fVar16 = fVar16 * fVar19 + fVar16 * fVar19;
    fVar16 = *(float *)(&UNK_0216f434 + uVar2 * 0x10) * (fVar19 - fVar17) +
             *(float *)(&UNK_0216f438 + uVar1 * 0x10) * (fVar14 + (fVar19 - (fVar17 + fVar17))) +
             (float)(&DAT_0216f430)[uVar2 * 4] * (fVar18 - fVar16) +
             (float)(&DAT_0216f430)[uVar1 * 4] * ((fVar16 - fVar18) + 1.0);
  }
LAB_01494140:
  pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 +
                    ((ulong)(long)(fVar13 * DAT_01d4c608) >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)((uint)(long)(fVar13 * DAT_01d4c608) & 0xffffff) * DAT_01d4bc78;
  fVar14 = ((fVar16 / DAT_01d4c6b8) * fVar12) / fVar12;
  fVar18 = *pfVar3 + pfVar3[2] * fVar17;
  fVar16 = pfVar3[1] + pfVar3[3] * fVar17;
  local_180 = (fVar18 * fVar15 + fVar14 * fVar18 * fVar11 + fVar9) / DAT_01d4c030;
  fStack_17c = (fVar16 * fVar15 + fVar14 * fVar16 * fVar11 + fVar10) / DAT_01d4beac;
  local_178 = 0;
  if (cVar4 == '\0') {
    local_174 = *puVar7;
    uStack_16c = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    local_174 = *puVar6;
    uStack_16c = *(undefined8 *)(param_1 + 0x2c);
  }
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x58));
  fVar14 = (fVar14 / fVar12) * DAT_01d4c6b8;
  if (fVar14 <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    if (fVar14 <= DAT_01d4c580) {
      uVar8 = 1;
    }
    else if (fVar14 <= DAT_01d4bde8) {
      uVar8 = 2;
    }
    else {
      fVar16 = DAT_01d4c6b8;
      if (DAT_01d4c6b8 < fVar14) goto LAB_014942d8;
      uVar8 = 3;
    }
    uVar1 = (ulong)(uVar8 - 1);
    uVar2 = (ulong)uVar8;
    fVar14 = fVar14 - (float)(&DAT_0216f42c)[uVar1 * 4];
    fVar16 = 1.0 / ((float)(&DAT_0216f42c)[uVar2 * 4] - (float)(&DAT_0216f42c)[uVar1 * 4]);
    fVar17 = fVar14 * fVar14 * fVar16;
    fVar19 = fVar14 * fVar16 * fVar17;
    fVar18 = fVar16 * fVar17 * 3.0;
    fVar16 = fVar16 * fVar19 + fVar16 * fVar19;
    fVar16 = *(float *)(&UNK_0216f434 + uVar2 * 0x10) * (fVar19 - fVar17) +
             *(float *)(&UNK_0216f438 + uVar1 * 0x10) * (fVar14 + (fVar19 - (fVar17 + fVar17))) +
             (float)(&DAT_0216f430)[uVar2 * 4] * (fVar18 - fVar16) +
             (float)(&DAT_0216f430)[uVar1 * 4] * ((fVar16 - fVar18) + 1.0);
  }
LAB_014942d8:
  pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 +
                    ((ulong)(long)(fVar13 * DAT_01d4c548) >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)((uint)(long)(fVar13 * DAT_01d4c548) & 0xffffff) * DAT_01d4bc78;
  fVar14 = ((fVar16 / DAT_01d4c6b8) * fVar12) / fVar12;
  fVar18 = *pfVar3 + pfVar3[2] * fVar17;
  fVar16 = pfVar3[1] + pfVar3[3] * fVar17;
  local_140 = (fVar18 * fVar15 + fVar14 * fVar18 * fVar11 + fVar9) / DAT_01d4c030;
  fStack_13c = (fVar16 * fVar15 + fVar14 * fVar16 * fVar11 + fVar10) / DAT_01d4beac;
  local_138 = 0;
  if (cVar4 == '\0') {
    local_134 = *puVar7;
    uStack_12c = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    local_134 = *puVar6;
    uStack_12c = *(undefined8 *)(param_1 + 0x2c);
  }
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x5c));
  fVar14 = (fVar14 / fVar12) * DAT_01d4c6b8;
  if (fVar14 <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    if (fVar14 <= DAT_01d4c580) {
      uVar8 = 1;
    }
    else if (fVar14 <= DAT_01d4bde8) {
      uVar8 = 2;
    }
    else {
      fVar16 = DAT_01d4c6b8;
      if (DAT_01d4c6b8 < fVar14) goto LAB_01494470;
      uVar8 = 3;
    }
    uVar1 = (ulong)(uVar8 - 1);
    uVar2 = (ulong)uVar8;
    fVar14 = fVar14 - (float)(&DAT_0216f42c)[uVar1 * 4];
    fVar16 = 1.0 / ((float)(&DAT_0216f42c)[uVar2 * 4] - (float)(&DAT_0216f42c)[uVar1 * 4]);
    fVar17 = fVar14 * fVar14 * fVar16;
    fVar19 = fVar14 * fVar16 * fVar17;
    fVar18 = fVar16 * fVar17 * 3.0;
    fVar16 = fVar16 * fVar19 + fVar16 * fVar19;
    fVar16 = *(float *)(&UNK_0216f434 + uVar2 * 0x10) * (fVar19 - fVar17) +
             *(float *)(&UNK_0216f438 + uVar1 * 0x10) * (fVar14 + (fVar19 - (fVar17 + fVar17))) +
             (float)(&DAT_0216f430)[uVar2 * 4] * (fVar18 - fVar16) +
             (float)(&DAT_0216f430)[uVar1 * 4] * ((fVar16 - fVar18) + 1.0);
  }
LAB_01494470:
  pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 +
                    ((ulong)(long)(fVar13 * DAT_01d4c0d0) >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)((uint)(long)(fVar13 * DAT_01d4c0d0) & 0xffffff) * DAT_01d4bc78;
  fVar14 = ((fVar16 / DAT_01d4c6b8) * fVar12) / fVar12;
  fVar18 = *pfVar3 + pfVar3[2] * fVar17;
  fVar16 = pfVar3[1] + pfVar3[3] * fVar17;
  local_100 = (fVar18 * fVar15 + fVar14 * fVar18 * fVar11 + fVar9) / DAT_01d4c030;
  fStack_fc = (fVar16 * fVar15 + fVar14 * fVar16 * fVar11 + fVar10) / DAT_01d4beac;
  local_f8 = 0;
  if (cVar4 == '\0') {
    local_f4 = *puVar7;
    uStack_ec = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    local_f4 = *puVar6;
    uStack_ec = *(undefined8 *)(param_1 + 0x2c);
  }
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x60));
  fVar14 = (fVar14 / fVar12) * DAT_01d4c6b8;
  if (fVar14 <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    if (fVar14 <= DAT_01d4c580) {
      uVar8 = 1;
    }
    else if (fVar14 <= DAT_01d4bde8) {
      uVar8 = 2;
    }
    else {
      fVar16 = DAT_01d4c6b8;
      if (DAT_01d4c6b8 < fVar14) goto LAB_01494608;
      uVar8 = 3;
    }
    uVar1 = (ulong)(uVar8 - 1);
    uVar2 = (ulong)uVar8;
    fVar14 = fVar14 - (float)(&DAT_0216f42c)[uVar1 * 4];
    fVar16 = 1.0 / ((float)(&DAT_0216f42c)[uVar2 * 4] - (float)(&DAT_0216f42c)[uVar1 * 4]);
    fVar17 = fVar14 * fVar14 * fVar16;
    fVar19 = fVar14 * fVar16 * fVar17;
    fVar18 = fVar16 * fVar17 * 3.0;
    fVar16 = fVar16 * fVar19 + fVar16 * fVar19;
    fVar16 = *(float *)(&UNK_0216f434 + uVar2 * 0x10) * (fVar19 - fVar17) +
             *(float *)(&UNK_0216f438 + uVar1 * 0x10) * (fVar14 + (fVar19 - (fVar17 + fVar17))) +
             (float)(&DAT_0216f430)[uVar2 * 4] * (fVar18 - fVar16) +
             (float)(&DAT_0216f430)[uVar1 * 4] * ((fVar16 - fVar18) + 1.0);
  }
LAB_01494608:
  pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 +
                    ((ulong)(long)(fVar13 * DAT_01d4c358) >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)((uint)(long)(fVar13 * DAT_01d4c358) & 0xffffff) * DAT_01d4bc78;
  fVar14 = ((fVar16 / DAT_01d4c6b8) * fVar12) / fVar12;
  fVar18 = *pfVar3 + pfVar3[2] * fVar17;
  fVar16 = pfVar3[1] + pfVar3[3] * fVar17;
  local_c0 = (fVar18 * fVar15 + fVar14 * fVar18 * fVar11 + fVar9) / DAT_01d4c030;
  fStack_bc = (fVar16 * fVar15 + fVar14 * fVar16 * fVar11 + fVar10) / DAT_01d4beac;
  local_b8 = 0;
  if (cVar4 == '\0') {
    local_b4 = *puVar7;
    uStack_ac = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    local_b4 = *puVar6;
    uStack_ac = *(undefined8 *)(param_1 + 0x2c);
  }
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 100));
  fVar14 = (fVar14 / fVar12) * DAT_01d4c6b8;
  if (fVar14 <= 0.0) {
    fVar16 = 0.0;
  }
  else {
    if (fVar14 <= DAT_01d4c580) {
      uVar8 = 1;
    }
    else if (fVar14 <= DAT_01d4bde8) {
      uVar8 = 2;
    }
    else {
      fVar16 = DAT_01d4c6b8;
      if (DAT_01d4c6b8 < fVar14) goto LAB_014947a0;
      uVar8 = 3;
    }
    uVar1 = (ulong)(uVar8 - 1);
    uVar2 = (ulong)uVar8;
    fVar14 = fVar14 - (float)(&DAT_0216f42c)[uVar1 * 4];
    fVar16 = 1.0 / ((float)(&DAT_0216f42c)[uVar2 * 4] - (float)(&DAT_0216f42c)[uVar1 * 4]);
    fVar17 = fVar14 * fVar14 * fVar16;
    fVar19 = fVar14 * fVar16 * fVar17;
    fVar18 = fVar16 * fVar17 * 3.0;
    fVar16 = fVar16 * fVar19 + fVar16 * fVar19;
    fVar16 = *(float *)(&UNK_0216f434 + uVar2 * 0x10) * (fVar19 - fVar17) +
             *(float *)(&UNK_0216f438 + uVar1 * 0x10) * (fVar14 + (fVar19 - (fVar17 + fVar17))) +
             (float)(&DAT_0216f430)[uVar2 * 4] * (fVar18 - fVar16) +
             (float)(&DAT_0216f430)[uVar1 * 4] * ((fVar16 - fVar18) + 1.0);
  }
LAB_014947a0:
  pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 +
                    ((ulong)(long)(fVar13 * DAT_01d4c3c0) >> 0x18 & 0xff) * 0x10);
  fVar14 = (float)((uint)(long)(fVar13 * DAT_01d4c3c0) & 0xffffff) * DAT_01d4bc78;
  fVar12 = ((fVar16 / DAT_01d4c6b8) * fVar12) / fVar12;
  fVar13 = *pfVar3 + pfVar3[2] * fVar14;
  fVar14 = pfVar3[1] + pfVar3[3] * fVar14;
  local_80 = (fVar13 * fVar15 + fVar12 * fVar13 * fVar11 + fVar9) / DAT_01d4c030;
  fStack_7c = (fVar14 * fVar15 + fVar12 * fVar14 * fVar11 + fVar10) / DAT_01d4beac;
  local_78 = 0;
  if (cVar4 == '\0') {
    local_74 = *puVar7;
    uStack_6c = *(undefined8 *)(param_1 + 0x1c);
  }
  else {
    local_74 = *puVar6;
    uStack_6c = *(undefined8 *)(param_1 + 0x2c);
  }
  local_228 = DAT_0216f46c;
  uStack_220 = DAT_0216f474;
  local_208 = DAT_0216f48c;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_218 = DAT_0216f47c;
  uStack_210 = DAT_0216f484;
  local_400 = CONCAT44(local_400._4_4_,10);
  local_3f0 = 7;
  local_230 = 0x12;
  uVar5 = FUN_0073d860(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_400,&local_200,
                       &local_3f0,&local_228,&local_230);
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  local_3f0 = CONCAT44(fStack_1bc,local_1c0);
  local_3e8 = local_1b8;
  local_3e4 = *(undefined8 *)(param_1 + 0x34);
  local_3dc = *(undefined8 *)(param_1 + 0x3c);
  local_3b0 = CONCAT44(fStack_17c,local_180);
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_3a8 = local_178;
  local_39c = *(undefined8 *)(param_1 + 0x3c);
  local_3a4 = *(undefined8 *)(param_1 + 0x34);
  local_370 = CONCAT44(fStack_13c,local_140);
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_368 = local_138;
  local_35c = *(undefined8 *)(param_1 + 0x3c);
  local_364 = *(undefined8 *)(param_1 + 0x34);
  local_330 = CONCAT44(fStack_fc,local_100);
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_328 = local_f8;
  local_324 = *(undefined8 *)(param_1 + 0x34);
  local_31c = *(undefined8 *)(param_1 + 0x3c);
  local_2f0 = CONCAT44(fStack_bc,local_c0);
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_2e8 = local_b8;
  local_2e4 = *(undefined8 *)(param_1 + 0x34);
  local_2dc = *(undefined8 *)(param_1 + 0x3c);
  local_2b0 = CONCAT44(fStack_7c,local_80);
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_2a8 = local_78;
  local_2a4 = *(undefined8 *)(param_1 + 0x34);
  local_29c = *(undefined8 *)(param_1 + 0x3c);
  local_270 = CONCAT44(fStack_1bc,local_1c0);
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_268 = local_1b8;
  local_264 = *(undefined8 *)(param_1 + 0x34);
  local_25c = *(undefined8 *)(param_1 + 0x3c);
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_3f4 = 7;
  local_230 = 7;
  local_400 = 0;
  uVar5 = FUN_0073d860(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_3f4,&local_3f0,
                       &local_230,0,&local_400);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  return;
}


