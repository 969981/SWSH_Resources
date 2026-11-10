/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d83dd0; name: FUN_00d83dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d83dd0(float param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  
  fVar12 = (float)((ulong)DAT_01cd52f0 >> 0x20);
  fVar11 = (float)DAT_01cd52f0 + fVar12;
  fVar12 = (float)DAT_01cd52f0 + fVar12;
  uVar18 = SUB41(fVar12,0);
  uVar19 = (undefined1)((uint)fVar12 >> 8);
  uVar20 = (undefined1)((uint)fVar12 >> 0x10);
  uVar21 = (undefined1)((uint)fVar12 >> 0x18);
  param_1 = param_1 * 0.5;
  auVar36[4] = uVar18;
  auVar36._0_4_ = fVar11;
  auVar36[5] = uVar19;
  auVar36[6] = uVar20;
  auVar36[7] = uVar21;
  auVar36[8] = SUB41(fVar11,0);
  auVar36[9] = (char)((uint)fVar11 >> 8);
  auVar36[10] = (char)((uint)fVar11 >> 0x10);
  auVar36[0xb] = (char)((uint)fVar11 >> 0x18);
  auVar36[0xc] = uVar18;
  auVar36[0xd] = uVar19;
  auVar36[0xe] = uVar20;
  auVar36[0xf] = uVar21;
  auVar36 = NEON_frsqrte(auVar36,4);
  fVar24 = 0.5;
  if (param_1 < 0.0) {
    fVar24 = -0.5;
  }
  auVar29._0_4_ = auVar36._0_4_ * fVar11;
  auVar29._4_4_ = auVar36._4_4_ * fVar12;
  auVar29._8_4_ = auVar36._8_4_ * fVar11;
  uVar5 = (undefined2)(CONCAT15(uVar19,CONCAT14(uVar18,fVar11)) >> 0x20);
  auVar29._12_4_ = auVar36._12_4_ * (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar5));
  auVar30 = NEON_frsqrts(auVar36,auVar29,4);
  fVar13 = auVar36._0_4_ * auVar30._0_4_;
  fVar14 = auVar36._4_4_ * auVar30._4_4_;
  fVar15 = auVar36._8_4_ * auVar30._8_4_;
  fVar16 = auVar36._12_4_ * auVar30._12_4_;
  auVar27._0_4_ = fVar11 * fVar13;
  auVar27._4_4_ = fVar12 * fVar14;
  auVar27._8_4_ = fVar11 * fVar15;
  auVar27._12_4_ = (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar5)) * fVar16;
  lVar10 = *(long *)(param_2 + 0xf0);
  iVar6 = -(uint)(fVar11 == 0.0);
  iVar8 = -(uint)(fVar12 == 0.0);
  iVar9 = -(uint)(fVar11 == 0.0);
  auVar30._4_4_ = fVar14;
  auVar30._0_4_ = fVar13;
  auVar30._8_4_ = fVar15;
  auVar30._12_4_ = fVar16;
  auVar36 = NEON_frsqrts(auVar30,auVar27,4);
  pauVar1 = (undefined1 (*) [12])(lVar10 + 0xa0);
  uVar17 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0xa8) >> 0x20);
  fVar12 = (float)*(undefined8 *)*pauVar1;
  fVar11 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar13 = fVar13 * auVar36._0_4_ * (float)_DAT_01d4b580;
  fVar14 = fVar14 * auVar36._4_4_ * (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar15 = fVar15 * auVar36._8_4_ * (float)_UNK_01d4b588;
  param_1 = param_1 - *(float *)PTR_Float2Pi_02715150 *
                      (float)(int)(fVar24 + param_1 * *(float *)PTR_Float1Divided2Pi_02715148);
  if (param_1 <= *(float *)PTR_FloatPiDivided2_02715158) {
    if (-*(float *)PTR_FloatPiDivided2_02715158 <= param_1) {
      fVar24 = 1.0;
      goto LAB_00d83eb0;
    }
    fVar24 = -*(float *)PTR_FloatPi_02715160;
  }
  else {
    fVar24 = *(float *)PTR_FloatPi_02715160;
  }
  param_1 = fVar24 - param_1;
  fVar24 = -1.0;
LAB_00d83eb0:
  fVar16 = param_1 * param_1;
  param_1 = param_1 * (fVar16 * (fVar16 * (*(float *)(PTR_SinCoefficients_02715168 + 0xc) +
                                          fVar16 * (fVar16 * (*(float *)(
                                                  PTR_SinCoefficients_02715168 + 4) -
                                                  *(float *)PTR_SinCoefficients_02715168 * fVar16) -
                                                  *(float *)(PTR_SinCoefficients_02715168 + 8))) -
                                *(float *)(PTR_SinCoefficients_02715168 + 0x10)) + 1.0);
  fVar28 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar6))) * param_1;
  fVar33 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                             SUB41(fVar14,0) & ~(byte)iVar8))) * param_1;
  auVar31._0_8_ = CONCAT44(fVar33,fVar28);
  auVar31._8_4_ =
       (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                       CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                CONCAT11((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                         SUB41(fVar15,0) & ~(byte)iVar9))) * param_1;
  fVar24 = fVar24 * (fVar16 * (fVar16 * (*(float *)(PTR_CosCoefficients_02715170 + 0xc) +
                                        fVar16 * (fVar16 * (*(float *)(PTR_CosCoefficients_02715170
                                                                      + 4) -
                                                           fVar16 * *(float *)
                                                  PTR_CosCoefficients_02715170) -
                                                 *(float *)(PTR_CosCoefficients_02715170 + 8))) -
                              *(float *)(PTR_CosCoefficients_02715170 + 0x10)) + 1.0);
  auVar31._12_4_ = fVar24;
  auVar2._12_4_ = uVar17;
  auVar2._0_12_ = *pauVar1;
  uVar7 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  uVar25 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd4f90);
  auVar3._12_4_ = uVar17;
  auVar3._0_12_ = *pauVar1;
  uVar35 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
  uVar39 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5120);
  uVar34 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd50f8);
  fVar13 = (float)((ulong)uVar7 >> 0x20);
  fVar38 = (float)((ulong)uVar35 >> 0x20);
  auVar4._12_4_ = uVar17;
  auVar4._0_12_ = *pauVar1;
  uVar40 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
  uVar37 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5418);
  fVar16 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar15 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  uVar42 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5270);
  auVar32._8_8_ = auVar31._0_8_;
  auVar32._0_8_ = auVar31._0_8_;
  uVar26 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd50b0);
  fVar41 = (float)((ulong)uVar40 >> 0x20);
  fVar14 = ((float)uVar7 * fVar28 + (float)_DAT_01d4ae90 * fVar12 * (float)uVar25 +
           (float)_DAT_01d4ae90 * (float)uVar40 * (float)uVar34) - (float)uVar35 * (float)uVar37;
  fVar15 = (fVar13 * fVar33 + fVar15 * fVar11 * (float)((ulong)uVar25 >> 0x20) +
           fVar15 * fVar41 * (float)((ulong)uVar34 >> 0x20)) -
           fVar38 * (float)((ulong)uVar37 >> 0x20);
  uVar18 = (undefined1)((uint)fVar15 >> 8);
  uVar19 = (undefined1)((uint)fVar15 >> 0x10);
  uVar20 = (undefined1)((uint)fVar15 >> 0x18);
  fVar12 = ((float)uVar7 * auVar31._8_4_ + (float)_UNK_01d4ae98 * (float)uVar35 * (float)uVar39 +
           (float)_UNK_01d4ae98 * fVar12 * (float)uVar26) - (float)uVar40 * (float)uVar42;
  fVar24 = (fVar13 * fVar24 + fVar16 * fVar38 * (float)((ulong)uVar39 >> 0x20) +
           fVar16 * fVar11 * (float)((ulong)uVar26 >> 0x20)) -
           fVar41 * (float)((ulong)uVar42 >> 0x20);
  uVar21 = (undefined1)((uint)fVar24 >> 8);
  uVar22 = (undefined1)((uint)fVar24 >> 0x10);
  uVar23 = (undefined1)((uint)fVar24 >> 0x18);
  if (lVar10 != 0) {
    *(undefined1 *)(lVar10 + 0xc0) = 1;
    *(ulong *)(lVar10 + 0xa8) =
         CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(SUB41(fVar24,0),fVar12))));
    *(ulong *)(lVar10 + 0xa0) =
         CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(SUB41(fVar15,0),fVar14))));
  }
  lVar10 = *(long *)(param_2 + 0xf8);
  if (lVar10 != 0) {
    *(undefined1 *)(lVar10 + 0xc0) = 1;
    *(ulong *)(lVar10 + 0xa8) =
         CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(SUB41(fVar24,0),fVar12))));
    *(ulong *)(lVar10 + 0xa0) =
         CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(SUB41(fVar15,0),fVar14))));
  }
  return;
}


