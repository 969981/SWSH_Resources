/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e804f0; name: FUN_00e804f0
 */


/* WARNING: Removing unreachable block (ram,0x00e80680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e804f0(float *param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  float fVar43;
  undefined1 auVar39 [16];
  float fVar44;
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  float fVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  
  fVar23 = (float)*param_2 - *param_1;
  fVar1 = (float)param_2[1] - param_1[2];
  fVar2 = (float)((ulong)param_2[1] >> 0x20) - param_1[3];
  auVar38._0_4_ = fVar23 * fVar23;
  auVar38._4_4_ = 0;
  auVar38._8_4_ = fVar1 * fVar1;
  auVar38._12_4_ = fVar2 * fVar2;
  auVar47 = NEON_ext(auVar38,auVar38,8,1);
  fVar33 = auVar47._0_4_ + auVar38._0_4_;
  fVar43 = auVar47._4_4_ + 0.0;
  fVar22 = fVar33 + fVar43;
  fVar33 = fVar33 + fVar43;
  uVar24 = SUB41(fVar33,0);
  uVar25 = (undefined1)((uint)fVar33 >> 8);
  uVar26 = (undefined1)((uint)fVar33 >> 0x10);
  uVar27 = (undefined1)((uint)fVar33 >> 0x18);
  auVar3[4] = uVar24;
  auVar3._0_4_ = fVar22;
  auVar3[5] = uVar25;
  auVar3[6] = uVar26;
  auVar3[7] = uVar27;
  auVar3[8] = SUB41(fVar22,0);
  auVar3[9] = (char)((uint)fVar22 >> 8);
  auVar3[10] = (char)((uint)fVar22 >> 0x10);
  auVar3[0xb] = (char)((uint)fVar22 >> 0x18);
  auVar3[0xc] = uVar24;
  auVar3[0xd] = uVar25;
  auVar3[0xe] = uVar26;
  auVar3[0xf] = uVar27;
  auVar47 = NEON_frsqrte(auVar3,4);
  auVar48._0_4_ = auVar47._0_4_ * fVar22;
  auVar48._4_4_ = auVar47._4_4_ * fVar33;
  auVar48._8_4_ = auVar47._8_4_ * fVar22;
  uVar4 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar24,fVar22)) >> 0x20);
  auVar48._12_4_ = auVar47._12_4_ * (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar4));
  auVar49 = NEON_frsqrts(auVar47,auVar48,4);
  auVar39._0_4_ = auVar47._0_4_ * auVar49._0_4_;
  auVar39._4_4_ = auVar47._4_4_ * auVar49._4_4_;
  auVar39._8_4_ = auVar47._8_4_ * auVar49._8_4_;
  auVar39._12_4_ = auVar47._12_4_ * auVar49._12_4_;
  auVar50._0_4_ = fVar22 * auVar39._0_4_;
  auVar50._4_4_ = fVar33 * auVar39._4_4_;
  auVar50._8_4_ = fVar22 * auVar39._8_4_;
  auVar50._12_4_ = (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar4)) * auVar39._12_4_;
  iVar5 = -(uint)(fVar22 == 0.0);
  iVar6 = -(uint)(fVar33 == 0.0);
  iVar7 = -(uint)(fVar22 == 0.0);
  iVar8 = -(uint)((float)CONCAT13(uVar27,CONCAT12(uVar26,uVar4)) == 0.0);
  auVar49 = NEON_frsqrts(auVar39,auVar50,4);
  auVar47 = *param_3;
  fVar23 = fVar23 * auVar39._0_4_ * auVar49._0_4_;
  fVar33 = auVar39._4_4_ * auVar49._4_4_ * 0.0;
  fVar1 = fVar1 * auVar39._8_4_ * auVar49._8_4_;
  fVar2 = fVar2 * auVar39._12_4_ * auVar49._12_4_;
  uVar58 = (undefined4)_UNK_01d49dc8;
  uVar60 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  fVar46 = auVar47._0_4_;
  fVar22 = fVar46 * (float)_DAT_01d4ae80;
  fVar51 = auVar47._4_4_;
  fVar43 = fVar51 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar24 = SUB41(fVar43,0);
  uVar25 = (undefined1)((uint)fVar43 >> 8);
  uVar26 = (undefined1)((uint)fVar43 >> 0x10);
  uVar27 = (undefined1)((uint)fVar43 >> 0x18);
  fVar16 = auVar47._8_4_ * (float)_UNK_01d4ae88;
  uVar28 = SUB41(fVar16,0);
  uVar29 = (undefined1)((uint)fVar16 >> 8);
  uVar30 = (undefined1)((uint)fVar16 >> 0x10);
  uVar31 = (undefined1)((uint)fVar16 >> 0x18);
  fVar17 = auVar47._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar32 = SUB41(fVar17,0);
  uVar52 = (undefined1)((uint)fVar17 >> 8);
  uVar53 = (undefined1)((uint)fVar17 >> 0x10);
  uVar54 = (undefined1)((uint)fVar17 >> 0x18);
  auVar18._8_4_ = uVar58;
  auVar18._0_8_ = _DAT_01d49dc0;
  auVar18._12_4_ = uVar60;
  uVar35 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
  auVar9[4] = uVar24;
  auVar9._0_4_ = fVar22;
  auVar9[5] = uVar25;
  auVar9[6] = uVar26;
  auVar9[7] = uVar27;
  auVar9[8] = uVar28;
  auVar9[9] = uVar29;
  auVar9[10] = uVar30;
  auVar9[0xb] = uVar31;
  auVar9[0xc] = uVar32;
  auVar9[0xd] = uVar52;
  auVar9[0xe] = uVar53;
  auVar9[0xf] = uVar54;
  uVar64 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
  auVar19._8_4_ = uVar58;
  auVar19._0_8_ = _DAT_01d49dc0;
  auVar19._12_4_ = uVar60;
  uVar62 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50f8);
  auVar20._8_4_ = uVar58;
  auVar20._0_8_ = _DAT_01d49dc0;
  auVar20._12_4_ = uVar60;
  uVar36 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
  fVar56 = (float)((ulong)uVar36 >> 0x20);
  auVar10[4] = uVar24;
  auVar10._0_4_ = fVar22;
  auVar10[5] = uVar25;
  auVar10[6] = uVar26;
  auVar10[7] = uVar27;
  auVar10[8] = uVar28;
  auVar10[9] = uVar29;
  auVar10[10] = uVar30;
  auVar10[0xb] = uVar31;
  auVar10[0xc] = uVar32;
  auVar10[0xd] = uVar52;
  auVar10[0xe] = uVar53;
  auVar10[0xf] = uVar54;
  uVar66 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5120);
  auVar21[4] = uVar24;
  auVar21._0_4_ = fVar22;
  auVar21[5] = uVar25;
  auVar21[6] = uVar26;
  auVar21[7] = uVar27;
  auVar11[4] = uVar24;
  auVar11._0_4_ = fVar22;
  auVar11[5] = uVar25;
  auVar11[6] = uVar26;
  auVar11[7] = uVar27;
  auVar11[8] = uVar28;
  auVar11[9] = uVar29;
  auVar11[10] = uVar30;
  auVar11[0xb] = uVar31;
  auVar11[0xc] = uVar32;
  auVar11[0xd] = uVar52;
  auVar11[0xe] = uVar53;
  auVar11[0xf] = uVar54;
  uVar68 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
  fVar59 = (float)_UNK_01d4ae98;
  fVar61 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar55 = (float)_DAT_01d4ae90;
  fVar57 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  auVar21[0xc] = uVar24;
  auVar21._8_4_ = fVar22;
  auVar21[0xd] = uVar25;
  auVar21[0xe] = uVar26;
  auVar21[0xf] = uVar27;
  uVar67 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50b0);
  fVar63 = (float)((ulong)uVar62 >> 0x20);
  auVar12[4] = uVar24;
  auVar12._0_4_ = fVar22;
  auVar12[5] = uVar25;
  auVar12[6] = uVar26;
  auVar12[7] = uVar27;
  auVar12[8] = uVar28;
  auVar12[9] = uVar29;
  auVar12[10] = uVar30;
  auVar12[0xb] = uVar31;
  auVar12[0xc] = uVar32;
  auVar12[0xd] = uVar52;
  auVar12[0xe] = uVar53;
  auVar12[0xf] = uVar54;
  uVar65 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50f8);
  fVar44 = (float)((ulong)uVar35 >> 0x20);
  auVar13[4] = uVar24;
  auVar13._0_4_ = fVar22;
  auVar13[5] = uVar25;
  auVar13[6] = uVar26;
  auVar13[7] = uVar27;
  auVar13[8] = uVar28;
  auVar13[9] = uVar29;
  auVar13[10] = uVar30;
  auVar13[0xb] = uVar31;
  auVar13[0xc] = uVar32;
  auVar13[0xd] = uVar52;
  auVar13[0xe] = uVar53;
  auVar13[0xf] = uVar54;
  uVar14 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5270);
  uVar15 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd4f90);
  fVar34 = (fVar22 * (float)uVar35 + fVar55 * (float)uVar64 * 0.0 +
           fVar55 * (float)uVar36 * (float)uVar65) - (float)uVar62 * (float)uVar68;
  fVar45 = (fVar43 * fVar44 + fVar57 * (float)((ulong)uVar64 >> 0x20) * 0.0 +
           fVar57 * fVar56 * (float)((ulong)uVar65 >> 0x20)) -
           fVar63 * (float)((ulong)uVar68 >> 0x20);
  auVar40._0_8_ = CONCAT44(fVar45,fVar34);
  auVar40._8_4_ =
       (fVar16 * (float)uVar35 + fVar59 * (float)uVar62 * (float)uVar66 +
       fVar59 * (float)uVar67 * 0.0) - (float)uVar36 * (float)uVar14;
  auVar40._12_4_ =
       (fVar17 * fVar44 + fVar61 * fVar63 * (float)((ulong)uVar66 >> 0x20) +
       fVar61 * (float)((ulong)uVar67 >> 0x20) * 0.0) - fVar56 * (float)((ulong)uVar14 >> 0x20);
  uVar65 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd50f8);
  uVar64 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd4f90);
  uVar67 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5120);
  fVar22 = (float)((ulong)uVar15 >> 0x20);
  uVar14 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5418);
  fVar56 = (float)((ulong)uVar65 >> 0x20);
  uVar66 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd5418);
  uVar35 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd50f8);
  uVar62 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd5270);
  auVar41._8_8_ = auVar40._0_8_;
  auVar41._0_8_ = auVar40._0_8_;
  uVar36 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd50b0);
  fVar44 = (float)((ulong)uVar66 >> 0x20);
  fVar43 = ((float)uVar15 * fVar34 + fVar55 * fVar46 * (float)uVar64 +
           fVar55 * (float)uVar66 * (float)uVar35) - (float)uVar65 * (float)uVar14;
  fVar16 = (fVar22 * fVar45 + fVar57 * fVar51 * (float)((ulong)uVar64 >> 0x20) +
           fVar57 * fVar44 * (float)((ulong)uVar35 >> 0x20)) -
           fVar56 * (float)((ulong)uVar14 >> 0x20);
  fVar17 = ((float)uVar15 * auVar40._8_4_ + fVar59 * (float)uVar65 * (float)uVar67 +
           fVar59 * fVar46 * (float)uVar36) - (float)uVar66 * (float)uVar62;
  fVar34 = (fVar22 * auVar40._12_4_ + fVar61 * fVar56 * (float)((ulong)uVar67 >> 0x20) +
           fVar61 * fVar51 * (float)((ulong)uVar36 >> 0x20)) -
           fVar44 * (float)((ulong)uVar62 >> 0x20);
  fVar22 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                           CONCAT12((byte)((uint)fVar43 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar43 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 8),
                                             SUB41(fVar43,0) & (byte)DAT_01d4ab50)));
  auVar37._0_8_ =
       CONCAT17((byte)((uint)fVar16 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                CONCAT16((byte)((uint)fVar16 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                         CONCAT15((byte)((uint)fVar16 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                  CONCAT14(SUB41(fVar16,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                           fVar22))));
  auVar37[8] = SUB41(fVar17,0) & (byte)DAT_01d4ab58;
  auVar37[9] = (byte)((uint)fVar17 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar37[10] = (byte)((uint)fVar17 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar37[0xb] = (byte)((uint)fVar17 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar42[0xc] = SUB41(fVar34,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar42._0_12_ = auVar37;
  auVar42[0xd] = (byte)((uint)fVar34 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar42[0xe] = (byte)((uint)fVar34 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar42[0xf] = (byte)((uint)fVar34 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  fVar22 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                           CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                    CONCAT11((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                             SUB41(fVar23,0) & ~(byte)iVar5))) * fVar22;
  fVar23 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                           CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                    CONCAT11((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                             SUB41(fVar33,0) & ~(byte)iVar6))) *
           (float)((ulong)auVar37._0_8_ >> 0x20);
  uVar24 = (undefined1)((uint)fVar23 >> 8);
  uVar25 = (undefined1)((uint)fVar23 >> 0x10);
  uVar26 = (undefined1)((uint)fVar23 >> 0x18);
  fVar33 = (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                           CONCAT12((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                    CONCAT11((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                             SUB41(fVar1,0) & ~(byte)iVar7))) * auVar37._8_4_;
  uVar27 = (undefined1)((uint)fVar33 >> 8);
  uVar28 = (undefined1)((uint)fVar33 >> 0x10);
  uVar29 = (undefined1)((uint)fVar33 >> 0x18);
  fVar1 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar8))) * auVar42._12_4_;
  uVar30 = (undefined1)((uint)fVar1 >> 8);
  uVar31 = (undefined1)((uint)fVar1 >> 0x10);
  uVar32 = (undefined1)((uint)fVar1 >> 0x18);
  auVar47[4] = SUB41(fVar23,0);
  auVar47._0_4_ = fVar22;
  auVar47[5] = uVar24;
  auVar47[6] = uVar25;
  auVar47[7] = uVar26;
  auVar47[8] = SUB41(fVar33,0);
  auVar47[9] = uVar27;
  auVar47[10] = uVar28;
  auVar47[0xb] = uVar29;
  auVar47[0xc] = SUB41(fVar1,0);
  auVar47[0xd] = uVar30;
  auVar47[0xe] = uVar31;
  auVar47[0xf] = uVar32;
  auVar49[4] = SUB41(fVar23,0);
  auVar49._0_4_ = fVar22;
  auVar49[5] = uVar24;
  auVar49[6] = uVar25;
  auVar49[7] = uVar26;
  auVar49[8] = SUB41(fVar33,0);
  auVar49[9] = uVar27;
  auVar49[10] = uVar28;
  auVar49[0xb] = uVar29;
  auVar49[0xc] = SUB41(fVar1,0);
  auVar49[0xd] = uVar30;
  auVar49[0xe] = uVar31;
  auVar49[0xf] = uVar32;
  auVar47 = NEON_ext(auVar47,auVar49,8,1);
  fVar23 = auVar47._0_4_ + fVar22 + auVar47._4_4_ + fVar23;
  uVar24 = 0;
  if (-1.0 <= fVar23) {
    uVar24 = SUB41(fVar23,0);
  }
  FUN_01590400(uVar24);
  return;
}


