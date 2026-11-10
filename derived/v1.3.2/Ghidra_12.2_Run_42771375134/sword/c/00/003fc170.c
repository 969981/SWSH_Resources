/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fc170; name: FUN_003fc170
 */


void FUN_003fc170(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  float fVar47;
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
  lVar12 = *(long *)(param_1 + 0x40);
  if ((*(char *)(lVar11 + 0xd) == '\0') || (*(char *)(lVar11 + 0x2d) != '\0')) {
    auVar34 = *(undefined1 (*) [16])(lVar11 + 0x10);
    auVar45 = *(undefined1 (*) [16])(lVar12 + 0x20);
    fVar27 = *(float *)(lVar12 + 0x34);
    fVar32 = *(float *)(lVar12 + 0x38);
    pauVar1 = (undefined1 (*) [12])(lVar12 + 0x30);
    fVar33 = auVar34._12_4_;
    fVar40 = auVar45._12_4_;
    fVar16 = auVar45._4_4_;
    auVar17._0_12_ = auVar34._0_12_;
    auVar17._12_4_ = 0;
    fVar25 = auVar34._4_4_;
    fVar19 = *(float *)*pauVar1;
    fVar47 = auVar45._8_4_;
    fVar26 = auVar34._0_4_;
    fVar13 = auVar34._8_4_;
    auVar35._0_12_ = auVar45._0_12_;
    auVar35._12_4_ = 0;
    auVar52 = NEON_ext(auVar35,auVar35,8,1);
    fVar15 = auVar45._0_4_;
    auVar34 = NEON_ext(auVar17,auVar17,8,1);
    fVar14 = *(float *)(lVar11 + 0x20);
    fVar43 = fVar26 * fVar16 - fVar25 * fVar15;
    uVar44 = NEON_ext(CONCAT44(fVar25 * fVar47 - fVar13 * fVar16,fVar43),
                      CONCAT44(auVar34._4_4_ * fVar16 - fVar25 * auVar52._4_4_,
                               auVar34._0_4_ * fVar15 - fVar26 * auVar52._0_4_),4,1);
    fVar41 = fVar33 * fVar33 + -0.5;
    fVar53 = fVar26 * fVar15;
    fVar54 = fVar25 * fVar16;
    auVar36._0_4_ = fVar15 * fVar33 + (float)uVar44;
    auVar36._4_4_ = fVar16 * fVar33 + (float)((ulong)uVar44 >> 0x20);
    auVar36._8_4_ = fVar47 * fVar33 + fVar43;
    auVar36._12_4_ = fVar33 * 0.0 + 0.0;
    auVar45 = NEON_ext(auVar36,auVar36,8,1);
    fVar15 = *(float *)(lVar11 + 0x24);
    fVar16 = *(float *)(lVar11 + 0x28);
    auVar4._12_4_ = 0;
    auVar4._0_12_ = *pauVar1;
    auVar5._12_4_ = 0;
    auVar5._0_12_ = *pauVar1;
    auVar52 = NEON_ext(auVar4,auVar5,8,1);
    fVar22 = fVar26 * fVar40 + auVar36._0_4_;
    fVar23 = fVar25 * fVar40 + auVar36._4_4_;
    fVar24 = fVar13 * fVar40 + auVar45._0_4_;
    fVar28 = fVar26 * fVar27 - fVar25 * fVar19;
    fVar43 = fVar26 * fVar19;
    fVar20 = fVar25 * fVar27;
    fVar21 = fVar13 * fVar32;
    uVar44 = NEON_ext(CONCAT44(fVar25 * fVar32 - fVar13 * fVar27,fVar28),
                      CONCAT44(auVar34._4_4_ * fVar27 - fVar25 * auVar52._4_4_,
                               auVar34._0_4_ * fVar19 - fVar26 * auVar52._0_4_),4,1);
    auVar8._4_4_ = fVar54;
    auVar8._0_4_ = fVar53;
    auVar8._8_4_ = fVar13 * fVar47;
    auVar8._12_4_ = 0;
    auVar9._4_4_ = fVar54;
    auVar9._0_4_ = fVar53;
    auVar9._8_4_ = fVar13 * fVar47;
    auVar9._12_4_ = 0;
    auVar45 = NEON_ext(auVar8,auVar9,8,1);
    auVar29._0_8_ =
         CONCAT44(fVar27 * fVar41 + (float)((ulong)uVar44 >> 0x20) * fVar33,
                  fVar19 * fVar41 + (float)uVar44 * fVar33);
    auVar29._8_4_ = fVar32 * fVar41 + fVar28 * fVar33;
    auVar29._12_4_ = fVar33 * 0.0 + 0.0;
    auVar34 = NEON_ext(auVar29,auVar29,8,1);
    auVar10._8_4_ = auVar34._0_4_;
    auVar10._0_8_ = auVar29._0_8_;
    fVar26 = fVar33 * fVar40 - (fVar53 + fVar54 + auVar45._0_4_ + auVar45._4_4_);
  }
  else {
    auVar34 = *(undefined1 (*) [16])(lVar11 + 0x30);
    auVar45 = *(undefined1 (*) [16])(lVar12 + 0x20);
    fVar19 = auVar45._12_4_;
    fVar25 = auVar34._12_4_;
    auVar52._0_12_ = auVar34._0_12_;
    auVar52._12_4_ = 0;
    fVar26 = auVar45._4_4_;
    auVar48._0_12_ = auVar45._0_12_;
    auVar48._12_4_ = 0;
    fVar21 = auVar34._4_4_;
    fVar13 = auVar45._8_4_;
    fVar22 = auVar34._8_4_;
    fVar43 = auVar34._0_4_;
    auVar34 = NEON_ext(auVar48,auVar48,8,1);
    fVar16 = auVar45._0_4_;
    auVar30._0_4_ = fVar16 * fVar43;
    auVar30._4_4_ = fVar26 * fVar21;
    auVar30._8_4_ = fVar13 * fVar22;
    auVar30._12_4_ = 0;
    auVar45 = NEON_ext(auVar52,auVar52,8,1);
    fVar15 = fVar16 * fVar21 - fVar26 * fVar43;
    uVar44 = NEON_ext(CONCAT44(fVar26 * fVar22 - fVar13 * fVar21,fVar15),
                      CONCAT44(auVar34._4_4_ * fVar21 - fVar26 * auVar45._4_4_,
                               auVar34._0_4_ * fVar43 - fVar16 * auVar45._0_4_),4,1);
    fVar14 = *(float *)(lVar11 + 0x20);
    auVar42._0_4_ = fVar16 * fVar25 + (float)uVar44;
    auVar42._4_4_ = fVar26 * fVar25 + (float)((ulong)uVar44 >> 0x20);
    auVar42._8_4_ = fVar13 * fVar25 + fVar15;
    auVar42._12_4_ = fVar25 * 0.0 + 0.0;
    auVar34 = NEON_ext(auVar42,auVar42,8,1);
    auVar37._0_4_ = (float)*(undefined8 *)(lVar12 + 0x30) - (float)*(undefined8 *)(lVar11 + 0x40);
    auVar37._4_4_ =
         (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20) -
         (float)((ulong)*(undefined8 *)(lVar11 + 0x40) >> 0x20);
    auVar37._8_4_ = *(float *)(lVar12 + 0x38) - *(float *)(lVar11 + 0x48);
    auVar37._12_4_ = 0;
    auVar52 = NEON_ext(auVar37,auVar37,8,1);
    fVar13 = fVar25 * fVar25 + -0.5;
    fVar16 = auVar37._0_4_ * fVar21 - auVar37._4_4_ * fVar43;
    uVar44 = NEON_ext(CONCAT44(auVar37._4_4_ * fVar22 - auVar37._8_4_ * fVar21,fVar16),
                      CONCAT44(auVar52._4_4_ * fVar21 - auVar37._4_4_ * auVar45._4_4_,
                               auVar52._0_4_ * fVar43 - auVar37._0_4_ * auVar45._0_4_),4,1);
    fVar32 = auVar42._0_4_ - fVar43 * fVar19;
    fVar47 = auVar42._4_4_ - fVar21 * fVar19;
    auVar46._0_8_ = CONCAT44(fVar47,fVar32);
    auVar46._8_4_ = auVar34._0_4_ - fVar22 * fVar19;
    auVar46._12_4_ = 0.0 - fVar19 * 0.0;
    auVar34 = NEON_ext(auVar46,auVar46,8,1);
    auVar38._0_4_ = auVar37._0_4_ * fVar43;
    auVar38._4_4_ = auVar37._4_4_ * fVar21;
    auVar38._8_4_ = auVar37._8_4_ * fVar22;
    auVar38._12_4_ = 0;
    auVar45 = NEON_ext(auVar38,auVar38,8,1);
    fVar27 = auVar34._0_4_;
    fVar15 = *(float *)(lVar11 + 0x24);
    fVar26 = auVar38._0_4_ + auVar38._4_4_ + auVar45._0_4_ + auVar45._4_4_;
    auVar49._0_4_ = auVar37._0_4_ * fVar13 + (float)uVar44 * fVar25;
    auVar49._4_4_ = auVar37._4_4_ * fVar13 + (float)((ulong)uVar44 >> 0x20) * fVar25;
    auVar49._8_4_ = auVar37._8_4_ * fVar13 + fVar16 * fVar25;
    auVar49._12_4_ = fVar25 * 0.0 + 0.0;
    auVar45 = NEON_ext(auVar49,auVar49,8,1);
    uVar44 = NEON_ext(auVar46._0_8_,(ulong)(uint)fVar27,4,1);
    fVar16 = *(float *)(lVar11 + 0x28);
    auVar34 = NEON_ext(auVar30,auVar30,8,1);
    fVar13 = auVar34._0_4_ + auVar34._4_4_;
    auVar34 = *(undefined1 (*) [16])(lVar11 + 0x10);
    fVar20 = auVar34._4_4_;
    auVar50._0_4_ = fVar43 * fVar26 + auVar49._0_4_;
    auVar50._4_4_ = fVar21 * fVar26 + auVar49._4_4_;
    auVar50._8_4_ = fVar22 * fVar26 + auVar45._0_4_;
    auVar50._12_4_ = fVar26 * 0.0 + 0.0;
    auVar45 = NEON_ext(auVar50,auVar50,8,1);
    fVar21 = auVar34._8_4_;
    auVar17._0_12_ = auVar34._0_12_;
    auVar17._12_4_ = 0;
    auVar52 = NEON_ext(auVar17,auVar17,8,1);
    auVar51._0_4_ = auVar50._0_4_ + auVar50._0_4_;
    auVar51._4_4_ = auVar50._4_4_ + auVar50._4_4_;
    auVar51._8_4_ = auVar45._0_4_ + auVar45._0_4_;
    auVar51._12_4_ = 0;
    fVar43 = auVar34._0_4_;
    fVar22 = fVar43 * (float)uVar44 - fVar20 * fVar32;
    fVar26 = auVar34._12_4_;
    uVar44 = NEON_ext(CONCAT44(fVar20 * (float)((ulong)uVar44 >> 0x20) - fVar21 * fVar47,fVar22),
                      CONCAT44(auVar52._4_4_ * fVar47 - fVar20 * 0.0,
                               auVar52._0_4_ * fVar32 - fVar43 * fVar27),4,1);
    auVar39._0_4_ = fVar32 * fVar26 + (float)uVar44;
    auVar39._4_4_ = fVar47 * fVar26 + (float)((ulong)uVar44 >> 0x20);
    auVar39._8_4_ = fVar27 * fVar26 + fVar22;
    auVar39._12_4_ = fVar26 * 0.0 + 0.0;
    auVar34 = NEON_ext(auVar39,auVar39,8,1);
    fVar32 = fVar43 * fVar32;
    fVar47 = fVar20 * fVar47;
    fVar24 = fVar19 * fVar25 + auVar30._0_4_ + auVar30._4_4_ + fVar13;
    fVar22 = fVar43 * fVar24 + auVar39._0_4_;
    fVar23 = fVar20 * fVar24 + auVar39._4_4_;
    fVar24 = fVar21 * fVar24 + auVar34._0_4_;
    fVar33 = fVar26 * fVar26 + -0.5;
    auVar34 = NEON_ext(auVar51,auVar51,8,1);
    fVar28 = fVar43 * auVar51._4_4_ - fVar20 * auVar51._0_4_;
    uVar44 = NEON_ext(CONCAT44(fVar20 * auVar51._8_4_ - fVar21 * auVar51._4_4_,fVar28),
                      CONCAT44(auVar52._4_4_ * auVar51._4_4_ - fVar20 * auVar34._4_4_,
                               auVar52._0_4_ * auVar51._0_4_ - fVar43 * auVar34._0_4_),4,1);
    auVar34._4_4_ = fVar47;
    auVar34._0_4_ = fVar32;
    auVar34._8_4_ = fVar21 * fVar27;
    auVar34._12_4_ = 0;
    auVar45._4_4_ = fVar47;
    auVar45._0_4_ = fVar32;
    auVar45._8_4_ = fVar21 * fVar27;
    auVar45._12_4_ = 0;
    auVar34 = NEON_ext(auVar34,auVar45,8,1);
    auVar31._0_8_ =
         CONCAT44(auVar51._4_4_ * fVar33 + (float)((ulong)uVar44 >> 0x20) * fVar26,
                  auVar51._0_4_ * fVar33 + (float)uVar44 * fVar26);
    auVar31._8_4_ = auVar51._8_4_ * fVar33 + fVar28 * fVar26;
    auVar31._12_4_ = fVar26 * 0.0 + 0.0;
    auVar45 = NEON_ext(auVar31,auVar31,8,1);
    fVar26 = (fVar19 * fVar25 + auVar30._0_4_ + auVar30._4_4_ + fVar13) * fVar26 -
             (fVar32 + fVar47 + auVar34._0_4_ + auVar34._4_4_);
    fVar43 = fVar43 * auVar51._0_4_;
    fVar20 = fVar20 * auVar51._4_4_;
    fVar21 = fVar21 * auVar51._8_4_;
    auVar10._8_4_ = auVar45._0_4_;
    auVar10._0_8_ = auVar31._0_8_;
  }
  auVar6._4_4_ = fVar20;
  auVar6._0_4_ = fVar43;
  auVar6._8_4_ = fVar21;
  auVar6._12_4_ = 0;
  auVar7._4_4_ = fVar20;
  auVar7._0_4_ = fVar43;
  auVar7._8_4_ = fVar21;
  auVar7._12_4_ = 0;
  auVar34 = NEON_ext(auVar6,auVar7,8,1);
  fVar13 = fVar43 + fVar20 + auVar34._0_4_ + auVar34._4_4_;
  auVar18._0_4_ = auVar17._0_4_ * fVar13 + auVar10._0_4_;
  auVar18._4_4_ = auVar17._4_4_ * fVar13 + auVar10._4_4_;
  auVar18._8_4_ = auVar17._8_4_ * fVar13 + auVar10._8_4_;
  auVar18._12_4_ = auVar17._12_4_ * fVar13 + 0.0;
  auVar34 = NEON_ext(auVar18,auVar18,8,1);
  fVar14 = fVar14 + auVar18._0_4_ + auVar18._0_4_;
  fVar15 = fVar15 + auVar18._4_4_ + auVar18._4_4_;
  fVar16 = fVar16 + auVar34._0_4_ + auVar34._0_4_;
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar14;
  auVar2._8_4_ = fVar16;
  auVar2._12_4_ = 0;
  auVar3._4_4_ = fVar15;
  auVar3._0_4_ = fVar14;
  auVar3._8_4_ = fVar16;
  auVar3._12_4_ = 0;
  auVar34 = NEON_ext(auVar2,auVar3,8,1);
  param_2[2] = CONCAT44(fVar15,fVar14);
  *(int *)(param_2 + 3) = auVar34._0_4_;
  param_2[1] = CONCAT44(fVar26,fVar24);
  *param_2 = CONCAT44(fVar23,fVar22);
  return;
}


