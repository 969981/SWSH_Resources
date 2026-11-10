/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef6d50; name: FUN_00ef6d50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ef6d50(long param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 extraout_var;
  undefined8 uVar21;
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
  int iVar32;
  undefined8 uVar33;
  float fVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar40;
  float fVar41;
  undefined1 auVar42 [12];
  float fVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar58;
  float fVar59;
  undefined1 auVar57 [16];
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined1 local_40 [16];
  
  lVar18 = *(long *)(param_1 + 0x70);
  uVar21 = *(undefined8 *)(param_1 + 0xd0);
  uVar19 = 1;
  *(ulong *)(lVar18 + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 0xb8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20),
                (float)*(undefined8 *)(lVar18 + 0xb8) + (float)*(undefined8 *)(param_1 + 0xd8));
  *(ulong *)(lVar18 + 0xb0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 0xb0) >> 0x20) +
                (float)((ulong)uVar21 >> 0x20),(float)*(undefined8 *)(lVar18 + 0xb0) + (float)uVar21
               );
  *(undefined1 *)(lVar18 + 0xc0) = 1;
  fVar20 = (1.0 / (float)*(int *)(param_1 + 0xe0)) * (float)*(int *)(param_1 + 0xe4);
  if (1.0 < fVar20) {
    fVar20 = 1.0;
  }
  local_40 = FUN_0075e7d0(fVar20,param_1 + 0xb0,param_1 + 0xc0);
  FUN_007101c0(local_40);
  FUN_00e9f570(extraout_var,lVar18);
  uVar21 = *(undefined8 *)(lVar18 + 0xb0);
  fVar20 = (float)*(undefined8 *)(param_1 + 0x80) - (float)uVar21;
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) - (float)((ulong)uVar21 >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x88) - (float)*(undefined8 *)(lVar18 + 0xb8);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) -
          (float)((ulong)*(undefined8 *)(lVar18 + 0xb8) >> 0x20);
  auVar46._0_4_ = fVar20 * fVar20;
  auVar46._4_4_ = 0;
  auVar46._8_4_ = fVar3 * fVar3;
  fVar37 = (float)(CONCAT17((char)((uint)fVar4 >> 0x18),
                            CONCAT16((char)((uint)fVar4 >> 0x10),
                                     CONCAT15((char)((uint)fVar4 >> 8),
                                              CONCAT14(SUB41(fVar4,0),fVar3)))) >> 0x20);
  auVar46._12_4_ = fVar37 * fVar37;
  auVar43 = NEON_ext(auVar46,auVar46,8,1);
  if (1.0 < SQRT(auVar43._0_4_ + auVar46._0_4_ + auVar43._4_4_ + 0.0)) {
    auVar46 = *(undefined1 (*) [16])(lVar18 + 0xa0);
    fVar41 = auVar46._0_4_;
    fVar48 = fVar41 * (float)_DAT_01d4ae80;
    fVar45 = auVar46._4_4_;
    fVar50 = fVar45 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar52 = auVar46._8_4_ * (float)_UNK_01d4ae88;
    fVar54 = auVar46._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar22 = (undefined1)_UNK_01d49dc8;
    uVar23 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
    uVar24 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
    uVar25 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
    uVar26 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar27 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
    uVar28 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
    uVar29 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
    auVar13[8] = uVar22;
    auVar13._0_8_ = _DAT_01d49dc0;
    auVar13[9] = uVar23;
    auVar13[10] = uVar24;
    auVar13[0xb] = uVar25;
    auVar13[0xc] = uVar26;
    auVar13[0xd] = uVar27;
    auVar13[0xe] = uVar28;
    auVar13[0xf] = uVar29;
    uVar33 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
    auVar14[8] = uVar22;
    auVar14._0_8_ = _DAT_01d49dc0;
    auVar14[9] = uVar23;
    auVar14[10] = uVar24;
    auVar14[0xb] = uVar25;
    auVar14[0xc] = uVar26;
    auVar14[0xd] = uVar27;
    auVar14[0xe] = uVar28;
    auVar14[0xf] = uVar29;
    uVar56 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
    auVar15[8] = uVar22;
    auVar15._0_8_ = _DAT_01d49dc0;
    auVar15[9] = uVar23;
    auVar15[10] = uVar24;
    auVar15[0xb] = uVar25;
    auVar15[0xc] = uVar26;
    auVar15[0xd] = uVar27;
    auVar15[0xe] = uVar28;
    auVar15[0xf] = uVar29;
    uVar16 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
    auVar7._4_4_ = fVar50;
    auVar7._0_4_ = fVar48;
    auVar7._8_4_ = fVar52;
    auVar7._12_4_ = fVar54;
    uVar62 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5120);
    auVar8._4_4_ = fVar50;
    auVar8._0_4_ = fVar48;
    auVar8._8_4_ = fVar52;
    auVar8._12_4_ = fVar54;
    uVar64 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5270);
    fVar37 = (float)((ulong)uVar33 >> 0x20);
    auVar9._4_4_ = fVar50;
    auVar9._0_4_ = fVar48;
    auVar9._8_4_ = fVar52;
    auVar9._12_4_ = fVar54;
    uVar60 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
    auVar10._4_4_ = fVar50;
    auVar10._0_4_ = fVar48;
    auVar10._8_4_ = fVar52;
    auVar10._12_4_ = fVar54;
    uVar63 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
    uVar17 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd4f90);
    fVar31 = (float)((ulong)uVar56 >> 0x20);
    auVar11._4_4_ = fVar50;
    auVar11._0_4_ = fVar48;
    auVar11._8_4_ = fVar52;
    auVar11._12_4_ = fVar54;
    uVar61 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50f8);
    auVar12._4_4_ = fVar50;
    auVar12._0_4_ = fVar48;
    auVar12._8_4_ = fVar48;
    auVar12._12_4_ = fVar50;
    uVar19 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50b0);
    fVar53 = (float)_UNK_01d4ae98;
    fVar55 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar49 = (float)_DAT_01d4ae90;
    fVar51 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar58 = (float)((ulong)uVar16 >> 0x20);
    fVar48 = (fVar48 * (float)uVar33 + fVar49 * (float)uVar60 * 0.0 +
             fVar49 * (float)uVar16 * (float)uVar61) - (float)uVar56 * (float)uVar63;
    fVar50 = (fVar50 * fVar37 + fVar51 * (float)((ulong)uVar60 >> 0x20) * 0.0 +
             fVar51 * fVar58 * (float)((ulong)uVar61 >> 0x20)) -
             fVar31 * (float)((ulong)uVar63 >> 0x20);
    auVar34._0_8_ = CONCAT44(fVar50,fVar48);
    auVar34._8_4_ =
         (fVar52 * (float)uVar33 + fVar53 * (float)uVar56 * (float)uVar62 +
         fVar53 * (float)uVar19 * 0.0) - (float)uVar16 * (float)uVar64;
    auVar34._12_4_ =
         (fVar54 * fVar37 + fVar55 * fVar31 * (float)((ulong)uVar62 >> 0x20) +
         fVar55 * (float)((ulong)uVar19 >> 0x20) * 0.0) - fVar58 * (float)((ulong)uVar64 >> 0x20);
    uVar61 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd50f8);
    uVar33 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd4f90);
    uVar63 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd5120);
    fVar37 = (float)((ulong)uVar17 >> 0x20);
    fVar59 = (float)((ulong)uVar61 >> 0x20);
    uVar62 = a64_TBL(ZEXT816(0),auVar46,DAT_01cd5418);
    uVar60 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50f8);
    auVar5._8_4_ = fVar48;
    auVar5._0_8_ = auVar34._0_8_;
    auVar5._12_4_ = fVar50;
    uVar19 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50b0);
    uVar16 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd5418);
    uVar56 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd5270);
    auVar35._0_4_ = fVar20 * fVar20;
    auVar35._4_4_ = fVar2 * fVar2;
    auVar35._8_4_ = fVar3 * fVar3;
    auVar35._12_4_ = fVar4 * fVar4;
    auVar46 = NEON_ext(auVar35,auVar35,8,1);
    fVar58 = (float)((ulong)uVar62 >> 0x20);
    fVar31 = auVar46._0_4_ + auVar35._0_4_;
    fVar52 = auVar46._4_4_ + auVar35._4_4_;
    fVar54 = fVar31 + fVar52;
    fVar31 = fVar31 + fVar52;
    fVar48 = ((float)uVar17 * fVar48 + fVar49 * fVar41 * (float)uVar33 +
             fVar49 * (float)uVar62 * (float)uVar60) - (float)uVar61 * (float)uVar16;
    fVar50 = (fVar37 * fVar50 + fVar51 * fVar45 * (float)((ulong)uVar33 >> 0x20) +
             fVar51 * fVar58 * (float)((ulong)uVar60 >> 0x20)) -
             fVar59 * (float)((ulong)uVar16 >> 0x20);
    fVar52 = ((float)uVar17 * auVar34._8_4_ + fVar53 * (float)uVar61 * (float)uVar63 +
             fVar53 * fVar41 * (float)uVar19) - (float)uVar62 * (float)uVar56;
    fVar41 = (fVar37 * auVar34._12_4_ + fVar55 * fVar59 * (float)((ulong)uVar63 >> 0x20) +
             fVar55 * fVar45 * (float)((ulong)uVar19 >> 0x20)) -
             fVar58 * (float)((ulong)uVar56 >> 0x20);
    auVar36._8_8_ = CONCAT44(fVar31,fVar54);
    auVar36._0_8_ = CONCAT44(fVar31,fVar54);
    auVar46 = NEON_frsqrte(auVar36,4);
    auVar57._0_4_ = auVar46._0_4_ * fVar54;
    auVar57._4_4_ = auVar46._4_4_ * fVar31;
    auVar57._8_4_ = auVar46._8_4_ * fVar54;
    auVar57._12_4_ = auVar46._12_4_ * fVar31;
    auVar43 = NEON_frsqrts(auVar46,auVar57,4);
    auVar47._0_4_ = auVar46._0_4_ * auVar43._0_4_;
    auVar47._4_4_ = auVar46._4_4_ * auVar43._4_4_;
    auVar47._8_4_ = auVar46._8_4_ * auVar43._8_4_;
    auVar47._12_4_ = auVar46._12_4_ * auVar43._12_4_;
    iVar32 = -(uint)(fVar54 == 0.0);
    iVar38 = -(uint)(fVar31 == 0.0);
    iVar39 = -(uint)(fVar54 == 0.0);
    iVar40 = -(uint)(fVar31 == 0.0);
    auVar6._4_4_ = fVar31 * auVar47._4_4_;
    auVar6._0_4_ = fVar54 * auVar47._0_4_;
    auVar6._8_4_ = fVar54 * auVar47._8_4_;
    auVar6._12_4_ = fVar31 * auVar47._12_4_;
    auVar46 = NEON_frsqrts(auVar47,auVar6,4);
    fVar20 = fVar20 * auVar47._0_4_ * auVar46._0_4_;
    fVar2 = fVar2 * auVar47._4_4_ * auVar46._4_4_;
    fVar3 = fVar3 * auVar47._8_4_ * auVar46._8_4_;
    fVar4 = fVar4 * auVar47._12_4_ * auVar46._12_4_;
    fVar37 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                             CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                      CONCAT11((byte)((uint)fVar48 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 8),
                                               SUB41(fVar48,0) & (byte)DAT_01d4ab50)));
    auVar42._0_8_ =
         CONCAT17((byte)((uint)fVar50 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                  CONCAT16((byte)((uint)fVar50 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                           CONCAT15((byte)((uint)fVar50 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                    CONCAT14(SUB41(fVar50,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                             fVar37))));
    auVar42[8] = SUB41(fVar52,0) & (byte)DAT_01d4ab58;
    auVar42[9] = (byte)((uint)fVar52 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    auVar42[10] = (byte)((uint)fVar52 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    auVar42[0xb] = (byte)((uint)fVar52 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    auVar44[0xc] = SUB41(fVar41,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    auVar44._0_12_ = auVar42;
    auVar44[0xd] = (byte)((uint)fVar41 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    auVar44[0xe] = (byte)((uint)fVar41 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    auVar44[0xf] = (byte)((uint)fVar41 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    fVar37 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar20 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41(fVar20,0) & ~(byte)iVar32))) * fVar37;
    fVar20 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                             CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                      CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar38 >> 8)
                                               ,SUB41(fVar2,0) & ~(byte)iVar38))) *
             (float)((ulong)auVar42._0_8_ >> 0x20);
    uVar22 = (undefined1)((uint)fVar20 >> 8);
    uVar23 = (undefined1)((uint)fVar20 >> 0x10);
    uVar24 = (undefined1)((uint)fVar20 >> 0x18);
    fVar2 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                            CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                                     CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                              SUB41(fVar3,0) & ~(byte)iVar39))) * auVar42._8_4_;
    uVar25 = (undefined1)((uint)fVar2 >> 8);
    uVar26 = (undefined1)((uint)fVar2 >> 0x10);
    uVar27 = (undefined1)((uint)fVar2 >> 0x18);
    fVar3 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                            CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                     CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                              SUB41(fVar4,0) & ~(byte)iVar40))) * auVar44._12_4_;
    uVar28 = (undefined1)((uint)fVar3 >> 8);
    uVar29 = (undefined1)((uint)fVar3 >> 0x10);
    uVar30 = (undefined1)((uint)fVar3 >> 0x18);
    auVar43[4] = SUB41(fVar20,0);
    auVar43._0_4_ = fVar37;
    auVar43[5] = uVar22;
    auVar43[6] = uVar23;
    auVar43[7] = uVar24;
    auVar43[8] = SUB41(fVar2,0);
    auVar43[9] = uVar25;
    auVar43[10] = uVar26;
    auVar43[0xb] = uVar27;
    auVar43[0xc] = SUB41(fVar3,0);
    auVar43[0xd] = uVar28;
    auVar43[0xe] = uVar29;
    auVar43[0xf] = uVar30;
    auVar1[4] = SUB41(fVar20,0);
    auVar1._0_4_ = fVar37;
    auVar1[5] = uVar22;
    auVar1[6] = uVar23;
    auVar1[7] = uVar24;
    auVar1[8] = SUB41(fVar2,0);
    auVar1[9] = uVar25;
    auVar1[10] = uVar26;
    auVar1[0xb] = uVar27;
    auVar1[0xc] = SUB41(fVar3,0);
    auVar1[0xd] = uVar28;
    auVar1[0xe] = uVar29;
    auVar1[0xf] = uVar30;
    auVar46 = NEON_ext(auVar43,auVar1,8,1);
    if (auVar46._0_4_ + fVar37 + auVar46._4_4_ + fVar20 <= 0.0) {
      uVar33 = *(undefined8 *)(param_1 + 0x88);
      uVar16 = *(undefined8 *)(param_1 + 0x80);
      uVar19 = 1;
      *(undefined1 *)(lVar18 + 0xc0) = 1;
      *(undefined8 *)(lVar18 + 0xb8) = uVar33;
      *(ulong *)(lVar18 + 0xb0) =
           CONCAT17((char)((ulong)uVar21 >> 0x38),
                    CONCAT16((char)((ulong)uVar21 >> 0x30),
                             CONCAT15((char)((ulong)uVar21 >> 0x28),
                                      CONCAT14((char)((ulong)uVar21 >> 0x20),(int)uVar16))));
    }
    else {
      uVar19 = 0;
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    }
  }
  return uVar19;
}


