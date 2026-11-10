/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e5260; name: FUN_012e5260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e5260(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 *puVar25;
  float *pfVar26;
  undefined1 (*pauVar27) [16];
  code *pcVar28;
  float fVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  int iVar49;
  float fVar50;
  undefined8 uVar45;
  int iVar51;
  undefined1 auVar46 [16];
  float fVar48;
  undefined1 auVar47 [16];
  int iVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fStack_3c;
  float fStack_34;
  
  *(undefined8 *)(param_1 + 0x768) = param_2[1];
  *(undefined8 *)(param_1 + 0x760) = *param_2;
  puVar25 = (undefined8 *)FUN_012dcaa0();
  uVar1 = puVar25[1];
  *(undefined8 *)(param_1 + 0x770) = *puVar25;
  pcVar28 = *(code **)(param_1 + 0x798);
  *(undefined8 *)(param_1 + 0x778) = uVar1;
  if (pcVar28 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    *(undefined8 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x798) = 0;
    (*pcVar28)(param_1 + 0x7b0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x7b0);
    uVar1 = *param_3;
    uVar45 = param_3[1];
    uVar2 = param_3[3];
    *(undefined8 *)(param_1 + 0x7a0) = param_3[2];
    *(undefined8 *)(param_1 + 0x7a8) = uVar2;
    *(undefined8 *)(param_1 + 0x790) = uVar1;
    *(undefined8 *)(param_1 + 0x798) = uVar45;
  }
  *(undefined4 *)(param_1 + 0x784) = 1;
  pfVar26 = (float *)FUN_012dcaa0(param_1);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x760) - *pfVar26;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x760) >> 0x20) - pfVar26[1];
  fVar11 = (float)*(undefined8 *)(param_1 + 0x768) - pfVar26[2];
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x768) >> 0x20) - pfVar26[3];
  auVar46._0_4_ = fVar9 * fVar9;
  auVar46._4_4_ = fVar10 * fVar10;
  auVar46._8_4_ = fVar11 * fVar11;
  auVar46._12_4_ = fVar12 * fVar12;
  auVar54 = NEON_ext(auVar46,auVar46,8,1);
  fVar42 = auVar54._0_4_ + auVar46._0_4_;
  fVar48 = auVar54._4_4_ + auVar46._4_4_;
  fVar29 = fVar42 + fVar48;
  fVar42 = fVar42 + fVar48;
  auVar47._8_8_ = CONCAT44(fVar42,fVar29);
  auVar47._0_8_ = CONCAT44(fVar42,fVar29);
  auVar54 = NEON_frsqrte(auVar47,4);
  auVar56._0_4_ = auVar54._0_4_ * fVar29;
  auVar56._4_4_ = auVar54._4_4_ * fVar42;
  auVar56._8_4_ = auVar54._8_4_ * fVar29;
  auVar56._12_4_ = auVar54._12_4_ * fVar42;
  auVar57 = NEON_frsqrts(auVar54,auVar56,4);
  auVar55._0_4_ = auVar54._0_4_ * auVar57._0_4_;
  auVar55._4_4_ = auVar54._4_4_ * auVar57._4_4_;
  auVar55._8_4_ = auVar54._8_4_ * auVar57._8_4_;
  auVar55._12_4_ = auVar54._12_4_ * auVar57._12_4_;
  auVar58._0_4_ = fVar29 * auVar55._0_4_;
  auVar58._4_4_ = fVar42 * auVar55._4_4_;
  auVar58._8_4_ = fVar29 * auVar55._8_4_;
  auVar58._12_4_ = fVar42 * auVar55._12_4_;
  iVar43 = -(uint)(fVar29 == 0.0);
  iVar49 = -(uint)(fVar42 == 0.0);
  iVar51 = -(uint)(fVar29 == 0.0);
  iVar52 = -(uint)(fVar42 == 0.0);
  auVar54 = NEON_frsqrts(auVar55,auVar58,4);
  fVar9 = fVar9 * auVar55._0_4_ * auVar54._0_4_;
  fVar10 = fVar10 * auVar55._4_4_ * auVar54._4_4_;
  fVar11 = fVar11 * auVar55._8_4_ * auVar54._8_4_;
  fVar12 = fVar12 * auVar55._12_4_ * auVar54._12_4_;
  fVar29 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                           CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                    CONCAT11((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                             SUB41(fVar11,0) & ~(byte)iVar51)));
  fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                   CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                            SUB41(fVar9,0) & ~(byte)iVar43)));
  pauVar27 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
  auVar3 = *pauVar27;
  fVar44 = auVar3._0_4_;
  fVar42 = fVar44 * (float)_DAT_01d4ae80;
  fVar50 = auVar3._4_4_;
  fVar48 = fVar50 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar30 = SUB41(fVar48,0);
  uVar31 = (undefined1)((uint)fVar48 >> 8);
  uVar32 = (undefined1)((uint)fVar48 >> 0x10);
  uVar33 = (undefined1)((uint)fVar48 >> 0x18);
  fVar19 = auVar3._8_4_ * (float)_UNK_01d4ae88;
  uVar34 = SUB41(fVar19,0);
  uVar35 = (undefined1)((uint)fVar19 >> 8);
  uVar36 = (undefined1)((uint)fVar19 >> 0x10);
  uVar37 = (undefined1)((uint)fVar19 >> 0x18);
  fVar20 = auVar3._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar38 = SUB41(fVar20,0);
  uVar39 = (undefined1)((uint)fVar20 >> 8);
  uVar40 = (undefined1)((uint)fVar20 >> 0x10);
  uVar41 = (undefined1)((uint)fVar20 >> 0x18);
  uVar61 = (undefined4)_UNK_01d49dc8;
  uVar62 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  auVar21._8_4_ = uVar61;
  auVar21._0_8_ = _DAT_01d49dc0;
  auVar21._12_4_ = uVar62;
  uVar1 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd4f90);
  auVar22._8_4_ = uVar61;
  auVar22._0_8_ = _DAT_01d49dc0;
  auVar22._12_4_ = uVar62;
  uVar63 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
  auVar23._8_4_ = uVar61;
  auVar23._0_8_ = _DAT_01d49dc0;
  auVar23._12_4_ = uVar62;
  uVar53 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
  fVar59 = (float)((ulong)uVar53 >> 0x20);
  auVar13[4] = uVar30;
  auVar13._0_4_ = fVar42;
  auVar13[5] = uVar31;
  auVar13[6] = uVar32;
  auVar13[7] = uVar33;
  auVar13[8] = uVar34;
  auVar13[9] = uVar35;
  auVar13[10] = uVar36;
  auVar13[0xb] = uVar37;
  auVar13[0xc] = uVar38;
  auVar13[0xd] = uVar39;
  auVar13[0xe] = uVar40;
  auVar13[0xf] = uVar41;
  uVar71 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
  auVar14[4] = uVar30;
  auVar14._0_4_ = fVar42;
  auVar14[5] = uVar31;
  auVar14[6] = uVar32;
  auVar14[7] = uVar33;
  auVar14[8] = uVar34;
  auVar14[9] = uVar35;
  auVar14[10] = uVar36;
  auVar14[0xb] = uVar37;
  auVar14[0xc] = uVar38;
  auVar14[0xd] = uVar39;
  auVar14[0xe] = uVar40;
  auVar14[0xf] = uVar41;
  uVar73 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5270);
  fVar11 = (float)((ulong)uVar1 >> 0x20);
  auVar15[4] = uVar30;
  auVar15._0_4_ = fVar42;
  auVar15[5] = uVar31;
  auVar15[6] = uVar32;
  auVar15[7] = uVar33;
  auVar15[8] = uVar34;
  auVar15[9] = uVar35;
  auVar15[10] = uVar36;
  auVar15[0xb] = uVar37;
  auVar15[0xc] = uVar38;
  auVar15[0xd] = uVar39;
  auVar15[0xe] = uVar40;
  auVar15[0xf] = uVar41;
  uVar69 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
  auVar16[4] = uVar30;
  auVar16._0_4_ = fVar42;
  auVar16[5] = uVar31;
  auVar16[6] = uVar32;
  auVar16[7] = uVar33;
  auVar16[8] = uVar34;
  auVar16[9] = uVar35;
  auVar16[10] = uVar36;
  auVar16[0xb] = uVar37;
  auVar16[0xc] = uVar38;
  auVar16[0xd] = uVar39;
  auVar16[0xe] = uVar40;
  auVar16[0xf] = uVar41;
  uVar72 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
  uVar24 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
  fVar60 = (float)((ulong)uVar24 >> 0x20);
  fVar64 = (float)((ulong)uVar63 >> 0x20);
  auVar17[4] = uVar30;
  auVar17._0_4_ = fVar42;
  auVar17[5] = uVar31;
  auVar17[6] = uVar32;
  auVar17[7] = uVar33;
  auVar17[8] = uVar34;
  auVar17[9] = uVar35;
  auVar17[10] = uVar36;
  auVar17[0xb] = uVar37;
  auVar17[0xc] = uVar38;
  auVar17[0xd] = uVar39;
  auVar17[0xe] = uVar40;
  auVar17[0xf] = uVar41;
  uVar70 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
  auVar18[4] = uVar30;
  auVar18._0_4_ = fVar42;
  auVar18[5] = uVar31;
  auVar18[6] = uVar32;
  auVar18[7] = uVar33;
  auVar18[8] = SUB41(fVar42,0);
  auVar18[9] = (char)((uint)fVar42 >> 8);
  auVar18[10] = (char)((uint)fVar42 >> 0x10);
  auVar18[0xb] = (char)((uint)fVar42 >> 0x18);
  auVar18[0xc] = uVar30;
  auVar18[0xd] = uVar31;
  auVar18[0xe] = uVar32;
  auVar18[0xf] = uVar33;
  uVar45 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
  fVar65 = (float)_DAT_01d4ae90;
  fVar66 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar67 = (float)_UNK_01d4ae98;
  fVar68 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  uVar2 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
  fVar42 = (fVar42 * (float)uVar1 + fVar65 * (float)uVar69 * 0.0 +
           fVar65 * (float)uVar53 * (float)uVar70) - (float)uVar63 * (float)uVar72;
  fVar48 = (fVar48 * fVar11 + fVar66 * (float)((ulong)uVar69 >> 0x20) * 0.0 +
           fVar66 * fVar59 * (float)((ulong)uVar70 >> 0x20)) -
           fVar64 * (float)((ulong)uVar72 >> 0x20);
  uVar30 = SUB41(fVar48,0);
  uVar31 = (undefined1)((uint)fVar48 >> 8);
  uVar32 = (undefined1)((uint)fVar48 >> 0x10);
  uVar33 = (undefined1)((uint)fVar48 >> 0x18);
  fVar19 = (fVar19 * (float)uVar1 + fVar67 * (float)uVar63 * (float)uVar71 +
           fVar67 * (float)uVar45 * 0.0) - (float)uVar53 * (float)uVar73;
  uVar34 = SUB41(fVar19,0);
  uVar35 = (undefined1)((uint)fVar19 >> 8);
  uVar36 = (undefined1)((uint)fVar19 >> 0x10);
  uVar37 = (undefined1)((uint)fVar19 >> 0x18);
  fVar11 = (fVar20 * fVar11 + fVar68 * fVar64 * (float)((ulong)uVar71 >> 0x20) +
           fVar68 * (float)((ulong)uVar45 >> 0x20) * 0.0) - fVar59 * (float)((ulong)uVar73 >> 0x20);
  uVar38 = SUB41(fVar11,0);
  uVar39 = (undefined1)((uint)fVar11 >> 8);
  uVar40 = (undefined1)((uint)fVar11 >> 0x10);
  uVar41 = (undefined1)((uint)fVar11 >> 0x18);
  auVar54[4] = uVar30;
  auVar54._0_4_ = fVar42;
  auVar54[5] = uVar31;
  auVar54[6] = uVar32;
  auVar54[7] = uVar33;
  auVar54[8] = uVar34;
  auVar54[9] = uVar35;
  auVar54[10] = uVar36;
  auVar54[0xb] = uVar37;
  auVar54[0xc] = uVar38;
  auVar54[0xd] = uVar39;
  auVar54[0xe] = uVar40;
  auVar54[0xf] = uVar41;
  uVar63 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd4f90);
  auVar57[4] = uVar30;
  auVar57._0_4_ = fVar42;
  auVar57[5] = uVar31;
  auVar57[6] = uVar32;
  auVar57[7] = uVar33;
  auVar57[8] = uVar34;
  auVar57[9] = uVar35;
  auVar57[10] = uVar36;
  auVar57[0xb] = uVar37;
  auVar57[0xc] = uVar38;
  auVar57[0xd] = uVar39;
  auVar57[0xe] = uVar40;
  auVar57[0xf] = uVar41;
  uVar71 = a64_TBL(ZEXT816(0),auVar57,DAT_01cd5120);
  fVar20 = (float)((ulong)uVar2 >> 0x20);
  uVar70 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  fVar59 = (float)((ulong)uVar70 >> 0x20);
  auVar3[4] = uVar30;
  auVar3._0_4_ = fVar42;
  auVar3[5] = uVar31;
  auVar3[6] = uVar32;
  auVar3[7] = uVar33;
  auVar3[8] = uVar34;
  auVar3[9] = uVar35;
  auVar3[10] = uVar36;
  auVar3[0xb] = uVar37;
  auVar3[0xc] = uVar38;
  auVar3[0xd] = uVar39;
  auVar3[0xe] = uVar40;
  auVar3[0xf] = uVar41;
  uVar45 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
  auVar4[4] = uVar30;
  auVar4._0_4_ = fVar42;
  auVar4[5] = uVar31;
  auVar4[6] = uVar32;
  auVar4[7] = uVar33;
  auVar4[8] = uVar34;
  auVar4[9] = uVar35;
  auVar4[10] = uVar36;
  auVar4[0xb] = uVar37;
  auVar4[0xc] = uVar38;
  auVar4[0xd] = uVar39;
  auVar4[0xe] = uVar40;
  auVar4[0xf] = uVar41;
  uVar53 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
  auVar5[4] = uVar30;
  auVar5._0_4_ = fVar42;
  auVar5[5] = uVar31;
  auVar5[6] = uVar32;
  auVar5[7] = uVar33;
  auVar5[8] = uVar34;
  auVar5[9] = uVar35;
  auVar5[10] = uVar36;
  auVar5[0xb] = uVar37;
  auVar5[0xc] = uVar38;
  auVar5[0xd] = uVar39;
  auVar5[0xe] = uVar40;
  auVar5[0xf] = uVar41;
  uVar69 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5270);
  auVar6[4] = uVar30;
  auVar6._0_4_ = fVar42;
  auVar6[5] = uVar31;
  auVar6[6] = uVar32;
  auVar6[7] = uVar33;
  auVar6[8] = SUB41(fVar42,0);
  auVar6[9] = (char)((uint)fVar42 >> 8);
  auVar6[10] = (char)((uint)fVar42 >> 0x10);
  auVar6[0xb] = (char)((uint)fVar42 >> 0x18);
  auVar6[0xc] = uVar30;
  auVar6[0xd] = uVar31;
  auVar6[0xe] = uVar32;
  auVar6[0xf] = uVar33;
  uVar1 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50b0);
  fStack_3c = (float)(CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar10 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  CONCAT14(SUB41(fVar10,0) & ~(byte)iVar49,fVar9))))
                     >> 0x20);
  fStack_34 = (float)(CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                               CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar12 >> 8) &
                                                  ~(byte)((uint)iVar52 >> 8),
                                                  CONCAT14(SUB41(fVar12,0) & ~(byte)iVar52,fVar29)))
                              ) >> 0x20);
  fVar42 = ((float)uVar2 * fVar42 + fVar65 * fVar44 * (float)uVar63 +
           fVar65 * (float)uVar70 * (float)uVar45) - (float)uVar24 * (float)uVar53;
  fVar10 = (fVar20 * fVar48 + fVar66 * fVar50 * (float)((ulong)uVar63 >> 0x20) +
           fVar66 * fVar59 * (float)((ulong)uVar45 >> 0x20)) -
           fVar60 * (float)((ulong)uVar53 >> 0x20);
  fVar48 = ((float)uVar2 * fVar19 + fVar67 * (float)uVar24 * (float)uVar71 +
           fVar67 * fVar44 * (float)uVar1) - (float)uVar70 * (float)uVar69;
  fVar11 = (fVar20 * fVar11 + fVar68 * fVar60 * (float)((ulong)uVar71 >> 0x20) +
           fVar68 * fVar50 * (float)((ulong)uVar1 >> 0x20)) -
           fVar59 * (float)((ulong)uVar69 >> 0x20);
  fVar9 = fVar9 * (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18)
                                  ,CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                            (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                            CONCAT11((byte)((uint)fVar42 >> 8) &
                                                     (byte)((ulong)DAT_01d4ab50 >> 8),
                                                     SUB41(fVar42,0) & (byte)DAT_01d4ab50)));
  fStack_3c = fStack_3c *
              (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                              CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                       (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                       CONCAT11((byte)((uint)fVar10 >> 8) &
                                                (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                                SUB41(fVar10,0) &
                                                (byte)((ulong)DAT_01d4ab50 >> 0x20))));
  uVar30 = (undefined1)((uint)fStack_3c >> 8);
  uVar31 = (undefined1)((uint)fStack_3c >> 0x10);
  uVar32 = (undefined1)((uint)fStack_3c >> 0x18);
  fVar29 = fVar29 * (float)CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                    CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                             (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                             CONCAT11((byte)((uint)fVar48 >> 8) &
                                                      (byte)((ulong)DAT_01d4ab58 >> 8),
                                                      SUB41(fVar48,0) & (byte)DAT_01d4ab58)));
  uVar33 = (undefined1)((uint)fVar29 >> 8);
  uVar34 = (undefined1)((uint)fVar29 >> 0x10);
  uVar35 = (undefined1)((uint)fVar29 >> 0x18);
  fStack_34 = fStack_34 *
              (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                              CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                       (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                       CONCAT11((byte)((uint)fVar11 >> 8) &
                                                (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                                SUB41(fVar11,0) &
                                                (byte)((ulong)DAT_01d4ab58 >> 0x20))));
  uVar36 = (undefined1)((uint)fStack_34 >> 8);
  uVar37 = (undefined1)((uint)fStack_34 >> 0x10);
  uVar38 = (undefined1)((uint)fStack_34 >> 0x18);
  auVar7[4] = SUB41(fStack_3c,0);
  auVar7._0_4_ = fVar9;
  auVar7[5] = uVar30;
  auVar7[6] = uVar31;
  auVar7[7] = uVar32;
  auVar7[8] = SUB41(fVar29,0);
  auVar7[9] = uVar33;
  auVar7[10] = uVar34;
  auVar7[0xb] = uVar35;
  auVar7[0xc] = SUB41(fStack_34,0);
  auVar7[0xd] = uVar36;
  auVar7[0xe] = uVar37;
  auVar7[0xf] = uVar38;
  auVar8[4] = SUB41(fStack_3c,0);
  auVar8._0_4_ = fVar9;
  auVar8[5] = uVar30;
  auVar8[6] = uVar31;
  auVar8[7] = uVar32;
  auVar8[8] = SUB41(fVar29,0);
  auVar8[9] = uVar33;
  auVar8[10] = uVar34;
  auVar8[0xb] = uVar35;
  auVar8[0xc] = SUB41(fStack_34,0);
  auVar8[0xd] = uVar36;
  auVar8[0xe] = uVar37;
  auVar8[0xf] = uVar38;
  auVar54 = NEON_ext(auVar7,auVar8,8,1);
  *(bool *)(param_1 + 0x780) = 0.0 < auVar54._0_4_ + fVar9 + auVar54._4_4_ + fStack_3c;
  return;
}


