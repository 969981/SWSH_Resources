/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d68910; name: FUN_00d68910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d68910(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint uVar14;
  uint uVar17;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar18;
  uint uVar19;
  float fVar20;
  undefined1 auVar13 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  float fVar41;
  float fVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar42;
  float fVar44;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar53;
  float fVar61;
  undefined1 auVar54 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar55 [16];
  float fVar68;
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar78;
  float fVar79;
  undefined8 uVar74;
  float fVar80;
  undefined1 auVar75 [16];
  float fVar81;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_50 [16];
  float local_40;
  float local_3c;
  float local_34;
  
  if (param_2 == 1) {
    FUN_00771ef0(auStack_50,param_1);
  }
  else {
    local_3c = 0.0;
    if (param_2 == 0) {
      FUN_00771ef0(auStack_50,param_1);
      local_3c = local_40;
    }
  }
  fVar6 = DAT_01d4c284;
  fVar7 = DAT_01d4bb38;
  fVar9 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar15 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar4 = (local_3c * DAT_01d4bb38) / DAT_01d4c284;
  fVar87 = *(float *)PTR_Float1Divided2Pi_02715148;
  fVar91 = *(float *)PTR_Float2Pi_02715150;
  fVar21 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar33 = *(float *)PTR_FloatPi_02715160;
  fVar5 = -fVar33;
  fVar41 = fVar4 * fVar87;
  fVar22 = -fVar21;
  auVar23._0_4_ =
       (int)(fVar87 * 0.0 + (float)(-(uint)(0.0 <= fVar87 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar23._4_4_ = (int)(fVar41 + (float)(-(uint)(0.0 <= fVar41) & 0x80000000 ^ 0xbf000000));
  auVar23._8_4_ =
       (int)(fVar87 * 0.0 + (float)(-(uint)(0.0 <= fVar87 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar23._12_4_ =
       (int)(fVar87 * 0.0 + (float)(-(uint)(0.0 <= fVar87 * 0.0) & 0x80000000 ^ 0xbf000000));
  fVar50 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  auVar11 = NEON_scvtf(auVar23,4);
  auVar36._0_4_ = 0.0 - auVar11._0_4_ * fVar91;
  auVar36._4_4_ = fVar4 - auVar11._4_4_ * fVar91;
  auVar36._8_4_ = 0.0 - auVar11._8_4_ * fVar91;
  auVar36._12_4_ = 0.0 - auVar11._12_4_ * fVar91;
  auVar11._0_8_ = CONCAT44(-(uint)(fVar21 < auVar36._4_4_),-(uint)(fVar21 < auVar36._0_4_));
  auVar11._8_4_ = -(uint)(fVar21 < auVar36._8_4_);
  auVar11._12_4_ = -(uint)(fVar21 < auVar36._12_4_);
  auVar35._8_8_ = auVar11._8_8_;
  auVar35._0_8_ = auVar11._0_8_;
  auVar24._0_4_ = fVar33 - auVar36._0_4_;
  auVar24._4_4_ = fVar33 - auVar36._4_4_;
  auVar24._8_4_ = fVar33 - auVar36._8_4_;
  auVar24._12_4_ = fVar33 - auVar36._12_4_;
  fVar72 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  auVar36 = auVar36 ^ (auVar36 ^ auVar24) & auVar35;
  auVar25._0_8_ = CONCAT44(-(uint)(auVar36._4_4_ < fVar22),-(uint)(auVar36._0_4_ < fVar22));
  auVar25._8_4_ = -(uint)(auVar36._8_4_ < fVar22);
  auVar25._12_4_ = -(uint)(auVar36._12_4_ < fVar22);
  auVar54._0_4_ = fVar5 - auVar36._0_4_;
  auVar54._4_4_ = fVar5 - auVar36._4_4_;
  auVar54._8_4_ = fVar5 - auVar36._8_4_;
  auVar54._12_4_ = fVar5 - auVar36._12_4_;
  auVar75._8_8_ = auVar25._8_8_;
  auVar75._0_8_ = auVar25._0_8_;
  auVar36 = auVar36 ^ (auVar36 ^ auVar54) & auVar75;
  fVar68 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  fVar90 = *(float *)PTR_SinCoefficients_02715168;
  fVar89 = *(float *)PTR_CosCoefficients_02715170;
  fVar32 = auVar36._0_4_;
  fVar51 = fVar32 * fVar32;
  fVar34 = auVar36._4_4_;
  fVar56 = fVar34 * fVar34;
  fVar42 = auVar36._8_4_;
  fVar61 = fVar42 * fVar42;
  fVar43 = auVar36._12_4_;
  fVar66 = fVar43 * fVar43;
  fVar4 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  fVar82 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  fVar41 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  auVar88 = NEON_fmov(0x3f800000,4);
  fVar10 = auVar88._0_4_;
  fVar16 = auVar88._4_4_;
  fVar18 = auVar88._8_4_;
  fVar20 = auVar88._12_4_;
  auVar70 = NEON_fmov(0xbf800000,4);
  auVar88 = auVar88 ^ (auVar88 ^ auVar70) & auVar11;
  auVar88 = auVar88 ^ (auVar88 ^ auVar70) & auVar25;
  auVar12._0_4_ =
       (fVar10 + fVar51 * (fVar68 + fVar51 * (fVar41 + fVar51 * (fVar50 + fVar51 * (fVar9 - fVar51 *
                                                                                            fVar90))
                                             ))) * fVar32;
  auVar12._4_4_ =
       (fVar16 + fVar56 * (fVar68 + fVar56 * (fVar41 + fVar56 * (fVar50 + fVar56 * (fVar9 - fVar56 *
                                                                                            fVar90))
                                             ))) * fVar34;
  auVar12._8_4_ =
       (fVar18 + fVar61 * (fVar68 + fVar61 * (fVar41 + fVar61 * (fVar50 + fVar61 * (fVar9 - fVar61 *
                                                                                            fVar90))
                                             ))) * fVar42;
  auVar12._12_4_ =
       (fVar20 + fVar66 * (fVar68 + fVar66 * (fVar41 + fVar66 * (fVar50 + fVar66 * (fVar9 - fVar66 *
                                                                                            fVar90))
                                             ))) * fVar43;
  auVar26._0_4_ =
       (fVar10 + fVar51 * (fVar82 + fVar51 * (fVar4 + fVar51 * (fVar72 + fVar51 * (fVar15 - fVar51 *
                                                                                            fVar89))
                                             ))) * auVar88._0_4_;
  auVar26._4_4_ =
       (fVar16 + fVar56 * (fVar82 + fVar56 * (fVar4 + fVar56 * (fVar72 + fVar56 * (fVar15 - fVar56 *
                                                                                            fVar89))
                                             ))) * auVar88._4_4_;
  auVar26._8_4_ =
       (fVar18 + fVar61 * (fVar82 + fVar61 * (fVar4 + fVar61 * (fVar72 + fVar61 * (fVar15 - fVar61 *
                                                                                            fVar89))
                                             ))) * auVar88._8_4_;
  auVar26._12_4_ =
       (fVar20 + fVar66 * (fVar82 + fVar66 * (fVar4 + fVar66 * (fVar72 + fVar66 * (fVar15 - fVar66 *
                                                                                            fVar89))
                                             ))) * auVar88._12_4_;
  auVar88 = NEON_ext(auVar26,auVar26,8,1);
  auVar11 = NEON_ext(auVar12,auVar12,8,1);
  fVar51 = auVar88._0_4_;
  fVar56 = auVar11._0_4_;
  fVar73 = auVar26._4_4_ * fVar51;
  fVar78 = auVar26._4_4_ * fVar56;
  fVar81 = (float)DAT_01cd53f0;
  uVar1 = (ulong)DAT_01cd53f0 >> 0x20;
  fVar80 = fVar81 * auVar12._4_4_;
  fStack_a8 = (float)_UNK_01d4a4a8;
  fStack_a4 = (float)((ulong)_UNK_01d4a4a8 >> 0x20);
  local_b0 = (float)_DAT_01d4a4a0;
  fStack_ac = (float)((ulong)_DAT_01d4a4a0 >> 0x20);
  fVar44 = (float)DAT_01cd5070;
  fVar66 = fVar44 * auVar26._4_4_;
  uVar2 = (ulong)DAT_01cd5070 >> 0x20;
  fVar34 = (float)_DAT_01d4b1c0;
  fVar42 = (float)((ulong)_DAT_01d4b1c0 >> 0x20);
  fVar43 = (float)_UNK_01d4b1c8;
  uVar3 = (ulong)_UNK_01d4b1c8 >> 0x20;
  fVar52 = fVar56 * auVar26._0_4_ * local_b0 + auVar12._4_4_ * fVar51 * auVar12._0_4_;
  fVar57 = fVar51 * auVar26._0_4_ * fStack_ac + auVar12._4_4_ * fVar56 * auVar12._0_4_;
  fVar62 = auVar26._0_4_ * 0.0 * fStack_a8 + fVar66 * auVar12._0_4_;
  fVar61 = fVar56 * auVar12._0_4_ * fVar34 + auVar12._4_4_ * fVar51 * auVar26._0_4_;
  fVar51 = fVar51 * auVar12._0_4_ * fVar42 + auVar12._4_4_ * fVar56 * auVar26._0_4_;
  fVar56 = auVar12._0_4_ * 0.0 * fVar43 + fVar66 * auVar26._0_4_;
  FUN_00771ef0(auStack_50,param_1);
  fVar6 = (local_34 * fVar7) / fVar6;
  fVar7 = fVar6 * fVar87;
  auVar88._0_4_ = (int)(fVar7 + (float)(-(uint)(0.0 <= fVar7) & 0x80000000 ^ 0xbf000000));
  auVar88._4_4_ =
       (int)(fVar87 * 0.0 + (float)(-(uint)(0.0 <= fVar87 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar88._8_4_ =
       (int)(fVar87 * 0.0 + (float)(-(uint)(0.0 <= fVar87 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar88._12_4_ =
       (int)(fVar87 * 0.0 + (float)(-(uint)(0.0 <= fVar87 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar11 = NEON_scvtf(auVar88,4);
  fVar6 = fVar6 - auVar11._0_4_ * fVar91;
  fVar7 = 0.0 - auVar11._4_4_ * fVar91;
  fVar66 = 0.0 - auVar11._8_4_ * fVar91;
  fVar32 = 0.0 - auVar11._12_4_ * fVar91;
  fVar59 = (float)((uint)fVar6 ^ ((uint)fVar6 ^ (uint)(fVar33 - fVar6)) & -(uint)(fVar21 < fVar6));
  fVar60 = (float)((uint)fVar7 ^ ((uint)fVar7 ^ (uint)(fVar33 - fVar7)) & -(uint)(fVar21 < fVar7));
  fVar64 = (float)((uint)fVar66 ^
                  ((uint)fVar66 ^ (uint)(fVar33 - fVar66)) & -(uint)(fVar21 < fVar66));
  fVar65 = (float)((uint)fVar32 ^
                  ((uint)fVar32 ^ (uint)(fVar33 - fVar32)) & -(uint)(fVar21 < fVar32));
  local_1d0 = auVar70._0_4_;
  uStack_1cc = auVar70._4_4_;
  uStack_1c8 = auVar70._8_4_;
  uStack_1c4 = auVar70._12_4_;
  fVar79 = (float)((uint)fVar59 ^ ((uint)fVar59 ^ (uint)(fVar5 - fVar59)) & -(uint)(fVar59 < fVar22)
                  );
  fVar58 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ (uint)(fVar5 - fVar60)) & -(uint)(fVar60 < fVar22)
                  );
  fVar63 = (float)((uint)fVar64 ^ ((uint)fVar64 ^ (uint)(fVar5 - fVar64)) & -(uint)(fVar64 < fVar22)
                  );
  fVar67 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)(fVar5 - fVar65)) & -(uint)(fVar65 < fVar22)
                  );
  fVar5 = fVar79 * fVar79;
  fVar33 = fVar58 * fVar58;
  fVar87 = fVar63 * fVar63;
  fVar91 = fVar67 * fVar67;
  uVar8 = (uint)fVar10 ^ ((uint)fVar10 ^ local_1d0) & -(uint)(fVar21 < fVar6);
  uVar14 = (uint)fVar16 ^ ((uint)fVar16 ^ uStack_1cc) & -(uint)(fVar21 < fVar7);
  uVar17 = (uint)fVar18 ^ ((uint)fVar18 ^ uStack_1c8) & -(uint)(fVar21 < fVar66);
  uVar19 = (uint)fVar20 ^ ((uint)fVar20 ^ uStack_1c4) & -(uint)(fVar21 < fVar32);
  auVar70._0_4_ =
       (fVar10 + fVar5 * (fVar68 + fVar5 * (fVar41 + fVar5 * (fVar50 + fVar5 * (fVar9 - fVar5 * 
                                                  fVar90))))) * fVar79;
  auVar70._4_4_ =
       (fVar16 + fVar33 * (fVar68 + fVar33 * (fVar41 + fVar33 * (fVar50 + fVar33 * (fVar9 - fVar33 *
                                                                                            fVar90))
                                             ))) * fVar58;
  auVar70._8_4_ =
       (fVar18 + fVar87 * (fVar68 + fVar87 * (fVar41 + fVar87 * (fVar50 + fVar87 * (fVar9 - fVar87 *
                                                                                            fVar90))
                                             ))) * fVar63;
  auVar70._12_4_ =
       (fVar20 + fVar91 * (fVar68 + fVar91 * (fVar41 + fVar91 * (fVar50 + fVar91 * (fVar9 - fVar91 *
                                                                                            fVar90))
                                             ))) * fVar67;
  auVar27._0_4_ =
       (fVar10 + fVar5 * (fVar82 + fVar5 * (fVar4 + fVar5 * (fVar72 + fVar5 * (fVar15 - fVar5 * 
                                                  fVar89))))) *
       (float)(uVar8 ^ (uVar8 ^ local_1d0) & -(uint)(fVar59 < fVar22));
  auVar27._4_4_ =
       (fVar16 + fVar33 * (fVar82 + fVar33 * (fVar4 + fVar33 * (fVar72 + fVar33 * (fVar15 - fVar33 *
                                                                                            fVar89))
                                             ))) *
       (float)(uVar14 ^ (uVar14 ^ uStack_1cc) & -(uint)(fVar60 < fVar22));
  auVar27._8_4_ =
       (fVar18 + fVar87 * (fVar82 + fVar87 * (fVar4 + fVar87 * (fVar72 + fVar87 * (fVar15 - fVar87 *
                                                                                            fVar89))
                                             ))) *
       (float)(uVar17 ^ (uVar17 ^ uStack_1c8) & -(uint)(fVar64 < fVar22));
  auVar27._12_4_ =
       (fVar20 + fVar91 * (fVar82 + fVar91 * (fVar4 + fVar91 * (fVar72 + fVar91 * (fVar15 - fVar91 *
                                                                                            fVar89))
                                             ))) *
       (float)(uVar19 ^ (uVar19 ^ uStack_1c4) & -(uint)(fVar65 < fVar22));
  auVar11 = NEON_ext(auVar70,auVar70,8,1);
  auVar88 = NEON_ext(auVar27,auVar27,8,1);
  fVar9 = auVar88._0_4_;
  fVar15 = auVar11._0_4_;
  fVar50 = auVar27._4_4_ * fVar9;
  fVar79 = auVar27._4_4_ * fVar15;
  fVar81 = fVar81 * auVar70._4_4_;
  fVar44 = fVar44 * auVar27._4_4_;
  fVar87 = (float)uVar2 * 0.0;
  fVar91 = fVar15 * auVar27._0_4_ * local_b0 + auVar70._4_4_ * fVar9 * auVar70._0_4_;
  fVar59 = fVar9 * auVar27._0_4_ * fStack_ac + auVar70._4_4_ * fVar15 * auVar70._0_4_;
  fVar64 = auVar27._0_4_ * 0.0 * fStack_a8 + fVar44 * auVar70._0_4_;
  fVar4 = fVar15 * auVar70._0_4_ * fVar34 + auVar70._4_4_ * fVar9 * auVar27._0_4_;
  fVar15 = fVar9 * auVar70._0_4_ * fVar42 + auVar70._4_4_ * fVar15 * auVar27._0_4_;
  fVar7 = auVar70._0_4_ * 0.0 * fVar43 + fVar44 * auVar27._0_4_;
  FUN_00771ef0(auStack_50,param_1);
  fVar9 = (float)_DAT_01d4ae50;
  fVar41 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
  fVar6 = (float)_UNK_01d4ae58;
  fVar66 = (float)_DAT_01d4b580;
  fVar32 = (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar33 = (float)_UNK_01d4b588;
  fVar34 = (float)_DAT_01d49dc0;
  fVar42 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
  fVar43 = (float)_UNK_01d49dc8;
  fVar5 = fVar9 * fVar73 + fVar66 * fVar78 + fVar34 * fVar80;
  fVar21 = fVar41 * fVar73 + fVar32 * fVar78 + fVar42 * fVar80;
  fVar22 = fVar6 * fVar73 + fVar33 * fVar78 + fVar43 * fVar80;
  fVar44 = fVar9 * fVar52 + fVar66 * fVar57 + fVar34 * fVar62;
  fVar60 = fVar41 * fVar52 + fVar32 * fVar57 + fVar42 * fVar62;
  fVar65 = fVar6 * fVar52 + fVar33 * fVar57 + fVar43 * fVar62;
  fVar9 = fVar9 * fVar61 + fVar66 * fVar51 + fVar34 * fVar56;
  fVar41 = fVar41 * fVar61 + fVar32 * fVar51 + fVar42 * fVar56;
  fVar6 = fVar6 * fVar61 + fVar33 * fVar51 + fVar43 * fVar56;
  fVar61 = fVar50 * fVar5 + fVar91 * fVar21 + fVar4 * fVar22;
  auVar37._0_8_ = CONCAT44(fVar79 * fVar5 + fVar59 * fVar21 + fVar15 * fVar22,fVar61);
  auVar37._8_4_ = fVar81 * fVar5 + fVar64 * fVar21 + fVar7 * fVar22;
  auVar37._12_4_ =
       (float)uVar1 * 0.0 * fVar5 +
       (auVar27._0_4_ * 0.0 * fStack_a4 + fVar87 * auVar70._0_4_) * fVar21 +
       (auVar70._0_4_ * 0.0 * (float)uVar3 + fVar87 * auVar27._0_4_) * fVar22;
  fVar51 = fVar50 * fVar44 + fVar91 * fVar60 + fVar4 * fVar65;
  fVar56 = fVar79 * fVar44 + fVar59 * fVar60 + fVar15 * fVar65;
  fVar5 = fVar81 * fVar44 + fVar64 * fVar60 + fVar7 * fVar65;
  fVar15 = fVar79 * fVar9 + fVar59 * fVar41 + fVar15 * fVar6;
  fVar7 = fVar81 * fVar9 + fVar64 * fVar41 + fVar7 * fVar6;
  uVar69 = NEON_ext(auVar37._0_8_,CONCAT44(fVar15,fVar50 * fVar9 + fVar91 * fVar41 + fVar4 * fVar6),
                    4,1);
  fVar10 = (float)_DAT_01d4ab60 * fVar61 + (float)_DAT_01d4b9d0 * fVar56 +
           (float)_DAT_01d4b2f0 * fVar7 + fVar10;
  fVar16 = (float)((ulong)_DAT_01d4ab60 >> 0x20) * fVar61 +
           (float)((ulong)_DAT_01d4b9d0 >> 0x20) * fVar56 +
           (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar7 + fVar16;
  fVar18 = (float)_UNK_01d4ab68 * fVar61 + (float)_UNK_01d4b9d8 * fVar56 +
           (float)_UNK_01d4b2f8 * fVar7 + fVar18;
  fVar20 = (float)((ulong)_UNK_01d4ab68 >> 0x20) * fVar61 +
           (float)((ulong)_UNK_01d4b9d8 >> 0x20) * fVar56 +
           (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar7 + fVar20;
  auVar11 = NEON_ext(auVar37,auVar37,8,1);
  auVar38._0_4_ = (float)uVar69 + fVar51;
  fVar9 = (float)((ulong)uVar69 >> 0x20);
  auVar38._4_4_ = fVar9 + auVar11._0_4_;
  auVar38._8_4_ = fVar5 + fVar15;
  auVar38._12_4_ = 0;
  auVar45._0_4_ = (float)uVar69 - fVar51;
  auVar45._4_4_ = fVar9 - auVar11._0_4_;
  auVar45._8_4_ = fVar5 - fVar15;
  auVar45._12_4_ = 0;
  uVar69 = a64_TBL(ZEXT816(0),auVar38,auVar45,DAT_01cd5420);
  uVar53 = a64_TBL(ZEXT816(0),auVar38,auVar45,DAT_01cd51d0);
  auVar71._8_8_ = uVar53;
  auVar71._0_8_ = uVar69;
  uVar53 = a64_TBL(ZEXT816(0),auVar38,auVar45,DAT_01cd5250);
  auVar84._4_12_ = auVar71._4_12_;
  auVar84._0_4_ = fVar10;
  auVar55._0_8_ = a64_TBL(ZEXT816(0),auVar38,auVar45,DAT_01cd5418);
  uVar74 = a64_TBL(ZEXT816(0),auVar38,auVar45,DAT_01cd50b8);
  auVar28._0_4_ = (undefined4)uVar69;
  auVar28._4_4_ = fVar16;
  auVar28._8_8_ = uVar53;
  auVar76._0_8_ = a64_TBL(ZEXT816(0),auVar38,auVar45,DAT_01cd5190);
  uVar69 = a64_TBL(ZEXT816(0),auVar38,auVar45,DAT_01cd4f98);
  auVar46._4_4_ = fVar16;
  auVar46._0_4_ = fVar16;
  auVar46._8_4_ = fVar16;
  auVar46._12_4_ = fVar16;
  auVar55._12_4_ = (undefined4)((ulong)uVar74 >> 0x20);
  auVar55._8_4_ = fVar18;
  auVar76._8_8_ = uVar69;
  auVar86._4_4_ = fVar10;
  auVar86._0_4_ = fVar10;
  auVar86._8_4_ = fVar10;
  auVar86._12_4_ = fVar10;
  auVar83._0_8_ = CONCAT44(-(uint)(fVar10 <= fVar16),-(uint)(fVar10 <= fVar16));
  auVar83._8_4_ = -(uint)(fVar10 <= fVar16);
  auVar83._12_4_ = -(uint)(fVar10 <= fVar16);
  auVar85._8_8_ = auVar83._8_8_;
  auVar85._0_8_ = auVar83._0_8_;
  auVar84 = auVar84 ^ (auVar84 ^ auVar28) & auVar83;
  auVar29._4_4_ = fVar18;
  auVar29._0_4_ = fVar18;
  auVar29._8_4_ = fVar18;
  auVar29._12_4_ = fVar18;
  auVar77._0_12_ = auVar76._0_12_;
  auVar77._12_4_ = fVar20;
  auVar86 = auVar86 ^ (auVar86 ^ auVar46) & auVar85;
  auVar39._0_8_ = CONCAT44(-(uint)(auVar86._4_4_ <= fVar18),-(uint)(auVar86._0_4_ <= fVar18));
  auVar39._8_4_ = -(uint)(auVar86._8_4_ <= fVar18);
  auVar39._12_4_ = -(uint)(auVar86._12_4_ <= fVar18);
  auVar47._8_8_ = auVar39._8_8_;
  auVar47._0_8_ = auVar39._0_8_;
  auVar84 = auVar84 ^ (auVar84 ^ auVar55) & auVar39;
  auVar86 = auVar86 ^ (auVar86 ^ auVar29) & auVar47;
  auVar13._0_4_ = -(uint)(auVar86._0_4_ <= fVar20);
  auVar13._4_4_ = -(uint)(auVar86._4_4_ <= fVar20);
  auVar13._8_4_ = -(uint)(auVar86._8_4_ <= fVar20);
  auVar13._12_4_ = -(uint)(auVar86._12_4_ <= fVar20);
  auVar84 = auVar84 ^ (auVar84 ^ auVar77) & auVar13;
  auVar30._0_4_ = auVar84._0_4_ * auVar84._0_4_;
  auVar30._4_4_ = auVar84._4_4_ * auVar84._4_4_;
  auVar30._8_4_ = auVar84._8_4_ * auVar84._8_4_;
  auVar30._12_4_ = auVar84._12_4_ * auVar84._12_4_;
  auVar11 = NEON_ext(auVar30,auVar30,8,1);
  fVar15 = auVar11._0_4_ + auVar30._0_4_;
  fVar4 = auVar11._4_4_ + auVar30._4_4_;
  fVar9 = fVar15 + fVar4;
  fVar15 = fVar15 + fVar4;
  auVar31._8_8_ = CONCAT44(fVar15,fVar9);
  auVar31._0_8_ = CONCAT44(fVar15,fVar9);
  auVar11 = NEON_frsqrte(auVar31,4);
  auVar48._0_4_ = auVar11._0_4_ * fVar9;
  auVar48._4_4_ = auVar11._4_4_ * fVar15;
  auVar48._8_4_ = auVar11._8_4_ * fVar9;
  auVar48._12_4_ = auVar11._12_4_ * fVar15;
  auVar88 = NEON_frsqrts(auVar11,auVar48,4);
  auVar40._0_4_ = auVar11._0_4_ * auVar88._0_4_;
  auVar40._4_4_ = auVar11._4_4_ * auVar88._4_4_;
  auVar40._8_4_ = auVar11._8_4_ * auVar88._8_4_;
  auVar40._12_4_ = auVar11._12_4_ * auVar88._12_4_;
  auVar49._0_4_ = fVar9 * auVar40._0_4_;
  auVar49._4_4_ = fVar15 * auVar40._4_4_;
  auVar49._8_4_ = fVar9 * auVar40._8_4_;
  auVar49._12_4_ = fVar15 * auVar40._12_4_;
  NEON_frsqrts(auVar40,auVar49,4);
  return;
}


