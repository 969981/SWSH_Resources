/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00299660; name: FUN_00299660
 */


bool FUN_00299660(ulong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined4 *param_6,undefined4 *param_7,float *param_8,byte *param_9)

{
  long lVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float *local_428;
  char local_420;
  float local_418;
  float local_414;
  float local_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  undefined4 local_400 [84];
  float local_2b0 [24];
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  uint local_220;
  
  if ((*param_9 >> 4 & 1) == 0) {
    fVar15 = (float)*(undefined8 *)param_3;
    fVar16 = fVar15 + fVar15;
    fVar20 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar17 = fVar20 + fVar20;
    fVar19 = (float)*(undefined8 *)(param_3 + 2);
    fVar18 = fVar19 + fVar19;
    fVar23 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    uVar12 = NEON_fmov(0x3f800000,4);
    fVar13 = fVar20 * fVar17;
    fVar14 = fVar19 * fVar18;
    fVar24 = (float)uVar12 - fVar15 * fVar16;
    fVar11 = (float)((ulong)uVar12 >> 0x20);
    local_250 = NEON_ext(CONCAT44((fVar11 - fVar13) - fVar14,((float)uVar12 - fVar13) - fVar14),
                         CONCAT44(fVar20 * fVar16 + fVar23 * fVar18,
                                  fVar20 * fVar16 + fVar23 * fVar18),4,1);
    uVar12 = NEON_ext(CONCAT44(fVar20 * fVar16 - fVar23 * fVar18,fVar20 * fVar16 - fVar23 * fVar18),
                      CONCAT44((fVar11 - fVar15 * fVar16) - fVar14,fVar24 - fVar14),4,1);
    local_238 = NEON_ext(CONCAT44(fVar19 * fVar16 + fVar23 * fVar17,
                                  fVar19 * fVar16 + fVar23 * fVar17),
                         CONCAT44(fVar19 * fVar17 - fVar23 * fVar16,
                                  fVar19 * fVar17 - fVar23 * fVar16),4,1);
    local_230 = (ulong)(uint)(fVar24 - fVar13);
    local_248 = CONCAT44((int)uVar12,fVar19 * fVar16 - fVar23 * fVar17);
    local_240 = CONCAT44(fVar19 * fVar17 + fVar23 * fVar16,(int)((ulong)uVar12 >> 0x20));
                    /* try { // try from 00299774 to 0029978b has its CatchHandler @ 00299ffc */
    fVar11 = (float)FUN_00233a00(param_2,param_2 + 3,param_3 + 4,param_4,&local_250,0,0);
    if (fVar11 < param_2[6] * param_2[6]) {
      *param_7 = 0;
      fVar11 = param_5[1];
      fVar15 = param_5[2];
      *param_8 = -*param_5;
      param_8[1] = -fVar11;
      param_8[2] = -fVar15;
      return true;
    }
  }
  fStack_40c = *param_4;
  local_408 = param_4[1];
  fStack_404 = param_4[2];
  fVar23 = *param_2;
  fVar15 = param_2[1];
  local_418 = -fStack_40c;
  fVar20 = param_2[2];
  fVar11 = param_2[3];
  fVar16 = param_2[4];
  fVar14 = param_2[5];
  local_414 = -local_408;
  local_410 = -fStack_404;
  local_420 = '\x01';
                    /* try { // try from 002997fc to 00299817 has its CatchHandler @ 0029a028 */
  pfVar3 = (float *)FUN_00401b30(&local_250,0xbd0,
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/sweep/GuSweepCapsuleBox.cpp"
                                 ,0xc5);
                    /* try { // try from 0029981c to 0029982b has its CatchHandler @ 0029a018 */
  local_428 = pfVar3;
  FUN_0029a670(&local_418,local_2b0);
  fVar13 = param_3[2];
  fVar19 = param_3[3];
  fVar17 = param_3[4];
  fVar18 = param_3[5];
  pfVar4 = (float *)&local_240;
  fVar15 = (fVar16 - fVar15) * 0.5;
  fVar11 = (fVar11 - fVar23) * 0.5;
  fVar20 = (fVar14 - fVar20) * 0.5;
  fVar14 = fVar19 * fVar19 + -0.5;
  fVar24 = param_3[6];
  fVar23 = *param_3;
  fVar16 = param_3[1];
  lVar7 = 2;
  do {
    lVar1 = lVar7 + 3;
    uVar9 = (ulong)(byte)(&UNK_01d4d54a)[lVar7];
    uVar10 = (ulong)(byte)(&UNK_01d4d54b)[lVar7];
    uVar8 = (ulong)(byte)(&DAT_01d4d54c)[lVar7];
    fVar29 = local_2b0[uVar9 * 3 + 1] + local_2b0[uVar9 * 3 + 1];
    fVar27 = local_2b0[uVar9 * 3] + local_2b0[uVar9 * 3];
    fVar32 = local_2b0[uVar9 * 3 + 2] + local_2b0[uVar9 * 3 + 2];
    fVar38 = local_2b0[uVar10 * 3 + 1] + local_2b0[uVar10 * 3 + 1];
    fVar30 = local_2b0[uVar10 * 3] + local_2b0[uVar10 * 3];
    fVar41 = local_2b0[uVar10 * 3 + 2] + local_2b0[uVar10 * 3 + 2];
    fVar22 = local_2b0[uVar8 * 3 + 2] + local_2b0[uVar8 * 3 + 2];
    fVar44 = fVar30 * fVar23 + fVar38 * fVar16 + fVar41 * fVar13;
    fVar34 = fVar27 * fVar23 + fVar29 * fVar16 + fVar32 * fVar13;
    fVar36 = local_2b0[uVar8 * 3] + local_2b0[uVar8 * 3];
    fVar39 = local_2b0[uVar8 * 3 + 1] + local_2b0[uVar8 * 3 + 1];
    fVar42 = fVar36 * fVar23 + fVar39 * fVar16 + fVar22 * fVar13;
    pfVar4[-2] = fVar24 + fVar32 * fVar14 + fVar19 * (fVar29 * fVar23 - fVar27 * fVar16) +
                          fVar13 * fVar34;
    pfVar4[-1] = fVar17 + fVar23 * fVar44 +
                          fVar30 * fVar14 + fVar19 * (fVar41 * fVar16 - fVar38 * fVar13);
    pfVar4[2] = fVar17 + fVar23 * fVar42 +
                         fVar36 * fVar14 + fVar19 * (fVar22 * fVar16 - fVar39 * fVar13);
    pfVar4[3] = fVar18 + fVar16 * fVar42 +
                         fVar39 * fVar14 + fVar19 * (fVar36 * fVar13 - fVar22 * fVar23);
    *pfVar4 = fVar18 + fVar16 * fVar44 +
                       fVar38 * fVar14 + fVar19 * (fVar30 * fVar13 - fVar41 * fVar23);
    pfVar4[1] = fVar24 + fVar41 * fVar14 + fVar19 * (fVar38 * fVar23 - fVar30 * fVar16) +
                         fVar13 * fVar44;
    pfVar4[-4] = fVar17 + fVar23 * fVar34 +
                          fVar27 * fVar14 + fVar19 * (fVar32 * fVar16 - fVar29 * fVar13);
    pfVar4[-3] = fVar18 + fVar16 * fVar34 +
                          fVar29 * fVar14 + fVar19 * (fVar27 * fVar13 - fVar32 * fVar23);
    pfVar4[4] = fVar24 + fVar22 * fVar14 + fVar19 * (fVar39 * fVar23 - fVar36 * fVar16) +
                         fVar13 * fVar42;
    pfVar4 = pfVar4 + 9;
    lVar7 = lVar1;
  } while (lVar1 != 0x26);
  lVar7 = 0;
  puVar5 = local_400;
  pfVar4 = (float *)&local_240;
  do {
    fVar14 = pfVar4[-2];
    fVar23 = pfVar4[-1];
    fVar27 = pfVar4[4];
    fVar13 = pfVar4[-4];
    fVar19 = pfVar4[-3];
    fVar17 = *pfVar4;
    fVar18 = pfVar4[1];
    fVar24 = pfVar4[2];
    fVar22 = pfVar4[3];
    fVar29 = (fVar17 - fVar19) * (fVar27 - fVar14) - (fVar18 - fVar14) * (fVar22 - fVar19);
    fVar30 = (fVar18 - fVar14) * (fVar24 - fVar13) - (fVar23 - fVar13) * (fVar27 - fVar14);
    fVar16 = (fVar23 - fVar13) * (fVar22 - fVar19) - (fVar17 - fVar19) * (fVar24 - fVar13);
    if (fVar16 * param_5[2] + *param_5 * fVar29 + param_5[1] * fVar30 <= 0.0) {
      fVar25 = fVar11 + fVar13;
      fVar26 = fVar15 + fVar19;
      fVar28 = fVar20 + fVar14;
      fVar31 = fVar11 + fVar23;
      fVar33 = fVar15 + fVar17;
      fVar35 = fVar20 + fVar18;
      fVar37 = fVar11 + fVar24;
      fVar40 = fVar15 + fVar22;
      fVar43 = fVar20 + fVar27;
      fVar13 = fVar13 - fVar11;
      fVar19 = fVar19 - fVar15;
      fVar14 = fVar14 - fVar20;
      fVar23 = fVar23 - fVar11;
      fVar17 = fVar17 - fVar15;
      fVar18 = fVar18 - fVar20;
      fVar24 = fVar24 - fVar11;
      fVar22 = fVar22 - fVar15;
      fVar27 = fVar27 - fVar20;
      fVar34 = fVar31;
      fVar36 = fVar35;
      fVar38 = fVar37;
      fVar39 = fVar40;
      fVar41 = fVar43;
      fVar42 = fVar25;
      fVar44 = fVar33;
      fVar21 = fVar28;
      fVar32 = fVar26;
      if (fVar20 * fVar16 + fVar11 * fVar29 + fVar15 * fVar30 < 0.0) {
        fVar34 = fVar23;
        fVar36 = fVar18;
        fVar38 = fVar24;
        fVar39 = fVar22;
        fVar41 = fVar27;
        fVar42 = fVar13;
        fVar44 = fVar17;
        fVar21 = fVar14;
        fVar32 = fVar19;
      }
      *pfVar3 = fVar42;
      pfVar3[1] = fVar32;
      pfVar3[2] = fVar21;
      pfVar3[3] = fVar34;
      pfVar3[4] = fVar44;
      pfVar3[5] = fVar36;
      fVar29 = fVar37 - fVar23;
      fVar30 = fVar40 - fVar17;
      fVar16 = fVar43 - fVar18;
      pfVar3[6] = fVar38;
      pfVar3[7] = fVar39;
      pfVar3[8] = fVar41;
      uVar6 = (undefined4)lVar7;
      *puVar5 = uVar6;
      pfVar3[9] = fVar23;
      pfVar3[10] = fVar17;
      pfVar3[0xb] = fVar18;
      pfVar3[0xc] = fVar31;
      pfVar3[0xd] = fVar33;
      pfVar3[0xe] = fVar35;
      pfVar3[0xf] = fVar37;
      pfVar3[0x10] = fVar40;
      pfVar3[0x11] = fVar43;
      if (0.0 < ((fVar31 - fVar23) * fVar30 - (fVar33 - fVar17) * fVar29) * param_5[2] +
                ((fVar33 - fVar17) * fVar16 - (fVar35 - fVar18) * fVar30) * *param_5 +
                ((fVar35 - fVar18) * fVar29 - (fVar31 - fVar23) * fVar16) * param_5[1]) {
        pfVar3[0xc] = fVar37;
        pfVar3[0xd] = fVar40;
        pfVar3[0xe] = fVar43;
        pfVar3[0xf] = fVar31;
        pfVar3[0x10] = fVar33;
        pfVar3[0x11] = fVar35;
      }
      puVar5[1] = uVar6;
      pfVar3[0x12] = fVar23;
      pfVar3[0x13] = fVar17;
      pfVar3[0x14] = fVar18;
      pfVar3[0x15] = fVar37;
      pfVar3[0x16] = fVar40;
      pfVar3[0x17] = fVar43;
      pfVar3[0x18] = fVar24;
      pfVar3[0x19] = fVar22;
      pfVar3[0x1a] = fVar27;
      if (0.0 < (fVar29 * (fVar22 - fVar17) - (fVar24 - fVar23) * fVar30) * param_5[2] +
                (fVar30 * (fVar27 - fVar18) - (fVar22 - fVar17) * fVar16) * *param_5 +
                ((fVar24 - fVar23) * fVar16 - fVar29 * (fVar27 - fVar18)) * param_5[1]) {
        pfVar3[0x15] = fVar24;
        pfVar3[0x16] = fVar22;
        pfVar3[0x17] = fVar27;
        pfVar3[0x18] = fVar37;
        pfVar3[0x19] = fVar40;
        pfVar3[0x1a] = fVar43;
      }
      fVar29 = fVar37 - fVar13;
      fVar30 = fVar40 - fVar19;
      puVar5[2] = uVar6;
      fVar16 = fVar43 - fVar14;
      pfVar3[0x1b] = fVar13;
      pfVar3[0x1c] = fVar19;
      pfVar3[0x1d] = fVar14;
      pfVar3[0x1e] = fVar24;
      pfVar3[0x1f] = fVar22;
      pfVar3[0x20] = fVar27;
      pfVar3[0x21] = fVar37;
      pfVar3[0x22] = fVar40;
      pfVar3[0x23] = fVar43;
      if (0.0 < ((fVar24 - fVar13) * fVar30 - fVar29 * (fVar22 - fVar19)) * param_5[2] +
                ((fVar22 - fVar19) * fVar16 - fVar30 * (fVar27 - fVar14)) * *param_5 +
                (fVar29 * (fVar27 - fVar14) - (fVar24 - fVar13) * fVar16) * param_5[1]) {
        pfVar3[0x1e] = fVar37;
        pfVar3[0x1f] = fVar40;
        pfVar3[0x20] = fVar43;
        pfVar3[0x21] = fVar24;
        pfVar3[0x22] = fVar22;
        pfVar3[0x23] = fVar27;
      }
      puVar5[3] = uVar6;
      pfVar3[0x24] = fVar13;
      pfVar3[0x25] = fVar19;
      pfVar3[0x26] = fVar14;
      pfVar3[0x27] = fVar37;
      pfVar3[0x28] = fVar40;
      pfVar3[0x29] = fVar43;
      pfVar3[0x2a] = fVar25;
      pfVar3[0x2b] = fVar26;
      pfVar3[0x2c] = fVar28;
      if (0.0 < ((fVar26 - fVar19) * fVar29 - (fVar25 - fVar13) * fVar30) * param_5[2] +
                ((fVar28 - fVar14) * fVar30 - (fVar26 - fVar19) * fVar16) * *param_5 +
                ((fVar25 - fVar13) * fVar16 - (fVar28 - fVar14) * fVar29) * param_5[1]) {
        pfVar3[0x27] = fVar25;
        pfVar3[0x28] = fVar26;
        pfVar3[0x29] = fVar28;
        pfVar3[0x2a] = fVar37;
        pfVar3[0x2b] = fVar40;
        pfVar3[0x2c] = fVar43;
      }
      fVar16 = fVar23 - fVar25;
      fVar24 = fVar17 - fVar26;
      puVar5[4] = uVar6;
      fVar22 = fVar18 - fVar28;
      pfVar3[0x2d] = fVar25;
      pfVar3[0x2e] = fVar26;
      pfVar3[0x2f] = fVar28;
      pfVar3[0x30] = fVar31;
      pfVar3[0x31] = fVar33;
      pfVar3[0x32] = fVar35;
      pfVar3[0x33] = fVar23;
      pfVar3[0x34] = fVar17;
      pfVar3[0x35] = fVar18;
      if (0.0 < ((fVar31 - fVar25) * fVar24 - fVar16 * (fVar33 - fVar26)) * param_5[2] +
                ((fVar33 - fVar26) * fVar22 - fVar24 * (fVar35 - fVar28)) * *param_5 +
                (fVar16 * (fVar35 - fVar28) - (fVar31 - fVar25) * fVar22) * param_5[1]) {
        pfVar3[0x30] = fVar23;
        pfVar3[0x31] = fVar17;
        pfVar3[0x32] = fVar18;
        pfVar3[0x33] = fVar31;
        pfVar3[0x34] = fVar33;
        pfVar3[0x35] = fVar35;
      }
      puVar5[5] = uVar6;
      pfVar3[0x36] = fVar25;
      pfVar3[0x37] = fVar26;
      pfVar3[0x38] = fVar28;
      pfVar3[0x39] = fVar23;
      pfVar3[0x3a] = fVar17;
      pfVar3[0x3b] = fVar18;
      pfVar3[0x3c] = fVar13;
      pfVar3[0x3d] = fVar19;
      pfVar3[0x3e] = fVar14;
      if (0.0 < (fVar16 * (fVar19 - fVar26) - (fVar13 - fVar25) * fVar24) * param_5[2] +
                (fVar24 * (fVar14 - fVar28) - (fVar19 - fVar26) * fVar22) * *param_5 +
                ((fVar13 - fVar25) * fVar22 - fVar16 * (fVar14 - fVar28)) * param_5[1]) {
        pfVar3[0x39] = fVar13;
        pfVar3[0x3a] = fVar19;
        pfVar3[0x3b] = fVar14;
        pfVar3[0x3c] = fVar23;
        pfVar3[0x3d] = fVar17;
        pfVar3[0x3e] = fVar18;
      }
      pfVar3 = pfVar3 + 0x3f;
      puVar5[6] = uVar6;
      puVar5 = puVar5 + 7;
    }
    lVar7 = lVar7 + 1;
    pfVar4 = pfVar4 + 9;
  } while (lVar7 != 0xc);
  local_250 = 0;
  local_248 = 0;
  local_240 = CONCAT26(local_240._6_2_,0xffffffff);
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0x7f7fffff;
  local_2b0[0] = (*param_2 + param_2[3]) * 0.5;
  local_2b0[1] = (param_2[1] + param_2[4]) * 0.5;
  local_2b0[2] = (param_2[2] + param_2[5]) * 0.5;
                    /* try { // try from 00299f34 to 00299f5f has its CatchHandler @ 0029a008 */
  uVar8 = FUN_00249f00(param_2[6],param_1,(ulong)((long)puVar5 - (long)local_400) >> 2,local_428,
                       local_2b0,param_5,0,&local_250,local_400,0,0,0,0);
  bVar2 = (uVar8 & 1) != 0;
  if (bVar2) {
    *param_6 = (undefined4)local_238;
    param_6[1] = local_238._4_4_;
    param_6[2] = (undefined4)local_230;
    param_1 = (ulong)local_220;
    *param_8 = local_230._4_4_;
    param_8[1] = (float)local_228;
    param_8[2] = local_228._4_4_;
  }
  if (local_420 != '\0') {
                    /* try { // try from 00299fb8 to 00299fbf has its CatchHandler @ 00299ff8 */
    FUN_00401ce0(&local_428,local_428);
  }
  *param_7 = (int)param_1;
  return bVar2;
}


