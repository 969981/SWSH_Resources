/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01050d70; name: FUN_01050d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01050d70(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  undefined8 extraout_d0;
  undefined1 auVar15 [12];
  float fVar17;
  float fVar18;
  undefined8 extraout_var;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  
  *(undefined8 *)(param_1 + 0x138) = param_2[1];
  *(undefined8 *)(param_1 + 0x130) = *param_2;
  *(undefined8 *)(param_1 + 0x148) = param_3[1];
  *(undefined8 *)(param_1 + 0x140) = *param_3;
  FUN_00a92cd0();
  *(undefined8 *)(param_1 + 0x158) = extraout_var;
  *(undefined8 *)(param_1 + 0x150) = extraout_d0;
  fVar13 = *(float *)PTR_Float1Divided2Pi_02715148;
  fVar14 = *(float *)(param_1 + 0x140) * fVar13;
  fVar17 = *(float *)(param_1 + 0x144) * fVar13;
  fVar18 = *(float *)(param_1 + 0x148) * fVar13;
  fVar13 = *(float *)(param_1 + 0x14c) * fVar13;
  fVar21 = *(float *)PTR_Float2Pi_02715150;
  auVar24._0_4_ = (int)(fVar14 + (float)(-(uint)(0.0 <= fVar14) & 0x80000000 ^ 0xbf000000));
  auVar24._4_4_ = (int)(fVar17 + (float)(-(uint)(0.0 <= fVar17) & 0x80000000 ^ 0xbf000000));
  auVar24._8_4_ = (int)(fVar18 + (float)(-(uint)(0.0 <= fVar18) & 0x80000000 ^ 0xbf000000));
  auVar24._12_4_ = (int)(fVar13 + (float)(-(uint)(0.0 <= fVar13) & 0x80000000 ^ 0xbf000000));
  auVar16 = NEON_scvtf(auVar24,4);
  fVar14 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar13 = *(float *)PTR_FloatPi_02715160;
  *(undefined8 *)(param_1 + 0x168) = param_4[1];
  *(undefined8 *)(param_1 + 0x160) = *param_4;
  auVar41._0_4_ = *(float *)(param_1 + 0x140) - auVar16._0_4_ * fVar21;
  auVar41._4_4_ = *(float *)(param_1 + 0x144) - auVar16._4_4_ * fVar21;
  auVar41._8_4_ = *(float *)(param_1 + 0x148) - auVar16._8_4_ * fVar21;
  auVar41._12_4_ = *(float *)(param_1 + 0x14c) - auVar16._12_4_ * fVar21;
  auVar31._0_8_ = CONCAT44(-(uint)(fVar14 < auVar41._4_4_),-(uint)(fVar14 < auVar41._0_4_));
  auVar31._8_4_ = -(uint)(fVar14 < auVar41._8_4_);
  auVar31._12_4_ = -(uint)(fVar14 < auVar41._12_4_);
  auVar40._8_8_ = auVar31._8_8_;
  auVar40._0_8_ = auVar31._0_8_;
  auVar32._0_4_ = fVar13 - auVar41._0_4_;
  auVar32._4_4_ = fVar13 - auVar41._4_4_;
  auVar32._8_4_ = fVar13 - auVar41._8_4_;
  auVar32._12_4_ = fVar13 - auVar41._12_4_;
  fVar14 = -fVar14;
  auVar41 = auVar41 ^ (auVar41 ^ auVar32) & auVar40;
  fVar13 = -fVar13;
  auVar16 = NEON_fmov(0xbf800000,4);
  auVar27._0_8_ = CONCAT44(-(uint)(auVar41._4_4_ < fVar14),-(uint)(auVar41._0_4_ < fVar14));
  auVar27._8_4_ = -(uint)(auVar41._8_4_ < fVar14);
  auVar27._12_4_ = -(uint)(auVar41._12_4_ < fVar14);
  auVar24 = NEON_fmov(0x3f800000,4);
  bVar1 = *(byte *)(param_1 + 0x130);
  bVar2 = *(byte *)(param_1 + 0x131);
  bVar3 = *(byte *)(param_1 + 0x132);
  bVar4 = *(byte *)(param_1 + 0x133);
  bVar5 = *(byte *)(param_1 + 0x134);
  bVar6 = *(byte *)(param_1 + 0x135);
  bVar7 = *(byte *)(param_1 + 0x136);
  bVar8 = *(byte *)(param_1 + 0x137);
  bVar9 = *(byte *)(param_1 + 0x138);
  bVar10 = *(byte *)(param_1 + 0x139);
  bVar11 = *(byte *)(param_1 + 0x13a);
  bVar12 = *(byte *)(param_1 + 0x13b);
  fVar14 = fVar13 - auVar41._4_4_;
  fVar17 = fVar13 - auVar41._8_4_;
  fVar18 = fVar13 - auVar41._12_4_;
  auVar32 = auVar24 ^ (auVar24 ^ auVar16) & auVar31;
  auVar45._8_8_ = auVar27._8_8_;
  auVar45._0_8_ = auVar27._0_8_;
  auVar32 = auVar32 ^ (auVar32 ^ auVar16) & auVar27;
  auVar16[4] = SUB41(fVar14,0);
  auVar16._0_4_ = fVar13 - auVar41._0_4_;
  auVar16[5] = (char)((uint)fVar14 >> 8);
  auVar16[6] = (char)((uint)fVar14 >> 0x10);
  auVar16[7] = (char)((uint)fVar14 >> 0x18);
  auVar16[8] = SUB41(fVar17,0);
  auVar16[9] = (char)((uint)fVar17 >> 8);
  auVar16[10] = (char)((uint)fVar17 >> 0x10);
  auVar16[0xb] = (char)((uint)fVar17 >> 0x18);
  auVar16[0xc] = SUB41(fVar18,0);
  auVar16[0xd] = (char)((uint)fVar18 >> 8);
  auVar16[0xe] = (char)((uint)fVar18 >> 0x10);
  auVar16[0xf] = (char)((uint)fVar18 >> 0x18);
  auVar41 = auVar41 ^ (auVar41 ^ auVar16) & auVar45;
  fVar17 = *(float *)PTR_SinCoefficients_02715168;
  fVar13 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar20 = auVar41._0_4_;
  fVar29 = fVar20 * fVar20;
  fVar22 = auVar41._4_4_;
  fVar33 = fVar22 * fVar22;
  fVar25 = auVar41._8_4_;
  fVar35 = fVar25 * fVar25;
  fVar26 = auVar41._12_4_;
  fVar37 = fVar26 * fVar26;
  fVar18 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar14 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar38 = *(float *)PTR_CosCoefficients_02715170;
  fVar21 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  auVar19._0_4_ =
       (auVar24._0_4_ +
       fVar29 * (fVar21 + fVar29 * (fVar14 + fVar29 * (fVar18 + fVar29 * (fVar13 - fVar29 * fVar17))
                                   ))) * fVar20;
  auVar19._4_4_ =
       (auVar24._4_4_ +
       fVar33 * (fVar21 + fVar33 * (fVar14 + fVar33 * (fVar18 + fVar33 * (fVar13 - fVar33 * fVar17))
                                   ))) * fVar22;
  auVar19._8_4_ =
       (auVar24._8_4_ +
       fVar35 * (fVar21 + fVar35 * (fVar14 + fVar35 * (fVar18 + fVar35 * (fVar13 - fVar35 * fVar17))
                                   ))) * fVar25;
  auVar19._12_4_ =
       (auVar24._12_4_ +
       fVar37 * (fVar21 + fVar37 * (fVar14 + fVar37 * (fVar18 + fVar37 * (fVar13 - fVar37 * fVar17))
                                   ))) * fVar26;
  fVar13 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar14 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  fVar17 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  fVar18 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  auVar28._0_4_ =
       (auVar24._0_4_ +
       fVar29 * (fVar18 + fVar29 * (fVar14 + fVar29 * (fVar17 + fVar29 * (fVar13 - fVar29 * fVar38))
                                   ))) * auVar32._0_4_;
  auVar28._4_4_ =
       (auVar24._4_4_ +
       fVar33 * (fVar18 + fVar33 * (fVar14 + fVar33 * (fVar17 + fVar33 * (fVar13 - fVar33 * fVar38))
                                   ))) * auVar32._4_4_;
  auVar28._8_4_ =
       (auVar24._8_4_ +
       fVar35 * (fVar18 + fVar35 * (fVar14 + fVar35 * (fVar17 + fVar35 * (fVar13 - fVar35 * fVar38))
                                   ))) * auVar32._8_4_;
  auVar28._12_4_ =
       (auVar24._12_4_ +
       fVar37 * (fVar18 + fVar37 * (fVar14 + fVar37 * (fVar17 + fVar37 * (fVar13 - fVar37 * fVar38))
                                   ))) * auVar32._12_4_;
  fVar38 = (float)CONCAT13(bVar4 & (byte)((ulong)DAT_01d4a580 >> 0x18),
                           CONCAT12(bVar3 & (byte)((ulong)DAT_01d4a580 >> 0x10),
                                    CONCAT11(bVar2 & (byte)((ulong)DAT_01d4a580 >> 8),
                                             bVar1 & (byte)DAT_01d4a580)));
  auVar23._0_8_ =
       CONCAT17(bVar8 & (byte)((ulong)DAT_01d4a580 >> 0x38),
                CONCAT16(bVar7 & (byte)((ulong)DAT_01d4a580 >> 0x30),
                         CONCAT15(bVar6 & (byte)((ulong)DAT_01d4a580 >> 0x28),
                                  CONCAT14(bVar5 & (byte)((ulong)DAT_01d4a580 >> 0x20),fVar38))));
  auVar23[8] = bVar9 & (byte)DAT_01d4a588;
  auVar23[9] = bVar10 & (byte)((ulong)DAT_01d4a588 >> 8);
  auVar23[10] = bVar11 & (byte)((ulong)DAT_01d4a588 >> 0x10);
  auVar23[0xb] = bVar12 & (byte)((ulong)DAT_01d4a588 >> 0x18);
  auVar24 = NEON_ext(auVar28,auVar28,8,1);
  auVar16 = NEON_ext(auVar19,auVar19,8,1);
  fVar18 = auVar24._0_4_;
  fVar21 = auVar16._0_4_;
  fVar13 = auVar28._4_4_ * fVar18;
  fVar14 = auVar28._4_4_ * fVar21;
  fVar17 = (float)DAT_01cd53f0 * auVar19._4_4_;
  fVar26 = (float)CONCAT13(bVar4 & (byte)((ulong)_DAT_01d4b400 >> 0x18),
                           CONCAT12(bVar3 & (byte)((ulong)_DAT_01d4b400 >> 0x10),
                                    CONCAT11(bVar2 & (byte)((ulong)_DAT_01d4b400 >> 8),
                                             bVar1 & (byte)_DAT_01d4b400)));
  fVar39 = (float)CONCAT13(bVar12 & (byte)((ulong)_UNK_01d4b408 >> 0x18),
                           CONCAT12(bVar11 & (byte)((ulong)_UNK_01d4b408 >> 0x10),
                                    CONCAT11(bVar10 & (byte)((ulong)_UNK_01d4b408 >> 8),
                                             bVar9 & (byte)_UNK_01d4b408)));
  fVar29 = (float)CONCAT13(bVar4 & (byte)((ulong)_DAT_01d4b1e0 >> 0x18),
                           CONCAT12(bVar3 & (byte)((ulong)_DAT_01d4b1e0 >> 0x10),
                                    CONCAT11(bVar2 & (byte)((ulong)_DAT_01d4b1e0 >> 8),
                                             bVar1 & (byte)_DAT_01d4b1e0)));
  auVar15._0_8_ =
       CONCAT17(bVar8 & (byte)((ulong)_DAT_01d4b1e0 >> 0x38),
                CONCAT16(bVar7 & (byte)((ulong)_DAT_01d4b1e0 >> 0x30),
                         CONCAT15(bVar6 & (byte)((ulong)_DAT_01d4b1e0 >> 0x28),
                                  CONCAT14(bVar5 & (byte)((ulong)_DAT_01d4b1e0 >> 0x20),fVar29))));
  auVar15[8] = bVar9 & (byte)_UNK_01d4b1e8;
  auVar15[9] = bVar10 & (byte)((ulong)_UNK_01d4b1e8 >> 8);
  auVar15[10] = bVar11 & (byte)((ulong)_UNK_01d4b1e8 >> 0x10);
  auVar15[0xb] = bVar12 & (byte)((ulong)_UNK_01d4b1e8 >> 0x18);
  fVar37 = (float)DAT_01cd5070 * auVar28._4_4_;
  fVar44 = fVar21 * auVar28._0_4_ * (float)_DAT_01d4a4a0 + auVar19._4_4_ * fVar18 * auVar19._0_4_;
  fVar46 = fVar18 * auVar28._0_4_ * (float)((ulong)_DAT_01d4a4a0 >> 0x20) +
           auVar19._4_4_ * fVar21 * auVar19._0_4_;
  fVar47 = auVar28._0_4_ * 0.0 * (float)_UNK_01d4a4a8 + fVar37 * auVar19._0_4_;
  fVar33 = (float)((ulong)auVar15._0_8_ >> 0x20);
  fVar20 = (float)((ulong)auVar23._0_8_ >> 0x20);
  fVar35 = fVar21 * auVar19._0_4_ * (float)_DAT_01d4b1c0 + auVar19._4_4_ * fVar18 * auVar28._0_4_;
  fVar21 = fVar18 * auVar19._0_4_ * (float)((ulong)_DAT_01d4b1c0 >> 0x20) +
           auVar19._4_4_ * fVar21 * auVar28._0_4_;
  fVar37 = auVar19._0_4_ * 0.0 * (float)_UNK_01d4b1c8 + fVar37 * auVar28._0_4_;
  fVar18 = auVar23._8_4_;
  fVar30 = fVar13 * fVar38 + fVar44 * fVar20 + fVar35 * fVar18;
  fVar34 = fVar14 * fVar38 + fVar46 * fVar20 + fVar21 * fVar18;
  fVar36 = fVar17 * fVar38 + fVar47 * fVar20 + fVar37 * fVar18;
  fVar18 = (float)(CONCAT17(bVar8 & (byte)((ulong)_DAT_01d4b400 >> 0x38),
                            CONCAT16(bVar7 & (byte)((ulong)_DAT_01d4b400 >> 0x30),
                                     CONCAT15(bVar6 & (byte)((ulong)_DAT_01d4b400 >> 0x28),
                                              CONCAT14(bVar5 & (byte)((ulong)_DAT_01d4b400 >> 0x20),
                                                       fVar26)))) >> 0x20);
  fVar22 = fVar13 * fVar26 + fVar44 * fVar18 + fVar35 * fVar39;
  fVar25 = fVar14 * fVar26 + fVar46 * fVar18 + fVar21 * fVar39;
  fVar26 = fVar17 * fVar26 + fVar47 * fVar18 + fVar37 * fVar39;
  fVar18 = auVar15._8_4_;
  fVar39 = fVar13 * fVar29 + fVar44 * fVar33 + fVar35 * fVar18;
  fVar42 = fVar14 * fVar29 + fVar46 * fVar33 + fVar21 * fVar18;
  fVar43 = fVar17 * fVar29 + fVar47 * fVar33 + fVar37 * fVar18;
  fVar13 = fVar13 * 0.0 + fVar44 * 0.0 + fVar35 * 0.0 + 0.0;
  fVar14 = fVar14 * 0.0 + fVar46 * 0.0 + fVar21 * 0.0 + 0.0;
  fVar17 = fVar17 * 0.0 + fVar47 * 0.0 + fVar37 * 0.0 + 0.0;
  fVar44 = (float)_DAT_01d4ae50;
  fVar46 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
  fVar47 = (float)_UNK_01d4ae58;
  fVar48 = (float)((ulong)_UNK_01d4ae58 >> 0x20);
  fVar18 = (float)_DAT_01d4b580;
  fVar21 = (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar29 = (float)_UNK_01d4b588;
  fVar33 = (float)((ulong)_UNK_01d4b588 >> 0x20);
  fVar35 = (float)_DAT_01d49dc0;
  fVar37 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
  fVar38 = (float)_UNK_01d49dc8;
  fVar20 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
  *(ulong *)(param_1 + 0x178) =
       CONCAT44(fVar48 * fVar30 + fVar33 * fVar34 + fVar20 * fVar36,
                fVar47 * fVar30 + fVar29 * fVar34 + fVar38 * fVar36);
  *(ulong *)(param_1 + 0x170) =
       CONCAT44(fVar46 * fVar30 + fVar21 * fVar34 + fVar37 * fVar36,
                fVar44 * fVar30 + fVar18 * fVar34 + fVar35 * fVar36);
  *(float *)(param_1 + 0x188) = fVar47 * fVar22 + fVar29 * fVar25 + fVar38 * fVar26;
  *(float *)(param_1 + 0x18c) = fVar48 * fVar22 + fVar33 * fVar25 + fVar20 * fVar26;
  *(float *)(param_1 + 0x180) = fVar44 * fVar22 + fVar18 * fVar25 + fVar35 * fVar26;
  *(float *)(param_1 + 0x184) = fVar46 * fVar22 + fVar21 * fVar25 + fVar37 * fVar26;
  *(ulong *)(param_1 + 0x198) =
       CONCAT44(fVar48 * fVar39 + fVar33 * fVar42 + fVar20 * fVar43,
                fVar47 * fVar39 + fVar29 * fVar42 + fVar38 * fVar43);
  *(ulong *)(param_1 + 400) =
       CONCAT44(fVar46 * fVar39 + fVar21 * fVar42 + fVar37 * fVar43,
                fVar44 * fVar39 + fVar18 * fVar42 + fVar35 * fVar43);
  *(float *)(param_1 + 0x1a8) =
       *(float *)(param_1 + 0x168) + fVar47 * fVar13 + fVar29 * fVar14 + fVar38 * fVar17;
  *(float *)(param_1 + 0x1ac) =
       *(float *)(param_1 + 0x16c) + fVar48 * fVar13 + fVar33 * fVar14 + fVar20 * fVar17;
  *(float *)(param_1 + 0x1a0) =
       *(float *)(param_1 + 0x160) + fVar44 * fVar13 + fVar18 * fVar14 + fVar35 * fVar17;
  *(float *)(param_1 + 0x1a4) =
       *(float *)(param_1 + 0x164) + fVar46 * fVar13 + fVar21 * fVar14 + fVar37 * fVar17;
  return;
}


