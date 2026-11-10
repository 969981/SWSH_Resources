/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a0800; name: FUN_003a0800
 */


/* WARNING: Removing unreachable block (ram,0x003a09a8) */
/* WARNING: Removing unreachable block (ram,0x003a0890) */
/* WARNING: Removing unreachable block (ram,0x003a0a6c) */

void FUN_003a0800(uint *param_1)

{
  undefined4 *puVar1;
  undefined1 (*pauVar2) [12];
  uint *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 (*pauVar12) [12];
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  long lVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [12];
  uint *puVar21;
  uint *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  ulong uVar30;
  undefined8 uVar31;
  float *pfVar32;
  ulong uVar33;
  float fVar34;
  undefined1 auVar35 [12];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined8 local_30d0;
  float local_30c8;
  float local_30c4;
  undefined8 local_30c0;
  undefined8 local_30b8;
  float local_30b0;
  float fStack_30ac;
  undefined8 local_30a8;
  undefined8 local_30a0;
  float local_3098;
  float fStack_3094;
  undefined8 local_3090;
  undefined8 local_3088;
  float local_3080;
  float local_307c;
  undefined8 local_3078;
  undefined1 auStack_3070 [8192];
  undefined8 auStack_1070 [512];
  
  puVar16 = auStack_3070;
  if ((char)param_1[0x7a0] == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x7a0) = 0;
  uVar6 = *param_1;
  uVar33 = (ulong)uVar6;
  if (uVar6 == 0) {
    param_1[0xca] = 0;
    return;
  }
  plVar13 = (long *)FUN_00400d30();
  lVar14 = (**(code **)(*plVar13 + 0x10))
                     (plVar13,uVar33 << 3,"NonTrackedAlloc",
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                      ,0x447);
  lVar18 = *(long *)(param_1 + 4);
  if (uVar6 == 1) {
    lVar25 = 0;
LAB_003a08d8:
    *(undefined8 *)(lVar14 + lVar25 * 8) = *(undefined8 *)(lVar18 + lVar25 * 0x10);
    *(long *)(lVar18 + lVar25 * 0x10) = lVar25;
  }
  else {
    lVar25 = 0;
    plVar13 = (long *)(lVar18 + 0x10);
    do {
      plVar4 = (long *)(lVar14 + lVar25 * 8);
      *plVar4 = plVar13[-2];
      lVar23 = lVar25 + 1;
      plVar13[-2] = lVar25;
      lVar25 = lVar25 + 2;
      plVar4[1] = *plVar13;
      *plVar13 = lVar23;
      plVar13 = plVar13 + 4;
    } while (uVar33 - (uVar33 & 1) != lVar25);
    if ((uVar6 & 1) != 0) goto LAB_003a08d8;
  }
  if (uVar6 < 0x101) {
    puVar15 = auStack_1070;
  }
  else {
    plVar13 = (long *)FUN_00400d30();
    puVar15 = (undefined8 *)
              (**(code **)(*plVar13 + 0x10))
                        (plVar13,uVar33 << 4,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                         ,0x456);
    plVar13 = (long *)FUN_00400d30();
    puVar16 = (undefined1 *)
              (**(code **)(*plVar13 + 0x10))
                        (plVar13,uVar33 << 5,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                         ,0x457);
  }
  lVar18 = *(long *)(param_1 + 2);
  lVar25 = *(long *)(param_1 + 4);
  uVar17 = uVar6 - 1;
  uVar26 = (ulong)uVar17;
  pauVar19 = (undefined1 (*) [16])(lVar18 + uVar26 * 0x18);
  auVar37 = *pauVar19;
  auVar35 = auVar37._0_12_;
  auVar40 = *(undefined1 (*) [12])(*pauVar19 + 0xc);
  auVar41._12_4_ = 0;
  auVar41._0_12_ = auVar40;
  if (uVar17 != 0) {
    if (uVar17 == 1) {
      lVar23 = 0;
    }
    else {
      lVar23 = 0;
      pauVar20 = (undefined1 (*) [12])(lVar18 + 0x18);
      do {
        auVar36._12_4_ = (int)((ulong)*(undefined8 *)(pauVar20[-2] + 8) >> 0x20);
        auVar36._0_12_ = pauVar20[-2];
        auVar36 = NEON_fmin(auVar37,auVar36,4);
        auVar37._12_4_ = (int)((ulong)*(undefined8 *)(pauVar20[-1] + 8) >> 0x20);
        auVar37._0_12_ = pauVar20[-1];
        auVar41 = NEON_fmax(auVar41,auVar37,4);
        auVar10._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20);
        auVar10._0_12_ = *pauVar20;
        auVar37 = NEON_fmin(auVar36,auVar10,4);
        auVar35 = auVar37._0_12_;
        pauVar2 = pauVar20 + 1;
        pauVar12 = pauVar20 + 1;
        pauVar20 = pauVar20 + 4;
        lVar23 = lVar23 + 2;
        auVar11._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
        auVar11._0_12_ = *pauVar2;
        auVar41 = NEON_fmax(auVar41,auVar11,4);
        auVar40 = auVar41._0_12_;
      } while (uVar26 - (uVar26 & 1) != lVar23);
      if ((uVar17 & 1) == 0) goto LAB_003a0a04;
    }
    pauVar20 = (undefined1 (*) [12])(lVar18 + lVar23 * 0x18);
    auVar8._12_4_ = (int)((ulong)*(undefined8 *)(pauVar20[1] + 8) >> 0x20);
    auVar8._0_12_ = pauVar20[1];
    auVar41 = NEON_fmax(auVar41,auVar8,4);
    auVar40 = auVar41._0_12_;
    auVar9._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar20 + 8) >> 0x20);
    auVar9._0_12_ = *pauVar20;
    auVar37 = NEON_fmin(auVar37,auVar9,4);
    auVar35 = auVar37._0_12_;
  }
LAB_003a0a04:
  *(ulong *)(param_1 + 0xd0) =
       CONCAT44((auVar40._4_4_ + auVar35._4_4_) * 0.5,(auVar40._0_4_ + auVar35._0_4_) * 0.5);
  fVar39 = (auVar40._4_4_ - auVar35._4_4_) * 0.5;
  param_1[0xd2] = (uint)((auVar40._8_4_ + auVar35._8_4_) * 0.5);
  *(ulong *)(param_1 + 0xd4) = CONCAT44(fVar39,(auVar40._0_4_ - auVar35._0_4_) * 0.5);
  param_1[0xd6] = (uint)((auVar40._8_4_ - auVar35._8_4_) * 0.5);
  fVar39 = fabsf(fVar39);
  fVar34 = fabsf((float)param_1[0xd6]);
  uVar17 = 2;
  if (fVar39 < fVar34) {
    uVar17 = 1;
  }
  if (uVar6 == 1) {
    lVar23 = 0;
  }
  else {
    puVar27 = (undefined4 *)(lVar18 + (ulong)uVar17 * 4);
    lVar23 = 0;
    puVar29 = (undefined4 *)((long)puVar15 + 4);
    do {
      puVar29[-1] = *puVar27;
      puVar1 = puVar27 + 6;
      lVar23 = lVar23 + 2;
      puVar27 = puVar27 + 0xc;
      *puVar29 = *puVar1;
      puVar29 = puVar29 + 2;
    } while (uVar33 - (uVar33 & 1) != lVar23);
    if ((uVar6 & 1) == 0) goto LAB_003a0ab4;
  }
  *(undefined4 *)((long)puVar15 + lVar23 * 4) =
       *(undefined4 *)(lVar18 + lVar23 * 0x18 + (ulong)uVar17 * 4);
LAB_003a0ab4:
  FUN_002d4570(&local_30d0);
                    /* try { // try from 003a0abc to 003a0acb has its CatchHandler @ 003a1234 */
  lVar23 = FUN_002d47f0(&local_30d0,puVar15,uVar33);
  puVar24 = (undefined8 *)(puVar16 + 0x10);
  puVar21 = *(uint **)(lVar23 + 0x10);
  puVar28 = puVar15;
  uVar26 = uVar33;
  do {
    pfVar32 = (float *)(lVar18 + (ulong)*puVar21 * 0x18);
    auVar35 = *(undefined1 (*) [12])(pfVar32 + 3);
    puVar5 = (undefined8 *)(lVar25 + (ulong)*puVar21 * 0x10);
    uVar26 = uVar26 - 1;
    auVar42._0_8_ = CONCAT44((pfVar32[1] + auVar35._4_4_) * 0.5,(*pfVar32 + auVar35._0_4_) * 0.5);
    auVar42._8_4_ = (pfVar32[2] + auVar35._8_4_) * 0.5;
    auVar42._12_4_ = (pfVar32[3] + 0.0) * 0.5;
    auVar38._0_8_ = CONCAT44((auVar35._4_4_ - pfVar32[1]) * 0.5,(auVar35._0_4_ - *pfVar32) * 0.5);
    auVar38._8_4_ = (auVar35._8_4_ - pfVar32[2]) * 0.5;
    auVar38._12_4_ = (0.0 - pfVar32[3]) * 0.5;
    puVar24[-1] = auVar42._8_8_;
    puVar24[-2] = auVar42._0_8_;
    puVar24[1] = auVar38._8_8_;
    *puVar24 = auVar38._0_8_;
    puVar28[1] = puVar5[1];
    puVar24 = puVar24 + 4;
    *puVar28 = *puVar5;
    puVar21 = puVar21 + 1;
    puVar28 = puVar28 + 2;
  } while (uVar26 != 0);
  FUN_002d45a0(&local_30d0);
  param_1[0xcc] = uVar17;
  FUN_0039f9e0(param_1,uVar6);
  puVar21 = param_1 + 0xd8;
  FUN_0039f1d0(puVar21,uVar6,puVar16,puVar15,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 10),0);
  puVar3 = param_1 + 0x110;
  FUN_003a1250(uVar6,puVar16,puVar15,puVar21,puVar3,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 10),param_1[0xcc]);
  FUN_003a1250(uVar6,puVar16,puVar15,puVar3,param_1 + 0x228,
               *(long *)(param_1 + 8) + (ulong)param_1[0xdd] * 0x20,
               *(long *)(param_1 + 10) + (ulong)param_1[0xdd] * 0x10,param_1[0xcc]);
  FUN_003a1250(uVar6,puVar16,puVar15,param_1 + 0x148,param_1 + 0x340,
               *(long *)(param_1 + 8) + (ulong)param_1[0xde] * 0x20,
               *(long *)(param_1 + 10) + (ulong)param_1[0xde] * 0x10,param_1[0xcc]);
  FUN_003a1250(uVar6,puVar16,puVar15,param_1 + 0x180,param_1 + 0x458,
               *(long *)(param_1 + 8) + (ulong)param_1[0xdf] * 0x20,
               *(long *)(param_1 + 10) + (ulong)param_1[0xdf] * 0x10,param_1[0xcc]);
  FUN_003a1250(uVar6,puVar16,puVar15,param_1 + 0x1b8,param_1 + 0x570,
               *(long *)(param_1 + 8) + (ulong)param_1[0xe0] * 0x20,
               *(long *)(param_1 + 10) + (ulong)param_1[0xe0] * 0x10,param_1[0xcc]);
  FUN_003a1250(uVar33,puVar16,puVar15,param_1 + 0x1f0,param_1 + 0x688,
               *(long *)(param_1 + 8) + (ulong)param_1[0xe1] * 0x20,
               *(long *)(param_1 + 10) + (ulong)param_1[0xe1] * 0x10,param_1[0xcc]);
  uVar17 = param_1[0xcc];
  lVar18 = *(long *)(param_1 + 8);
  uVar26 = uVar33;
  do {
    pfVar32 = (float *)((ulong)uVar17 * 4 + lVar18);
    fVar39 = *pfVar32;
    fVar34 = pfVar32[4];
    fVar43 = fVar39 - fVar34;
    fVar39 = fVar39 + fVar34;
    uVar7 = (uint)fVar43 | 0x80000000;
    if ((int)fVar43 < 0) {
      uVar7 = ~(uint)fVar43;
    }
    *(uint *)(lVar18 + 0xc) = uVar7;
    uVar7 = (uint)fVar39 | 0x80000000;
    if ((int)fVar39 < 0) {
      uVar7 = ~(uint)fVar39;
    }
    uVar26 = uVar26 - 1;
    *(uint *)(lVar18 + 0x1c) = uVar7;
    lVar18 = lVar18 + 0x20;
  } while (uVar26 != 0);
  if (0x100 < uVar6) {
    if (puVar16 != (undefined1 *)0x0) {
      plVar13 = (long *)FUN_00400d30();
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar16);
    }
    if (puVar15 != (undefined8 *)0x0) {
      plVar13 = (long *)FUN_00400d30();
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar15);
    }
  }
  lVar18 = *(long *)(param_1 + 4);
  lVar25 = *(long *)(param_1 + 6);
  puVar22 = *(uint **)(param_1 + 10);
  if (lVar25 == 0) {
    do {
      uVar6 = *puVar22;
      uVar31 = *(undefined8 *)(lVar14 + (ulong)uVar6 * 8);
      uVar33 = uVar33 - 1;
      *(undefined8 *)puVar22 = uVar31;
      *(undefined8 *)(lVar18 + (ulong)uVar6 * 0x10) = uVar31;
      puVar22 = puVar22 + 4;
    } while (uVar33 != 0);
  }
  else {
    uVar26 = 0;
    do {
      uVar30 = (ulong)*puVar22;
      uVar31 = *(undefined8 *)(lVar14 + uVar30 * 8);
      *(undefined8 *)puVar22 = uVar31;
      *(undefined8 *)(lVar18 + uVar30 * 0x10) = uVar31;
      *(int *)(lVar25 + uVar30 * 4) = (int)uVar26;
      uVar26 = uVar26 + 1;
      puVar22 = puVar22 + 4;
    } while (uVar33 != uVar26);
  }
  plVar13 = (long *)FUN_00400d30();
  (**(code **)(*plVar13 + 0x18))(plVar13,lVar14);
  local_30d0 = 0x3f8000003f800000;
  local_30c8 = 1.0;
  local_30c4 = 1.0;
  local_30b0 = 1.0;
  fStack_30ac = 1.0;
  local_3078 = 0xbf800000bf800000;
  local_30c0 = 0xbf8000003f800000;
  local_30b8 = 0xbf8000003f800000;
  local_30a8 = 0xbf800000bf800000;
  local_30a0 = 0x3f800000bf800000;
  local_3098 = 1.0;
  fStack_3094 = -1.0;
  local_3090 = 0xbf8000003f800000;
  local_3088 = 0xbf800000bf800000;
  local_3080 = 1.0;
  local_307c = -1.0;
  fVar39 = sqrtf(3.0);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    local_30c8 = fVar39 * local_30c8;
    local_30d0 = CONCAT44(fVar39 * local_30d0._4_4_,fVar39 * (float)local_30d0);
  }
  fVar39 = sqrtf(local_30c4 * local_30c4 + (float)local_30c0 * (float)local_30c0 +
                 local_30c0._4_4_ * local_30c0._4_4_);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    local_30c4 = fVar39 * local_30c4;
    local_30c0 = CONCAT44(fVar39 * local_30c0._4_4_,fVar39 * (float)local_30c0);
  }
  fVar39 = sqrtf((float)local_30b8 * (float)local_30b8 + local_30b8._4_4_ * local_30b8._4_4_ +
                 local_30b0 * local_30b0);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    local_30b0 = fVar39 * local_30b0;
    local_30b8 = CONCAT44(fVar39 * local_30b8._4_4_,fVar39 * (float)local_30b8);
  }
  fVar39 = sqrtf(fStack_30ac * fStack_30ac + (float)local_30a8 * (float)local_30a8 +
                 local_30a8._4_4_ * local_30a8._4_4_);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    fStack_30ac = fVar39 * fStack_30ac;
    local_30a8 = CONCAT44(fVar39 * local_30a8._4_4_,fVar39 * (float)local_30a8);
  }
  fVar39 = sqrtf((float)local_30a0 * (float)local_30a0 + local_30a0._4_4_ * local_30a0._4_4_ +
                 local_3098 * local_3098);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    local_3098 = fVar39 * local_3098;
    local_30a0 = CONCAT44(fVar39 * local_30a0._4_4_,fVar39 * (float)local_30a0);
  }
  fVar39 = sqrtf(fStack_3094 * fStack_3094 + (float)local_3090 * (float)local_3090 +
                 local_3090._4_4_ * local_3090._4_4_);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    fStack_3094 = fVar39 * fStack_3094;
    local_3090 = CONCAT44(fVar39 * local_3090._4_4_,fVar39 * (float)local_3090);
  }
  fVar39 = sqrtf((float)local_3088 * (float)local_3088 + local_3088._4_4_ * local_3088._4_4_ +
                 local_3080 * local_3080);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    local_3080 = fVar39 * local_3080;
    local_3088 = CONCAT44(fVar39 * local_3088._4_4_,fVar39 * (float)local_3088);
  }
  fVar39 = sqrtf(local_307c * local_307c + (float)local_3078 * (float)local_3078 +
                 local_3078._4_4_ * local_3078._4_4_);
  if (0.0 < fVar39) {
    fVar39 = 1.0 / fVar39;
    local_307c = fVar39 * local_307c;
    local_3078 = CONCAT44(fVar39 * local_3078._4_4_,fVar39 * (float)local_3078);
  }
  FUN_003a1550(puVar21,&local_30d0);
  FUN_003a1550(puVar3,&local_30d0);
  FUN_003a1550(param_1 + 0x148,&local_30d0);
  FUN_003a1550(param_1 + 0x180,&local_30d0);
  FUN_003a1550(param_1 + 0x1b8,&local_30d0);
  FUN_003a1550(param_1 + 0x1f0,&local_30d0);
  FUN_003a1550(param_1 + 0x228,&local_30d0);
  FUN_003a1550(param_1 + 0x260,&local_30d0);
  FUN_003a1550(param_1 + 0x298,&local_30d0);
  FUN_003a1550(param_1 + 0x2d0,&local_30d0);
  FUN_003a1550(param_1 + 0x308,&local_30d0);
  FUN_003a1550(param_1 + 0x340,&local_30d0);
  FUN_003a1550(param_1 + 0x378,&local_30d0);
  FUN_003a1550(param_1 + 0x3b0,&local_30d0);
  FUN_003a1550(param_1 + 1000,&local_30d0);
  FUN_003a1550(param_1 + 0x420,&local_30d0);
  FUN_003a1550(param_1 + 0x458,&local_30d0);
  FUN_003a1550(param_1 + 0x490,&local_30d0);
  FUN_003a1550(param_1 + 0x4c8,&local_30d0);
  FUN_003a1550(param_1 + 0x500,&local_30d0);
  FUN_003a1550(param_1 + 0x538,&local_30d0);
  FUN_003a1550(param_1 + 0x570,&local_30d0);
  FUN_003a1550(param_1 + 0x5a8,&local_30d0);
  FUN_003a1550(param_1 + 0x5e0,&local_30d0);
  FUN_003a1550(param_1 + 0x618,&local_30d0);
  FUN_003a1550(param_1 + 0x650,&local_30d0);
  FUN_003a1550(param_1 + 0x688,&local_30d0);
  FUN_003a1550(param_1 + 0x6c0,&local_30d0);
  FUN_003a1550(param_1 + 0x6f8,&local_30d0);
  FUN_003a1550(param_1 + 0x730,&local_30d0);
  FUN_003a1550(param_1 + 0x768,&local_30d0);
  return;
}


