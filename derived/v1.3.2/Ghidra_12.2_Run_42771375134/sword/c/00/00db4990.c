/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db4990; name: FUN_00db4990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db4990(long param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar67;
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  undefined1 auVar66 [16];
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x80) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_00db4a20;
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_02715290 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715290), iVar2 != 0)) {
      uVar4 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715298 = uVar4;
      __cxa_guard_release(PTR_DAT_02715290);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02715298) {
        puVar5 = puVar5 + -10;
        goto LAB_00db4a20;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00db4a20:
  fVar11 = (float)((ulong)*param_4 >> 0x20);
  fVar6 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar14 = (float)*param_4;
  fVar8 = *(float *)PTR_Float1Divided2Pi_02715148;
  fVar7 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar48 = *(float *)PTR_Float2Pi_02715150;
  fVar53 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar18 = fVar11 * fVar8;
  fVar55 = *(float *)PTR_FloatPi_02715160;
  fVar30 = (float)param_4[1] * fVar8;
  fVar46 = fVar14 * fVar8;
  auVar17 = NEON_fmov(0xbf800000,4);
  auVar34._0_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar34._4_4_ = (int)(fVar18 + (float)(-(uint)(0.0 <= fVar18) & 0x80000000 ^ 0xbf000000));
  auVar34._8_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar34._12_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  fVar32 = *(float *)PTR_SinCoefficients_02715168;
  fVar59 = *(float *)PTR_CosCoefficients_02715170;
  auVar35 = NEON_scvtf(auVar34,4);
  auVar73._0_4_ = 0.0 - auVar35._0_4_ * fVar48;
  auVar73._4_4_ = fVar11 - auVar35._4_4_ * fVar48;
  auVar73._8_4_ = 0.0 - auVar35._8_4_ * fVar48;
  auVar73._12_4_ = 0.0 - auVar35._12_4_ * fVar48;
  auVar24._0_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar24._4_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar24._8_4_ = (int)(fVar30 + (float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000));
  auVar24._12_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  fVar41 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  auVar43._0_4_ = (int)(fVar46 + (float)(-(uint)(0.0 <= fVar46) & 0x80000000 ^ 0xbf000000));
  auVar43._4_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar43._8_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar43._12_4_ =
       (int)(fVar8 * 0.0 + (float)(-(uint)(0.0 <= fVar8 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar35 = NEON_scvtf(auVar24,4);
  auVar62._0_4_ = 0.0 - auVar35._0_4_ * fVar48;
  auVar62._4_4_ = 0.0 - auVar35._4_4_ * fVar48;
  auVar62._8_4_ = (float)param_4[1] - auVar35._8_4_ * fVar48;
  auVar62._12_4_ = 0.0 - auVar35._12_4_ * fVar48;
  auVar35 = NEON_scvtf(auVar43,4);
  auVar65._0_4_ = fVar14 - auVar35._0_4_ * fVar48;
  auVar65._4_4_ = 0.0 - auVar35._4_4_ * fVar48;
  auVar65._8_4_ = 0.0 - auVar35._8_4_ * fVar48;
  auVar65._12_4_ = 0.0 - auVar35._12_4_ * fVar48;
  auVar36._0_4_ = -(uint)(fVar53 < auVar73._0_4_);
  auVar36._4_4_ = -(uint)(fVar53 < auVar73._4_4_);
  auVar36._8_4_ = -(uint)(fVar53 < auVar73._8_4_);
  auVar36._12_4_ = -(uint)(fVar53 < auVar73._12_4_);
  fVar8 = -fVar55;
  auVar71._0_4_ = fVar55 - auVar73._0_4_;
  auVar71._4_4_ = fVar55 - auVar73._4_4_;
  auVar71._8_4_ = fVar55 - auVar73._8_4_;
  auVar71._12_4_ = fVar55 - auVar73._12_4_;
  auVar25._0_8_ = CONCAT44(-(uint)(fVar53 < auVar62._4_4_),-(uint)(fVar53 < auVar62._0_4_));
  auVar25._8_4_ = -(uint)(fVar53 < auVar62._8_4_);
  auVar25._12_4_ = -(uint)(fVar53 < auVar62._12_4_);
  auVar73 = auVar73 ^ (auVar73 ^ auVar71) & auVar36;
  fVar14 = -fVar53;
  auVar44._0_8_ = CONCAT44(-(uint)(fVar53 < auVar65._4_4_),-(uint)(fVar53 < auVar65._0_4_));
  auVar44._8_4_ = -(uint)(fVar53 < auVar65._8_4_);
  auVar44._12_4_ = -(uint)(fVar53 < auVar65._12_4_);
  auVar61._8_8_ = auVar25._8_8_;
  auVar61._0_8_ = auVar25._0_8_;
  auVar64._8_8_ = auVar44._8_8_;
  auVar64._0_8_ = auVar44._0_8_;
  auVar27._4_4_ = fVar55 - auVar62._4_4_;
  auVar27._0_4_ = fVar55 - auVar62._0_4_;
  auVar27._8_4_ = fVar55 - auVar62._8_4_;
  auVar27._12_4_ = fVar55 - auVar62._12_4_;
  auVar62 = auVar62 ^ (auVar62 ^ auVar27) & auVar61;
  auVar72._4_4_ = fVar55 - auVar65._4_4_;
  auVar72._0_4_ = fVar55 - auVar65._0_4_;
  auVar72._8_4_ = fVar55 - auVar65._8_4_;
  auVar72._12_4_ = fVar55 - auVar65._12_4_;
  auVar65 = auVar65 ^ (auVar65 ^ auVar72) & auVar64;
  auVar15._0_8_ = CONCAT44(-(uint)(auVar73._4_4_ < fVar14),-(uint)(auVar73._0_4_ < fVar14));
  auVar15._8_4_ = -(uint)(auVar73._8_4_ < fVar14);
  auVar15._12_4_ = -(uint)(auVar73._12_4_ < fVar14);
  auVar19._8_8_ = auVar15._8_8_;
  auVar19._0_8_ = auVar15._0_8_;
  fVar47 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  auVar66._4_4_ = fVar8 - auVar73._4_4_;
  auVar66._0_4_ = fVar8 - auVar73._0_4_;
  auVar66._8_4_ = fVar8 - auVar73._8_4_;
  auVar66._12_4_ = fVar8 - auVar73._12_4_;
  auVar73 = auVar73 ^ (auVar73 ^ auVar66) & auVar19;
  fVar54 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  auVar60._0_4_ = -(uint)(auVar62._0_4_ < fVar14);
  auVar60._4_4_ = -(uint)(auVar62._4_4_ < fVar14);
  auVar60._8_4_ = -(uint)(auVar62._8_4_ < fVar14);
  auVar60._12_4_ = -(uint)(auVar62._12_4_ < fVar14);
  auVar13._0_8_ = CONCAT44(-(uint)(auVar65._4_4_ < fVar14),-(uint)(auVar65._0_4_ < fVar14));
  auVar13._8_4_ = -(uint)(auVar65._8_4_ < fVar14);
  auVar13._12_4_ = -(uint)(auVar65._12_4_ < fVar14);
  auVar22._8_8_ = auVar13._8_8_;
  auVar22._0_8_ = auVar13._0_8_;
  fVar53 = auVar73._0_4_;
  fVar30 = fVar53 * fVar53;
  fVar9 = auVar73._4_4_;
  fVar46 = fVar9 * fVar9;
  fVar11 = auVar73._8_4_;
  fVar48 = fVar11 * fVar11;
  fVar18 = auVar73._12_4_;
  fVar55 = fVar18 * fVar18;
  auVar1._4_4_ = fVar8 - auVar62._4_4_;
  auVar1._0_4_ = fVar8 - auVar62._0_4_;
  auVar1._8_4_ = fVar8 - auVar62._8_4_;
  auVar1._12_4_ = fVar8 - auVar62._12_4_;
  auVar62 = auVar62 ^ (auVar62 ^ auVar1) & auVar60;
  auVar26._4_4_ = fVar8 - auVar65._4_4_;
  auVar26._0_4_ = fVar8 - auVar65._0_4_;
  auVar26._8_4_ = fVar8 - auVar65._8_4_;
  auVar26._12_4_ = fVar8 - auVar65._12_4_;
  auVar65 = auVar65 ^ (auVar65 ^ auVar26) & auVar22;
  fVar39 = auVar62._0_4_;
  fVar49 = fVar39 * fVar39;
  fVar40 = auVar62._4_4_;
  fVar50 = fVar40 * fVar40;
  fVar42 = auVar62._8_4_;
  fVar51 = fVar42 * fVar42;
  fVar56 = auVar62._12_4_;
  fVar52 = fVar56 * fVar56;
  fVar10 = auVar65._0_4_;
  fVar63 = fVar10 * fVar10;
  fVar12 = auVar65._4_4_;
  fVar67 = fVar12 * fVar12;
  fVar20 = auVar65._8_4_;
  fVar68 = fVar20 * fVar20;
  fVar21 = auVar65._12_4_;
  fVar69 = fVar21 * fVar21;
  fVar14 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar8 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  fVar70 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  auVar35 = NEON_fmov(0x3f800000,4);
  auVar37 = auVar35 ^ (auVar35 ^ auVar17) & auVar36;
  auVar26 = auVar35 ^ (auVar35 ^ auVar17) & auVar25;
  fVar29 = auVar35._8_4_;
  fVar31 = auVar35._12_4_;
  fVar23 = auVar35._0_4_;
  fVar28 = auVar35._4_4_;
  auVar35 = auVar35 ^ (auVar35 ^ auVar17) & auVar44;
  auVar37 = auVar37 ^ (auVar37 ^ auVar17) & auVar15;
  auVar26 = auVar26 ^ (auVar26 ^ auVar17) & auVar60;
  auVar35 = auVar35 ^ (auVar35 ^ auVar17) & auVar13;
  fVar53 = (fVar23 + fVar30 * (fVar47 + fVar30 * (fVar14 + fVar30 * (fVar41 + fVar30 * (fVar6 - 
                                                  fVar30 * fVar32))))) * fVar53;
  fVar9 = (fVar28 + fVar46 * (fVar47 + fVar46 * (fVar14 + fVar46 * (fVar41 + fVar46 * (fVar6 - 
                                                  fVar46 * fVar32))))) * fVar9;
  fVar11 = (fVar29 + fVar48 * (fVar47 + fVar48 * (fVar14 + fVar48 * (fVar41 + fVar48 * (fVar6 - 
                                                  fVar48 * fVar32))))) * fVar11;
  fVar18 = (fVar31 + fVar55 * (fVar47 + fVar55 * (fVar14 + fVar55 * (fVar41 + fVar55 * (fVar6 - 
                                                  fVar55 * fVar32))))) * fVar18;
  auVar16._0_4_ =
       (fVar23 + fVar30 * (fVar70 + fVar30 * (fVar8 + fVar30 * (fVar54 + fVar30 * (fVar7 - fVar30 * 
                                                  fVar59))))) * auVar37._0_4_;
  auVar16._4_4_ =
       (fVar28 + fVar46 * (fVar70 + fVar46 * (fVar8 + fVar46 * (fVar54 + fVar46 * (fVar7 - fVar46 * 
                                                  fVar59))))) * auVar37._4_4_;
  auVar16._8_4_ =
       (fVar29 + fVar48 * (fVar70 + fVar48 * (fVar8 + fVar48 * (fVar54 + fVar48 * (fVar7 - fVar48 * 
                                                  fVar59))))) * auVar37._8_4_;
  auVar16._12_4_ =
       (fVar31 + fVar55 * (fVar70 + fVar55 * (fVar8 + fVar55 * (fVar54 + fVar55 * (fVar7 - fVar55 * 
                                                  fVar59))))) * auVar37._12_4_;
  auVar27 = NEON_ext(auVar16,auVar16,8,1);
  auVar38._0_4_ =
       (fVar23 + fVar49 * (fVar70 + fVar49 * (fVar8 + fVar49 * (fVar54 + fVar49 * (fVar7 - fVar49 * 
                                                  fVar59))))) * auVar26._0_4_;
  auVar38._4_4_ =
       (fVar28 + fVar50 * (fVar70 + fVar50 * (fVar8 + fVar50 * (fVar54 + fVar50 * (fVar7 - fVar50 * 
                                                  fVar59))))) * auVar26._4_4_;
  auVar38._8_4_ =
       (fVar29 + fVar51 * (fVar70 + fVar51 * (fVar8 + fVar51 * (fVar54 + fVar51 * (fVar7 - fVar51 * 
                                                  fVar59))))) * auVar26._8_4_;
  auVar38._12_4_ =
       (fVar31 + fVar52 * (fVar70 + fVar52 * (fVar8 + fVar52 * (fVar54 + fVar52 * (fVar7 - fVar52 * 
                                                  fVar59))))) * auVar26._12_4_;
  auVar33._0_4_ =
       (fVar23 + fVar49 * (fVar47 + fVar49 * (fVar14 + fVar49 * (fVar41 + fVar49 * (fVar6 - fVar49 *
                                                                                            fVar32))
                                             ))) * fVar39;
  auVar33._4_4_ =
       (fVar28 + fVar50 * (fVar47 + fVar50 * (fVar14 + fVar50 * (fVar41 + fVar50 * (fVar6 - fVar50 *
                                                                                            fVar32))
                                             ))) * fVar40;
  auVar33._8_4_ =
       (fVar29 + fVar51 * (fVar47 + fVar51 * (fVar14 + fVar51 * (fVar41 + fVar51 * (fVar6 - fVar51 *
                                                                                            fVar32))
                                             ))) * fVar42;
  auVar33._12_4_ =
       (fVar31 + fVar52 * (fVar47 + fVar52 * (fVar14 + fVar52 * (fVar41 + fVar52 * (fVar6 - fVar52 *
                                                                                            fVar32))
                                             ))) * fVar56;
  auVar45._0_4_ =
       (fVar23 + fVar63 * (fVar47 + fVar63 * (fVar14 + fVar63 * (fVar41 + fVar63 * (fVar6 - fVar63 *
                                                                                            fVar32))
                                             ))) * fVar10;
  auVar45._4_4_ =
       (fVar28 + fVar67 * (fVar47 + fVar67 * (fVar14 + fVar67 * (fVar41 + fVar67 * (fVar6 - fVar67 *
                                                                                            fVar32))
                                             ))) * fVar12;
  auVar45._8_4_ =
       (fVar29 + fVar68 * (fVar47 + fVar68 * (fVar14 + fVar68 * (fVar41 + fVar68 * (fVar6 - fVar68 *
                                                                                            fVar32))
                                             ))) * fVar20;
  auVar45._12_4_ =
       (fVar31 + fVar69 * (fVar47 + fVar69 * (fVar14 + fVar69 * (fVar41 + fVar69 * (fVar6 - fVar69 *
                                                                                            fVar32))
                                             ))) * fVar21;
  auVar17._0_4_ =
       (fVar23 + fVar63 * (fVar70 + fVar63 * (fVar8 + fVar63 * (fVar54 + fVar63 * (fVar7 - fVar63 * 
                                                  fVar59))))) * auVar35._0_4_;
  auVar17._4_4_ =
       (fVar28 + fVar67 * (fVar70 + fVar67 * (fVar8 + fVar67 * (fVar54 + fVar67 * (fVar7 - fVar67 * 
                                                  fVar59))))) * auVar35._4_4_;
  auVar17._8_4_ =
       (fVar29 + fVar68 * (fVar70 + fVar68 * (fVar8 + fVar68 * (fVar54 + fVar68 * (fVar7 - fVar68 * 
                                                  fVar59))))) * auVar35._8_4_;
  auVar17._12_4_ =
       (fVar31 + fVar69 * (fVar70 + fVar69 * (fVar8 + fVar69 * (fVar54 + fVar69 * (fVar7 - fVar69 * 
                                                  fVar59))))) * auVar35._12_4_;
  auVar26 = NEON_ext(auVar33,auVar33,8,1);
  auVar66 = NEON_ext(auVar45,auVar45,8,1);
  auVar72 = NEON_ext(auVar17,auVar17,8,1);
  auVar35._4_4_ = fVar9;
  auVar35._0_4_ = fVar53;
  auVar35._8_4_ = fVar11;
  auVar35._12_4_ = fVar18;
  auVar37._4_4_ = fVar9;
  auVar37._0_4_ = fVar53;
  auVar37._8_4_ = fVar11;
  auVar37._12_4_ = fVar18;
  auVar35 = NEON_ext(auVar35,auVar37,8,1);
  fVar6 = auVar27._0_4_;
  fVar8 = auVar35._0_4_;
  auVar35 = NEON_ext(auVar38,auVar38,8,1);
  fVar7 = auVar35._0_4_;
  fVar11 = auVar26._0_4_;
  fVar14 = auVar66._0_4_;
  fVar18 = auVar72._0_4_;
  fVar42 = (float)DAT_01cd5070;
  fVar49 = auVar16._4_4_ * fVar6;
  fVar28 = auVar16._4_4_ * fVar8;
  fVar52 = (float)DAT_01cd53f0;
  fVar31 = fVar52 * fVar9;
  fVar32 = (float)_DAT_01d4a4a0;
  fVar47 = (float)((ulong)_DAT_01d4a4a0 >> 0x20);
  fVar68 = (float)_UNK_01d4a4a8;
  fVar58 = (float)_UNK_01d4b1c8;
  fVar56 = (float)_DAT_01d4b1c0;
  fVar57 = (float)((ulong)_DAT_01d4b1c0 >> 0x20);
  fVar30 = auVar38._4_4_ * fVar7;
  fVar46 = auVar38._4_4_ * fVar11;
  fVar48 = fVar52 * auVar33._4_4_;
  fVar55 = fVar8 * auVar16._0_4_ * fVar32 + fVar9 * fVar6 * fVar53;
  fVar10 = fVar6 * auVar16._0_4_ * fVar47 + fVar9 * fVar8 * fVar53;
  fVar12 = auVar16._0_4_ * 0.0 * fVar68 + fVar42 * auVar16._4_4_ * fVar53;
  fVar41 = fVar8 * fVar53 * fVar56 + fVar9 * fVar6 * auVar16._0_4_;
  fVar9 = fVar6 * fVar53 * fVar57 + fVar9 * fVar8 * auVar16._0_4_;
  fVar53 = fVar53 * 0.0 * fVar58 + fVar42 * auVar16._4_4_ * auVar16._0_4_;
  fVar8 = fVar11 * auVar38._0_4_ * fVar32 + auVar33._4_4_ * fVar7 * auVar33._0_4_;
  fVar20 = fVar7 * auVar38._0_4_ * fVar47 + auVar33._4_4_ * fVar11 * auVar33._0_4_;
  fVar21 = auVar38._0_4_ * 0.0 * fVar68 + fVar42 * auVar38._4_4_ * auVar33._0_4_;
  fVar70 = fVar49 * fVar30 + fVar55 * fVar46 + fVar41 * fVar48;
  fVar39 = fVar28 * fVar30 + fVar10 * fVar46 + fVar9 * fVar48;
  fVar40 = fVar31 * fVar30 + fVar12 * fVar46 + fVar53 * fVar48;
  fVar30 = fVar11 * auVar33._0_4_ * fVar56 + auVar33._4_4_ * fVar7 * auVar38._0_4_;
  fVar11 = fVar7 * auVar33._0_4_ * fVar57 + auVar33._4_4_ * fVar11 * auVar38._0_4_;
  fVar46 = auVar33._0_4_ * 0.0 * fVar58 + fVar42 * auVar38._4_4_ * auVar38._0_4_;
  fVar6 = fVar49 * fVar8 + fVar55 * fVar20 + fVar41 * fVar21;
  fVar7 = fVar28 * fVar8 + fVar10 * fVar20 + fVar9 * fVar21;
  fVar8 = fVar31 * fVar8 + fVar12 * fVar20 + fVar53 * fVar21;
  fVar48 = (float)((ulong)DAT_01cd5070 >> 0x20) * 0.0;
  fVar50 = auVar17._4_4_ * fVar18;
  fVar51 = auVar17._4_4_ * fVar14;
  fVar52 = fVar52 * auVar45._4_4_;
  fVar54 = (float)((ulong)DAT_01cd53f0 >> 0x20) * 0.0;
  fVar23 = fVar49 * fVar30 + fVar55 * fVar11 + fVar41 * fVar46;
  fVar29 = fVar28 * fVar30 + fVar10 * fVar11 + fVar9 * fVar46;
  fVar59 = fVar31 * fVar30 + fVar12 * fVar11 + fVar53 * fVar46;
  fVar63 = fVar14 * auVar17._0_4_ * fVar32 + auVar45._4_4_ * fVar18 * auVar45._0_4_;
  fVar67 = fVar18 * auVar17._0_4_ * fVar47 + auVar45._4_4_ * fVar14 * auVar45._0_4_;
  fVar68 = auVar17._0_4_ * 0.0 * fVar68 + fVar42 * auVar17._4_4_ * auVar45._0_4_;
  fVar69 = auVar17._0_4_ * 0.0 * (float)((ulong)_UNK_01d4a4a8 >> 0x20) + fVar48 * auVar45._0_4_;
  fVar20 = fVar14 * auVar45._0_4_ * fVar56 + auVar45._4_4_ * fVar18 * auVar17._0_4_;
  fVar21 = fVar18 * auVar45._0_4_ * fVar57 + auVar45._4_4_ * fVar14 * auVar17._0_4_;
  fVar32 = auVar45._0_4_ * 0.0 * fVar58 + fVar42 * auVar17._4_4_ * auVar17._0_4_;
  fVar47 = auVar45._0_4_ * 0.0 * (float)((ulong)_UNK_01d4b1c8 >> 0x20) + fVar48 * auVar17._0_4_;
  fVar11 = fVar50 * fVar6 + fVar63 * fVar7 + fVar20 * fVar8;
  fVar18 = fVar51 * fVar6 + fVar67 * fVar7 + fVar21 * fVar8;
  fVar30 = fVar52 * fVar6 + fVar68 * fVar7 + fVar32 * fVar8;
  fVar46 = fVar54 * fVar6 + fVar69 * fVar7 + fVar47 * fVar8;
  fVar42 = fVar49 * 0.0 + fVar55 * 0.0 + fVar41 * 0.0 + 0.0;
  fVar28 = fVar28 * 0.0 + fVar10 * 0.0 + fVar9 * 0.0 + 0.0;
  fVar31 = fVar31 * 0.0 + fVar12 * 0.0 + fVar53 * 0.0 + 0.0;
  fVar48 = fVar50 * fVar70 + fVar63 * fVar39 + fVar20 * fVar40;
  fVar53 = fVar51 * fVar70 + fVar67 * fVar39 + fVar21 * fVar40;
  fVar55 = fVar52 * fVar70 + fVar68 * fVar39 + fVar32 * fVar40;
  fVar9 = fVar54 * fVar70 + fVar69 * fVar39 + fVar47 * fVar40;
  fVar6 = fVar50 * fVar23 + fVar63 * fVar29 + fVar20 * fVar59;
  fVar7 = fVar51 * fVar23 + fVar67 * fVar29 + fVar21 * fVar59;
  fVar14 = fVar52 * fVar23 + fVar68 * fVar29 + fVar32 * fVar59;
  fVar8 = fVar54 * fVar23 + fVar69 * fVar29 + fVar47 * fVar59;
  fVar10 = fVar48 * 0.0;
  fVar12 = fVar53 * 0.0;
  fVar41 = fVar55 * 0.0;
  fVar49 = fVar9 * 0.0;
  fVar20 = fVar50 * fVar42 + fVar63 * fVar28 + fVar20 * fVar31 + 0.0;
  fVar21 = fVar51 * fVar42 + fVar67 * fVar28 + fVar21 * fVar31 + 0.0;
  fVar32 = fVar52 * fVar42 + fVar68 * fVar28 + fVar32 * fVar31 + 0.0;
  fVar47 = fVar54 * fVar42 + fVar69 * fVar28 + fVar47 * fVar31 + 0.0;
  uStack_58 = CONCAT44(fVar47 + fVar9 + fVar46 * 0.0 + fVar8 * 0.0,
                       fVar32 + fVar55 + fVar30 * 0.0 + fVar14 * 0.0);
  local_60 = CONCAT44(fVar21 + fVar53 + fVar18 * 0.0 + fVar7 * 0.0,
                      fVar20 + fVar48 + fVar11 * 0.0 + fVar6 * 0.0);
  uStack_70 = CONCAT44(fVar21 + fVar12 + fVar18 + fVar7 * 0.0,fVar20 + fVar10 + fVar11 + fVar6 * 0.0
                      );
  uStack_68 = CONCAT44(fVar47 + fVar49 + fVar46 + fVar8 * 0.0,
                       fVar32 + fVar41 + fVar30 + fVar14 * 0.0);
  local_80 = CONCAT44(fVar21 + fVar7 + fVar12 + fVar18 * 0.0,fVar20 + fVar6 + fVar10 + fVar11 * 0.0)
  ;
  uStack_78 = CONCAT44(fVar47 + fVar8 + fVar49 + fVar46 * 0.0,
                       fVar32 + fVar14 + fVar41 + fVar30 * 0.0);
  FUN_006cb0d0(puVar5);
  FUN_006cb470(*param_3,*param_3 >> 0x20,param_3[1] & 0xffffffff,puVar5,param_2,&local_60,&uStack_70
               ,&local_80);
  FUN_012c4020(param_1,*(undefined4 *)(param_1 + 0xa8));
  return;
}


