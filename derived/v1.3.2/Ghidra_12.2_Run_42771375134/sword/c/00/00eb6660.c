/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb6660; name: FUN_00eb6660
 */


/* WARNING: Removing unreachable block (ram,0x00eb68f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00eb6660(long param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  undefined1 uVar19;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  int iVar40;
  int iVar43;
  int iVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar45;
  float fVar46;
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  undefined8 uVar54;
  float fVar62;
  float fVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar55;
  float fVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  
  if (*(char *)(param_1 + 0xb80) == '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0x8fc) == '\0') {
    return false;
  }
  plVar17 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar17 == plVar1) {
    return false;
  }
  while( true ) {
    lVar16 = *plVar17;
    uVar15 = FUN_015b5320(lVar16 + 0x50);
    if (((uVar15 & 1) != 0) &&
       (uVar15 = (**(code **)(*(long *)*plVar17 + 0x88))(), (uVar15 & 1) == 0)) break;
    plVar17 = plVar17 + 1;
    if (plVar1 == plVar17) {
      return false;
    }
  }
  auVar2 = *(undefined1 (*) [16])(lVar16 + 0xa0);
  fVar31 = auVar2._0_4_;
  fVar53 = fVar31 * (float)_DAT_01d4ae80;
  fVar37 = auVar2._4_4_;
  fVar62 = fVar37 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  auVar56._0_8_ = CONCAT44(fVar62,fVar53);
  auVar56._8_4_ = auVar2._8_4_ * (float)_UNK_01d4ae88;
  auVar56._12_4_ = auVar2._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar65 = (undefined4)_UNK_01d49dc8;
  uVar66 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  auVar11._8_4_ = uVar65;
  auVar11._0_8_ = _DAT_01d49dc0;
  auVar11._12_4_ = uVar66;
  uVar10 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  auVar12._8_4_ = uVar65;
  auVar12._0_8_ = _DAT_01d49dc0;
  auVar12._12_4_ = uVar66;
  uVar68 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50f8);
  auVar13._8_4_ = uVar65;
  auVar13._0_8_ = _DAT_01d49dc0;
  auVar13._12_4_ = uVar66;
  uVar32 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5418);
  fVar38 = (float)((ulong)uVar32 >> 0x20);
  uVar72 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5120);
  uVar74 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5270);
  fVar64 = (float)((ulong)uVar10 >> 0x20);
  uVar70 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd4f90);
  uVar73 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5418);
  uVar14 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  fVar39 = (float)((ulong)uVar14 >> 0x20);
  fVar67 = (float)((ulong)uVar68 >> 0x20);
  uVar71 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd50f8);
  auVar57._8_8_ = auVar56._0_8_;
  auVar57._0_8_ = auVar56._0_8_;
  uVar54 = a64_TBL(ZEXT816(0),auVar57,DAT_01cd50b0);
  fVar69 = (float)_DAT_01d4ae90;
  fVar18 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar46 = (float)_UNK_01d4ae98;
  fVar50 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  uVar55 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  fVar53 = (fVar53 * (float)uVar10 + fVar69 * (float)uVar70 * 0.0 +
           fVar69 * (float)uVar32 * (float)uVar71) - (float)uVar68 * (float)uVar73;
  fVar62 = (fVar62 * fVar64 + fVar18 * (float)((ulong)uVar70 >> 0x20) * 0.0 +
           fVar18 * fVar38 * (float)((ulong)uVar71 >> 0x20)) -
           fVar67 * (float)((ulong)uVar73 >> 0x20);
  uVar19 = SUB41(fVar62,0);
  uVar20 = (undefined1)((uint)fVar62 >> 8);
  uVar21 = (undefined1)((uint)fVar62 >> 0x10);
  uVar22 = (undefined1)((uint)fVar62 >> 0x18);
  fVar63 = (auVar56._8_4_ * (float)uVar10 + fVar46 * (float)uVar68 * (float)uVar72 +
           fVar46 * (float)uVar54 * 0.0) - (float)uVar32 * (float)uVar74;
  uVar23 = SUB41(fVar63,0);
  uVar24 = (undefined1)((uint)fVar63 >> 8);
  uVar25 = (undefined1)((uint)fVar63 >> 0x10);
  uVar26 = (undefined1)((uint)fVar63 >> 0x18);
  fVar64 = (auVar56._12_4_ * fVar64 + fVar50 * fVar67 * (float)((ulong)uVar72 >> 0x20) +
           fVar50 * (float)((ulong)uVar54 >> 0x20) * 0.0) - fVar38 * (float)((ulong)uVar74 >> 0x20);
  uVar27 = SUB41(fVar64,0);
  uVar28 = (undefined1)((uint)fVar64 >> 8);
  uVar29 = (undefined1)((uint)fVar64 >> 0x10);
  uVar30 = (undefined1)((uint)fVar64 >> 0x18);
  auVar41[4] = uVar19;
  auVar41._0_4_ = fVar53;
  auVar41[5] = uVar20;
  auVar41[6] = uVar21;
  auVar41[7] = uVar22;
  auVar41[8] = uVar23;
  auVar41[9] = uVar24;
  auVar41[10] = uVar25;
  auVar41[0xb] = uVar26;
  auVar41[0xc] = uVar27;
  auVar41[0xd] = uVar28;
  auVar41[0xe] = uVar29;
  auVar41[0xf] = uVar30;
  uVar68 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd4f90);
  auVar59[4] = uVar19;
  auVar59._0_4_ = fVar53;
  auVar59[5] = uVar20;
  auVar59[6] = uVar21;
  auVar59[7] = uVar22;
  auVar59[8] = uVar23;
  auVar59[9] = uVar24;
  auVar59[10] = uVar25;
  auVar59[0xb] = uVar26;
  auVar59[0xc] = uVar27;
  auVar59[0xd] = uVar28;
  auVar59[0xe] = uVar29;
  auVar59[0xf] = uVar30;
  uVar72 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd5120);
  fVar38 = (float)((ulong)uVar55 >> 0x20);
  uVar71 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5418);
  fVar67 = (float)((ulong)uVar71 >> 0x20);
  auVar2[4] = uVar19;
  auVar2._0_4_ = fVar53;
  auVar2[5] = uVar20;
  auVar2[6] = uVar21;
  auVar2[7] = uVar22;
  auVar2[8] = uVar23;
  auVar2[9] = uVar24;
  auVar2[10] = uVar25;
  auVar2[0xb] = uVar26;
  auVar2[0xc] = uVar27;
  auVar2[0xd] = uVar28;
  auVar2[0xe] = uVar29;
  auVar2[0xf] = uVar30;
  uVar32 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  auVar3[4] = uVar19;
  auVar3._0_4_ = fVar53;
  auVar3[5] = uVar20;
  auVar3[6] = uVar21;
  auVar3[7] = uVar22;
  auVar3[8] = uVar23;
  auVar3[9] = uVar24;
  auVar3[10] = uVar25;
  auVar3[0xb] = uVar26;
  auVar3[0xc] = uVar27;
  auVar3[0xd] = uVar28;
  auVar3[0xe] = uVar29;
  auVar3[0xf] = uVar30;
  uVar54 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  auVar4[4] = uVar19;
  auVar4._0_4_ = fVar53;
  auVar4[5] = uVar20;
  auVar4[6] = uVar21;
  auVar4[7] = uVar22;
  auVar4[8] = uVar23;
  auVar4[9] = uVar24;
  auVar4[10] = uVar25;
  auVar4[0xb] = uVar26;
  auVar4[0xc] = uVar27;
  auVar4[0xd] = uVar28;
  auVar4[0xe] = uVar29;
  auVar4[0xf] = uVar30;
  uVar70 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5270);
  auVar5[4] = uVar19;
  auVar5._0_4_ = fVar53;
  auVar5[5] = uVar20;
  auVar5[6] = uVar21;
  auVar5[7] = uVar22;
  auVar5[8] = SUB41(fVar53,0);
  auVar5[9] = (char)((uint)fVar53 >> 8);
  auVar5[10] = (char)((uint)fVar53 >> 0x10);
  auVar5[0xb] = (char)((uint)fVar53 >> 0x18);
  auVar5[0xc] = uVar19;
  auVar5[0xd] = uVar20;
  auVar5[0xe] = uVar21;
  auVar5[0xf] = uVar22;
  uVar10 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50b0);
  fVar53 = ((float)uVar55 * fVar53 + fVar69 * fVar31 * (float)uVar68 +
           fVar69 * (float)uVar71 * (float)uVar32) - (float)uVar14 * (float)uVar54;
  fVar62 = (fVar38 * fVar62 + fVar18 * fVar37 * (float)((ulong)uVar68 >> 0x20) +
           fVar18 * fVar67 * (float)((ulong)uVar32 >> 0x20)) -
           fVar39 * (float)((ulong)uVar54 >> 0x20);
  fVar63 = ((float)uVar55 * fVar63 + fVar46 * (float)uVar14 * (float)uVar72 +
           fVar46 * fVar31 * (float)uVar10) - (float)uVar71 * (float)uVar70;
  fVar64 = (fVar38 * fVar64 + fVar50 * fVar39 * (float)((ulong)uVar72 >> 0x20) +
           fVar50 * fVar37 * (float)((ulong)uVar10 >> 0x20)) -
           fVar67 * (float)((ulong)uVar70 >> 0x20);
  fVar31 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                           CONCAT12((byte)((uint)fVar53 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar53 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 8),
                                             SUB41(fVar53,0) & (byte)DAT_01d4ab50)));
  auVar33._0_8_ =
       CONCAT17((byte)((uint)fVar62 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                CONCAT16((byte)((uint)fVar62 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                         CONCAT15((byte)((uint)fVar62 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                  CONCAT14(SUB41(fVar62,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                           fVar31))));
  auVar33[8] = SUB41(fVar63,0) & (byte)DAT_01d4ab58;
  auVar33[9] = (byte)((uint)fVar63 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar33[10] = (byte)((uint)fVar63 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar33[0xb] = (byte)((uint)fVar63 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar35[0xc] = SUB41(fVar64,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar35._0_12_ = auVar33;
  auVar35[0xd] = (byte)((uint)fVar64 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar35[0xe] = (byte)((uint)fVar64 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar35[0xf] = (byte)((uint)fVar64 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  fVar64 = fVar31 * fVar31;
  fVar37 = (float)((ulong)auVar33._0_8_ >> 0x20);
  fVar53 = fVar37 * fVar37;
  uVar19 = (undefined1)((uint)fVar53 >> 8);
  uVar20 = (undefined1)((uint)fVar53 >> 0x10);
  uVar21 = (undefined1)((uint)fVar53 >> 0x18);
  fVar38 = auVar33._8_4_;
  fVar62 = fVar38 * fVar38;
  uVar22 = (undefined1)((uint)fVar62 >> 8);
  uVar23 = (undefined1)((uint)fVar62 >> 0x10);
  uVar24 = (undefined1)((uint)fVar62 >> 0x18);
  fVar39 = auVar35._12_4_;
  fVar63 = fVar39 * fVar39;
  uVar25 = (undefined1)((uint)fVar63 >> 8);
  uVar26 = (undefined1)((uint)fVar63 >> 0x10);
  uVar27 = (undefined1)((uint)fVar63 >> 0x18);
  auVar6[4] = SUB41(fVar53,0);
  auVar6._0_4_ = fVar64;
  auVar6[5] = uVar19;
  auVar6[6] = uVar20;
  auVar6[7] = uVar21;
  auVar6[8] = SUB41(fVar62,0);
  auVar6[9] = uVar22;
  auVar6[10] = uVar23;
  auVar6[0xb] = uVar24;
  auVar6[0xc] = SUB41(fVar63,0);
  auVar6[0xd] = uVar25;
  auVar6[0xe] = uVar26;
  auVar6[0xf] = uVar27;
  auVar7[4] = SUB41(fVar53,0);
  auVar7._0_4_ = fVar64;
  auVar7[5] = uVar19;
  auVar7[6] = uVar20;
  auVar7[7] = uVar21;
  auVar7[8] = SUB41(fVar62,0);
  auVar7[9] = uVar22;
  auVar7[10] = uVar23;
  auVar7[0xb] = uVar24;
  auVar7[0xc] = SUB41(fVar63,0);
  auVar7[0xd] = uVar25;
  auVar7[0xe] = uVar26;
  auVar7[0xf] = uVar27;
  auVar41 = NEON_ext(auVar6,auVar7,8,1);
  fVar64 = auVar41._0_4_ + fVar64;
  fVar53 = auVar41._4_4_ + fVar53;
  fVar62 = fVar64 + fVar53;
  fVar64 = fVar64 + fVar53;
  if (fVar62 == 0.0) {
    return false;
  }
  fVar53 = (float)*(undefined8 *)(param_1 + 0xb0) - *(float *)(lVar16 + 0xb0);
  fVar63 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) - *(float *)(lVar16 + 0xb4);
  fVar67 = (float)*(undefined8 *)(param_1 + 0xb8) - *(float *)(lVar16 + 0xb8);
  fVar69 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) - *(float *)(lVar16 + 0xbc);
  auVar47._0_4_ = fVar53 * fVar53;
  auVar47._4_4_ = fVar63 * fVar63;
  auVar47._8_4_ = fVar67 * fVar67;
  auVar47._12_4_ = fVar69 * fVar69;
  auVar41 = NEON_ext(auVar47,auVar47,8,1);
  fVar46 = auVar41._0_4_ + auVar47._0_4_;
  fVar50 = auVar41._4_4_ + auVar47._4_4_;
  fVar18 = fVar46 + fVar50;
  fVar46 = fVar46 + fVar50;
  if (fVar18 == 0.0) {
    return false;
  }
  auVar42._8_8_ = CONCAT44(fVar64,fVar62);
  auVar42._0_8_ = CONCAT44(fVar64,fVar62);
  auVar48._8_8_ = CONCAT44(fVar46,fVar18);
  auVar48._0_8_ = CONCAT44(fVar46,fVar18);
  auVar41 = NEON_frsqrte(auVar42,4);
  auVar58._0_4_ = auVar41._0_4_ * fVar62;
  auVar58._4_4_ = auVar41._4_4_ * fVar64;
  auVar58._8_4_ = auVar41._8_4_ * fVar62;
  auVar58._12_4_ = auVar41._12_4_ * fVar64;
  auVar59 = NEON_frsqrts(auVar41,auVar58,4);
  auVar51._0_4_ = auVar41._0_4_ * auVar59._0_4_;
  auVar51._4_4_ = auVar41._4_4_ * auVar59._4_4_;
  auVar51._8_4_ = auVar41._8_4_ * auVar59._8_4_;
  auVar51._12_4_ = auVar41._12_4_ * auVar59._12_4_;
  auVar60._0_4_ = fVar62 * auVar51._0_4_;
  auVar60._4_4_ = fVar64 * auVar51._4_4_;
  auVar60._8_4_ = fVar62 * auVar51._8_4_;
  auVar60._12_4_ = fVar64 * auVar51._12_4_;
  iVar40 = -(uint)(fVar62 == 0.0);
  iVar43 = -(uint)(fVar64 == 0.0);
  iVar44 = -(uint)(fVar62 == 0.0);
  iVar45 = -(uint)(fVar64 == 0.0);
  auVar41 = NEON_frsqrts(auVar51,auVar60,4);
  fVar31 = auVar51._0_4_ * auVar41._0_4_ * fVar31;
  fVar37 = auVar51._4_4_ * auVar41._4_4_ * fVar37;
  fVar38 = auVar51._8_4_ * auVar41._8_4_ * fVar38;
  fVar39 = auVar51._12_4_ * auVar41._12_4_ * fVar39;
  fVar64 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                             SUB41(fVar31,0) & ~(byte)iVar40)));
  auVar34._0_8_ =
       CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                         CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                  CONCAT14(SUB41(fVar37,0) & ~(byte)iVar43,fVar64))));
  auVar34[8] = SUB41(fVar38,0) & ~(byte)iVar44;
  auVar34[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar44 >> 8);
  auVar34[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
  auVar34[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
  auVar36[0xc] = SUB41(fVar39,0) & ~(byte)iVar45;
  auVar36._0_12_ = auVar34;
  auVar36[0xd] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar45 >> 8);
  auVar36[0xe] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
  auVar36[0xf] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
  auVar41 = NEON_frsqrte(auVar48,4);
  auVar61._0_4_ = auVar41._0_4_ * fVar18;
  auVar61._4_4_ = auVar41._4_4_ * fVar46;
  auVar61._8_4_ = auVar41._8_4_ * fVar18;
  auVar61._12_4_ = auVar41._12_4_ * fVar46;
  auVar59 = NEON_frsqrts(auVar41,auVar61,4);
  auVar52._0_4_ = auVar41._0_4_ * auVar59._0_4_;
  auVar52._4_4_ = auVar41._4_4_ * auVar59._4_4_;
  auVar52._8_4_ = auVar41._8_4_ * auVar59._8_4_;
  auVar52._12_4_ = auVar41._12_4_ * auVar59._12_4_;
  iVar40 = -(uint)(fVar18 == 0.0);
  iVar43 = -(uint)(fVar46 == 0.0);
  iVar44 = -(uint)(fVar18 == 0.0);
  iVar45 = -(uint)(fVar46 == 0.0);
  auVar49._0_4_ = fVar18 * auVar52._0_4_;
  auVar49._4_4_ = fVar46 * auVar52._4_4_;
  auVar49._8_4_ = fVar18 * auVar52._8_4_;
  auVar49._12_4_ = fVar46 * auVar52._12_4_;
  auVar41 = NEON_frsqrts(auVar52,auVar49,4);
  fVar53 = fVar53 * auVar52._0_4_ * auVar41._0_4_;
  fVar63 = fVar63 * auVar52._4_4_ * auVar41._4_4_;
  fVar67 = fVar67 * auVar52._8_4_ * auVar41._8_4_;
  fVar69 = fVar69 * auVar52._12_4_ * auVar41._12_4_;
  fVar64 = fVar64 * (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                    CONCAT12((byte)((uint)fVar53 >> 0x10) &
                                             ~(byte)((uint)iVar40 >> 0x10),
                                             CONCAT11((byte)((uint)fVar53 >> 8) &
                                                      ~(byte)((uint)iVar40 >> 8),
                                                      SUB41(fVar53,0) & ~(byte)iVar40)));
  fVar53 = (float)((ulong)auVar34._0_8_ >> 0x20) *
           (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                           CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                    CONCAT11((byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                             SUB41(fVar63,0) & ~(byte)iVar43)));
  uVar19 = (undefined1)((uint)fVar53 >> 8);
  uVar20 = (undefined1)((uint)fVar53 >> 0x10);
  uVar21 = (undefined1)((uint)fVar53 >> 0x18);
  fVar62 = auVar34._8_4_ *
           (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                           CONCAT12((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                    CONCAT11((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                             SUB41(fVar67,0) & ~(byte)iVar44)));
  uVar22 = (undefined1)((uint)fVar62 >> 8);
  uVar23 = (undefined1)((uint)fVar62 >> 0x10);
  uVar24 = (undefined1)((uint)fVar62 >> 0x18);
  fVar63 = auVar36._12_4_ *
           (float)CONCAT13((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                           CONCAT12((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10),
                                    CONCAT11((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar45 >> 8),
                                             SUB41(fVar69,0) & ~(byte)iVar45)));
  uVar25 = (undefined1)((uint)fVar63 >> 8);
  uVar26 = (undefined1)((uint)fVar63 >> 0x10);
  uVar27 = (undefined1)((uint)fVar63 >> 0x18);
  auVar8[4] = SUB41(fVar53,0);
  auVar8._0_4_ = fVar64;
  auVar8[5] = uVar19;
  auVar8[6] = uVar20;
  auVar8[7] = uVar21;
  auVar8[8] = SUB41(fVar62,0);
  auVar8[9] = uVar22;
  auVar8[10] = uVar23;
  auVar8[0xb] = uVar24;
  auVar8[0xc] = SUB41(fVar63,0);
  auVar8[0xd] = uVar25;
  auVar8[0xe] = uVar26;
  auVar8[0xf] = uVar27;
  auVar9[4] = SUB41(fVar53,0);
  auVar9._0_4_ = fVar64;
  auVar9[5] = uVar19;
  auVar9[6] = uVar20;
  auVar9[7] = uVar21;
  auVar9[8] = SUB41(fVar62,0);
  auVar9[9] = uVar22;
  auVar9[10] = uVar23;
  auVar9[0xb] = uVar24;
  auVar9[0xc] = SUB41(fVar63,0);
  auVar9[0xd] = uVar25;
  auVar9[0xe] = uVar26;
  auVar9[0xf] = uVar27;
  auVar41 = NEON_ext(auVar8,auVar9,8,1);
  fVar64 = auVar41._0_4_ + fVar64 + auVar41._4_4_ + fVar53;
  uVar19 = 0;
  if (-1.0 <= fVar64) {
    uVar19 = SUB41(fVar64,0);
  }
  FUN_01590400(uVar19);
  return (float)CONCAT13(extraout_var_01,
                         CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) <
         *(float *)(param_1 + 0xba0) ||
         (float)CONCAT13(extraout_var_01,
                         CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) ==
         *(float *)(param_1 + 0xba0);
}


