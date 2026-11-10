/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f35270; name: FUN_00f35270
 */


void FUN_00f35270(float *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined2 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float *pfVar15;
  float fVar16;
  float fVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  float fVar27;
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar28;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  
  FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  pfVar15 = (float *)FUN_01020300();
  fVar28 = *pfVar15;
  uVar18 = (undefined1)((uint)fVar28 >> 8);
  uVar19 = (undefined1)((uint)fVar28 >> 0x10);
  uVar20 = (undefined1)((uint)fVar28 >> 0x18);
  fVar27 = pfVar15[1];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
  uVar21 = SUB41(fVar28,0);
  if (ABS(fVar28) <= 0.5) {
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
  }
  fVar28 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar21)));
  uVar18 = (undefined1)((uint)fVar27 >> 8);
  uVar19 = (undefined1)((uint)fVar27 >> 0x10);
  uVar20 = (undefined1)((uint)fVar27 >> 0x18);
  uVar21 = SUB41(fVar27,0);
  if (ABS(fVar27) <= 0.5) {
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
  }
  fVar27 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar21)));
  fVar17 = fVar28 * fVar28;
  fVar6 = fVar27 * fVar27;
  uVar21 = (undefined1)((uint)fVar6 >> 8);
  uVar18 = (undefined1)((uint)fVar6 >> 0x10);
  uVar19 = (undefined1)((uint)fVar6 >> 0x18);
  fVar34 = (float)*(undefined8 *)(param_1 + 10);
  fVar16 = fVar34 * fVar34;
  uVar20 = (undefined1)((uint)fVar16 >> 8);
  uVar22 = (undefined1)((uint)fVar16 >> 0x10);
  uVar23 = (undefined1)((uint)fVar16 >> 0x18);
  fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  fVar9 = fVar35 * fVar35;
  uVar24 = (undefined1)((uint)fVar9 >> 8);
  uVar25 = (undefined1)((uint)fVar9 >> 0x10);
  uVar26 = (undefined1)((uint)fVar9 >> 0x18);
  auVar30[4] = SUB41(fVar6,0);
  auVar30._0_4_ = fVar17;
  auVar30[5] = uVar21;
  auVar30[6] = uVar18;
  auVar30[7] = uVar19;
  auVar30[8] = SUB41(fVar16,0);
  auVar30[9] = uVar20;
  auVar30[10] = uVar22;
  auVar30[0xb] = uVar23;
  auVar30[0xc] = SUB41(fVar9,0);
  auVar30[0xd] = uVar24;
  auVar30[0xe] = uVar25;
  auVar30[0xf] = uVar26;
  auVar38[4] = SUB41(fVar6,0);
  auVar38._0_4_ = fVar17;
  auVar38[5] = uVar21;
  auVar38[6] = uVar18;
  auVar38[7] = uVar19;
  auVar38[8] = SUB41(fVar16,0);
  auVar38[9] = uVar20;
  auVar38[10] = uVar22;
  auVar38[0xb] = uVar23;
  auVar38[0xc] = SUB41(fVar9,0);
  auVar38[0xd] = uVar24;
  auVar38[0xe] = uVar25;
  auVar38[0xf] = uVar26;
  auVar30 = NEON_ext(auVar30,auVar38,8,1);
  fVar17 = auVar30._0_4_ + fVar17;
  fVar6 = auVar30._4_4_ + fVar6;
  fVar16 = fVar17 + fVar6;
  fVar17 = fVar17 + fVar6;
  uVar21 = SUB41(fVar17,0);
  uVar18 = (undefined1)((uint)fVar17 >> 8);
  uVar19 = (undefined1)((uint)fVar17 >> 0x10);
  uVar20 = (undefined1)((uint)fVar17 >> 0x18);
  auVar2[4] = uVar21;
  auVar2._0_4_ = fVar16;
  auVar2[5] = uVar18;
  auVar2[6] = uVar19;
  auVar2[7] = uVar20;
  auVar2[8] = SUB41(fVar16,0);
  auVar2[9] = (char)((uint)fVar16 >> 8);
  auVar2[10] = (char)((uint)fVar16 >> 0x10);
  auVar2[0xb] = (char)((uint)fVar16 >> 0x18);
  auVar2[0xc] = uVar21;
  auVar2[0xd] = uVar18;
  auVar2[0xe] = uVar19;
  auVar2[0xf] = uVar20;
  auVar30 = NEON_frsqrte(auVar2,4);
  auVar37._0_4_ = auVar30._0_4_ * fVar16;
  auVar37._4_4_ = auVar30._4_4_ * fVar17;
  auVar37._8_4_ = auVar30._8_4_ * fVar16;
  uVar4 = (undefined2)(CONCAT15(uVar18,CONCAT14(uVar21,fVar16)) >> 0x20);
  auVar37._12_4_ = auVar30._12_4_ * (float)CONCAT13(uVar20,CONCAT12(uVar19,uVar4));
  auVar38 = NEON_frsqrts(auVar30,auVar37,4);
  auVar31._0_4_ = auVar30._0_4_ * auVar38._0_4_;
  auVar31._4_4_ = auVar30._4_4_ * auVar38._4_4_;
  auVar31._8_4_ = auVar30._8_4_ * auVar38._8_4_;
  auVar31._12_4_ = auVar30._12_4_ * auVar38._12_4_;
  auVar39._0_4_ = fVar16 * auVar31._0_4_;
  auVar39._4_4_ = fVar17 * auVar31._4_4_;
  auVar39._8_4_ = fVar16 * auVar31._8_4_;
  auVar39._12_4_ = (float)CONCAT13(uVar20,CONCAT12(uVar19,uVar4)) * auVar31._12_4_;
  iVar5 = -(uint)(fVar16 == 0.0);
  iVar7 = -(uint)(fVar17 == 0.0);
  iVar8 = -(uint)(fVar16 == 0.0);
  iVar10 = -(uint)((float)CONCAT13(uVar20,CONCAT12(uVar19,uVar4)) == 0.0);
  auVar30 = NEON_frsqrts(auVar31,auVar39,4);
  fVar28 = fVar28 * auVar31._0_4_ * auVar30._0_4_;
  fVar27 = fVar27 * auVar31._4_4_ * auVar30._4_4_;
  fVar34 = fVar34 * auVar31._8_4_ * auVar30._8_4_;
  fVar35 = fVar35 * auVar31._12_4_ * auVar30._12_4_;
  fVar28 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                           CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                    CONCAT11((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                             SUB41(fVar28,0) & ~(byte)iVar5)));
  auVar29._0_8_ =
       CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                         CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                  CONCAT14(SUB41(fVar27,0) & ~(byte)iVar7,fVar28))));
  auVar29[8] = SUB41(fVar34,0) & ~(byte)iVar8;
  auVar29[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar8 >> 8);
  auVar29[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
  auVar29[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  auVar32[0xc] = SUB41(fVar35,0) & ~(byte)iVar10;
  auVar32._0_12_ = auVar29;
  auVar32[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar10 >> 8);
  auVar32[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
  auVar32[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
  pauVar1 = (undefined1 (*) [16])(param_1 + 4);
  uVar36 = *(undefined8 *)*pauVar1;
  auVar31 = *pauVar1;
  auVar2 = *pauVar1;
  auVar38 = *pauVar1;
  auVar30 = *pauVar1;
  uVar40 = auVar32._8_8_;
  *(undefined8 *)(param_1 + 10) = uVar40;
  *(undefined8 *)(param_1 + 8) = auVar29._0_8_;
  fVar28 = (float)uVar36 * fVar28;
  fVar27 = (float)((ulong)uVar36 >> 0x20) * (float)((ulong)auVar29._0_8_ >> 0x20);
  uVar21 = (undefined1)((uint)fVar27 >> 8);
  uVar18 = (undefined1)((uint)fVar27 >> 0x10);
  uVar19 = (undefined1)((uint)fVar27 >> 0x18);
  fVar17 = (float)*(undefined8 *)(param_1 + 6) * auVar29._8_4_;
  uVar20 = (undefined1)((uint)fVar17 >> 8);
  uVar22 = (undefined1)((uint)fVar17 >> 0x10);
  uVar23 = (undefined1)((uint)fVar17 >> 0x18);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * auVar32._12_4_;
  uVar24 = (undefined1)((uint)fVar6 >> 8);
  uVar25 = (undefined1)((uint)fVar6 >> 0x10);
  uVar26 = (undefined1)((uint)fVar6 >> 0x18);
  auVar33[4] = SUB41(fVar27,0);
  auVar33._0_4_ = fVar28;
  auVar33[5] = uVar21;
  auVar33[6] = uVar18;
  auVar33[7] = uVar19;
  auVar33[8] = SUB41(fVar17,0);
  auVar33[9] = uVar20;
  auVar33[10] = uVar22;
  auVar33[0xb] = uVar23;
  auVar33[0xc] = SUB41(fVar6,0);
  auVar33[0xd] = uVar24;
  auVar33[0xe] = uVar25;
  auVar33[0xf] = uVar26;
  auVar3[4] = SUB41(fVar27,0);
  auVar3._0_4_ = fVar28;
  auVar3[5] = uVar21;
  auVar3[6] = uVar18;
  auVar3[7] = uVar19;
  auVar3[8] = SUB41(fVar17,0);
  auVar3[9] = uVar20;
  auVar3[10] = uVar22;
  auVar3[0xb] = uVar23;
  auVar3[0xc] = SUB41(fVar6,0);
  auVar3[0xd] = uVar24;
  auVar3[0xe] = uVar25;
  auVar3[0xf] = uVar26;
  auVar33 = NEON_ext(auVar33,auVar3,8,1);
  fVar27 = auVar33._0_4_ + fVar28 + auVar33._4_4_ + fVar27;
  fVar28 = cosf(param_1[0xc] *
                (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0));
  if (fVar28 <= fVar27) {
    fVar28 = (float)((int)param_1[1] + -1);
    param_1[1] = fVar28;
  }
  else {
    auVar14._8_8_ = uVar40;
    auVar14._0_8_ = auVar29._0_8_;
    auVar13._8_8_ = uVar40;
    auVar13._0_8_ = auVar29._0_8_;
    auVar12._8_8_ = uVar40;
    auVar12._0_8_ = auVar29._0_8_;
    auVar11._8_8_ = uVar40;
    auVar11._0_8_ = auVar29._0_8_;
    a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    a64_TBL(ZEXT816(0),auVar30,DAT_01cd5418);
    uVar40 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5188);
    uVar36 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5188);
    a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
    a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
    uVar42 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5158);
    uVar41 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5158);
    fVar17 = (float)uVar40 * (float)uVar42 - (float)uVar41 * (float)uVar36;
    fVar28 = param_1[2];
    if (param_1[2] == 0.0) {
      param_1[2] = fVar17;
      fVar28 = fVar17;
    }
    if (fVar17 * fVar28 <= 0.0) {
      param_1[1] = 0.0;
      goto LAB_00f35430;
    }
    fVar27 = acosf(fVar27);
    fVar28 = param_1[0xd];
    *param_1 = *param_1 + ABS(fVar27);
    param_1[1] = fVar28;
  }
  if (fVar28 != 0.0) {
    return;
  }
LAB_00f35430:
  *param_1 = 0.0;
  param_1[2] = 0.0;
  return;
}


