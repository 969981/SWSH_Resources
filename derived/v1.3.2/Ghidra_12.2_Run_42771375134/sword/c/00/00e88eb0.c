/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e88eb0; name: FUN_00e88eb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e88eb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar31;
  int iVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar39;
  undefined8 uVar40;
  undefined1 auVar41 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar47;
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  long local_40;
  long local_38;
  
  plVar21 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar21 + 0x10))(&local_40,plVar21);
  local_38 = local_40;
  local_40 = 0;
  uVar20 = FUN_00e7cb20(&local_38);
  if ((uVar20 & 1) == 0) {
    fVar22 = *(float *)(param_1 + 0xb0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (0.0 < fVar22) {
      fVar36 = (float)*(undefined8 *)(param_1 + 0x90) - *(float *)(param_1 + 0x110);
      fVar22 = (float)*(undefined8 *)(param_1 + 0x98) - *(float *)(param_1 + 0x118);
      fVar38 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) - *(float *)(param_1 + 0x11c)
      ;
      fVar36 = fVar36 * fVar36;
      fVar22 = fVar22 * fVar22;
      fVar38 = fVar38 * fVar38;
      auVar46._4_4_ = 0;
      auVar46._0_4_ = fVar36;
      auVar46._8_4_ = fVar22;
      auVar46._12_4_ = fVar38;
      auVar49._4_4_ = 0;
      auVar49._0_4_ = fVar36;
      auVar49._8_4_ = fVar22;
      auVar49._12_4_ = fVar38;
      auVar46 = NEON_ext(auVar46,auVar49,8,1);
      fVar22 = *(float *)(param_1 + 0x110) - *(float *)(plVar21 + 0x16);
      fVar38 = *(float *)(param_1 + 0x118) - *(float *)(plVar21 + 0x17);
      fVar51 = *(float *)(param_1 + 0x11c) - *(float *)((long)plVar21 + 0xbc);
      auVar25._0_4_ = fVar22 * fVar22;
      auVar25._4_4_ = 0;
      auVar25._8_4_ = fVar38 * fVar38;
      auVar25._12_4_ = fVar51 * fVar51;
      auVar49 = NEON_ext(auVar25,auVar25,8,1);
      fVar22 = SQRT(auVar49._0_4_ + auVar25._0_4_ + auVar49._4_4_ + 0.0);
      fVar36 = SQRT(auVar46._0_4_ + fVar36 + auVar46._4_4_ + 0.0) - fVar22;
      if (fVar36 <= fVar22) {
        fVar22 = fVar36;
      }
      fVar36 = *(float *)PTR_DAT_0271ecc8 + fVar22 / *(float *)(param_1 + 0xb0);
      fVar22 = *(float *)(param_1 + 0x80);
      if (fVar36 <= *(float *)(param_1 + 0x80)) {
        fVar22 = fVar36;
      }
      (**(code **)(*plVar21 + 0x180))(fVar22,plVar21,PTR_DAT_0271e870);
    }
  }
  else {
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
      fVar22 = *(float *)(param_1 + 0xa8);
      goto joined_r0x00e89020;
    }
  }
  fVar22 = *(float *)(param_1 + 0xa8);
joined_r0x00e89020:
  if (0.0 < fVar22) {
    auVar46 = *(undefined1 (*) [16])(param_1 + 0xf0);
    *(undefined1 *)(plVar21 + 0x18) = 1;
    plVar21[0x17] =
         CONCAT44((float)((ulong)plVar21[0x17] >> 0x20) + auVar46._12_4_,
                  (float)plVar21[0x17] + auVar46._8_4_);
    plVar21[0x16] =
         CONCAT44((float)((ulong)plVar21[0x16] >> 0x20) + auVar46._4_4_,
                  (float)plVar21[0x16] + auVar46._0_4_);
    iVar31 = *(int *)(param_1 + 0x100);
    *(int *)(param_1 + 0x100) = iVar31 + -1;
    if (iVar31 < 2) {
      return 1;
    }
  }
  else {
    uVar1 = plVar21[0x16];
    fVar22 = *(float *)(param_1 + 0x90) - (float)uVar1;
    fVar36 = *(float *)(param_1 + 0x98) - (float)plVar21[0x17];
    fVar38 = *(float *)(param_1 + 0x9c) - (float)((ulong)plVar21[0x17] >> 0x20);
    auVar32._0_4_ = fVar22 * fVar22;
    auVar32._4_4_ = 0;
    auVar32._8_4_ = fVar36 * fVar36;
    auVar32._12_4_ = fVar38 * fVar38;
    auVar46 = NEON_ext(auVar32,auVar32,8,1);
    if (SQRT(auVar46._0_4_ + auVar32._0_4_ + auVar46._4_4_ + 0.0) <= 1.0) {
      return 1;
    }
    auVar46 = *(undefined1 (*) [16])(plVar21 + 0x14);
    uVar57 = (undefined1)_UNK_01d49dc8;
    uVar58 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
    uVar59 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
    uVar60 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
    uVar61 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar62 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
    uVar63 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
    uVar64 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
    fVar45 = auVar46._0_4_;
    fVar36 = fVar45 * (float)_DAT_01d4ae80;
    fVar47 = auVar46._4_4_;
    fVar51 = fVar47 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar53 = auVar46._8_4_ * (float)_UNK_01d4ae88;
    fVar55 = auVar46._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar5._4_4_ = fVar51;
    auVar5._0_4_ = fVar36;
    auVar5._8_4_ = fVar53;
    auVar5._12_4_ = fVar55;
    uVar72 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5270);
    auVar12[8] = uVar57;
    auVar12._0_8_ = _DAT_01d49dc0;
    auVar12[9] = uVar58;
    auVar12[10] = uVar59;
    auVar12[0xb] = uVar60;
    auVar12[0xc] = uVar61;
    auVar12[0xd] = uVar62;
    auVar12[0xe] = uVar63;
    auVar12[0xf] = uVar64;
    uVar40 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
    auVar13[8] = uVar57;
    auVar13._0_8_ = _DAT_01d49dc0;
    auVar13[9] = uVar58;
    auVar13[10] = uVar59;
    auVar13[0xb] = uVar60;
    auVar13[0xc] = uVar61;
    auVar13[0xd] = uVar62;
    auVar13[0xe] = uVar63;
    auVar13[0xf] = uVar64;
    uVar65 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
    auVar14[8] = uVar57;
    auVar14._0_8_ = _DAT_01d49dc0;
    auVar14[9] = uVar58;
    auVar14[10] = uVar59;
    auVar14[0xb] = uVar60;
    auVar14[0xc] = uVar61;
    auVar14[0xd] = uVar62;
    auVar14[0xe] = uVar63;
    auVar14[0xf] = uVar64;
    uVar15 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
    auVar6._4_4_ = fVar51;
    auVar6._0_4_ = fVar36;
    auVar6._8_4_ = fVar53;
    auVar6._12_4_ = fVar55;
    uVar68 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
    auVar7._4_4_ = fVar51;
    auVar7._0_4_ = fVar36;
    auVar7._8_4_ = fVar53;
    auVar7._12_4_ = fVar55;
    uVar70 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5120);
    auVar8._4_4_ = fVar51;
    auVar8._0_4_ = fVar36;
    auVar8._8_4_ = fVar53;
    auVar8._12_4_ = fVar55;
    uVar71 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
    fVar66 = (float)((ulong)uVar65 >> 0x20);
    auVar9._4_4_ = fVar51;
    auVar9._0_4_ = fVar36;
    auVar9._8_4_ = fVar53;
    auVar9._12_4_ = fVar55;
    uVar69 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
    fVar22 = (float)((ulong)uVar40 >> 0x20);
    uVar16 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd4f90);
    auVar10._4_4_ = fVar51;
    auVar10._0_4_ = fVar36;
    auVar10._8_4_ = fVar36;
    auVar10._12_4_ = fVar51;
    uVar11 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50b0);
    fVar23 = *(float *)(param_1 + 0x90) - *(float *)(plVar21 + 0x16);
    fVar28 = *(float *)(param_1 + 0x94) - 0.0;
    fVar29 = *(float *)(param_1 + 0x98) - *(float *)(plVar21 + 0x17);
    fVar30 = *(float *)(param_1 + 0x9c) - *(float *)((long)plVar21 + 0xbc);
    fVar54 = (float)_UNK_01d4ae98;
    fVar56 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar50 = (float)_DAT_01d4ae90;
    fVar52 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    auVar33._0_4_ = fVar23 * fVar23;
    auVar33._4_4_ = fVar28 * fVar28;
    auVar33._8_4_ = fVar29 * fVar29;
    auVar33._12_4_ = fVar30 * fVar30;
    fVar67 = (float)((ulong)uVar15 >> 0x20);
    fVar38 = (fVar36 * (float)uVar40 + fVar50 * (float)uVar68 * 0.0 +
             fVar50 * (float)uVar15 * (float)uVar69) - (float)uVar65 * (float)uVar71;
    fVar51 = (fVar51 * fVar22 + fVar52 * (float)((ulong)uVar68 >> 0x20) * 0.0 +
             fVar52 * fVar67 * (float)((ulong)uVar69 >> 0x20)) -
             fVar66 * (float)((ulong)uVar71 >> 0x20);
    auVar42._0_8_ = CONCAT44(fVar51,fVar38);
    auVar42._8_4_ =
         (fVar53 * (float)uVar40 + fVar54 * (float)uVar65 * (float)uVar70 +
         fVar54 * (float)uVar11 * 0.0) - (float)uVar15 * (float)uVar72;
    auVar42._12_4_ =
         (fVar55 * fVar22 + fVar56 * fVar66 * (float)((ulong)uVar70 >> 0x20) +
         fVar56 * (float)((ulong)uVar11 >> 0x20) * 0.0) - fVar67 * (float)((ulong)uVar72 >> 0x20);
    uVar69 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd50f8);
    uVar40 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd4f90);
    uVar71 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5120);
    fVar22 = (float)((ulong)uVar16 >> 0x20);
    fVar67 = (float)((ulong)uVar69 >> 0x20);
    uVar70 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd5418);
    uVar68 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd50f8);
    auVar3._8_4_ = fVar38;
    auVar3._0_8_ = auVar42._0_8_;
    auVar3._12_4_ = fVar51;
    uVar11 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50b0);
    uVar15 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5418);
    uVar65 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5270);
    auVar46 = NEON_ext(auVar33,auVar33,8,1);
    fVar55 = auVar46._0_4_ + auVar33._0_4_;
    fVar36 = auVar46._4_4_ + auVar33._4_4_;
    fVar66 = (float)((ulong)uVar70 >> 0x20);
    fVar53 = fVar55 + fVar36;
    fVar55 = fVar55 + fVar36;
    fVar36 = ((float)uVar16 * fVar38 + fVar50 * fVar45 * (float)uVar40 +
             fVar50 * (float)uVar70 * (float)uVar68) - (float)uVar69 * (float)uVar15;
    fVar38 = (fVar22 * fVar51 + fVar52 * fVar47 * (float)((ulong)uVar40 >> 0x20) +
             fVar52 * fVar66 * (float)((ulong)uVar68 >> 0x20)) -
             fVar67 * (float)((ulong)uVar15 >> 0x20);
    fVar51 = ((float)uVar16 * auVar42._8_4_ + fVar54 * (float)uVar69 * (float)uVar71 +
             fVar54 * fVar45 * (float)uVar11) - (float)uVar70 * (float)uVar65;
    fVar22 = (fVar22 * auVar42._12_4_ + fVar56 * fVar67 * (float)((ulong)uVar71 >> 0x20) +
             fVar56 * fVar47 * (float)((ulong)uVar11 >> 0x20)) -
             fVar66 * (float)((ulong)uVar65 >> 0x20);
    auVar34._8_8_ = CONCAT44(fVar55,fVar53);
    auVar34._0_8_ = CONCAT44(fVar55,fVar53);
    auVar46 = NEON_frsqrte(auVar34,4);
    auVar48._0_4_ = auVar46._0_4_ * fVar53;
    auVar48._4_4_ = auVar46._4_4_ * fVar55;
    auVar48._8_4_ = auVar46._8_4_ * fVar53;
    auVar48._12_4_ = auVar46._12_4_ * fVar55;
    auVar49 = NEON_frsqrts(auVar46,auVar48,4);
    auVar43._0_4_ = auVar46._0_4_ * auVar49._0_4_;
    auVar43._4_4_ = auVar46._4_4_ * auVar49._4_4_;
    auVar43._8_4_ = auVar46._8_4_ * auVar49._8_4_;
    auVar43._12_4_ = auVar46._12_4_ * auVar49._12_4_;
    iVar31 = -(uint)(fVar53 == 0.0);
    iVar35 = -(uint)(fVar55 == 0.0);
    iVar37 = -(uint)(fVar53 == 0.0);
    iVar39 = -(uint)(fVar55 == 0.0);
    auVar4._4_4_ = fVar55 * auVar43._4_4_;
    auVar4._0_4_ = fVar53 * auVar43._0_4_;
    auVar4._8_4_ = fVar53 * auVar43._8_4_;
    auVar4._12_4_ = fVar55 * auVar43._12_4_;
    auVar46 = NEON_frsqrts(auVar43,auVar4,4);
    fVar23 = fVar23 * auVar43._0_4_ * auVar46._0_4_;
    fVar28 = fVar28 * auVar43._4_4_ * auVar46._4_4_;
    fVar29 = fVar29 * auVar43._8_4_ * auVar46._8_4_;
    fVar30 = fVar30 * auVar43._12_4_ * auVar46._12_4_;
    fVar36 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                             CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                      CONCAT11((byte)((uint)fVar36 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 8),
                                               SUB41(fVar36,0) & (byte)DAT_01d4ab50)));
    auVar41._0_8_ =
         CONCAT17((byte)((uint)fVar38 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                  CONCAT16((byte)((uint)fVar38 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                           CONCAT15((byte)((uint)fVar38 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                    CONCAT14(SUB41(fVar38,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                             fVar36))));
    auVar41[8] = SUB41(fVar51,0) & (byte)DAT_01d4ab58;
    auVar41[9] = (byte)((uint)fVar51 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    auVar41[10] = (byte)((uint)fVar51 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    auVar41[0xb] = (byte)((uint)fVar51 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    auVar44[0xc] = SUB41(fVar22,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    auVar44._0_12_ = auVar41;
    auVar44[0xd] = (byte)((uint)fVar22 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    auVar44[0xe] = (byte)((uint)fVar22 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    auVar44[0xf] = (byte)((uint)fVar22 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    fVar22 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                             CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                      CONCAT11((byte)((uint)fVar23 >> 8) &
                                               ~(byte)((uint)iVar31 >> 8),
                                               SUB41(fVar23,0) & ~(byte)iVar31)));
    auVar24._0_8_ =
         CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                  CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                           CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                    CONCAT14(SUB41(fVar28,0) & ~(byte)iVar35,fVar22))));
    auVar24[8] = SUB41(fVar29,0) & ~(byte)iVar37;
    auVar24[9] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar37 >> 8);
    auVar24[10] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
    auVar24[0xb] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
    auVar26[0xc] = SUB41(fVar30,0) & ~(byte)iVar39;
    auVar26._0_12_ = auVar24;
    auVar26[0xd] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar39 >> 8);
    auVar26[0xe] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
    auVar26[0xf] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
    auVar27._0_4_ = fVar22 * fVar36;
    auVar27._4_4_ = (float)((ulong)auVar24._0_8_ >> 0x20) * (float)((ulong)auVar41._0_8_ >> 0x20);
    auVar27._8_4_ = auVar24._8_4_ * auVar41._8_4_;
    auVar27._12_4_ = auVar26._12_4_ * auVar44._12_4_;
    auVar46 = NEON_ext(auVar27,auVar27,8,1);
    if (auVar46._0_4_ + auVar27._0_4_ + auVar46._4_4_ + auVar27._4_4_ <= 0.0) {
      uVar17 = *(undefined4 *)(param_1 + 0x90);
      uVar18 = *(undefined4 *)(param_1 + 0x98);
      uVar19 = *(undefined4 *)(param_1 + 0x9c);
      *(undefined1 *)(plVar21 + 0x18) = 1;
      *(undefined4 *)(plVar21 + 0x17) = uVar18;
      *(undefined4 *)((long)plVar21 + 0xbc) = uVar19;
      plVar21[0x16] = CONCAT44((int)((ulong)uVar1 >> 0x20),uVar17);
      return 1;
    }
  }
  if (0x96 < *(int *)(param_1 + 0x124)) {
    FUN_00e892d0(param_1);
  }
  lVar2 = plVar21[0x16];
  if (((ABS((float)lVar2 - *(float *)(param_1 + 0x130)) <= DAT_01d4c708) &&
      (ABS((float)((ulong)lVar2 >> 0x20) - *(float *)(param_1 + 0x134)) <= DAT_01d4c708)) &&
     (ABS((float)plVar21[0x17] - *(float *)(param_1 + 0x138)) <= DAT_01d4c708)) {
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  *(long *)(param_1 + 0x138) = plVar21[0x17];
  *(long *)(param_1 + 0x130) = plVar21[0x16];
  return 0;
}


