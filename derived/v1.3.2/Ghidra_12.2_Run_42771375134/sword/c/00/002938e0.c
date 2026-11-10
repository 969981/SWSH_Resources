/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002938e0; name: FUN_002938e0
 */


void FUN_002938e0(float param_1,float param_2,float *param_3,undefined4 *param_4,float *param_5,
                 float *param_6,ulong param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
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
  int local_a0;
  float local_9c;
  int local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  switch(*param_4) {
  case 0:
    param_2 = ((float)param_4[1] + param_1) * param_2;
    fVar27 = param_5[5];
    fVar30 = param_5[6];
    *param_3 = param_5[4] - param_2;
    param_3[1] = fVar27 - param_2;
    param_3[2] = fVar30 - param_2;
    fVar22 = param_2 + param_5[5];
    fVar7 = param_2 + param_5[4];
    goto LAB_00293ab0;
  case 1:
    fVar7 = param_5[3];
    fVar27 = *param_5;
    fVar30 = fVar27 + fVar27;
    fVar28 = fVar7 + fVar7;
    fVar21 = fVar27 * fVar30 + fVar7 * fVar28 + -1.0;
    fVar20 = param_5[2] * fVar28 + fVar30 * param_5[1];
    fVar18 = fVar30 * param_5[2] - fVar28 * param_5[1];
    fVar7 = param_5[4] * fVar21 + param_5[5] * fVar20 + fVar18 * param_5[6];
    fVar30 = 8.5070587e+37;
    fVar23 = -fVar7;
    fStack_64 = param_1;
    fVar25 = fabsf(fVar21);
    fVar13 = fabsf(fVar20);
    fVar17 = fabsf(fVar18);
    fVar28 = DAT_01d4c150;
    fVar22 = DAT_01d4c6a4;
    fVar8 = DAT_01d4c6a4;
    fVar16 = DAT_01d4c6a4;
    fVar27 = DAT_01d4c150;
    if (((fVar25 <= DAT_01d4c0c4) || (DAT_01d4c1cc <= fVar13)) || (DAT_01d4c1cc <= fVar17)) {
      if (((fVar25 < DAT_01d4c1cc) && (DAT_01d4c0c4 < fVar13)) && (fVar17 < DAT_01d4c1cc)) {
        if (0.0 < fVar20) {
          fVar25 = fVar7 + fStack_64;
          fVar16 = fVar25;
          goto LAB_002944a8;
        }
        fVar7 = 8.5070587e+37;
        fVar28 = fVar23 - fStack_64;
        fVar25 = 8.5070587e+37;
        fVar13 = fVar28;
        goto LAB_002944b4;
      }
      if (((DAT_01d4c1cc <= fVar25) || (DAT_01d4c1cc <= fVar13)) || (fVar17 <= DAT_01d4c0c4)) {
        fVar25 = 8.5070587e+37;
LAB_002944a8:
        fVar7 = 8.5070587e+37;
        goto LAB_002944ac;
      }
      if (0.0 < fVar18) {
        fVar30 = fVar7 + fStack_64;
        fVar7 = 8.5070587e+37;
        fVar25 = 8.5070587e+37;
        fVar22 = fVar30;
        goto LAB_002944b0;
      }
      fStack_64 = fVar23 - fStack_64;
      fVar7 = 8.5070587e+37;
      fVar25 = 8.5070587e+37;
      fVar13 = -8.5070587e+37;
      fVar27 = fStack_64;
    }
    else {
      if (fVar21 <= 0.0) {
        fVar7 = 8.5070587e+37;
        fVar23 = fVar23 - fStack_64;
        fVar13 = -8.5070587e+37;
        fVar25 = 8.5070587e+37;
        fStack_64 = -8.5070587e+37;
        fVar17 = fVar23;
        goto joined_r0x002945c4;
      }
      fVar25 = 8.5070587e+37;
      fVar7 = fVar7 + fStack_64;
      fVar8 = fVar7;
LAB_002944ac:
LAB_002944b0:
      fVar13 = -8.5070587e+37;
LAB_002944b4:
      fStack_64 = -8.5070587e+37;
    }
    fVar23 = DAT_01d4c150;
    fVar17 = -8.5070587e+37;
joined_r0x002945c4:
    if (param_2 != 1.0) {
      fVar25 = (fVar16 + fVar28) * 0.5;
      fVar7 = (fVar8 + fVar23) * 0.5;
      fVar30 = (fVar22 + fVar27) * 0.5;
      fVar8 = (fVar8 - fVar23) * 0.5 * param_2;
      fVar28 = (fVar16 - fVar28) * 0.5 * param_2;
      param_2 = (fVar22 - fVar27) * 0.5 * param_2;
      fVar17 = fVar7 - fVar8;
      fVar13 = fVar25 - fVar28;
      fStack_64 = fVar30 - param_2;
      fVar7 = fVar7 + fVar8;
      fVar25 = fVar25 + fVar28;
      fVar30 = fVar30 + param_2;
    }
    *param_3 = fVar17;
    param_3[1] = fVar13;
    param_3[2] = fStack_64;
    param_3[3] = fVar7;
    param_3[4] = fVar25;
    param_3[5] = fVar30;
    return;
  case 2:
    fVar8 = param_5[2];
    fVar7 = param_5[3];
    fVar27 = *param_5;
    fVar30 = param_5[1];
    fVar16 = fVar7 + fVar7;
    fVar28 = fVar27 + fVar27;
    fVar27 = fabsf(fVar27 * fVar28 + fVar7 * fVar16 + -1.0);
    fVar7 = (fVar27 * (float)param_4[2] + (float)param_4[1] + param_1) * param_2;
    fVar27 = fabsf(fVar8 * fVar16 + fVar28 * fVar30);
    fVar22 = (fVar27 * (float)param_4[2] + (float)param_4[1] + param_1) * param_2;
    fVar27 = fabsf(fVar28 * fVar8 - fVar16 * fVar30);
    param_2 = (fVar27 * (float)param_4[2] + (float)param_4[1] + param_1) * param_2;
    fVar30 = param_5[6];
    fVar27 = param_5[5];
    *param_3 = param_5[4] - fVar7;
    param_3[1] = fVar27 - fVar22;
    param_3[2] = fVar30 - param_2;
    fVar22 = fVar22 + param_5[5];
    fVar7 = fVar7 + param_5[4];
LAB_00293ab0:
    fVar27 = param_5[6];
    param_3[3] = fVar7;
    param_3[4] = fVar22;
    param_3[5] = param_2 + fVar27;
    return;
  case 3:
    fVar27 = *param_5;
    fVar30 = param_5[1];
    fVar7 = param_5[2];
    fVar28 = param_5[3];
    fVar13 = fVar27 + fVar27;
    fVar18 = fVar30 + fVar30;
    fVar25 = fVar7 + fVar7;
    fVar22 = fVar30 * fVar18;
    fVar8 = fVar7 * fVar25;
    uVar3 = NEON_fmov(0x3f800000,4);
    uVar19 = NEON_ext(CONCAT44(fVar7 * fVar13 + fVar28 * fVar18,fVar7 * fVar13 + fVar28 * fVar18),
                      CONCAT44(fVar7 * fVar18 - fVar28 * fVar13,fVar7 * fVar18 - fVar28 * fVar13),4,
                      1);
    fVar23 = (float)((ulong)uVar3 >> 0x20);
    fVar16 = (float)uVar3 - fVar27 * fVar13;
    uVar3 = NEON_ext(CONCAT44((fVar23 - fVar22) - fVar8,((float)uVar3 - fVar22) - fVar8),
                     CONCAT44(fVar30 * fVar13 + fVar28 * fVar25,fVar30 * fVar13 + fVar28 * fVar25),4
                     ,1);
    uVar15 = NEON_ext(CONCAT44(fVar30 * fVar13 - fVar28 * fVar25,fVar30 * fVar13 - fVar28 * fVar25),
                      CONCAT44((fVar23 - fVar27 * fVar13) - fVar8,fVar16 - fVar8),4,1);
    fVar20 = param_5[4];
    fVar21 = param_5[5];
    fVar17 = param_5[6];
    *(float *)((ulong)&local_80 | 8) = fVar7 * fVar13 - fVar28 * fVar18;
    fStack_74 = (float)uVar15;
    fStack_70 = (float)((ulong)uVar15 >> 0x20);
    fStack_68 = (float)uVar19;
    fStack_64 = (float)((ulong)uVar19 >> 0x20);
    fVar27 = (float)param_4[1];
    fVar23 = (float)param_4[2];
    fVar25 = (float)param_4[3];
    fVar30 = (param_1 +
             ABS((float)uVar3 * fVar27) + ABS(fStack_74 * fVar23) + ABS(fStack_68 * fVar25)) *
             param_2;
    fVar8 = (param_1 +
            ABS((float)((ulong)uVar3 >> 0x20) * fVar27) + ABS(fStack_70 * fVar23) +
            ABS(fStack_64 * fVar25)) * param_2;
    param_2 = (param_1 +
              ABS(fStack_78 * fVar27) + ABS((fVar7 * fVar18 + fVar28 * fVar13) * fVar23) +
              ABS((fVar16 - fVar22) * fVar25)) * param_2;
    auVar9._0_4_ = fVar20 + fVar30;
    auVar9._4_4_ = fVar21 + fVar8;
    auVar9._8_4_ = fVar17 + param_2;
    uVar15 = CONCAT44(auVar9._0_4_,fVar17 - param_2);
    uVar3 = auVar9._4_8_;
    *(ulong *)param_3 = CONCAT44(fVar21 - fVar8,fVar20 - fVar30);
    *(undefined8 *)(param_3 + 2) = uVar15;
    break;
  case 4:
    lVar6 = *(long *)(param_4 + 8);
    if ((*(byte *)(param_4 + 0xb) & 1) == 0) {
      fVar27 = *param_5;
      fVar30 = param_5[1];
      fVar7 = param_5[2];
      fVar28 = param_5[3];
      fVar16 = fVar27 + fVar27;
      fVar23 = fVar30 + fVar30;
      fVar13 = fVar7 + fVar7;
      fVar22 = fVar30 * fVar23;
      fVar8 = fVar7 * fVar13;
      uVar3 = NEON_fmov(0x3f800000,4);
      fVar25 = (float)uVar3 - fVar27 * fVar16;
      fVar17 = (float)((ulong)uVar3 >> 0x20);
      fStack_78 = fVar7 * fVar16 - fVar28 * fVar23;
      fStack_6c = fVar7 * fVar23 + fVar28 * fVar16;
      local_80 = NEON_ext(CONCAT44((fVar17 - fVar22) - fVar8,((float)uVar3 - fVar22) - fVar8),
                          CONCAT44(fVar30 * fVar16 + fVar28 * fVar13,
                                   fVar30 * fVar16 + fVar28 * fVar13),4,1);
      uVar3 = NEON_ext(CONCAT44(fVar30 * fVar16 - fVar28 * fVar13,fVar30 * fVar16 - fVar28 * fVar13)
                       ,CONCAT44((fVar17 - fVar27 * fVar16) - fVar8,fVar25 - fVar8),4,1);
      uVar15 = NEON_ext(CONCAT44(fVar7 * fVar16 + fVar28 * fVar23,fVar7 * fVar16 + fVar28 * fVar23),
                        CONCAT44(fVar7 * fVar23 - fVar28 * fVar16,fVar7 * fVar23 - fVar28 * fVar16),
                        4,1);
      fVar25 = fVar25 - fVar22;
      fStack_70 = (float)((ulong)uVar3 >> 0x20);
      fStack_74 = (float)uVar3;
      fStack_68 = (float)uVar15;
      fStack_64 = (float)((ulong)uVar15 >> 0x20);
      pfVar4 = (float *)(lVar6 + 0x20);
      if (param_6 != (float *)0x0) {
        pfVar4 = param_6;
      }
      if ((param_4[2] != 0x3f800000 || param_4[1] != 0x3f800000) || param_4[3] != 0x3f800000) {
                    /* try { // try from 00293cd8 to 00293ceb has its CatchHandler @ 00294290 */
        FUN_002945d0(&local_80,param_4 + 1);
      }
      goto LAB_00293de4;
    }
    fVar27 = *param_5;
    fVar30 = param_5[1];
    fVar7 = param_5[2];
    fVar28 = param_5[3];
    fVar16 = fVar27 + fVar27;
    fVar25 = fVar30 + fVar30;
    fVar13 = fVar7 + fVar7;
    fVar22 = fVar30 * fVar25;
    fVar8 = fVar7 * fVar13;
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar23 = (float)uVar3 - fVar27 * fVar16;
    fVar17 = (float)((ulong)uVar3 >> 0x20);
    fStack_78 = fVar7 * fVar16 - fVar28 * fVar25;
    fStack_6c = fVar7 * fVar25 + fVar28 * fVar16;
    local_80 = NEON_ext(CONCAT44((fVar17 - fVar22) - fVar8,((float)uVar3 - fVar22) - fVar8),
                        CONCAT44(fVar30 * fVar16 + fVar28 * fVar13,fVar30 * fVar16 + fVar28 * fVar13
                                ),4,1);
    uVar3 = NEON_ext(CONCAT44(fVar30 * fVar16 - fVar28 * fVar13,fVar30 * fVar16 - fVar28 * fVar13),
                     CONCAT44((fVar17 - fVar27 * fVar16) - fVar8,fVar23 - fVar8),4,1);
    uVar15 = NEON_ext(CONCAT44(fVar7 * fVar16 + fVar28 * fVar25,fVar7 * fVar16 + fVar28 * fVar25),
                      CONCAT44(fVar7 * fVar25 - fVar28 * fVar16,fVar7 * fVar25 - fVar28 * fVar16),4,
                      1);
    fVar23 = fVar23 - fVar22;
    fStack_70 = (float)((ulong)uVar3 >> 0x20);
    fStack_74 = (float)uVar3;
    fStack_68 = (float)uVar15;
    fStack_64 = (float)((ulong)uVar15 >> 0x20);
    if ((param_4[2] != 0x3f800000 || param_4[1] != 0x3f800000) || param_4[3] != 0x3f800000) {
                    /* try { // try from 00293f2c to 00293f3f has its CatchHandler @ 0029428c */
      FUN_002945d0(&local_80,param_4 + 1);
    }
    pfVar4 = (float *)(*(long *)(lVar6 + 0x48) + (ulong)*(byte *)(lVar6 + 0x47) * 0x14);
    fVar27 = *pfVar4;
    fVar30 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar28 = (float)((ulong)local_80 >> 0x20);
    auVar10._0_4_ = (float)local_80 * fVar27 + fStack_74 * fVar30 + fStack_68 * fVar7;
    auVar10._4_4_ = fVar28 * fVar27 + fStack_70 * fVar30 + fStack_64 * fVar7;
    auVar10._8_4_ = fStack_78 * fVar27 + fStack_6c * fVar30 + fVar23 * fVar7;
    auVar12._12_4_ = fStack_74 * fVar27 + fStack_68 * fVar30 + fVar7 * 0.0;
    auVar12._0_12_ = auVar10;
    auVar11 = auVar10;
    if (*(byte *)(lVar6 + 0x46) != 1) {
      iVar5 = 1 - (uint)*(byte *)(lVar6 + 0x46);
      auVar14 = auVar12;
      do {
        fVar8 = (float)*(undefined8 *)(pfVar4 + 5);
        uVar3 = *(undefined8 *)(pfVar4 + 3);
        fVar27 = (float)uVar3;
        fVar7 = (float)((ulong)uVar3 >> 0x20);
        iVar5 = iVar5 + 1;
        fVar30 = fStack_68 * fVar8 + (float)local_80 * fVar27 + fStack_74 * fVar7;
        fVar22 = fStack_64 * fVar8 + fVar28 * fVar27 + fStack_70 * fVar7;
        fVar16 = fVar23 * fVar8 + fStack_78 * fVar27 + fStack_6c * fVar7;
        fVar27 = fVar8 * 0.0 + fStack_74 * fVar27 + fStack_68 * fVar7;
        auVar1._4_4_ = fVar22;
        auVar1._0_4_ = fVar30;
        auVar1._8_4_ = fVar16;
        auVar1._12_4_ = fVar27;
        auVar12 = NEON_fmin(auVar12,auVar1,4);
        auVar10 = auVar12._0_12_;
        auVar2._4_4_ = fVar22;
        auVar2._0_4_ = fVar30;
        auVar2._8_4_ = fVar16;
        auVar2._12_4_ = fVar27;
        auVar14 = NEON_fmax(auVar14,auVar2,4);
        auVar11 = auVar14._0_12_;
        pfVar4 = pfVar4 + 3;
      } while (iVar5 != 0);
    }
    fVar27 = (float)*(undefined8 *)(param_5 + 4);
    fVar28 = param_1 + auVar11._0_4_ + fVar27;
    fVar30 = (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20);
    fVar8 = param_1 + auVar11._4_4_ + fVar30;
    fVar23 = param_1 + auVar11._8_4_ + param_5[6];
    fVar27 = (auVar10._0_4_ - param_1) + fVar27;
    fVar30 = (auVar10._4_4_ - param_1) + fVar30;
    fVar7 = (auVar10._8_4_ - param_1) + param_5[6];
    fVar22 = (fVar28 + fVar27) * 0.5;
    fVar16 = (fVar8 + fVar30) * 0.5;
    fVar25 = (fVar23 + fVar7) * 0.5;
    param_2 = param_2 * 0.5;
    fVar27 = (fVar28 - fVar27) * param_2;
    fVar30 = (fVar8 - fVar30) * param_2;
    param_2 = (fVar23 - fVar7) * param_2;
    uVar3 = CONCAT44(fVar25 + param_2,fVar16 + fVar30);
    *(ulong *)param_3 = CONCAT44(fVar16 - fVar30,fVar22 - fVar27);
    *(ulong *)(param_3 + 2) = CONCAT44(fVar22 + fVar27,fVar25 - param_2);
    break;
  case 5:
    pfVar4 = param_6;
    if (param_6 == (float *)0x0) {
      pfVar4 = (float *)(*(long *)(param_4 + 10) + 0x38);
    }
    fVar27 = *param_5;
    fVar30 = param_5[1];
    fVar7 = param_5[2];
    fVar28 = param_5[3];
    fVar16 = fVar27 + fVar27;
    fVar23 = fVar30 + fVar30;
    fVar13 = fVar7 + fVar7;
    fVar22 = fVar30 * fVar23;
    fVar8 = fVar7 * fVar13;
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar25 = (float)uVar3 - fVar27 * fVar16;
    fVar17 = (float)((ulong)uVar3 >> 0x20);
    fStack_78 = fVar7 * fVar16 - fVar28 * fVar23;
    fStack_6c = fVar7 * fVar23 + fVar28 * fVar16;
    local_80 = NEON_ext(CONCAT44((fVar17 - fVar22) - fVar8,((float)uVar3 - fVar22) - fVar8),
                        CONCAT44(fVar30 * fVar16 + fVar28 * fVar13,fVar30 * fVar16 + fVar28 * fVar13
                                ),4,1);
    uVar3 = NEON_ext(CONCAT44(fVar30 * fVar16 - fVar28 * fVar13,fVar30 * fVar16 - fVar28 * fVar13),
                     CONCAT44((fVar17 - fVar27 * fVar16) - fVar8,fVar25 - fVar8),4,1);
    uVar15 = NEON_ext(CONCAT44(fVar7 * fVar16 + fVar28 * fVar23,fVar7 * fVar16 + fVar28 * fVar23),
                      CONCAT44(fVar7 * fVar23 - fVar28 * fVar16,fVar7 * fVar23 - fVar28 * fVar16),4,
                      1);
    fVar25 = fVar25 - fVar22;
    fStack_70 = (float)((ulong)uVar3 >> 0x20);
    fStack_74 = (float)uVar3;
    fStack_68 = (float)uVar15;
    fStack_64 = (float)((ulong)uVar15 >> 0x20);
    if ((param_4[2] != 0x3f800000 || param_4[1] != 0x3f800000) || param_4[3] != 0x3f800000) {
                    /* try { // try from 00293dd0 to 00293de3 has its CatchHandler @ 00294298 */
      FUN_002945d0(&local_80,param_4 + 1);
    }
LAB_00293de4:
    fVar22 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar27 = param_5[4];
    fVar30 = (float)local_80 * fVar22 + fStack_74 * fVar8;
    fVar28 = (float)((ulong)local_80 >> 0x20) * fVar22 + fStack_70 * fVar8;
    fVar22 = fStack_78 * fVar22 + fStack_6c * fVar8;
    fVar26 = (float)*(undefined8 *)(pfVar4 + 5);
    fVar17 = (float)*(undefined8 *)(pfVar4 + 3);
    fVar24 = (float)((ulong)*(undefined8 *)(pfVar4 + 3) >> 0x20);
    goto LAB_00294190;
  case 6:
    local_9c = (float)param_4[4];
    local_a0 = param_4[5];
    local_98 = param_4[6];
    local_8c = 0x3f80000000000000;
    local_94 = 0;
    lVar6 = *(long *)(param_4 + 2);
    if (param_6 == (float *)0x0) {
      fVar27 = *(float *)(lVar6 + 0x20);
      fVar28 = *(float *)(lVar6 + 0x24);
      fVar30 = *(float *)(lVar6 + 0x28);
      fVar22 = *(float *)(lVar6 + 0x2c);
      fVar7 = *(float *)(lVar6 + 0x30);
      fVar8 = *(float *)(lVar6 + 0x34);
    }
    else {
      fVar27 = *param_6;
      fVar28 = param_6[1];
      fVar30 = param_6[2];
      fVar22 = param_6[3];
      fVar7 = param_6[4];
      fVar8 = param_6[5];
    }
    fVar16 = fVar27 - fVar22;
    fVar23 = fVar28 - fVar7;
    fVar25 = fVar30 - fVar8;
    fVar27 = fVar27 + fVar22;
    fVar28 = fVar28 + fVar7;
    fVar30 = fVar30 + fVar8;
    *param_3 = fVar16;
    param_3[1] = fVar23;
    param_3[2] = fVar25;
    param_3[3] = fVar27;
    param_3[4] = fVar28;
    param_3[5] = fVar30;
    if ((param_7 & 1) != 0) {
      fVar7 = *(float *)(lVar6 + 0x58) / local_9c;
      if (0.0 <= fVar7) {
        fVar28 = fVar7 + fVar28;
        param_3[4] = fVar28;
      }
      else {
        fVar23 = fVar7 + fVar23;
        param_3[1] = fVar23;
      }
    }
    fVar13 = (fVar28 + fVar23) * 0.5;
    fVar8 = (fVar27 + fVar16) * 0.5;
    fVar7 = (fVar30 + fVar25) * 0.5;
    fVar17 = (fVar27 - fVar16) * 0.5;
    fVar24 = (fVar28 - fVar23) * 0.5;
    fVar26 = (fVar30 - fVar25) * 0.5;
    fVar27 = *param_5;
    fVar30 = param_5[1];
    fVar28 = param_5[2];
    fVar22 = param_5[3];
    fVar18 = fVar27 + fVar27;
    fVar20 = fVar30 + fVar30;
    fVar21 = fVar28 + fVar28;
    fVar16 = fVar30 * fVar20;
    fVar23 = fVar28 * fVar21;
    uVar3 = NEON_fmov(0x3f800000,4);
    fStack_6c = fVar28 * fVar20 + fVar22 * fVar18;
    fStack_78 = fVar28 * fVar18 - fVar22 * fVar20;
    fVar25 = (float)uVar3 - fVar27 * fVar18;
    fVar29 = (float)((ulong)uVar3 >> 0x20);
    local_80 = NEON_ext(CONCAT44((fVar29 - fVar16) - fVar23,((float)uVar3 - fVar16) - fVar23),
                        CONCAT44(fVar30 * fVar18 + fVar22 * fVar21,fVar30 * fVar18 + fVar22 * fVar21
                                ),4,1);
    uVar3 = NEON_ext(CONCAT44(fVar30 * fVar18 - fVar22 * fVar21,fVar30 * fVar18 - fVar22 * fVar21),
                     CONCAT44((fVar29 - fVar27 * fVar18) - fVar23,fVar25 - fVar23),4,1);
    fVar25 = fVar25 - fVar16;
    uVar15 = NEON_ext(CONCAT44(fVar28 * fVar18 + fVar22 * fVar20,fVar28 * fVar18 + fVar22 * fVar20),
                      CONCAT44(fVar28 * fVar20 - fVar22 * fVar18,fVar28 * fVar20 - fVar22 * fVar18),
                      4,1);
    fStack_70 = (float)((ulong)uVar3 >> 0x20);
    fStack_74 = (float)uVar3;
    fStack_68 = (float)uVar15;
    fStack_64 = (float)((ulong)uVar15 >> 0x20);
    if ((local_9c != 1.0 || local_a0 != 0x3f800000) || local_98 != 0x3f800000) {
                    /* try { // try from 00294154 to 00294167 has its CatchHandler @ 00294294 */
      FUN_002945d0(&local_80,&local_a0);
    }
    fVar27 = param_5[4];
    fVar30 = (float)local_80 * fVar8 + fStack_74 * fVar13;
    fVar28 = (float)((ulong)local_80 >> 0x20) * fVar8 + fStack_70 * fVar13;
    fVar22 = fStack_78 * fVar8 + fStack_6c * fVar13;
LAB_00294190:
    fVar27 = fVar27 + fVar30 + fStack_68 * fVar7;
    fVar30 = param_5[5] + fVar28 + fStack_64 * fVar7;
    fVar7 = param_5[6] + fVar22 + fVar25 * fVar7;
    fVar28 = (param_1 +
             ABS(fStack_68 * fVar26) + ABS((float)local_80 * fVar17) + ABS(fStack_74 * fVar24)) *
             param_2;
    fVar22 = (param_1 +
             ABS(fStack_64 * fVar26) +
             ABS((float)((ulong)local_80 >> 0x20) * fVar17) + ABS(fStack_70 * fVar24)) * param_2;
    param_2 = (param_1 + ABS(fVar25 * fVar26) + ABS(fStack_78 * fVar17) + ABS(fStack_6c * fVar24)) *
              param_2;
    auVar11._0_4_ = fVar27 + fVar28;
    auVar11._4_4_ = fVar30 + fVar22;
    auVar11._8_4_ = fVar7 + param_2;
    uVar3 = CONCAT44(auVar11._0_4_,fVar7 - param_2);
    *(ulong *)param_3 = CONCAT44(fVar30 - fVar22,fVar27 - fVar28);
    *(undefined8 *)(param_3 + 2) = uVar3;
    uVar3 = auVar11._4_8_;
    break;
  case 0xffffffff:
  case 7:
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuBounds.cpp"
                 ,0x18a,"Gu::GeometryUnion::computeBounds: Unknown shape type.");
    return;
  default:
    goto switchD_00293938_default;
  }
  *(undefined8 *)(param_3 + 4) = uVar3;
switchD_00293938_default:
  return;
}


