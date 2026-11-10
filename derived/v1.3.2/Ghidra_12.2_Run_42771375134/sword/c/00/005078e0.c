/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005078e0; name: FUN_005078e0
 */


void FUN_005078e0(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                 long param_7,long param_8,float *param_9,undefined8 param_10,uint param_11,
                 uint param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 (*pauVar24) [16];
  float *pfVar25;
  float *pfVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  long lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  bVar9 = param_4 == 0;
  bVar10 = param_3 == 0;
  uVar1 = param_2 >> 2;
  uVar2 = param_1 >> 2;
  uVar4 = uVar1;
  if (bVar10) {
    uVar4 = uVar2;
  }
  uVar5 = uVar1;
  if (bVar10 || bVar9) {
    uVar5 = uVar2;
  }
  lVar20 = (long)(int)uVar5;
  pauVar24 = (undefined1 (*) [16])(param_6 + (long)(int)uVar4 * 4);
  lVar21 = param_8 + (long)(param_2 >> 1) * 4;
  if (bVar10 || bVar9) {
    param_8 = param_7;
    lVar21 = param_7 + (long)(param_1 >> 1) * 4;
  }
  uVar1 = uVar1 - uVar2;
  uVar2 = uVar1;
  if (!bVar10 || bVar9) {
    uVar2 = 0;
  }
  if (((uVar1 != 0) && (param_3 != 0)) && (param_4 == 0)) {
    uVar4 = param_12;
    if ((int)uVar1 <= (int)param_12) {
      uVar4 = uVar1;
    }
    uVar3 = param_11;
    if ((int)uVar1 <= (int)param_11) {
      uVar3 = uVar1;
    }
    lVar23 = (long)(int)uVar4;
    pauVar27 = (undefined1 (*) [16])((long)pauVar24 + (long)(int)uVar4 * -4);
    lVar22 = (long)(int)uVar3;
    pauVar24 = (undefined1 (*) [16])((long)pauVar24 + (long)(int)uVar3 * -4);
    param_11 = param_11 - uVar3;
    param_12 = param_12 - uVar4;
    if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pauVar24 & 0xf) == 0)) &&
       (((ulong)pauVar27 & 0xf) == 0)) {
      pfVar19 = param_9;
      if (lVar23 != lVar22 && -lVar23 <= -lVar22) {
        do {
          pauVar24 = pauVar24 + -1;
          auVar31 = NEON_rev64(*pauVar24,4);
          auVar31 = NEON_ext(auVar31,auVar31,8,1);
          param_9 = pfVar19 + 4;
          *(long *)(pfVar19 + 2) = auVar31._8_8_;
          *(long *)pfVar19 = auVar31._0_8_;
          pfVar19 = param_9;
        } while (pauVar27 < pauVar24);
      }
    }
    else {
      pfVar19 = param_9;
      if (lVar23 != lVar22 && -lVar23 <= -lVar22) {
        do {
          pauVar24 = (undefined1 (*) [16])(pauVar24[-1] + 0xc);
          param_9 = pfVar19 + 1;
          *pfVar19 = *(float *)*pauVar24;
          pfVar19 = param_9;
        } while (pauVar27 < pauVar24);
      }
    }
  }
  uVar1 = param_12;
  if ((int)uVar5 <= (int)param_12) {
    uVar1 = uVar5;
  }
  uVar4 = param_11;
  if ((int)uVar5 <= (int)param_11) {
    uVar4 = uVar5;
  }
  lVar23 = (long)(int)uVar1;
  uVar11 = (long)pauVar24 + (long)(int)uVar1 * -4;
  lVar29 = (long)(int)uVar4;
  uVar17 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
  uVar28 = (long)pauVar24 - uVar17;
  lVar22 = (param_5 + (long)(int)uVar5 * 4) - uVar17;
  param_11 = param_11 - uVar4;
  lVar14 = lVar21 - uVar17;
  param_8 = param_8 + uVar17;
  param_12 = param_12 - uVar1;
  if (((((ulong)param_9 & 0xf) == 0) && ((uVar28 & 0xf) == 0)) && ((uVar11 & 0xf) == 0)) {
    if (lVar23 == lVar29 || -lVar29 < -lVar23) goto LAB_00507a8c;
    lVar22 = lVar29 * -4 + -4;
    lVar23 = 0;
    lVar15 = 0;
    lVar21 = lVar21 + lVar22;
    do {
      pfVar19 = (float *)((long)pauVar24 + lVar15 + lVar22);
      uVar33 = *(undefined8 *)(lVar21 + lVar15 + -4);
      uVar32 = *(undefined8 *)(lVar21 + lVar15 + -0xc);
      lVar14 = param_5 + (lVar20 - (lVar29 + 1)) * 4 + lVar15;
      lVar15 = lVar15 + -0x10;
      uVar35 = *(undefined8 *)(lVar14 + -4);
      uVar34 = *(undefined8 *)(lVar14 + -0xc);
      auVar31 = NEON_rev64(*(undefined1 (*) [16])(param_8 + lVar23),4);
      auVar31 = NEON_ext(auVar31,auVar31,8,1);
      auVar30._0_4_ = (float)uVar32 * pfVar19[-3] + auVar31._0_4_ * (float)uVar34;
      auVar30._4_4_ =
           (float)((ulong)uVar32 >> 0x20) * pfVar19[-2] +
           auVar31._4_4_ * (float)((ulong)uVar34 >> 0x20);
      auVar30._8_4_ = (float)uVar33 * pfVar19[-1] + auVar31._8_4_ * (float)uVar35;
      auVar30._12_4_ =
           (float)((ulong)uVar33 >> 0x20) * *pfVar19 +
           auVar31._12_4_ * (float)((ulong)uVar35 >> 0x20);
      auVar31 = NEON_rev64(auVar30,4);
      auVar31 = NEON_ext(auVar31,auVar31,8,1);
      uVar28 = (long)pauVar24 + lVar15 + lVar22 + 4;
      ((undefined8 *)((long)param_9 + lVar23))[1] = auVar31._8_8_;
      *(undefined8 *)((long)param_9 + lVar23) = auVar31._0_8_;
      lVar23 = lVar23 + 0x10;
    } while (uVar11 < uVar28);
  }
  else {
    if (lVar23 == lVar29 || -lVar29 < -lVar23) goto LAB_00507a8c;
    lVar22 = lVar29 * -4 + -4;
    lVar15 = 0;
    lVar23 = 0;
    lVar21 = lVar21 + lVar22;
    do {
      lVar14 = lVar15 + lVar22;
      pfVar19 = (float *)(lVar21 + lVar15);
      pfVar13 = (float *)(param_5 + (lVar20 - (lVar29 + 1)) * 4 + lVar15);
      lVar15 = lVar15 + -4;
      uVar28 = (long)pauVar24 + lVar15 + lVar22 + 4;
      *(float *)((long)param_9 + lVar23) =
           *pfVar19 * *(float *)((long)pauVar24 + lVar14) + *pfVar13 * *(float *)(param_8 + lVar23);
      lVar23 = lVar23 + 4;
    } while (uVar11 < uVar28);
  }
  param_9 = (float *)((long)param_9 - lVar15);
  lVar22 = param_5 + (lVar20 - (lVar29 + 1)) * 4 + lVar15 + 4;
  lVar14 = lVar21 + lVar15 + 4;
  param_8 = param_8 - lVar15;
LAB_00507a8c:
  uVar1 = param_12;
  if ((int)uVar5 <= (int)param_12) {
    uVar1 = uVar5;
  }
  uVar4 = param_11;
  if ((int)uVar5 <= (int)param_11) {
    uVar4 = uVar5;
  }
  pfVar19 = (float *)(uVar28 + (long)(int)uVar1 * 4);
  uVar17 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
  uVar11 = (ulong)(int)uVar4;
  pfVar13 = (float *)(uVar28 + uVar17);
  pfVar18 = (float *)(lVar22 + uVar17);
  if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pfVar13 & 0xf) == 0)) &&
     (((ulong)pfVar19 & 0xf) == 0)) {
    if ((int)uVar4 < (int)uVar1) {
      pfVar16 = (float *)(uVar28 + (uVar11 + 4) * 4);
      pfVar26 = pfVar19;
      if (pfVar19 <= pfVar16) {
        pfVar26 = pfVar16;
      }
      uVar28 = (long)pfVar26 + (3 - uVar28) + ~uVar11 * 4 >> 2 & 0x3ffffffffffffffc;
      pauVar24 = (undefined1 (*) [16])(lVar14 + (-4 - uVar11) * 4);
      pfVar16 = param_9;
      pfVar26 = (float *)(param_8 + uVar17);
      do {
        pfVar25 = pfVar13 + 4;
        fVar6 = *pfVar13;
        fVar7 = pfVar13[1];
        fVar8 = pfVar13[3];
        auVar31 = NEON_rev64(*pauVar24,4);
        auVar31 = NEON_ext(auVar31,auVar31,8,1);
        uVar33 = *(undefined8 *)(pfVar18 + 2);
        uVar32 = *(undefined8 *)pfVar18;
        uVar35 = *(undefined8 *)(pfVar26 + 2);
        uVar34 = *(undefined8 *)pfVar26;
        pfVar16[2] = auVar31._8_4_ * pfVar13[2] - (float)uVar35 * (float)uVar33;
        pfVar16[3] = auVar31._12_4_ * fVar8 -
                     (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
        *pfVar16 = auVar31._0_4_ * fVar6 - (float)uVar34 * (float)uVar32;
        pfVar16[1] = auVar31._4_4_ * fVar7 -
                     (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar32 >> 0x20);
        pfVar13 = pfVar25;
        pauVar24 = pauVar24 + -1;
        pfVar16 = pfVar16 + 4;
        pfVar18 = pfVar18 + 4;
        pfVar26 = pfVar26 + 4;
      } while (pfVar25 < pfVar19);
      pfVar18 = (float *)(lVar22 + (uVar28 + uVar11 + 4) * 4);
      param_9 = param_9 + uVar28 + 4;
    }
  }
  else if ((int)uVar4 < (int)uVar1) {
    pfVar16 = (float *)(uVar28 + (uVar11 + 1) * 4);
    pfVar26 = (float *)(lVar14 + uVar11 * -4);
    pfVar25 = pfVar19;
    if (pfVar19 <= pfVar16) {
      pfVar25 = pfVar16;
    }
    uVar28 = (long)pfVar25 + (3 - uVar28) + ~uVar11 * 4 >> 2;
    pfVar16 = param_9;
    pfVar25 = (float *)(param_8 + uVar17);
    do {
      pfVar26 = pfVar26 + -1;
      pfVar12 = pfVar13 + 1;
      *pfVar16 = *pfVar26 * *pfVar13 - *pfVar25 * *pfVar18;
      pfVar13 = pfVar12;
      pfVar16 = pfVar16 + 1;
      pfVar18 = pfVar18 + 1;
      pfVar25 = pfVar25 + 1;
    } while (pfVar12 < pfVar19);
    param_9 = param_9 + uVar28 + 1;
    pfVar18 = (float *)(lVar22 + (uVar28 + uVar11 + 1) * 4);
  }
  if (uVar2 != 0) {
    uVar5 = param_12 - uVar1;
    if ((int)uVar2 <= (int)(param_12 - uVar1)) {
      uVar5 = uVar2;
    }
    uVar1 = param_11 - uVar4;
    if ((int)uVar2 <= (int)(param_11 - uVar4)) {
      uVar1 = uVar2;
    }
    pfVar19 = pfVar18 + (int)uVar5;
    uVar28 = (ulong)(int)uVar1;
    pfVar13 = pfVar18 + (int)uVar1;
    if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pfVar13 & 0xf) == 0)) &&
       (((ulong)pfVar19 & 0xf) == 0)) {
      if ((int)uVar1 < (int)uVar5) {
        pfVar16 = pfVar19;
        if (pfVar19 <= pfVar18 + uVar28 + 4) {
          pfVar16 = pfVar18 + uVar28 + 4;
        }
        uVar28 = (long)pfVar16 + (3 - (long)pfVar18) + ~uVar28 * 4;
        uVar1 = ((uint)(uVar28 >> 4) & 0xfffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar21 = -((ulong)uVar1 & 3);
          pfVar18 = param_9;
          pfVar16 = pfVar13;
          do {
            pfVar13 = pfVar16 + 4;
            fVar6 = *pfVar16;
            fVar7 = pfVar16[1];
            fVar8 = pfVar16[3];
            param_9 = pfVar18 + 4;
            pfVar18[2] = -pfVar16[2];
            pfVar18[3] = -fVar8;
            *pfVar18 = -fVar6;
            pfVar18[1] = -fVar7;
            lVar21 = lVar21 + 1;
            pfVar18 = param_9;
            pfVar16 = pfVar13;
          } while (lVar21 != 0);
        }
        if (0x2f < uVar28) {
          do {
            fVar6 = *pfVar13;
            fVar7 = pfVar13[1];
            fVar8 = pfVar13[3];
            param_9[2] = -pfVar13[2];
            param_9[3] = -fVar8;
            *param_9 = -fVar6;
            param_9[1] = -fVar7;
            fVar6 = pfVar13[4];
            fVar7 = pfVar13[5];
            fVar8 = pfVar13[7];
            param_9[6] = -pfVar13[6];
            param_9[7] = -fVar8;
            param_9[4] = -fVar6;
            param_9[5] = -fVar7;
            fVar6 = pfVar13[8];
            fVar7 = pfVar13[9];
            fVar8 = pfVar13[0xb];
            param_9[10] = -pfVar13[10];
            param_9[0xb] = -fVar8;
            param_9[8] = -fVar6;
            param_9[9] = -fVar7;
            fVar6 = pfVar13[0xc];
            fVar7 = pfVar13[0xd];
            pfVar18 = pfVar13 + 0xe;
            fVar8 = pfVar13[0xf];
            pfVar13 = pfVar13 + 0x10;
            param_9[0xe] = -*pfVar18;
            param_9[0xf] = -fVar8;
            param_9[0xc] = -fVar6;
            param_9[0xd] = -fVar7;
            param_9 = param_9 + 0x10;
          } while (pfVar13 < pfVar19);
        }
      }
    }
    else if ((int)uVar1 < (int)uVar5) {
      pfVar16 = pfVar19;
      if (pfVar19 <= pfVar18 + uVar28 + 1) {
        pfVar16 = pfVar18 + uVar28 + 1;
      }
      uVar28 = (long)pfVar16 + (3 - (long)pfVar18) + ~uVar28 * 4;
      uVar1 = ((uint)(uVar28 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar21 = -((ulong)uVar1 & 3);
        pfVar18 = param_9;
        pfVar16 = pfVar13;
        do {
          pfVar13 = pfVar16 + 1;
          param_9 = pfVar18 + 1;
          *pfVar18 = -*pfVar16;
          lVar21 = lVar21 + 1;
          pfVar18 = param_9;
          pfVar16 = pfVar13;
        } while (lVar21 != 0);
      }
      if (0xb < uVar28) {
        do {
          *param_9 = -*pfVar13;
          param_9[1] = -pfVar13[1];
          param_9[2] = -pfVar13[2];
          pfVar18 = pfVar13 + 3;
          pfVar13 = pfVar13 + 4;
          param_9[3] = -*pfVar18;
          param_9 = param_9 + 4;
        } while (pfVar13 < pfVar19);
      }
    }
  }
  return;
}


