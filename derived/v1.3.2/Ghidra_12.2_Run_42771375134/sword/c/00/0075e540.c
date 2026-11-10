/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075e540; name: FUN_0075e540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075e540(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar20;
  undefined1 auVar16 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined8 uVar25;
  float fVar29;
  undefined1 auVar26 [16];
  float fVar28;
  float fVar30;
  undefined1 auVar27 [16];
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  
  auVar14 = *param_1;
  uVar5 = *(undefined8 *)(param_1[1] + 8);
  uVar12 = *(undefined8 *)param_1[1];
  auVar7._4_12_ = auVar14._4_12_;
  auVar7._0_4_ = DAT_01d4c1d0;
  auVar13._0_4_ = -(uint)(ABS(auVar14._0_4_) < DAT_01d4c1d0);
  auVar13._4_4_ = auVar13._0_4_;
  auVar13._8_4_ = auVar13._0_4_;
  auVar13._12_4_ = auVar13._0_4_;
  auVar14 = auVar14 ^ (auVar14 ^ auVar7) & auVar13;
  auVar22._0_4_ = auVar14._0_4_;
  auVar22._4_4_ = DAT_01d4c1d0;
  auVar22._8_8_ = auVar14._8_8_;
  iVar4 = -(uint)(ABS(auVar14._4_4_) < DAT_01d4c1d0);
  auVar26._4_4_ = iVar4;
  auVar26._0_4_ = iVar4;
  auVar26._8_4_ = iVar4;
  auVar26._12_4_ = iVar4;
  auVar15._8_8_ = _UNK_01d4a778;
  auVar15._0_8_ = _DAT_01d4a770;
  auVar14 = NEON_ext(auVar15,auVar14 ^ (auVar14 ^ auVar22) & auVar26,8,1);
  NEON_ext(auVar14,auVar14,8,1);
  fVar11 = (float)CONCAT13((byte)((ulong)uVar12 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                           CONCAT12((byte)((ulong)uVar12 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                    CONCAT11((byte)((ulong)uVar12 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 8),
                                             (byte)uVar12 & (byte)DAT_01d4ab50)));
  auVar6._0_8_ = CONCAT17((byte)((ulong)uVar12 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                          CONCAT16((byte)((ulong)uVar12 >> 0x30) &
                                   (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar12 >> 0x28) &
                                            (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar12 >> 0x20) &
                                                     (byte)((ulong)DAT_01d4ab50 >> 0x20),fVar11))));
  auVar6[8] = (byte)uVar5 & (byte)DAT_01d4ab58;
  auVar6[9] = (byte)((ulong)uVar5 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar6[10] = (byte)((ulong)uVar5 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar6[0xb] = (byte)((ulong)uVar5 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar8[0xc] = (byte)((ulong)uVar5 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar8._0_12_ = auVar6;
  auVar8[0xd] = (byte)((ulong)uVar5 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar8[0xe] = (byte)((ulong)uVar5 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar8[0xf] = (byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  uVar12 = NEON_ext(auVar6._0_8_,auVar6._0_8_,4,1);
  uVar21 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5188);
  uVar25 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5048);
  uVar31 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5158);
  fVar10 = (float)uVar12 * (float)uVar12;
  fVar17 = (float)((ulong)uVar12 >> 0x20);
  fVar17 = fVar17 * fVar17;
  fVar19 = (float)uVar21;
  fVar20 = (float)((ulong)uVar21 >> 0x20);
  fVar24 = (float)uVar25 * (float)uVar25;
  fVar28 = (float)((ulong)uVar25 >> 0x20);
  fVar28 = fVar28 * fVar28;
  fVar29 = (float)uVar31;
  fVar30 = (float)((ulong)uVar31 >> 0x20);
  fVar32 = (float)_DAT_01d4a130 - (fVar24 + fVar24 + fVar10 + fVar10);
  fVar33 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar28 + fVar28 + fVar17 + fVar17);
  fVar34 = (float)_UNK_01d4a138 -
           (fVar29 * fVar29 + fVar29 * fVar29 + fVar19 * fVar19 + fVar19 * fVar19);
  fVar35 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
           (fVar30 * fVar30 + fVar30 * fVar30 + fVar20 * fVar20 + fVar20 * fVar20);
  uVar12 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
  fVar11 = (float)uVar12 * fVar11;
  fVar18 = (float)((ulong)uVar12 >> 0x20) * (float)((ulong)auVar6._0_8_ >> 0x20);
  fVar19 = fVar19 * auVar6._8_4_;
  fVar20 = fVar20 * auVar8._12_4_;
  uVar12 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
  fVar11 = fVar11 + fVar11;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  fVar28 = (float)((ulong)uVar5 >> 0x20);
  fVar10 = (float)uVar12 * fVar28;
  fVar17 = (float)((ulong)uVar12 >> 0x20) * fVar28;
  fVar10 = fVar10 + fVar10;
  fVar17 = fVar17 + fVar17;
  fVar24 = fVar29 * fVar28 + fVar29 * fVar28;
  fVar28 = fVar30 * fVar28 + fVar30 * fVar28;
  auVar23._0_4_ = fVar11 + fVar10;
  auVar23._4_4_ = fVar18 + fVar17;
  auVar23._8_4_ = fVar19 + fVar24;
  auVar23._12_4_ = fVar20 + fVar28;
  auVar27._0_4_ = fVar11 - fVar10;
  auVar27._4_4_ = fVar18 - fVar17;
  auVar27._8_4_ = fVar19 - fVar24;
  auVar27._12_4_ = fVar20 - fVar28;
  uVar12 = a64_TBL(ZEXT816(0),auVar23,auVar27,DAT_01cd5250);
  uVar5 = a64_TBL(ZEXT816(0),auVar23,auVar27,DAT_01cd51f8);
  uVar36 = (undefined1)((ulong)uVar5 >> 8);
  uVar37 = (undefined1)((ulong)uVar5 >> 0x10);
  uVar38 = (undefined1)((ulong)uVar5 >> 0x18);
  uVar39 = (undefined1)((ulong)uVar5 >> 0x20);
  uVar40 = (undefined1)((ulong)uVar5 >> 0x28);
  uVar41 = (undefined1)((ulong)uVar5 >> 0x30);
  uVar42 = (undefined1)((ulong)uVar5 >> 0x38);
  auVar16._0_8_ = a64_TBL(ZEXT816(0),auVar23,auVar27,DAT_01cd5430);
  uVar21 = a64_TBL(ZEXT816(0),auVar23,auVar27,DAT_01cd5050);
  auVar16._8_8_ = uVar21;
  auVar9._12_4_ = fVar35;
  auVar9._8_4_ = fVar34;
  auVar9._4_4_ = fVar33;
  auVar9._0_4_ = fVar32;
  a64_TBL(ZEXT816(0),auVar9,auVar16,DAT_01cd50b8);
  a64_TBL(ZEXT816(0),auVar9,auVar16,DAT_01cd5308);
  a64_TBL(ZEXT816(0),auVar9,auVar16,DAT_01cd5008);
  a64_TBL(ZEXT816(0),auVar9,auVar16,DAT_01cd4fb0);
  auVar14._4_4_ = fVar33;
  auVar14._0_4_ = fVar32;
  auVar14._8_4_ = fVar34;
  auVar14._12_4_ = fVar35;
  auVar2[8] = (char)uVar5;
  auVar2._0_8_ = uVar12;
  auVar2[9] = uVar36;
  auVar2[10] = uVar37;
  auVar2[0xb] = uVar38;
  auVar2[0xc] = uVar39;
  auVar2[0xd] = uVar40;
  auVar2[0xe] = uVar41;
  auVar2[0xf] = uVar42;
  a64_TBL(ZEXT816(0),auVar14,auVar2,DAT_01cd50d8);
  auVar1._4_4_ = fVar33;
  auVar1._0_4_ = fVar32;
  auVar1._8_4_ = fVar34;
  auVar1._12_4_ = fVar35;
  auVar3[8] = (char)uVar5;
  auVar3._0_8_ = uVar12;
  auVar3[9] = uVar36;
  auVar3[10] = uVar37;
  auVar3[0xb] = uVar38;
  auVar3[0xc] = uVar39;
  auVar3[0xd] = uVar40;
  auVar3[0xe] = uVar41;
  auVar3[0xf] = uVar42;
  a64_TBL(ZEXT816(0),auVar1,auVar3,DAT_01cd4fb8);
  return;
}


