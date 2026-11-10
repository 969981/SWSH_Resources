/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f18500; name: FUN_00f18500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f18500(long param_1)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  bool bVar26;
  bool bVar27;
  bool bVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  undefined8 uVar51;
  float fVar53;
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  float fVar72;
  undefined8 uVar71;
  float local_28;
  float local_24;
  
  fVar55 = DAT_01d4bfc8;
  if (*(int *)(param_1 + 0x60) - 1U < 2) {
    if ((*(float *)(param_1 + 0xf0) < *(float *)(param_1 + 0x78)) ||
       (*(float *)(param_1 + 0xf4) < *(float *)(param_1 + 0x78))) goto LAB_00f18610;
    uVar32 = 0x80;
    uVar33 = 0x3f;
    fVar58 = 1.0 / *(float *)(param_1 + 0xf0);
    fVar45 = *(float *)(param_1 + 0xd0) * fVar58;
    fVar49 = *(float *)(param_1 + 0xd8) * fVar58;
    fVar59 = 1.0 / *(float *)(param_1 + 0xf4);
    fVar50 = (float)*(undefined8 *)(param_1 + 0xe0) * fVar59;
    fVar53 = (float)*(undefined8 *)(param_1 + 0xe8) * fVar59;
    fVar54 = fVar45 * fVar50;
    fVar56 = *(float *)(param_1 + 0xd4) * fVar58 *
             (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20) * fVar59;
    fVar57 = fVar49 * fVar53;
    fVar58 = *(float *)(param_1 + 0xdc) * fVar58 *
             (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) * fVar59;
    auVar61._4_4_ = fVar56;
    auVar61._0_4_ = fVar54;
    auVar61._8_4_ = fVar57;
    auVar61._12_4_ = fVar58;
    auVar52._4_4_ = fVar56;
    auVar52._0_4_ = fVar54;
    auVar52._8_4_ = fVar57;
    auVar52._12_4_ = fVar58;
    auVar61 = NEON_ext(auVar61,auVar52,8,1);
    fVar59 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    fVar59 = fVar59 / *(float *)PTR_FloatDegree180_027194f0;
    fVar58 = auVar61._0_4_ + fVar54 + auVar61._4_4_ + fVar56;
    uVar30 = (ulong)(*(float *)(param_1 + 0x90) * DAT_01d4bfc8 * fVar59);
    uVar31 = (ulong)(*(float *)(param_1 + 0x94) * fVar59);
    fVar54 = *(float *)(PTR_SinCosSampleTable_02715d20 + (uVar30 >> 0x18 & 0xff) * 0x10) +
             *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar30 >> 0x18 & 0xff) * 0x10) + 8)
             * (float)((uint)uVar30 & 0xffffff) * DAT_01d4bc78;
    bVar26 = false;
    if ((*(float *)(PTR_SinCosSampleTable_02715d20 + (uVar31 >> 0x18 & 0xff) * 0x10) +
         *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar31 >> 0x18 & 0xff) * 0x10) + 8) *
         (float)((uint)uVar31 & 0xffffff) * DAT_01d4bc78 < fVar58) &&
       (bVar26 = false, !NAN(fVar58) && !NAN(fVar54))) {
      bVar26 = fVar58 < fVar54;
    }
    if (!bVar26) goto LAB_00f18610;
    uVar30 = (ulong)(fVar59 * *(float *)(param_1 + 0x98) * DAT_01d4bfc8);
    pfVar2 = (float *)(param_1 + 0x100);
    fVar59 = (float)NEON_fminnm((fVar54 - fVar58) /
                                (fVar54 - (*(float *)(PTR_SinCosSampleTable_02715d20 +
                                                     (uVar30 >> 0x18 & 0xff) * 0x10) +
                                          *(float *)((long)(PTR_SinCosSampleTable_02715d20 +
                                                           (uVar30 >> 0x18 & 0xff) * 0x10) + 8) *
                                          (float)((uint)uVar30 & 0xffffff) * DAT_01d4bc78)),
                                0x3f800000);
    fVar58 = *(float *)(param_1 + 0x100);
    uVar35 = SUB41(fVar58,0);
    uVar36 = (undefined1)((uint)fVar58 >> 8);
    uVar37 = (undefined1)((uint)fVar58 >> 0x10);
    uVar38 = (undefined1)((uint)fVar58 >> 0x18);
    if (0.0 <= (fVar49 * fVar50 - fVar45 * fVar53) * *(float *)(param_1 + 0x108)) {
      if (fVar58 < 0.0) {
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        *pfVar2 = 0.0;
      }
      fVar58 = ABS((float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))));
      if (fVar59 <= fVar58) {
        fVar58 = fVar58 - fVar59;
        goto LAB_00f18b10;
      }
      fVar58 = *(float *)(param_1 + 0x7c) * fVar55;
    }
    else {
      if (0.0 < fVar58) {
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        *pfVar2 = 0.0;
      }
      fVar58 = ABS((float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))));
      if (fVar59 <= fVar58) {
        fVar58 = (fVar58 - fVar59) * fVar55;
      }
      else {
        fVar58 = *(float *)(param_1 + 0x7c);
LAB_00f18b10:
        fVar58 = fVar58 * DAT_01d4c0b0;
      }
    }
    fVar58 = (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) + fVar58;
    *pfVar2 = fVar58;
    local_24 = -1.0;
    local_28 = 1.0;
    pfVar3 = &local_28;
    if (fVar58 <= 1.0) {
      pfVar3 = pfVar2;
    }
    pfVar4 = &local_24;
    if (-1.0 <= fVar58) {
      pfVar4 = pfVar3;
    }
    fVar58 = *pfVar4;
    *pfVar2 = fVar58;
    uVar35 = SUB41(fVar58,0);
    uVar36 = (undefined1)((uint)fVar58 >> 8);
    uVar37 = (undefined1)((uint)fVar58 >> 0x10);
    uVar38 = (undefined1)((uint)fVar58 >> 0x18);
  }
  else {
LAB_00f18610:
    uVar32 = 0;
    uVar33 = 0x40;
    if (*(int *)(param_1 + 0x60) != 3) {
      uVar32 = 0x80;
      uVar33 = 0x3f;
    }
    fVar58 = *(float *)(param_1 + 0x100);
    uVar35 = SUB41(fVar58,0);
    uVar36 = (undefined1)((uint)fVar58 >> 8);
    uVar37 = (undefined1)((uint)fVar58 >> 0x10);
    uVar38 = (undefined1)((uint)fVar58 >> 0x18);
    if (fVar58 <= 0.0) {
      if (fVar58 < 0.0) {
        fVar58 = fVar58 + (float)((uint)CONCAT11(uVar33,uVar32) << 0x10) *
                          *(float *)(param_1 + 0x84) * DAT_01d4bfc8;
        uVar35 = SUB41(fVar58,0);
        uVar36 = (undefined1)((uint)fVar58 >> 8);
        uVar37 = (undefined1)((uint)fVar58 >> 0x10);
        uVar38 = (undefined1)((uint)fVar58 >> 0x18);
        *(float *)(param_1 + 0x100) = fVar58;
        if (0.0 < fVar58) goto LAB_00f18674;
      }
    }
    else {
      fVar58 = fVar58 + (float)((uint)CONCAT11(uVar33,uVar32) << 0x10) *
                        *(float *)(param_1 + 0x84) * DAT_01d4c0b0;
      uVar35 = SUB41(fVar58,0);
      uVar36 = (undefined1)((uint)fVar58 >> 8);
      uVar37 = (undefined1)((uint)fVar58 >> 0x10);
      uVar38 = (undefined1)((uint)fVar58 >> 0x18);
      *(float *)(param_1 + 0x100) = fVar58;
      if (fVar58 < 0.0) {
LAB_00f18674:
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
    }
  }
  fVar58 = *(float *)(param_1 + 0x104);
  fVar59 = ABS((float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))));
  fVar45 = ABS(fVar58);
  bVar26 = false;
  bVar27 = true;
  bVar28 = false;
  if (*(float *)(param_1 + 0x8c) < fVar59) {
    bVar26 = false;
    bVar27 = false;
    bVar28 = true;
    if (!NAN(fVar59) && !NAN(fVar45)) {
      bVar26 = fVar59 < fVar45;
      bVar27 = fVar59 == fVar45;
      bVar28 = false;
    }
  }
  pfVar2 = (float *)(param_1 + 0x104);
  if (!bVar27 && bVar26 == bVar28) {
    fVar59 = *(float *)(param_1 + 0x80);
    if ((fVar59 < *(float *)(param_1 + 0x9c)) &&
       (((bVar26 = NAN((float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))),
         (bVar26 || (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) != 0.0) &&
         (!bVar26 && (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) < 0.0) ==
         bVar26 && (fVar58 < 0.0)) ||
        ((!NAN((float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))) &&
          (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) < 0.0 && (0.0 < fVar58)))
        ))) {
      fVar59 = *(float *)(param_1 + 0x9c);
    }
    fVar58 = fVar58 + (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) * fVar55 *
                      fVar59;
    *pfVar2 = fVar58;
    local_24 = -1.0;
    local_28 = 1.0;
    pfVar3 = &local_28;
    if (fVar58 <= 1.0) {
      pfVar3 = pfVar2;
    }
    pfVar4 = &local_24;
    if (-1.0 <= fVar58) {
      pfVar4 = pfVar3;
    }
    fVar58 = *pfVar4;
    *pfVar2 = fVar58;
  }
  if (fVar58 <= 0.0) {
    if ((fVar58 < 0.0) &&
       (fVar58 = fVar58 + (float)((uint)CONCAT11(uVar33,uVar32) << 0x10) *
                          *(float *)(param_1 + 0x88) * fVar55, *(float *)(param_1 + 0x104) = fVar58,
       0.0 < fVar58)) goto LAB_00f1876c;
  }
  else {
    fVar58 = fVar58 + (float)((uint)CONCAT11(uVar33,uVar32) << 0x10) *
                      *(float *)(param_1 + 0x88) * DAT_01d4c0b0;
    *(float *)(param_1 + 0x104) = fVar58;
    if (fVar58 < 0.0) {
LAB_00f1876c:
      *pfVar2 = 0.0;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x170) + 0x180))
            (SUB41((float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) +
                   (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))),0),
             *(long **)(param_1 + 0x170),PTR_DAT_0271ff88);
  uVar46 = DAT_01cd5270;
  fVar58 = (float)((ulong)DAT_01cd52f0 >> 0x20);
  fVar59 = (float)DAT_01cd52f0 + fVar58;
  fVar58 = (float)DAT_01cd52f0 + fVar58;
  uVar32 = SUB41(fVar58,0);
  uVar33 = (undefined1)((uint)fVar58 >> 8);
  uVar35 = (undefined1)((uint)fVar58 >> 0x10);
  uVar36 = (undefined1)((uint)fVar58 >> 0x18);
  auVar13[4] = uVar32;
  auVar13._0_4_ = fVar59;
  auVar13[5] = uVar33;
  auVar13[6] = uVar35;
  auVar13[7] = uVar36;
  auVar13[8] = SUB41(fVar59,0);
  auVar13[9] = (char)((uint)fVar59 >> 8);
  auVar13[10] = (char)((uint)fVar59 >> 0x10);
  auVar13[0xb] = (char)((uint)fVar59 >> 0x18);
  auVar13[0xc] = uVar32;
  auVar13[0xd] = uVar33;
  auVar13[0xe] = uVar35;
  auVar13[0xf] = uVar36;
  auVar61 = NEON_frsqrte(auVar13,4);
  uVar14 = (undefined2)(CONCAT15(uVar33,CONCAT14(uVar32,fVar59)) >> 0x20);
  auVar18._4_4_ = auVar61._4_4_ * fVar58;
  auVar18._0_4_ = auVar61._0_4_ * fVar59;
  auVar18._8_4_ = auVar61._8_4_ * fVar59;
  auVar18._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar36,CONCAT12(uVar35,uVar14));
  auVar52 = NEON_frsqrts(auVar61,auVar18,4);
  auVar47._0_4_ = auVar61._0_4_ * auVar52._0_4_;
  auVar47._4_4_ = auVar61._4_4_ * auVar52._4_4_;
  auVar47._8_4_ = auVar61._8_4_ * auVar52._8_4_;
  auVar47._12_4_ = auVar61._12_4_ * auVar52._12_4_;
  iVar15 = -(uint)(fVar59 == 0.0);
  iVar16 = -(uint)(fVar58 == 0.0);
  iVar17 = -(uint)(fVar59 == 0.0);
  auVar19._4_4_ = fVar58 * auVar47._4_4_;
  auVar19._0_4_ = fVar59 * auVar47._0_4_;
  auVar19._8_4_ = fVar59 * auVar47._8_4_;
  auVar19._12_4_ = (float)CONCAT13(uVar36,CONCAT12(uVar35,uVar14)) * auVar47._12_4_;
  auVar61 = NEON_frsqrts(auVar47,auVar19,4);
  fVar58 = auVar47._0_4_ * auVar61._0_4_ * (float)_DAT_01d4b580;
  fVar59 = auVar47._4_4_ * auVar61._4_4_ * (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar45 = auVar47._8_4_ * auVar61._8_4_ * (float)_UNK_01d4b588;
  fVar55 = *(float *)(param_1 + 0x104) *
           (*(float *)(param_1 + 0x98) / DAT_01d4c284) * DAT_01d4bb38 * fVar55 *
           SUB164(ZEXT816(0x3f000000),0);
  bVar34 = SUB161(ZEXT816(0x3f000000),3);
  if (fVar55 < 0.0) {
    bVar34 = 0xbf;
  }
  fVar55 = fVar55 - *(float *)PTR_Float2Pi_02715150 *
                    (float)(int)((float)((uint)bVar34 << 0x18) +
                                fVar55 * *(float *)PTR_Float1Divided2Pi_02715148);
  uVar32 = SUB41(fVar55,0);
  uVar33 = (undefined1)((uint)fVar55 >> 8);
  uVar35 = (undefined1)((uint)fVar55 >> 0x10);
  uVar36 = (undefined1)((uint)fVar55 >> 0x18);
  if (fVar55 <= *(float *)PTR_FloatPiDivided2_02715158) {
    if (-*(float *)PTR_FloatPiDivided2_02715158 <= fVar55) {
      fVar55 = 1.0;
      goto LAB_00f1888c;
    }
    fVar49 = -*(float *)PTR_FloatPi_02715160;
  }
  else {
    fVar49 = *(float *)PTR_FloatPi_02715160;
  }
  fVar49 = fVar49 - fVar55;
  uVar32 = SUB41(fVar49,0);
  uVar33 = (undefined1)((uint)fVar49 >> 8);
  uVar35 = (undefined1)((uint)fVar49 >> 0x10);
  uVar36 = (undefined1)((uint)fVar49 >> 0x18);
  fVar55 = -1.0;
LAB_00f1888c:
  fVar50 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar33,uVar32))) *
           (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar33,uVar32)));
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x180);
  uVar66 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x188) >> 0x20);
  fVar53 = (float)*(undefined8 *)*pauVar1;
  fVar56 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  pauVar5 = (undefined1 (*) [16])(param_1 + 400);
  fVar49 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar33,uVar32))) *
           (fVar50 * (fVar50 * (*(float *)(PTR_SinCoefficients_02715168 + 0xc) +
                               fVar50 * (fVar50 * (*(float *)(PTR_SinCoefficients_02715168 + 4) -
                                                  *(float *)PTR_SinCoefficients_02715168 * fVar50) -
                                        *(float *)(PTR_SinCoefficients_02715168 + 8))) -
                     *(float *)(PTR_SinCoefficients_02715168 + 0x10)) + 1.0);
  fVar58 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar58,0) & ~(byte)iVar15))) * fVar49;
  fVar59 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar59,0) & ~(byte)iVar16))) * fVar49;
  uVar32 = SUB41(fVar59,0);
  uVar33 = (undefined1)((uint)fVar59 >> 8);
  uVar35 = (undefined1)((uint)fVar59 >> 0x10);
  uVar36 = (undefined1)((uint)fVar59 >> 0x18);
  fVar49 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                           CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                    CONCAT11((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                             SUB41(fVar45,0) & ~(byte)iVar17))) * fVar49;
  uVar37 = SUB41(fVar49,0);
  uVar38 = (undefined1)((uint)fVar49 >> 8);
  uVar39 = (undefined1)((uint)fVar49 >> 0x10);
  uVar40 = (undefined1)((uint)fVar49 >> 0x18);
  fVar55 = fVar55 * (fVar50 * (fVar50 * (*(float *)(PTR_CosCoefficients_02715170 + 0xc) +
                                        fVar50 * (fVar50 * (*(float *)(PTR_CosCoefficients_02715170
                                                                      + 4) -
                                                           fVar50 * *(float *)
                                                  PTR_CosCoefficients_02715170) -
                                                 *(float *)(PTR_CosCoefficients_02715170 + 8))) -
                              *(float *)(PTR_CosCoefficients_02715170 + 0x10)) + 1.0);
  uVar44 = (undefined1)((uint)fVar55 >> 0x18);
  auVar22._12_4_ = uVar66;
  auVar22._0_12_ = *pauVar1;
  uVar63 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
  uVar41 = SUB41(fVar55,0);
  uVar42 = (undefined1)((uint)fVar55 >> 8);
  uVar43 = (undefined1)((uint)fVar55 >> 0x10);
  auVar23._12_4_ = uVar66;
  auVar23._0_12_ = *pauVar1;
  uVar69 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50f8);
  auVar6[4] = uVar32;
  auVar6._0_4_ = fVar58;
  auVar6[5] = uVar33;
  auVar6[6] = uVar35;
  auVar6[7] = uVar36;
  auVar6[8] = uVar37;
  auVar6[9] = uVar38;
  auVar6[10] = uVar39;
  auVar6[0xb] = uVar40;
  auVar6[0xc] = uVar41;
  auVar6[0xd] = uVar42;
  auVar6[0xe] = uVar43;
  auVar6[0xf] = uVar44;
  uVar21 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5120);
  auVar7[4] = uVar32;
  auVar7._0_4_ = fVar58;
  auVar7[5] = uVar33;
  auVar7[6] = uVar35;
  auVar7[7] = uVar36;
  auVar7[8] = uVar37;
  auVar7[9] = uVar38;
  auVar7[10] = uVar39;
  auVar7[0xb] = uVar40;
  auVar7[0xc] = uVar41;
  auVar7[0xd] = uVar42;
  auVar7[0xe] = uVar43;
  auVar7[0xf] = uVar44;
  uVar62 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
  auVar24._12_4_ = uVar66;
  auVar24._0_12_ = *pauVar1;
  uVar70 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
  fVar67 = (float)((ulong)uVar69 >> 0x20);
  uVar64 = a64_TBL(ZEXT816(0),*pauVar5,DAT_01cd50f8);
  auVar8[4] = uVar32;
  auVar8._0_4_ = fVar58;
  auVar8[5] = uVar33;
  auVar8[6] = uVar35;
  auVar8[7] = uVar36;
  auVar8[8] = uVar37;
  auVar8[9] = uVar38;
  auVar8[10] = uVar39;
  auVar8[0xb] = uVar40;
  auVar8[0xc] = uVar41;
  auVar8[0xd] = uVar42;
  auVar8[0xe] = uVar43;
  auVar8[0xf] = uVar44;
  uVar51 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
  fVar72 = (float)((ulong)uVar70 >> 0x20);
  auVar9[4] = uVar32;
  auVar9._0_4_ = fVar58;
  auVar9[5] = uVar33;
  auVar9[6] = uVar35;
  auVar9[7] = uVar36;
  auVar9[8] = uVar37;
  auVar9[9] = uVar38;
  auVar9[10] = uVar39;
  auVar9[0xb] = uVar40;
  auVar9[0xc] = uVar41;
  auVar9[0xd] = uVar42;
  auVar9[0xe] = uVar43;
  auVar9[0xf] = uVar44;
  uVar71 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
  auVar10[4] = uVar32;
  auVar10._0_4_ = fVar58;
  auVar10[5] = uVar33;
  auVar10[6] = uVar35;
  auVar10[7] = uVar36;
  auVar10[8] = uVar37;
  auVar10[9] = uVar38;
  auVar10[10] = uVar39;
  auVar10[0xb] = uVar40;
  auVar10[0xc] = uVar41;
  auVar10[0xd] = uVar42;
  auVar10[0xe] = uVar43;
  auVar10[0xf] = uVar44;
  uVar11 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5270);
  uVar12 = a64_TBL(ZEXT816(0),*pauVar5,DAT_01cd5418);
  auVar25._4_4_ =
       (int)(CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(uVar32,fVar58)))) >> 0x20);
  auVar25._0_4_ = fVar58;
  auVar25._8_4_ = fVar58;
  auVar25._12_4_ =
       (int)(CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(uVar32,fVar58)))) >> 0x20);
  uVar60 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50b0);
  fVar65 = (float)_UNK_01d4ae98;
  fVar68 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar54 = (float)_DAT_01d4ae90;
  fVar57 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  lVar29 = *(long *)(param_1 + 0x178);
  fVar45 = (float)((ulong)uVar63 >> 0x20);
  fVar50 = ((float)uVar70 * fVar58 + fVar54 * fVar53 * (float)uVar62 +
           fVar54 * (float)uVar63 * (float)uVar71) - (float)uVar69 * (float)uVar51;
  fVar58 = (fVar72 * fVar59 + fVar57 * fVar56 * (float)((ulong)uVar62 >> 0x20) +
           fVar57 * fVar45 * (float)((ulong)uVar71 >> 0x20)) -
           fVar67 * (float)((ulong)uVar51 >> 0x20);
  auVar48._0_8_ = CONCAT44(fVar58,fVar50);
  auVar48._8_4_ =
       ((float)uVar70 * fVar49 + fVar65 * (float)uVar69 * (float)uVar21 +
       fVar65 * fVar53 * (float)uVar60) - (float)uVar63 * (float)uVar11;
  auVar48._12_4_ =
       (fVar72 * fVar55 + fVar68 * fVar67 * (float)((ulong)uVar21 >> 0x20) +
       fVar68 * fVar56 * (float)((ulong)uVar60 >> 0x20)) - fVar45 * (float)((ulong)uVar11 >> 0x20);
  uVar62 = a64_TBL(ZEXT816(0),*pauVar5,DAT_01cd4f90);
  fVar59 = (float)((ulong)uVar62 >> 0x20);
  uVar63 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd4f90);
  uVar11 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd5120);
  uVar51 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd50f8);
  auVar20._8_4_ = fVar50;
  auVar20._0_8_ = auVar48._0_8_;
  auVar20._12_4_ = fVar58;
  uVar60 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50b0);
  uVar21 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd5418);
  fVar45 = (float)*(undefined8 *)*pauVar5;
  fVar49 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
  fVar53 = (float)((ulong)uVar64 >> 0x20);
  *(long *)(param_1 + 0x188) = auVar48._8_8_;
  *(undefined8 *)(param_1 + 0x180) = auVar48._0_8_;
  uVar46 = a64_TBL(ZEXT816(0),auVar48,uVar46);
  *(undefined1 *)(lVar29 + 0xc0) = 1;
  fVar55 = (float)((ulong)uVar12 >> 0x20);
  fVar58 = (fVar59 * fVar58 + fVar57 * fVar49 * (float)((ulong)uVar63 >> 0x20) +
           fVar57 * fVar55 * (float)((ulong)uVar51 >> 0x20)) -
           fVar53 * (float)((ulong)uVar21 >> 0x20);
  fVar55 = (fVar59 * auVar48._12_4_ + fVar68 * fVar53 * (float)((ulong)uVar11 >> 0x20) +
           fVar68 * fVar49 * (float)((ulong)uVar60 >> 0x20)) -
           fVar55 * (float)((ulong)uVar46 >> 0x20);
  *(ulong *)(lVar29 + 0xa8) =
       CONCAT17((char)((uint)fVar55 >> 0x18),
                CONCAT16((char)((uint)fVar55 >> 0x10),
                         CONCAT15((char)((uint)fVar55 >> 8),
                                  CONCAT14(SUB41(fVar55,0),
                                           ((float)uVar62 * auVar48._8_4_ +
                                            fVar65 * (float)uVar64 * (float)uVar11 +
                                           fVar65 * fVar45 * (float)uVar60) -
                                           (float)uVar12 * (float)uVar46))));
  *(ulong *)(lVar29 + 0xa0) =
       CONCAT17((char)((uint)fVar58 >> 0x18),
                CONCAT16((char)((uint)fVar58 >> 0x10),
                         CONCAT15((char)((uint)fVar58 >> 8),
                                  CONCAT14(SUB41(fVar58,0),
                                           ((float)uVar62 * fVar50 + fVar54 * fVar45 * (float)uVar63
                                           + fVar54 * (float)uVar12 * (float)uVar51) -
                                           (float)uVar64 * (float)uVar21))));
  return;
}


