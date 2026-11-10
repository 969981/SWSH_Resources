/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a729e0; name: FUN_00a729e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a729e0(long *param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  if (param_2 == 0xff) {
    fVar19 = (float)_DAT_02a553b0;
    fVar18 = fVar19 * fVar19;
    fVar21 = (float)((ulong)_DAT_02a553b0 >> 0x20);
    fVar10 = fVar21 * fVar21;
    uVar25 = (undefined1)((uint)fVar10 >> 8);
    uVar26 = (undefined1)((uint)fVar10 >> 0x10);
    uVar27 = (undefined1)((uint)fVar10 >> 0x18);
    fVar22 = (float)uRam0000000002a553b8;
    fVar17 = fVar22 * fVar22;
    uVar28 = (undefined1)((uint)fVar17 >> 8);
    uVar29 = (undefined1)((uint)fVar17 >> 0x10);
    uVar30 = (undefined1)((uint)fVar17 >> 0x18);
    fVar24 = (float)((ulong)uRam0000000002a553b8 >> 0x20);
    fVar13 = fVar24 * fVar24;
    uVar31 = (undefined1)((uint)fVar13 >> 8);
    uVar32 = (undefined1)((uint)fVar13 >> 0x10);
    uVar33 = (undefined1)((uint)fVar13 >> 0x18);
    auVar1[4] = SUB41(fVar10,0);
    auVar1._0_4_ = fVar18;
    auVar1[5] = uVar25;
    auVar1[6] = uVar26;
    auVar1[7] = uVar27;
    auVar1[8] = SUB41(fVar17,0);
    auVar1[9] = uVar28;
    auVar1[10] = uVar29;
    auVar1[0xb] = uVar30;
    auVar1[0xc] = SUB41(fVar13,0);
    auVar1[0xd] = uVar31;
    auVar1[0xe] = uVar32;
    auVar1[0xf] = uVar33;
    auVar2[4] = SUB41(fVar10,0);
    auVar2._0_4_ = fVar18;
    auVar2[5] = uVar25;
    auVar2[6] = uVar26;
    auVar2[7] = uVar27;
    auVar2[8] = SUB41(fVar17,0);
    auVar2[9] = uVar28;
    auVar2[10] = uVar29;
    auVar2[0xb] = uVar30;
    auVar2[0xc] = SUB41(fVar13,0);
    auVar2[0xd] = uVar31;
    auVar2[0xe] = uVar32;
    auVar2[0xf] = uVar33;
    auVar34 = NEON_ext(auVar1,auVar2,8,1);
    fVar18 = auVar34._0_4_ + fVar18;
    fVar10 = auVar34._4_4_ + fVar10;
    fVar17 = fVar18 + fVar10;
    fVar18 = fVar18 + fVar10;
    uVar25 = SUB41(fVar18,0);
    uVar26 = (undefined1)((uint)fVar18 >> 8);
    uVar27 = (undefined1)((uint)fVar18 >> 0x10);
    uVar28 = (undefined1)((uint)fVar18 >> 0x18);
    if (fVar17 != 0.0) {
      auVar3[4] = uVar25;
      auVar3._0_4_ = fVar17;
      auVar3[5] = uVar26;
      auVar3[6] = uVar27;
      auVar3[7] = uVar28;
      auVar3[8] = SUB41(fVar17,0);
      auVar3[9] = (char)((uint)fVar17 >> 8);
      auVar3[10] = (char)((uint)fVar17 >> 0x10);
      auVar3[0xb] = (char)((uint)fVar17 >> 0x18);
      auVar3[0xc] = uVar25;
      auVar3[0xd] = uVar26;
      auVar3[0xe] = uVar27;
      auVar3[0xf] = uVar28;
      auVar34 = NEON_frsqrte(auVar3,4);
      auVar38._0_4_ = auVar34._0_4_ * fVar17;
      auVar38._4_4_ = auVar34._4_4_ * fVar18;
      auVar38._8_4_ = auVar34._8_4_ * fVar17;
      uVar8 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar25,fVar17)) >> 0x20);
      auVar38._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8));
      auVar39 = NEON_frsqrts(auVar34,auVar38,4);
      auVar35._0_4_ = auVar34._0_4_ * auVar39._0_4_;
      auVar35._4_4_ = auVar34._4_4_ * auVar39._4_4_;
      auVar35._8_4_ = auVar34._8_4_ * auVar39._8_4_;
      auVar35._12_4_ = auVar34._12_4_ * auVar39._12_4_;
      auVar40._0_4_ = fVar17 * auVar35._0_4_;
      auVar40._4_4_ = fVar18 * auVar35._4_4_;
      auVar40._8_4_ = fVar17 * auVar35._8_4_;
      auVar40._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8)) * auVar35._12_4_;
      iVar9 = -(uint)(fVar17 == 0.0);
      iVar11 = -(uint)(fVar18 == 0.0);
      iVar12 = -(uint)(fVar17 == 0.0);
      iVar14 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8)) == 0.0);
      auVar34 = NEON_frsqrts(auVar35,auVar40,4);
      fVar19 = fVar19 * auVar35._0_4_ * auVar34._0_4_;
      fVar21 = fVar21 * auVar35._4_4_ * auVar34._4_4_;
      fVar22 = fVar22 * auVar35._8_4_ * auVar34._8_4_;
      fVar24 = fVar24 * auVar35._12_4_ * auVar34._12_4_;
      uVar15 = (**(code **)(*param_1 + 0x748))(param_1,0);
      lVar16 = 0x488;
      if ((uVar15 & 1) == 0) {
        lVar16 = 0x490;
      }
      lVar16 = *(long *)((long)param_1 + lVar16);
      *(ulong *)(lVar16 + 0x88) =
           CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                    CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                             CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                      CONCAT14(SUB41(fVar24,0) & ~(byte)iVar14,
                                               CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                        ~(byte)((uint)iVar12 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                 ~(byte)((uint)iVar12 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar22 >> 8)
                                                                          & ~(byte)((uint)iVar12 >>
                                                                                   8),
                                                                          SUB41(fVar22,0) &
                                                                          ~(byte)iVar12)))))));
      *(ulong *)(lVar16 + 0x80) =
           CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                    CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                             CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                      CONCAT14(SUB41(fVar21,0) & ~(byte)iVar11,
                                               CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                        ~(byte)((uint)iVar9 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                 ~(byte)((uint)iVar9 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar19 >> 8)
                                                                          & ~(byte)((uint)iVar9 >> 8
                                                                                   ),
                                                                          SUB41(fVar19,0) &
                                                                          ~(byte)iVar9)))))));
    }
    fVar19 = (float)_DAT_02a553c0;
    fVar18 = fVar19 * fVar19;
    fVar21 = (float)((ulong)_DAT_02a553c0 >> 0x20);
    fVar10 = fVar21 * fVar21;
    uVar25 = (undefined1)((uint)fVar10 >> 8);
    uVar26 = (undefined1)((uint)fVar10 >> 0x10);
    uVar27 = (undefined1)((uint)fVar10 >> 0x18);
    fVar22 = (float)uRam0000000002a553c8;
    fVar17 = fVar22 * fVar22;
    uVar28 = (undefined1)((uint)fVar17 >> 8);
    uVar29 = (undefined1)((uint)fVar17 >> 0x10);
    uVar30 = (undefined1)((uint)fVar17 >> 0x18);
    fVar24 = (float)((ulong)uRam0000000002a553c8 >> 0x20);
    fVar13 = fVar24 * fVar24;
    uVar31 = (undefined1)((uint)fVar13 >> 8);
    uVar32 = (undefined1)((uint)fVar13 >> 0x10);
    uVar33 = (undefined1)((uint)fVar13 >> 0x18);
    auVar4[4] = SUB41(fVar10,0);
    auVar4._0_4_ = fVar18;
    auVar4[5] = uVar25;
    auVar4[6] = uVar26;
    auVar4[7] = uVar27;
    auVar4[8] = SUB41(fVar17,0);
    auVar4[9] = uVar28;
    auVar4[10] = uVar29;
    auVar4[0xb] = uVar30;
    auVar4[0xc] = SUB41(fVar13,0);
    auVar4[0xd] = uVar31;
    auVar4[0xe] = uVar32;
    auVar4[0xf] = uVar33;
    auVar5[4] = SUB41(fVar10,0);
    auVar5._0_4_ = fVar18;
    auVar5[5] = uVar25;
    auVar5[6] = uVar26;
    auVar5[7] = uVar27;
    auVar5[8] = SUB41(fVar17,0);
    auVar5[9] = uVar28;
    auVar5[10] = uVar29;
    auVar5[0xb] = uVar30;
    auVar5[0xc] = SUB41(fVar13,0);
    auVar5[0xd] = uVar31;
    auVar5[0xe] = uVar32;
    auVar5[0xf] = uVar33;
    auVar34 = NEON_ext(auVar4,auVar5,8,1);
    fVar18 = auVar34._0_4_ + fVar18;
    fVar10 = auVar34._4_4_ + fVar10;
    fVar17 = fVar18 + fVar10;
    fVar18 = fVar18 + fVar10;
    uVar25 = SUB41(fVar18,0);
    uVar26 = (undefined1)((uint)fVar18 >> 8);
    uVar27 = (undefined1)((uint)fVar18 >> 0x10);
    uVar28 = (undefined1)((uint)fVar18 >> 0x18);
    if (fVar17 == 0.0) {
      return;
    }
    auVar6[4] = uVar25;
    auVar6._0_4_ = fVar17;
    auVar6[5] = uVar26;
    auVar6[6] = uVar27;
    auVar6[7] = uVar28;
    auVar6[8] = SUB41(fVar17,0);
    auVar6[9] = (char)((uint)fVar17 >> 8);
    auVar6[10] = (char)((uint)fVar17 >> 0x10);
    auVar6[0xb] = (char)((uint)fVar17 >> 0x18);
    auVar6[0xc] = uVar25;
    auVar6[0xd] = uVar26;
    auVar6[0xe] = uVar27;
    auVar6[0xf] = uVar28;
    auVar34 = NEON_frsqrte(auVar6,4);
    auVar41._0_4_ = auVar34._0_4_ * fVar17;
    auVar41._4_4_ = auVar34._4_4_ * fVar18;
    auVar41._8_4_ = auVar34._8_4_ * fVar17;
    uVar8 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar25,fVar17)) >> 0x20);
    auVar41._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8));
    auVar39 = NEON_frsqrts(auVar34,auVar41,4);
    auVar36._0_4_ = auVar34._0_4_ * auVar39._0_4_;
    auVar36._4_4_ = auVar34._4_4_ * auVar39._4_4_;
    auVar36._8_4_ = auVar34._8_4_ * auVar39._8_4_;
    auVar36._12_4_ = auVar34._12_4_ * auVar39._12_4_;
    auVar42._0_4_ = fVar17 * auVar36._0_4_;
    auVar42._4_4_ = fVar18 * auVar36._4_4_;
    auVar42._8_4_ = fVar17 * auVar36._8_4_;
    auVar42._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8)) * auVar36._12_4_;
    iVar9 = -(uint)(fVar17 == 0.0);
    iVar11 = -(uint)(fVar18 == 0.0);
    iVar12 = -(uint)(fVar17 == 0.0);
    iVar14 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8)) == 0.0);
    auVar34 = NEON_frsqrts(auVar36,auVar42,4);
    fVar19 = fVar19 * auVar36._0_4_ * auVar34._0_4_;
    fVar21 = fVar21 * auVar36._4_4_ * auVar34._4_4_;
    fVar22 = fVar22 * auVar36._8_4_ * auVar34._8_4_;
    fVar24 = fVar24 * auVar36._12_4_ * auVar34._12_4_;
    uVar20 = CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                      CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                               CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                        CONCAT14(SUB41(fVar21,0) & ~(byte)iVar11,
                                                 CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                          ~(byte)((uint)iVar9 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                   ~(byte)((uint)iVar9 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar19 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar9 >> 8),SUB41(fVar19,0) & ~(byte)iVar9)))))));
    uVar23 = CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                      CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                               CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                        CONCAT14(SUB41(fVar24,0) & ~(byte)iVar14,
                                                 CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                          ~(byte)((uint)iVar12 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                   ~(byte)((uint)iVar12 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar22 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar12 >> 8),SUB41(fVar22,0) & ~(byte)iVar12))))))
                     );
    uVar15 = (**(code **)(*param_1 + 0x748))(param_1,1);
  }
  else {
    uVar15 = (**(code **)(*param_1 + 0x748))(param_1);
    if ((uVar15 & 1) == 0) {
      uVar20 = _DAT_02a553c0;
      uVar23 = uRam0000000002a553c8;
    }
    else {
      uVar20 = _DAT_02a553b0;
      uVar23 = uRam0000000002a553b8;
    }
    fVar19 = (float)uVar20;
    fVar18 = fVar19 * fVar19;
    fVar21 = (float)((ulong)uVar20 >> 0x20);
    fVar10 = fVar21 * fVar21;
    uVar25 = (undefined1)((uint)fVar10 >> 8);
    uVar26 = (undefined1)((uint)fVar10 >> 0x10);
    uVar27 = (undefined1)((uint)fVar10 >> 0x18);
    fVar22 = (float)uVar23;
    fVar17 = fVar22 * fVar22;
    uVar28 = (undefined1)((uint)fVar17 >> 8);
    uVar29 = (undefined1)((uint)fVar17 >> 0x10);
    uVar30 = (undefined1)((uint)fVar17 >> 0x18);
    fVar24 = (float)((ulong)uVar23 >> 0x20);
    fVar13 = fVar24 * fVar24;
    uVar31 = (undefined1)((uint)fVar13 >> 8);
    uVar32 = (undefined1)((uint)fVar13 >> 0x10);
    uVar33 = (undefined1)((uint)fVar13 >> 0x18);
    auVar34[4] = SUB41(fVar10,0);
    auVar34._0_4_ = fVar18;
    auVar34[5] = uVar25;
    auVar34[6] = uVar26;
    auVar34[7] = uVar27;
    auVar34[8] = SUB41(fVar17,0);
    auVar34[9] = uVar28;
    auVar34[10] = uVar29;
    auVar34[0xb] = uVar30;
    auVar34[0xc] = SUB41(fVar13,0);
    auVar34[0xd] = uVar31;
    auVar34[0xe] = uVar32;
    auVar34[0xf] = uVar33;
    auVar39[4] = SUB41(fVar10,0);
    auVar39._0_4_ = fVar18;
    auVar39[5] = uVar25;
    auVar39[6] = uVar26;
    auVar39[7] = uVar27;
    auVar39[8] = SUB41(fVar17,0);
    auVar39[9] = uVar28;
    auVar39[10] = uVar29;
    auVar39[0xb] = uVar30;
    auVar39[0xc] = SUB41(fVar13,0);
    auVar39[0xd] = uVar31;
    auVar39[0xe] = uVar32;
    auVar39[0xf] = uVar33;
    auVar34 = NEON_ext(auVar34,auVar39,8,1);
    fVar18 = auVar34._0_4_ + fVar18;
    fVar10 = auVar34._4_4_ + fVar10;
    fVar17 = fVar18 + fVar10;
    fVar18 = fVar18 + fVar10;
    uVar25 = SUB41(fVar18,0);
    uVar26 = (undefined1)((uint)fVar18 >> 8);
    uVar27 = (undefined1)((uint)fVar18 >> 0x10);
    uVar28 = (undefined1)((uint)fVar18 >> 0x18);
    if (fVar17 == 0.0) {
      return;
    }
    auVar7[4] = uVar25;
    auVar7._0_4_ = fVar17;
    auVar7[5] = uVar26;
    auVar7[6] = uVar27;
    auVar7[7] = uVar28;
    auVar7[8] = SUB41(fVar17,0);
    auVar7[9] = (char)((uint)fVar17 >> 8);
    auVar7[10] = (char)((uint)fVar17 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar17 >> 0x18);
    auVar7[0xc] = uVar25;
    auVar7[0xd] = uVar26;
    auVar7[0xe] = uVar27;
    auVar7[0xf] = uVar28;
    auVar34 = NEON_frsqrte(auVar7,4);
    auVar43._0_4_ = auVar34._0_4_ * fVar17;
    auVar43._4_4_ = auVar34._4_4_ * fVar18;
    auVar43._8_4_ = auVar34._8_4_ * fVar17;
    uVar8 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar25,fVar17)) >> 0x20);
    auVar43._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8));
    auVar39 = NEON_frsqrts(auVar34,auVar43,4);
    auVar37._0_4_ = auVar34._0_4_ * auVar39._0_4_;
    auVar37._4_4_ = auVar34._4_4_ * auVar39._4_4_;
    auVar37._8_4_ = auVar34._8_4_ * auVar39._8_4_;
    auVar37._12_4_ = auVar34._12_4_ * auVar39._12_4_;
    auVar44._0_4_ = fVar17 * auVar37._0_4_;
    auVar44._4_4_ = fVar18 * auVar37._4_4_;
    auVar44._8_4_ = fVar17 * auVar37._8_4_;
    auVar44._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8)) * auVar37._12_4_;
    iVar9 = -(uint)(fVar17 == 0.0);
    iVar11 = -(uint)(fVar18 == 0.0);
    iVar12 = -(uint)(fVar17 == 0.0);
    iVar14 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar27,uVar8)) == 0.0);
    auVar34 = NEON_frsqrts(auVar37,auVar44,4);
    fVar19 = fVar19 * auVar37._0_4_ * auVar34._0_4_;
    fVar21 = fVar21 * auVar37._4_4_ * auVar34._4_4_;
    fVar22 = fVar22 * auVar37._8_4_ * auVar34._8_4_;
    fVar24 = fVar24 * auVar37._12_4_ * auVar34._12_4_;
    uVar20 = CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                      CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                               CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                        CONCAT14(SUB41(fVar21,0) & ~(byte)iVar11,
                                                 CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                          ~(byte)((uint)iVar9 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                   ~(byte)((uint)iVar9 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar19 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar9 >> 8),SUB41(fVar19,0) & ~(byte)iVar9)))))));
    uVar23 = CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                      CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                               CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                        CONCAT14(SUB41(fVar24,0) & ~(byte)iVar14,
                                                 CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                          ~(byte)((uint)iVar12 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                   ~(byte)((uint)iVar12 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar22 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar12 >> 8),SUB41(fVar22,0) & ~(byte)iVar12))))))
                     );
    uVar15 = (**(code **)(*param_1 + 0x748))(param_1,param_2);
  }
  if ((uVar15 & 1) == 0) {
    lVar16 = param_1[0x92];
  }
  else {
    lVar16 = param_1[0x91];
  }
  *(undefined8 *)(lVar16 + 0x88) = uVar23;
  *(undefined8 *)(lVar16 + 0x80) = uVar20;
  return;
}


