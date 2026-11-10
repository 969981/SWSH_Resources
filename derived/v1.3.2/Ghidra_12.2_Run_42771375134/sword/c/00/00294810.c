/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00294810; name: FUN_00294810
 */


float FUN_00294810(float *param_1,float *param_2,undefined4 *param_3,float *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_d0;
  int iStack_cc;
  int local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b0;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  ulong uStack_90;
  
  fVar20 = DAT_01d4c18c;
  switch(*param_3) {
  case 0:
    fVar20 = param_4[6];
    *(undefined8 *)param_1 = *(undefined8 *)(param_4 + 4);
    param_1[2] = fVar20;
    fVar20 = (float)param_3[1];
    *param_2 = fVar20;
    param_2[1] = fVar20;
    param_2[2] = fVar20;
    goto LAB_00294b54;
  case 1:
    fVar16 = param_4[3];
    fVar14 = *param_4;
    fVar17 = fVar16 + fVar16;
    fVar15 = fVar14 + fVar14;
    fVar23 = fVar14 * fVar15 + fVar16 * fVar17 + -1.0;
    fVar22 = param_4[2] * fVar17 + fVar15 * param_4[1];
    fVar29 = fVar15 * param_4[2] - fVar17 * param_4[1];
    fVar27 = param_4[4] * fVar23 + param_4[5] * fVar22 + fVar29 * param_4[6];
    fVar18 = -fVar27;
    fVar24 = fabsf(fVar23);
    fVar25 = fabsf(fVar22);
    fVar26 = fabsf(fVar29);
    fVar14 = DAT_01d4c6a4;
    fVar15 = DAT_01d4c150;
    fVar16 = DAT_01d4c150;
    fVar17 = DAT_01d4c6a4;
    fVar19 = DAT_01d4c6a4;
    if (((fVar24 <= DAT_01d4c0c4) || (DAT_01d4c1cc <= fVar25)) || (DAT_01d4c1cc <= fVar26)) {
      if (((DAT_01d4c1cc <= fVar24) || (fVar25 <= DAT_01d4c0c4)) || (DAT_01d4c1cc <= fVar26)) {
        if (((fVar24 < DAT_01d4c1cc) && (fVar25 < DAT_01d4c1cc)) && (DAT_01d4c0c4 < fVar26)) {
          if (0.0 < fVar29) {
            fVar17 = fVar27 + 0.0;
            goto LAB_00295070;
          }
          goto LAB_00295078;
        }
LAB_0029506c:
        goto LAB_00295070;
      }
      if (0.0 < fVar22) {
        fVar14 = fVar27 + 0.0;
        goto LAB_0029506c;
      }
LAB_00295074:
      fVar16 = fVar18;
      fVar18 = DAT_01d4c150;
    }
    else {
      if (0.0 < fVar23) {
        fVar19 = fVar27 + 0.0;
LAB_00295070:
        fVar18 = DAT_01d4c150;
        goto LAB_00295074;
      }
      fVar15 = fVar18;
      fVar18 = DAT_01d4c150;
    }
LAB_00295078:
    *param_1 = (fVar19 + fVar15) * 0.5;
    param_1[1] = (fVar14 + fVar16) * 0.5;
    param_1[2] = (fVar17 + fVar18) * 0.5;
    *param_2 = (fVar19 - fVar15) * 0.5;
    param_2[1] = (fVar14 - fVar16) * 0.5;
    param_2[2] = (fVar17 - fVar18) * 0.5;
    break;
  case 2:
    fVar20 = param_4[6];
    *(undefined8 *)param_1 = *(undefined8 *)(param_4 + 4);
    param_1[2] = fVar20;
    fVar16 = param_4[2];
    fVar17 = param_4[3];
    fVar20 = *param_4;
    fVar14 = param_4[1];
    fVar18 = fVar17 + fVar17;
    fVar15 = fVar20 + fVar20;
    fVar20 = fabsf(fVar20 * fVar15 + fVar17 * fVar18 + -1.0);
    *param_2 = fVar20 * (float)param_3[2] + (float)param_3[1];
    fVar20 = fabsf(fVar16 * fVar18 + fVar15 * fVar14);
    param_2[1] = fVar20 * (float)param_3[2] + (float)param_3[1];
    fVar20 = fabsf(fVar15 * fVar16 - fVar18 * fVar14);
    param_2[2] = fVar20 * (float)param_3[2] + (float)param_3[1];
    fVar20 = (float)param_3[1];
    goto LAB_00294b54;
  case 3:
    fVar20 = *param_4;
    fVar26 = param_4[1];
    fVar27 = fVar26 + fVar26;
    fVar25 = param_4[2];
    fVar22 = param_4[3];
    fVar23 = fVar20 + fVar20;
    fVar18 = fVar25 * (fVar25 + fVar25);
    fVar17 = (fVar25 + fVar25) * fVar22;
    fVar20 = 1.0 - fVar20 * fVar23;
    fVar24 = (float)param_3[1];
    fVar28 = (float)param_3[2];
    fVar29 = (float)param_3[3];
    fVar14 = fabsf(fVar24 * ((1.0 - fVar26 * fVar27) - fVar18));
    fVar15 = fabsf(fVar28 * (fVar23 * fVar26 - fVar17));
    fVar16 = fabsf((fVar23 * fVar25 + fVar27 * fVar22) * fVar29);
    fVar17 = fabsf(fVar24 * (fVar23 * fVar26 + fVar17));
    fVar18 = fabsf(fVar28 * (fVar20 - fVar18));
    fVar19 = fabsf((fVar27 * fVar25 - fVar23 * fVar22) * fVar29);
    fVar24 = fabsf(fVar24 * (fVar23 * fVar25 - fVar27 * fVar22));
    fVar25 = fabsf(fVar28 * (fVar27 * fVar25 + fVar23 * fVar22));
    fVar20 = fabsf((fVar20 - fVar26 * fVar27) * fVar29);
    *param_2 = fVar14 + fVar15 + fVar16;
    param_2[1] = fVar17 + fVar18 + fVar19;
    param_2[2] = fVar24 + fVar25 + fVar20;
    fVar20 = param_4[6];
    *(undefined8 *)param_1 = *(undefined8 *)(param_4 + 4);
    param_1[2] = fVar20;
    fVar20 = (float)param_3[1];
    if ((float)param_3[2] <= (float)param_3[1]) {
      fVar20 = (float)param_3[2];
    }
    if ((float)param_3[3] <= fVar20) {
      fVar20 = (float)param_3[3];
    }
LAB_00294b54:
    fVar20 = fVar20 * 0.75;
    break;
  case 4:
    fVar16 = (float)*(undefined8 *)(param_4 + 2);
    fVar18 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
    fVar20 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar19 = fVar20 + fVar20;
    fVar25 = fVar14 + fVar14;
    fVar29 = fVar16 + fVar16;
    fVar15 = fVar14 * fVar25;
    fVar17 = fVar16 * fVar29;
    uVar12 = NEON_fmov(0x3f800000,4);
    fVar26 = (float)((ulong)uVar12 >> 0x20);
    fVar24 = (float)uVar12 - fVar20 * fVar19;
    fStack_a8 = fVar16 * fVar19 - fVar18 * fVar25;
    local_b0 = NEON_ext(CONCAT44((fVar26 - fVar15) - fVar17,((float)uVar12 - fVar15) - fVar17),
                        CONCAT44(fVar14 * fVar19 + fVar18 * fVar29,fVar14 * fVar19 + fVar18 * fVar29
                                ),4,1);
    fStack_9c = fVar16 * fVar25 + fVar18 * fVar19;
    uVar12 = NEON_ext(CONCAT44(fVar14 * fVar19 - fVar18 * fVar29,fVar14 * fVar19 - fVar18 * fVar29),
                      CONCAT44((fVar26 - fVar20 * fVar19) - fVar17,fVar24 - fVar17),4,1);
    fStack_a4 = (float)uVar12;
    local_a0 = (float)((ulong)uVar12 >> 0x20);
    uVar12 = NEON_ext(CONCAT44(fVar16 * fVar19 + fVar18 * fVar25,fVar16 * fVar19 + fVar18 * fVar25),
                      CONCAT44(fVar16 * fVar25 - fVar18 * fVar19,fVar16 * fVar25 - fVar18 * fVar19),
                      4,1);
    lVar13 = *(long *)(param_3 + 8);
    uStack_90 = (ulong)(uint)(fVar24 - fVar15);
    local_98 = (float)uVar12;
    fStack_94 = (float)((ulong)uVar12 >> 0x20);
    puVar1 = (undefined8 *)(lVar13 + 0x20);
    if (param_5 != (undefined8 *)0x0) {
      puVar1 = param_5;
    }
    if ((param_3[2] != 0x3f800000 || param_3[1] != 0x3f800000) || param_3[3] != 0x3f800000) {
                    /* try { // try from 00294c48 to 00294c4f has its CatchHandler @ 00295100 */
      FUN_002945d0(&local_b0);
    }
    fVar17 = (float)puVar1[1];
    fVar20 = (float)*puVar1;
    fVar15 = (float)((ulong)*puVar1 >> 0x20);
    fVar19 = (float)((ulong)local_b0 >> 0x20);
    fVar24 = (float)(uStack_90 >> 0x20);
    auVar11 = *(undefined1 (*) [12])(param_4 + 4);
    fVar14 = auVar11._0_4_ + (float)local_b0 * fVar20 + fStack_a4 * fVar15 + local_98 * fVar17;
    fVar16 = auVar11._4_4_ + fVar19 * fVar20 + local_a0 * fVar15 + fStack_94 * fVar17;
    fVar18 = auVar11._8_4_ + fStack_a8 * fVar20 + fStack_9c * fVar15 + (float)uStack_90 * fVar17;
    fVar20 = fStack_a4 * fVar20 + local_98 * fVar15 + fVar24 * fVar17 + 0.0;
    auVar7._4_4_ = fVar16;
    auVar7._0_4_ = fVar14;
    auVar7._8_4_ = fVar18;
    auVar7._12_4_ = fVar20;
    auVar8._4_4_ = fVar16;
    auVar8._0_4_ = fVar14;
    auVar8._8_4_ = fVar18;
    auVar8._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar7,auVar8,8,1);
    *(ulong *)param_1 = CONCAT44(fVar16,fVar14);
    *(long *)(param_1 + 2) = auVar21._0_8_;
    fVar17 = (float)*(undefined8 *)((long)puVar1 + 0x14);
    fVar20 = (float)*(undefined8 *)((long)puVar1 + 0xc);
    fVar15 = (float)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20);
    fVar14 = ABS(local_98 * fVar17) + ABS((float)local_b0 * fVar20) + ABS(fStack_a4 * fVar15);
    fVar16 = ABS(fStack_94 * fVar17) + ABS(fVar19 * fVar20) + ABS(local_a0 * fVar15);
    fVar18 = ABS((float)uStack_90 * fVar17) + ABS(fStack_a8 * fVar20) + ABS(fStack_9c * fVar15);
    fVar20 = ABS(fVar24 * fVar17) + ABS(fStack_a4 * fVar20) + ABS(local_98 * fVar15);
    auVar9._4_4_ = fVar16;
    auVar9._0_4_ = fVar14;
    auVar9._8_4_ = fVar18;
    auVar9._12_4_ = fVar20;
    auVar10._4_4_ = fVar16;
    auVar10._0_4_ = fVar14;
    auVar10._8_4_ = fVar18;
    auVar10._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar9,auVar10,8,1);
    *(ulong *)param_2 = CONCAT44(fVar16,fVar14);
    *(long *)(param_2 + 2) = auVar21._0_8_;
    fVar20 = (float)param_3[1];
    if ((float)param_3[2] <= (float)param_3[1]) {
      fVar20 = (float)param_3[2];
    }
    fVar14 = (float)param_3[3];
    if (fVar20 <= (float)param_3[3]) {
      fVar14 = fVar20;
    }
    fVar20 = *(float *)(lVar13 + 0x58) * fVar14 * 0.75;
    break;
  case 5:
    if (param_5 == (undefined8 *)0x0) {
      param_5 = (undefined8 *)(*(long *)(param_3 + 10) + 0x38);
    }
    fVar16 = (float)*(undefined8 *)(param_4 + 2);
    fVar18 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
    fVar20 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar19 = fVar20 + fVar20;
    fVar24 = fVar14 + fVar14;
    fVar25 = fVar16 + fVar16;
    fVar15 = fVar14 * fVar24;
    fVar17 = fVar16 * fVar25;
    uVar12 = NEON_fmov(0x3f800000,4);
    fVar29 = (float)uVar12 - fVar20 * fVar19;
    fVar26 = (float)((ulong)uVar12 >> 0x20);
    fStack_a8 = fVar16 * fVar19 - fVar18 * fVar24;
    fStack_9c = fVar16 * fVar24 + fVar18 * fVar19;
    local_b0 = NEON_ext(CONCAT44((fVar26 - fVar15) - fVar17,((float)uVar12 - fVar15) - fVar17),
                        CONCAT44(fVar14 * fVar19 + fVar18 * fVar25,fVar14 * fVar19 + fVar18 * fVar25
                                ),4,1);
    uVar12 = NEON_ext(CONCAT44(fVar14 * fVar19 - fVar18 * fVar25,fVar14 * fVar19 - fVar18 * fVar25),
                      CONCAT44((fVar26 - fVar20 * fVar19) - fVar17,fVar29 - fVar17),4,1);
    fStack_a4 = (float)uVar12;
    local_a0 = (float)((ulong)uVar12 >> 0x20);
    uVar12 = NEON_ext(CONCAT44(fVar16 * fVar19 + fVar18 * fVar24,fVar16 * fVar19 + fVar18 * fVar24),
                      CONCAT44(fVar16 * fVar24 - fVar18 * fVar19,fVar16 * fVar24 - fVar18 * fVar19),
                      4,1);
    uStack_90 = (ulong)(uint)(fVar29 - fVar15);
    local_98 = (float)uVar12;
    fStack_94 = (float)((ulong)uVar12 >> 0x20);
    if ((param_3[2] != 0x3f800000 || param_3[1] != 0x3f800000) || param_3[3] != 0x3f800000) {
                    /* try { // try from 00294dd4 to 00294ddf has its CatchHandler @ 002950fc */
      FUN_002945d0(&local_b0,param_3 + 1);
    }
    fVar17 = (float)param_5[1];
    fVar20 = (float)*param_5;
    fVar15 = (float)((ulong)*param_5 >> 0x20);
    auVar11 = *(undefined1 (*) [12])(param_4 + 4);
    fVar14 = auVar11._0_4_ + (float)local_b0 * fVar20 + fStack_a4 * fVar15 + local_98 * fVar17;
    fVar16 = auVar11._4_4_ +
             (float)((ulong)local_b0 >> 0x20) * fVar20 + local_a0 * fVar15 + fStack_94 * fVar17;
    fVar18 = auVar11._8_4_ + fStack_a8 * fVar20 + fStack_9c * fVar15 + (float)uStack_90 * fVar17;
    fVar20 = fStack_a4 * fVar20 + local_98 * fVar15 + (float)(uStack_90 >> 0x20) * fVar17 + 0.0;
    auVar5._4_4_ = fVar16;
    auVar5._0_4_ = fVar14;
    auVar5._8_4_ = fVar18;
    auVar5._12_4_ = fVar20;
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar14;
    auVar6._8_4_ = fVar18;
    auVar6._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar5,auVar6,8,1);
    *(ulong *)param_1 = CONCAT44(fVar16,fVar14);
    *(long *)(param_1 + 2) = auVar21._0_8_;
    fVar16 = (float)*(undefined8 *)((long)param_5 + 0x14);
    fVar14 = (float)*(undefined8 *)((long)param_5 + 0xc);
    fVar15 = (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
    goto LAB_00294f88;
  case 6:
    iStack_cc = param_3[4];
    local_d0 = param_3[5];
    local_c8 = param_3[6];
    local_bc = 0x3f80000000000000;
    local_c4 = 0;
    fVar16 = (float)*(undefined8 *)(param_4 + 2);
    fVar18 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
    fVar20 = (float)*(undefined8 *)param_4;
    fVar14 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar24 = fVar20 + fVar20;
    fVar25 = fVar14 + fVar14;
    fVar26 = fVar16 + fVar16;
    fVar15 = fVar14 * fVar25;
    fVar17 = fVar16 * fVar26;
    uVar12 = NEON_fmov(0x3f800000,4);
    fStack_9c = fVar16 * fVar25 + fVar18 * fVar24;
    fStack_a8 = fVar16 * fVar24 - fVar18 * fVar25;
    fVar29 = (float)uVar12 - fVar20 * fVar24;
    fVar19 = (float)((ulong)uVar12 >> 0x20);
    local_b0 = NEON_ext(CONCAT44((fVar19 - fVar15) - fVar17,((float)uVar12 - fVar15) - fVar17),
                        CONCAT44(fVar14 * fVar24 + fVar18 * fVar26,fVar14 * fVar24 + fVar18 * fVar26
                                ),4,1);
    uVar12 = NEON_ext(CONCAT44(fVar14 * fVar24 - fVar18 * fVar26,fVar14 * fVar24 - fVar18 * fVar26),
                      CONCAT44((fVar19 - fVar20 * fVar24) - fVar17,fVar29 - fVar17),4,1);
    fStack_a4 = (float)uVar12;
    local_a0 = (float)((ulong)uVar12 >> 0x20);
    uVar12 = NEON_ext(CONCAT44(fVar16 * fVar24 + fVar18 * fVar25,fVar16 * fVar24 + fVar18 * fVar25),
                      CONCAT44(fVar16 * fVar25 - fVar18 * fVar24,fVar16 * fVar25 - fVar18 * fVar24),
                      4,1);
    uStack_90 = (ulong)(uint)(fVar29 - fVar15);
    puVar1 = (undefined8 *)(*(long *)(param_3 + 2) + 0x20);
    if (param_5 != (undefined8 *)0x0) {
      puVar1 = param_5;
    }
    local_98 = (float)uVar12;
    fStack_94 = (float)((ulong)uVar12 >> 0x20);
    if ((iStack_cc != 0x3f800000 || local_d0 != 0x3f800000) || local_c8 != 0x3f800000) {
                    /* try { // try from 00294f2c to 00294f37 has its CatchHandler @ 002950f8 */
      FUN_002945d0(&local_b0,&local_d0);
    }
    fVar17 = (float)puVar1[1];
    fVar20 = (float)*puVar1;
    fVar15 = (float)((ulong)*puVar1 >> 0x20);
    auVar11 = *(undefined1 (*) [12])(param_4 + 4);
    fVar14 = auVar11._0_4_ + (float)local_b0 * fVar20 + fStack_a4 * fVar15 + local_98 * fVar17;
    fVar16 = auVar11._4_4_ +
             (float)((ulong)local_b0 >> 0x20) * fVar20 + local_a0 * fVar15 + fStack_94 * fVar17;
    fVar18 = auVar11._8_4_ + fStack_a8 * fVar20 + fStack_9c * fVar15 + (float)uStack_90 * fVar17;
    fVar20 = fStack_a4 * fVar20 + local_98 * fVar15 + (float)(uStack_90 >> 0x20) * fVar17 + 0.0;
    auVar21._4_4_ = fVar16;
    auVar21._0_4_ = fVar14;
    auVar21._8_4_ = fVar18;
    auVar21._12_4_ = fVar20;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar14;
    auVar2._8_4_ = fVar18;
    auVar2._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar21,auVar2,8,1);
    *(ulong *)param_1 = CONCAT44(fVar16,fVar14);
    *(long *)(param_1 + 2) = auVar21._0_8_;
    fVar16 = (float)*(undefined8 *)((long)puVar1 + 0x14);
    fVar14 = (float)*(undefined8 *)((long)puVar1 + 0xc);
    fVar15 = (float)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20);
LAB_00294f88:
    fVar20 = 0.0;
    fVar17 = ABS(local_98 * fVar16) + ABS((float)local_b0 * fVar14) + ABS(fStack_a4 * fVar15);
    fVar18 = ABS(fStack_94 * fVar16) +
             ABS((float)((ulong)local_b0 >> 0x20) * fVar14) + ABS(local_a0 * fVar15);
    fVar19 = ABS((float)uStack_90 * fVar16) + ABS(fStack_a8 * fVar14) + ABS(fStack_9c * fVar15);
    fVar14 = ABS((float)(uStack_90 >> 0x20) * fVar16) +
             ABS(fStack_a4 * fVar14) + ABS(local_98 * fVar15);
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar17;
    auVar3._8_4_ = fVar19;
    auVar3._12_4_ = fVar14;
    auVar4._4_4_ = fVar18;
    auVar4._0_4_ = fVar17;
    auVar4._8_4_ = fVar19;
    auVar4._12_4_ = fVar14;
    auVar21 = NEON_ext(auVar3,auVar4,8,1);
    *(ulong *)param_2 = CONCAT44(fVar18,fVar17);
    *(long *)(param_2 + 2) = auVar21._0_8_;
    break;
  case 0xffffffff:
  case 7:
    uVar12 = FUN_00400880();
    FUN_00400890(uVar12,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuBounds.cpp"
                 ,0x1ee,"Gu::GeometryUnion::computeBounds: Unknown shape type.");
  }
  return fVar20;
}


