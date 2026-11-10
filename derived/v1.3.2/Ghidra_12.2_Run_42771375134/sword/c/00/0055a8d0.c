/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055a8d0; name: FUN_0055a8d0
 */


ulong FUN_0055a8d0(long param_1)

{
  float *pfVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
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
  float fVar36;
  float fVar37;
  undefined8 *puVar38;
  long *local_240;
  undefined8 local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
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
  float local_128;
  float local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  float fStack_118;
  float local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  float fStack_108;
  float local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c4;
  
  uVar8 = FUN_00557160();
  puVar5 = PTR_DAT_027139b0;
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  iVar12 = *(int *)PTR_DAT_027139b0;
  if (iVar12 < 1) {
    plVar15 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar15,0);
    *(long **)PTR_DAT_027139b8 = plVar15;
    *(undefined4 *)puVar5 = 1;
    if (plVar15 != (long *)0x0) goto LAB_0055a940;
LAB_0055a9d0:
    iVar12 = 0;
  }
  else {
    plVar15 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar12 + 1;
    if (iVar12 + 1 < 2) {
      if (plVar15 == (long *)0x0) goto LAB_0055a9d0;
LAB_0055a940:
      uVar17 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar15 + 0x20))(plVar15);
      FUN_005b9b10(uVar17,plVar15);
      iVar12 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar5 = iVar12;
  iVar12 = *(int *)(param_1 + 0x3d8);
  lVar18 = *(long *)(param_1 + 0x170);
  FUN_00511040(&local_1e8,0);
  FUN_00511040(&local_168,0);
  if ((float)local_1e8 == (float)local_168) {
    if (local_1e8._4_4_ != local_168._4_4_) goto LAB_0055aaac;
    if ((float)local_1e0 != (float)local_160) goto LAB_0055aaac;
    if (local_1e0._4_4_ != local_160._4_4_) goto LAB_0055aaac;
    if ((float)local_1d8 != (float)local_158) goto LAB_0055aaac;
    if (local_1d8._4_4_ != local_158._4_4_) goto LAB_0055aaac;
    if ((float)local_1d0 != (float)local_150) goto LAB_0055aaac;
    if (local_1d0._4_4_ != local_150._4_4_) goto LAB_0055aaac;
    fVar19 = *(float *)(lVar18 + 0x30) * DAT_01d4be14 + *(float *)(lVar18 + 0x34) * DAT_01d4be80;
    fVar29 = *(float *)(lVar18 + 0x38) * DAT_01d4c3f8;
  }
  else {
LAB_0055aaac:
    FUN_00511bb0(&local_168,&local_1e8,&local_1e0,&local_1d8,&local_1d0);
    fVar19 = local_168._4_4_ * *(float *)(lVar18 + 0x30) +
             local_158._4_4_ * *(float *)(lVar18 + 0x34);
    fVar29 = local_148._4_4_ * *(float *)(lVar18 + 0x38);
  }
  fVar20 = (float)FUN_005584d0(param_1);
  fVar26 = DAT_01d4bc78;
  fVar21 = *(float *)(param_1 + 0x1cc);
  if (*(float *)(param_1 + 0x1cc) <= *(float *)(param_1 + 0x1d0)) {
    fVar21 = *(float *)(param_1 + 0x1d0);
  }
  if (fVar21 <= *(float *)(param_1 + 0x1d4)) {
    fVar21 = *(float *)(param_1 + 0x1d4);
  }
  iVar2 = *(int *)(param_1 + 0x414);
  lVar18 = *(long *)(param_1 + 0x170);
  if (fVar21 <= *(float *)(param_1 + 0x1d8)) {
    fVar21 = *(float *)(param_1 + 0x1d8);
  }
  bVar6 = *(char *)(param_1 + 0x1ac) != '\0';
  fVar21 = *(float *)(param_1 + 0x1c8) * fVar21;
  if (bVar6 && fVar21 <= DAT_01d4bc78) {
    fVar21 = DAT_01d4bc78;
  }
  fVar22 = *(float *)(param_1 + 0x1b8);
  if (*(float *)(param_1 + 0x1b8) <= *(float *)(param_1 + 0x1bc)) {
    fVar22 = *(float *)(param_1 + 0x1bc);
  }
  if (fVar22 <= *(float *)(param_1 + 0x1c0)) {
    fVar22 = *(float *)(param_1 + 0x1c0);
  }
  if (fVar22 <= *(float *)(param_1 + 0x1c4)) {
    fVar22 = *(float *)(param_1 + 0x1c4);
  }
  fVar22 = *(float *)(param_1 + 0x1b0) * fVar22;
  if (bVar6 && fVar22 <= DAT_01d4bc78) {
    fVar22 = DAT_01d4bc78;
  }
  FUN_00511040(&local_1e8,0);
  FUN_00511040(&local_168,0);
  if ((float)local_1e8 == (float)local_168) {
    if (local_1e8._4_4_ != local_168._4_4_) goto LAB_0055ac70;
    if ((float)local_1e0 != (float)local_160) goto LAB_0055ac70;
    if (local_1e0._4_4_ != local_160._4_4_) goto LAB_0055ac70;
    if ((float)local_1d8 != (float)local_158) goto LAB_0055ac70;
    if (local_1d8._4_4_ != local_158._4_4_) goto LAB_0055ac70;
    if ((float)local_1d0 != (float)local_150) goto LAB_0055ac70;
    if (local_1d0._4_4_ != local_150._4_4_) goto LAB_0055ac70;
    fVar23 = *(float *)(lVar18 + 0x18) * DAT_01d4be14 + *(float *)(lVar18 + 0x1c) * DAT_01d4be80;
    fVar30 = *(float *)(lVar18 + 0x20) * DAT_01d4c3f8;
  }
  else {
LAB_0055ac70:
    FUN_00511bb0(&local_168,&local_1e8,&local_1e0,&local_1d8,&local_1d0);
    fVar23 = local_168._4_4_ * *(float *)(lVar18 + 0x18) +
             local_158._4_4_ * *(float *)(lVar18 + 0x1c);
    fVar30 = local_148._4_4_ * *(float *)(lVar18 + 0x20);
  }
  lVar18 = *(long *)(param_1 + 0x170);
  FUN_00511040(&local_1e8,0);
  FUN_00511040(&local_168,0);
  if ((float)local_1e8 == (float)local_168) {
    if (local_1e8._4_4_ != local_168._4_4_) goto LAB_0055ad98;
    if ((float)local_1e0 != (float)local_160) goto LAB_0055ad98;
    if (local_1e0._4_4_ != local_160._4_4_) goto LAB_0055ad98;
    if ((float)local_1d8 != (float)local_158) goto LAB_0055ad98;
    if (local_1d8._4_4_ != local_158._4_4_) goto LAB_0055ad98;
    if ((float)local_1d0 != (float)local_150) goto LAB_0055ad98;
    if (local_1d0._4_4_ != local_150._4_4_) goto LAB_0055ad98;
    fVar24 = *(float *)(lVar18 + 0x18) * DAT_01d4be14 + *(float *)(lVar18 + 0x1c) * DAT_01d4be80;
    fVar31 = *(float *)(lVar18 + 0x20) * DAT_01d4c3f8;
  }
  else {
LAB_0055ad98:
    FUN_00511bb0(&local_168,&local_1e8,&local_1e0,&local_1d8,&local_1d0);
    fVar24 = local_168._4_4_ * *(float *)(lVar18 + 0x18) +
             local_158._4_4_ * *(float *)(lVar18 + 0x1c);
    fVar31 = local_148._4_4_ * *(float *)(lVar18 + 0x20);
  }
  fVar34 = *(float *)(param_1 + 0x1cc);
  fVar35 = *(float *)(param_1 + 0x1d0);
  fVar36 = *(float *)(param_1 + 0x1d4);
  fVar33 = fVar34;
  if (fVar34 <= fVar35) {
    fVar33 = fVar35;
  }
  fVar37 = *(float *)(param_1 + 0x1d8);
  cVar3 = *(char *)(param_1 + 0x1ac);
  if (fVar33 <= fVar36) {
    fVar33 = fVar36;
  }
  if (fVar33 <= fVar37) {
    fVar33 = fVar37;
  }
  fVar33 = *(float *)(param_1 + 0x1c8) * fVar33;
  uVar7 = FUN_00556fe0(param_1);
  local_168 = 0xbea8f5c3bea8f5c3;
  local_160 = 0xbea8f5c3bea8f5c3;
  local_158 = 0xbf0f5c29bf0f5c29;
  local_150 = 0xbf0f5c29bf0f5c29;
  local_148 = 0xbf400000bf400000;
  local_140 = 0xbf400000bf400000;
  local_138 = 0xbecccccdbecccccd;
  local_130 = 0xbecccccdbecccccd;
  local_11c = 0xbf59999a;
  fStack_118 = -0.25;
  local_124 = -0.85;
  uStack_120 = 0xbf59999a;
  local_128 = -0.85;
  local_10c = 0xbe800000;
  fStack_108 = -0.5;
  local_114 = -0.25;
  uStack_110 = 0xbe800000;
  local_fc = 0xbf000000;
  local_104 = -0.5;
  uStack_100 = 0xbf000000;
  local_f0 = 0xbf800000bf800000;
  local_f4 = -1.0;
  local_f8 = -1.0;
  fVar25 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4c5e0);
  local_168 = CONCAT44(fVar25,(float)local_168);
  local_160 = 0;
  fVar25 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4c4a4);
  local_158 = CONCAT44(fVar25,(float)local_158);
  local_150 = 0;
  fVar25 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4c378);
  local_148 = CONCAT44(fVar25,(float)local_148);
  local_140 = 0;
  fVar25 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4bbe4);
  local_138 = CONCAT44(fVar25,(float)local_138);
  local_130 = 0;
  local_124 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4bcd4);
  uStack_120 = 0;
  local_11c = 0;
  local_114 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4c37c);
  uStack_110 = 0;
  local_10c = 0;
  local_104 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4bf00);
  uStack_100 = 0;
  local_fc = 0;
  local_f4 = powf(2.5,*(float *)(param_1 + 0x1dc) * DAT_01d4be2c);
  local_1e8 = 0x3ca3d70b3d4ccccd;
  local_1d0 = 0x3cf5c290;
  local_1e0 = 0x3cf5c290;
  local_1d8 = 0x3d4ccccd3c75c290;
  local_1c8 = 0x3c75c2903cf5c290;
  local_1c0 = 0x3d4ccccd;
  local_1b8 = 0x3cf5c2903d4ccccd;
  local_f0 = 0;
  local_1b0 = 0x3c75c290;
  local_1a8 = 0x3d4ccccd3c75c290;
  local_1a0 = 0x3d0f5c29;
  local_198 = 0x3d3851ec3cb851ec;
  local_190 = 0x3d99999a;
  local_188 = 0x3d4ccccd3c75c290;
  local_180 = 0x3ccccccd;
  local_178 = 0x3e0000003e333333;
  local_170 = 0x3e800000;
  fVar25 = fVar33 * 0.5;
  if (fVar33 <= fVar26 && cVar3 != '\0') {
    fVar25 = DAT_01d4c380;
  }
  if (*(char *)(*(long *)(param_1 + 0x170) + 0x48) == '\0') {
    iVar2 = *(int *)(param_1 + 0x414);
    iVar12 = *(int *)(param_1 + 0x3d8) + -1;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
    iVar16 = 0;
    if (-1 < iVar2) {
      iVar16 = iVar12;
    }
    fVar32 = powf(4.0,(float)(iVar16 - iVar2 & iVar16 - iVar2 >> 0x1f));
    fVar26 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
    fVar33 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
    fVar32 = fVar32 * (1.0 / (fVar26 * fVar33));
    local_210 = *(undefined8 *)(*(long *)(param_1 + 800) + (long)iVar16 * 0x38 + 0x18);
    local_1e8 = CONCAT44(fVar32 * local_1e8._4_4_,fVar32 * (float)local_1e8);
    local_1e0 = CONCAT44(fVar32 * local_1e0._4_4_,fVar32 * (float)local_1e0);
    local_1d8 = CONCAT44(fVar32 * local_1d8._4_4_,fVar32 * (float)local_1d8);
    local_1d0 = CONCAT44(fVar32 * local_1d0._4_4_,fVar32 * (float)local_1d0);
    local_1c8 = CONCAT44(fVar32 * local_1c8._4_4_,fVar32 * (float)local_1c8);
    local_1c0 = CONCAT44(fVar32 * local_1c0._4_4_,fVar32 * (float)local_1c0);
    iVar2 = *(int *)(param_1 + 0x414);
    iVar12 = *(int *)(param_1 + 0x3d8) + -1;
    if (iVar2 + 1 <= iVar12) {
      iVar12 = iVar2 + 1;
    }
    iVar16 = 0;
    if (-2 < iVar2) {
      iVar16 = iVar12;
    }
    uVar4 = iVar16 - (iVar2 + 1);
    fVar32 = powf(4.0,(float)(int)(uVar4 & (int)uVar4 >> 0x1f));
    fVar26 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
    fVar33 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
    fVar32 = fVar32 * (1.0 / (fVar26 * fVar33));
    lVar18 = *(long *)(*(long *)(param_1 + 800) + (long)iVar16 * 0x38 + 0x18);
    local_1b8 = CONCAT44(fVar32 * local_1b8._4_4_,fVar32 * (float)local_1b8);
    local_1b0 = CONCAT44(fVar32 * local_1b0._4_4_,fVar32 * (float)local_1b0);
    local_1a8 = CONCAT44(fVar32 * local_1a8._4_4_,fVar32 * (float)local_1a8);
    local_1a0 = CONCAT44(fVar32 * local_1a0._4_4_,fVar32 * (float)local_1a0);
    iVar2 = *(int *)(param_1 + 0x3d8) + -1;
    iVar12 = *(int *)(param_1 + 0x414) + 2;
    if (iVar12 <= iVar2) {
      iVar2 = iVar12;
    }
    iVar16 = 0;
    if (-3 < *(int *)(param_1 + 0x414)) {
      iVar16 = iVar2;
    }
    fVar32 = powf(4.0,(float)(iVar16 - iVar12 & iVar16 - iVar12 >> 0x1f));
    fVar26 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
    fVar33 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
    lVar13 = *(long *)(*(long *)(param_1 + 800) + (long)iVar16 * 0x38 + 0x18);
    fVar32 = fVar32 * (1.0 / (fVar26 * fVar33));
  }
  else {
    iVar12 = iVar12 + -1;
    if (*(int *)(*(long *)(param_1 + 0x2f0) + 0x30) < 3) {
      local_210 = 0;
    }
    else {
      local_210 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0x38) + 0x10);
    }
    if (iVar2 + 1 <= iVar12) {
      iVar12 = iVar2 + 1;
    }
    iVar16 = 0;
    if (-2 < iVar2) {
      iVar16 = iVar12;
    }
    fVar32 = (float)iVar16;
    fVar26 = powf(*(float *)(param_1 + 0x1e4),fVar32);
    fVar33 = powf(*(float *)(param_1 + 0x3fc),fVar32);
    fVar26 = 1.0 / (fVar26 * fVar33);
    lVar18 = *(long *)(param_1 + 800) + (long)iVar16 * 0x38;
    lVar13 = *(long *)(lVar18 + 0x28);
    lVar18 = *(long *)(lVar18 + 0x18);
    if (lVar13 != 0) {
      lVar18 = lVar13;
    }
    local_1b8 = CONCAT44(fVar26 * local_1b8._4_4_,fVar26 * (float)local_1b8);
    local_1b0 = CONCAT44(fVar26 * local_1b0._4_4_,fVar26 * (float)local_1b0);
    local_1a8 = CONCAT44(fVar26 * local_1a8._4_4_,fVar26 * (float)local_1a8);
    local_1a0 = CONCAT44(fVar26 * local_1a0._4_4_,fVar26 * (float)local_1a0);
    fVar26 = powf(*(float *)(param_1 + 0x1e4),fVar32);
    fVar33 = powf(*(float *)(param_1 + 0x3fc),fVar32);
    lVar13 = *(long *)(param_1 + 800) + (long)iVar16 * 0x38;
    fVar32 = 1.0 / (fVar26 * fVar33);
    lVar14 = *(long *)(lVar13 + 0x28);
    lVar13 = *(long *)(lVar13 + 0x18);
    if (lVar14 != 0) {
      lVar13 = lVar14;
    }
  }
  local_240 = (long *)(param_1 + 800);
  local_198 = CONCAT44(fVar32 * local_198._4_4_,fVar32 * (float)local_198);
  local_190 = CONCAT44(fVar32 * local_190._4_4_,fVar32 * (float)local_190);
  local_188 = CONCAT44(fVar32 * local_188._4_4_,fVar32 * (float)local_188);
  local_180 = CONCAT44(fVar32 * local_180._4_4_,fVar32 * (float)local_180);
  iVar2 = *(int *)(param_1 + 0x3d8) + -1;
  iVar12 = *(int *)(param_1 + 0x414) + 2;
  if (iVar12 <= iVar2) {
    iVar2 = iVar12;
  }
  iVar16 = 0;
  if (-3 < *(int *)(param_1 + 0x414)) {
    iVar16 = iVar2;
  }
  fVar32 = powf(4.0,(float)(iVar16 - iVar12 & iVar16 - iVar12 >> 0x1f));
  fVar26 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
  fVar33 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
  fVar32 = fVar32 * (1.0 / (fVar26 * fVar33));
  uVar17 = *(undefined8 *)(*(long *)(param_1 + 800) + (long)iVar16 * 0x38 + 0x18);
  local_178 = CONCAT44(fVar32 * local_178._4_4_ * DAT_01d4c384,
                       fVar32 * (float)local_178 * DAT_01d4c384);
  local_170 = CONCAT44(fVar32 * local_170._4_4_ * DAT_01d4c384,
                       fVar32 * (float)local_170 * DAT_01d4c384);
  if (*(float *)(param_1 + 0x250) <= 0.0) {
    fVar26 = *(float *)(param_1 + 0x158);
  }
  else {
    fVar26 = (*(float *)(param_1 + 0x268) / *(float *)(param_1 + 0x250)) * 0.5;
  }
  fVar32 = logf(fVar26);
  fVar26 = cosf(fVar32 * 1.5);
  local_158._0_4_ = (float)local_158 * (fVar26 * 0.25 + 0.75);
  fVar26 = cosf(fVar32 * -2.5 + 0.0);
  local_138._0_4_ = (float)local_138 * (fVar26 * 0.5 + 1.5);
  fVar27 = cosf(fVar32 * DAT_01d4bbe8 + DAT_01d4c388);
  fVar33 = DAT_01d4c4a8;
  fVar26 = DAT_01d4bf50;
  local_128 = local_128 * (fVar27 * 0.25 + DAT_01d4bf50);
  fVar32 = cosf(fVar32 * DAT_01d4c7a4 + DAT_01d4c4a8);
  fStack_108 = fStack_108 * (fVar32 * DAT_01d4c774 + fVar26);
  local_e8 = -1.0;
  pfVar1 = (float *)&local_168;
  if ((float)local_168 <= -1.0) {
    pfVar1 = &local_e8;
  }
  local_168._0_4_ = *pfVar1;
  local_e8 = -1.0;
  pfVar1 = (float *)&local_158;
  if ((float)local_158 <= -1.0) {
    pfVar1 = &local_e8;
  }
  local_158._0_4_ = *pfVar1;
  local_e8 = -1.0;
  pfVar1 = (float *)&local_148;
  if ((float)local_148 <= -1.0) {
    pfVar1 = &local_e8;
  }
  local_e8 = -1.0;
  local_148._0_4_ = *pfVar1;
  pfVar1 = (float *)&local_138;
  if ((float)local_138 <= -1.0) {
    pfVar1 = &local_e8;
  }
  local_e8 = -1.0;
  local_138._0_4_ = *pfVar1;
  pfVar1 = &local_128;
  if (local_128 <= -1.0) {
    pfVar1 = &local_e8;
  }
  local_e8 = -1.0;
  local_128 = *pfVar1;
  pfVar1 = &fStack_118;
  if (fStack_118 <= -1.0) {
    pfVar1 = &local_e8;
  }
  fStack_118 = *pfVar1;
  local_e8 = -1.0;
  pfVar1 = &fStack_108;
  if (fStack_108 <= -1.0) {
    pfVar1 = &local_e8;
  }
  fStack_108 = *pfVar1;
  local_e8 = -1.0;
  pfVar1 = &local_f8;
  if (local_f8 <= -1.0) {
    pfVar1 = &local_e8;
  }
  local_f8 = *pfVar1;
  fVar32 = *(float *)(*(long *)(param_1 + 0x170) + 0x44);
  fVar26 = fVar32 * 0.5;
  if (*(float *)(param_1 + 0x1dc) != 0.0) {
    fVar26 = fVar32;
  }
  if (*(int *)(*(long *)(param_1 + 0x340) + 0x30) < 2) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x340) + 0x38) + 8);
  }
  puVar38 = &local_1e8;
  uVar8 = FUN_00588e40(fVar26 + fVar26,plVar15,local_210,lVar18,lVar13,uVar17,
                       *(undefined8 *)(param_1 + 0x348),uVar11,&local_168,puVar38,
                       *(undefined4 *)(param_1 + 0x2e4),0);
  if ((int)uVar8 < 0) {
    return uVar8;
  }
  fVar20 = fVar20 * (fVar19 + fVar29) * DAT_01d4c158 * 20.0;
  fVar19 = (fVar21 * fVar22 * 0.5) / (fVar23 + fVar30);
  fVar22 = (0.5 / (fVar24 + fVar31)) * 0.125;
  fVar23 = fVar19 * DAT_01d4bd5c;
  fVar32 = fVar19 * DAT_01d4c08c;
  fVar30 = fVar19 * DAT_01d4baec;
  fVar19 = fVar19 * 0.0;
  local_168 = CONCAT44(local_168._4_4_,0x3f800000);
  fVar29 = fVar22 * DAT_01d4c740;
  fVar24 = fVar22 * DAT_01d4c000;
  fVar21 = fVar22 * DAT_01d4c6d4;
  fVar22 = fVar22 * 0.0;
  fVar36 = fVar36 * fVar25;
  fVar37 = fVar37 * fVar25;
  fVar31 = *(float *)(param_1 + 0x1dc);
  fVar26 = exp2f(fVar31 * DAT_01d4c16c);
  local_158 = CONCAT44(local_158._4_4_,0x3e4ccccd);
  local_168 = CONCAT44(fVar26,(float)local_168);
  local_160 = 0;
  fVar26 = exp2f(fVar31 * DAT_01d4c744);
  local_148 = CONCAT44(local_148._4_4_,0xbe99999a);
  local_158 = CONCAT44(fVar26,(float)local_158);
  local_150 = 0;
  fVar26 = exp2f(fVar31 * DAT_01d4c5e4);
  local_148 = CONCAT44(fVar26,(float)local_148);
  local_140 = 0;
  local_138 = CONCAT44(local_138._4_4_,0xbf800000);
  fVar26 = exp2f(fVar31 * DAT_01d4c004);
  local_128 = -7.0;
  local_138 = CONCAT44(fVar26,(float)local_138);
  local_130 = 0;
  local_124 = exp2f(fVar31 * DAT_01d4c31c);
  fStack_118 = 4.0;
  uStack_120 = 0;
  local_11c = 0;
  local_114 = exp2f(fVar31 * DAT_01d4c008);
  fStack_108 = 2.0;
  uStack_110 = 0;
  local_10c = 0;
  local_104 = exp2f(fVar31 * DAT_01d4c510);
  local_f8 = -1.6;
  uStack_100 = 0;
  local_fc = 0;
  local_f4 = exp2f(fVar31 * DAT_01d4c090);
  local_1e8 = CONCAT44(fVar20 * 0.375,fVar20 * DAT_01d4bacc);
  fVar26 = fVar20 * 0.0;
  local_1d0 = CONCAT44(fVar26,fVar20 * 0.5);
  local_1c8 = CONCAT44(fVar20 * DAT_01d4bccc,fVar20 * DAT_01d4be64);
  local_1c0 = CONCAT44(fVar26,fVar20 * DAT_01d4c0e4);
  local_1b8 = CONCAT44(fVar20 * DAT_01d4bd60,fVar20 * DAT_01d4c408);
  local_1a8 = CONCAT44(fVar20 * DAT_01d4c5e8,fVar20 * DAT_01d4c514);
  local_1a0 = CONCAT44(fVar26,fVar20 * DAT_01d4bdbc);
  local_1b0 = CONCAT44(fVar26,fVar20 * DAT_01d4baf0);
  local_198 = CONCAT44(fVar20 * DAT_01d4bd94,fVar20 * DAT_01d4c00c);
  local_f0 = 0;
  local_1e0 = CONCAT44(fVar26,fVar20 * 1.5);
  local_1d8 = CONCAT44(fVar20 * DAT_01d4c554,fVar20);
  local_190 = CONCAT44(fVar26,fVar20 * DAT_01d4be98);
  local_188 = CONCAT44(fVar20 * DAT_01d4c5ec,fVar20 * DAT_01d4c6ac);
  local_170 = CONCAT44(fVar26,fVar20 * DAT_01d4bd94);
  local_180 = CONCAT44(fVar26,fVar20 * DAT_01d4be98);
  local_178 = CONCAT44(fVar20 * DAT_01d4c518,fVar20 * DAT_01d4be30);
  lVar18 = *(long *)(param_1 + 0x340);
  if (*(char *)(*(long *)(param_1 + 0x170) + 0x48) == '\0') {
    if (*(int *)(lVar18 + 0x30) < 2) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
    }
    iVar2 = *(int *)(param_1 + 0x3d8) + -1;
    iVar12 = *(int *)(param_1 + 0x414) + 2;
    if (iVar12 <= iVar2) {
      iVar2 = iVar12;
    }
    iVar16 = 0;
    if (-3 < *(int *)(param_1 + 0x414)) {
      iVar16 = iVar2;
    }
    fVar26 = powf(4.0,(float)(iVar16 - iVar12 & iVar16 - iVar12 >> 0x1f));
    fVar20 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
    fVar31 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
    fVar27 = *(float *)(*(long *)(param_1 + 0x170) + 0x40) * DAT_01d4bdc0;
    fVar28 = 1.0;
    if (fVar27 != 1.0) {
      fVar28 = powf(fVar27,(float)(iVar16 - *(int *)(param_1 + 0x414)));
    }
    fVar28 = fVar26 * (1.0 / (fVar20 * fVar31)) * fVar28;
    uVar11 = *(undefined8 *)(*local_240 + (long)iVar16 * 0x38 + 0x18);
    if ((uVar7 & 1) == 0) {
LAB_0055bfc4:
      local_1a8 = CONCAT44(fVar28 * local_1a8._4_4_,fVar28 * (float)local_1a8);
      local_1a0 = CONCAT44(fVar28 * local_1a0._4_4_,fVar28 * (float)local_1a0);
    }
    else {
      lVar18 = *(long *)(param_1 + 0x170);
      FUN_00511040(&local_208,0);
      FUN_00511040(&local_e8,0);
      if (((((local_208 == local_e8) && (local_204 == local_e4)) && (local_200 == local_e0)) &&
          ((local_1fc == local_dc && (local_1f8 == local_d8)))) &&
         ((local_1f4 == local_d4 && ((local_1f0 == local_d0 && (local_1ec == local_cc)))))) {
        fVar26 = *(float *)(lVar18 + 0x18) * DAT_01d4be14 + *(float *)(lVar18 + 0x1c) * DAT_01d4be80
                 + *(float *)(lVar18 + 0x20) * DAT_01d4c3f8;
      }
      else {
        FUN_00511bb0(&local_e8,&local_208,&local_200,&local_1f8,&local_1f0);
        fVar26 = local_e4 * *(float *)(lVar18 + 0x18) + local_d4 * *(float *)(lVar18 + 0x1c) +
                 local_c4 * *(float *)(lVar18 + 0x20);
      }
      if (fVar26 <= 0.0) goto LAB_0055bfc4;
      uVar11 = *(undefined8 *)(param_1 + 0x318);
      local_128 = -1.0;
      fStack_118 = -1.8;
      local_10c = 0x3f7ae148;
      fStack_108 = -1.8;
      local_fc = 0x3f7ae148;
      local_180 = CONCAT44(fVar19,fVar30);
      local_198._4_4_ = fVar32 * fVar33;
      local_190._0_4_ = fVar30 * fVar33 * 1.5;
      local_1a8 = CONCAT44(fVar21 * 0.5,fVar29 * 0.5);
      local_198._0_4_ = fVar23 * fVar33;
      local_1a0 = CONCAT44(fVar22 * 0.5,fVar24 * 0.5);
      local_190._4_4_ = fVar19 * fVar33;
      local_188 = CONCAT44(fVar32,fVar23);
    }
    local_198 = CONCAT44(fVar28 * local_198._4_4_,fVar28 * (float)local_198);
    local_190 = CONCAT44(fVar28 * local_190._4_4_,fVar28 * (float)local_190);
    iVar2 = *(int *)(param_1 + 0x414);
    iVar12 = *(int *)(param_1 + 0x3d8) + -1;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
    iVar16 = 0;
    if (-1 < iVar2) {
      iVar16 = iVar12;
    }
    fVar21 = powf(4.0,(float)(iVar16 - iVar2 & iVar16 - iVar2 >> 0x1f));
    fVar19 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
    fVar29 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
    fVar21 = fVar21 * (1.0 / (fVar19 * fVar29));
    if ((uVar7 & 1) != 0) {
      fVar36 = fVar36 * 0.5;
      uVar9 = *(undefined8 *)(param_1 + 0x338);
      local_f8 = -1.0;
      local_178 = CONCAT44(fVar35 * fVar25 * 0.5,fVar34 * fVar25 * 0.5);
      fVar37 = fVar37 * 0.5;
      goto LAB_0055c1cc;
    }
    lVar18 = *local_240;
  }
  else {
    if (*(int *)(lVar18 + 0x30) < 2) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + 8);
    }
    fStack_118 = -3.0;
    local_128 = -1.0;
    iVar2 = *(int *)(param_1 + 0x414);
    iVar12 = *(int *)(param_1 + 0x3d8) + -1;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
    iVar16 = 0;
    if (-1 < iVar2) {
      iVar16 = iVar12;
    }
    fVar26 = powf(4.0,(float)(iVar16 - iVar2 & iVar16 - iVar2 >> 0x1f));
    fVar20 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
    fVar31 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 800) + (long)iVar16 * 0x38 + 0x18);
    fVar26 = fVar26 * (1.0 / (fVar20 * fVar31));
    if ((uVar7 & 1) == 0) {
LAB_0055bc44:
      local_1a8 = CONCAT44(fVar26 * local_1a8._4_4_ * 8.0,fVar26 * (float)local_1a8 * 8.0);
      local_1a0 = CONCAT44(fVar26 * local_1a0._4_4_ * 8.0,fVar26 * (float)local_1a0 * 8.0);
    }
    else {
      lVar18 = *(long *)(param_1 + 0x170);
      FUN_00511040(&local_208,0);
      FUN_00511040(&local_e8,0);
      if ((((local_208 == local_e8) && (local_204 == local_e4)) && (local_200 == local_e0)) &&
         (((local_1fc == local_dc && (local_1f8 == local_d8)) &&
          ((local_1f4 == local_d4 && ((local_1f0 == local_d0 && (local_1ec == local_cc)))))))) {
        fVar20 = *(float *)(lVar18 + 0x18) * DAT_01d4be14 + *(float *)(lVar18 + 0x1c) * DAT_01d4be80
                 + *(float *)(lVar18 + 0x20) * DAT_01d4c3f8;
      }
      else {
        FUN_00511bb0(&local_e8,&local_208,&local_200,&local_1f8,&local_1f0);
        fVar20 = local_e4 * *(float *)(lVar18 + 0x18) + local_d4 * *(float *)(lVar18 + 0x1c) +
                 local_c4 * *(float *)(lVar18 + 0x20);
      }
      if (fVar20 <= 0.0) goto LAB_0055bc44;
      uVar11 = *(undefined8 *)(param_1 + 0x318);
      local_128 = -1.0;
      fStack_118 = -1.8;
      local_10c = 0x3f7ae148;
      fStack_108 = -1.8;
      local_fc = 0x3f7ae148;
      local_180 = CONCAT44(fVar19 + fVar19,fVar30 + fVar30);
      local_1a8 = CONCAT44(fVar21 + fVar21,fVar29 + fVar29);
      local_1a0 = CONCAT44(fVar22 + fVar22,fVar24 + fVar24);
      local_198._4_4_ = fVar32 * fVar33 + fVar32 * fVar33;
      local_198._0_4_ = fVar23 * fVar33 + fVar23 * fVar33;
      local_190._4_4_ = fVar19 * fVar33 + fVar19 * fVar33;
      local_190._0_4_ = (fVar30 * fVar33 + fVar30 * fVar33) * 1.5;
      local_188 = CONCAT44(fVar32 + fVar32,fVar23 + fVar23);
    }
    local_198 = CONCAT44(fVar26 * (local_198._4_4_ + local_198._4_4_),
                         fVar26 * ((float)local_198 + (float)local_198));
    local_190 = CONCAT44(fVar26 * (local_190._4_4_ + local_190._4_4_),
                         fVar26 * ((float)local_190 + (float)local_190));
    iVar2 = *(int *)(param_1 + 0x414);
    iVar12 = *(int *)(param_1 + 0x3d8) + -1;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
    iVar16 = 0;
    if (-1 < iVar2) {
      iVar16 = iVar12;
    }
    fVar21 = powf(4.0,(float)(iVar16 - iVar2 & iVar16 - iVar2 >> 0x1f));
    fVar19 = powf(*(float *)(param_1 + 0x1e4),(float)iVar16);
    fVar29 = powf(*(float *)(param_1 + 0x3fc),(float)iVar16);
    fVar21 = fVar21 * (1.0 / (fVar19 * fVar29));
    if ((uVar7 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x338);
      local_f8 = -1.0;
      local_178 = CONCAT44(fVar35 * fVar25,fVar34 * fVar25);
      goto LAB_0055c1cc;
    }
    lVar18 = *local_240;
  }
  uVar9 = *(undefined8 *)(lVar18 + (long)iVar16 * 0x38 + 0x18);
  fVar36 = fVar21 * (float)local_170;
  local_178 = CONCAT44(fVar21 * local_178._4_4_,fVar21 * (float)local_178);
  fVar37 = fVar21 * local_170._4_4_;
LAB_0055c1cc:
  local_188 = CONCAT44(fVar21 * local_188._4_4_,fVar21 * (float)local_188);
  local_170 = CONCAT44(fVar37,fVar36);
  local_180 = CONCAT44(fVar21 * local_180._4_4_,fVar21 * (float)local_180);
  fVar29 = *(float *)(*(long *)(param_1 + 0x170) + 0x44);
  fVar19 = fVar29 * 0.5;
  if (*(float *)(param_1 + 0x1dc) != 0.0) {
    fVar19 = fVar29;
  }
  lVar18 = *(long *)(param_1 + 0x340);
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x30) < 1)) {
    uVar10 = 0;
  }
  else {
    uVar10 = **(undefined8 **)(lVar18 + 0x38);
  }
  uVar7 = FUN_00589740(fVar19 * 0.0,plVar15,uVar17,uVar11,uVar9,uVar10,&local_168,&local_1e8,
                       *(undefined4 *)(param_1 + 0x2e4),(ulong)puVar38 & 0xffffffff00000000);
  return (ulong)(uVar7 & (int)uVar7 >> 0x1f);
}


