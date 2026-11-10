/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ccd80; name: FUN_006ccd80
 */


undefined1  [16]
FUN_006ccd80(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
            undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  fVar7 = (float)*(undefined8 *)*param_2;
  fVar23 = (float)*(undefined8 *)*param_3;
  fVar19 = fVar23 - fVar7;
  fVar12 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  fVar24 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar20 = fVar24 - fVar12;
  fVar13 = (float)*(undefined8 *)(*param_2 + 8);
  fVar25 = (float)*(undefined8 *)(*param_3 + 8);
  fVar21 = fVar25 - fVar13;
  fVar14 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar26 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar22 = fVar26 - fVar14;
  fVar40 = (float)*param_1;
  fVar41 = (float)((ulong)*param_1 >> 0x20);
  fVar42 = (float)param_1[1];
  fVar43 = (float)((ulong)param_1[1] >> 0x20);
  fVar27 = (float)*(undefined8 *)*param_4;
  fVar15 = fVar27 - fVar7;
  fVar28 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  fVar16 = fVar28 - fVar12;
  fVar29 = (float)*(undefined8 *)(*param_4 + 8);
  fVar17 = fVar29 - fVar13;
  fVar6 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  fVar18 = fVar6 - fVar14;
  fVar32 = fVar19 * (fVar40 - fVar7);
  fVar33 = fVar20 * (fVar41 - fVar12);
  fVar34 = fVar21 * (fVar42 - fVar13);
  fVar35 = fVar22 * (fVar43 - fVar14);
  auVar36._4_4_ = fVar33;
  auVar36._0_4_ = fVar32;
  auVar36._8_4_ = fVar34;
  auVar36._12_4_ = fVar35;
  auVar1._4_4_ = fVar33;
  auVar1._0_4_ = fVar32;
  auVar1._8_4_ = fVar34;
  auVar1._12_4_ = fVar35;
  auVar36 = NEON_ext(auVar36,auVar1,8,1);
  fVar35 = fVar15 * (fVar40 - fVar7);
  fVar30 = fVar16 * (fVar41 - fVar12);
  fVar34 = fVar17 * (fVar42 - fVar13);
  fVar31 = fVar18 * (fVar43 - fVar14);
  auVar37._4_4_ = fVar30;
  auVar37._0_4_ = fVar35;
  auVar37._8_4_ = fVar34;
  auVar37._12_4_ = fVar31;
  auVar39._4_4_ = fVar30;
  auVar39._0_4_ = fVar35;
  auVar39._8_4_ = fVar34;
  auVar39._12_4_ = fVar31;
  auVar37 = NEON_ext(auVar37,auVar39,8,1);
  fVar34 = auVar36._0_4_ + fVar32 + auVar36._4_4_ + fVar33;
  fVar35 = auVar37._0_4_ + fVar35 + auVar37._4_4_ + fVar30;
  if ((fVar34 <= 0.0) && (fVar35 <= 0.0)) {
    return *param_2;
  }
  fVar30 = fVar19 * (fVar40 - fVar23);
  fVar31 = fVar20 * (fVar41 - fVar24);
  fVar32 = fVar21 * (fVar42 - fVar25);
  fVar33 = fVar22 * (fVar43 - fVar26);
  auVar2._4_4_ = fVar31;
  auVar2._0_4_ = fVar30;
  auVar2._8_4_ = fVar32;
  auVar2._12_4_ = fVar33;
  auVar3._4_4_ = fVar31;
  auVar3._0_4_ = fVar30;
  auVar3._8_4_ = fVar32;
  auVar3._12_4_ = fVar33;
  auVar37 = NEON_ext(auVar2,auVar3,8,1);
  auVar38._0_4_ = fVar15 * (fVar40 - fVar23);
  auVar38._4_4_ = fVar16 * (fVar41 - fVar24);
  auVar38._8_4_ = fVar17 * (fVar42 - fVar25);
  auVar38._12_4_ = fVar18 * (fVar43 - fVar26);
  auVar39 = NEON_ext(auVar38,auVar38,8,1);
  fVar30 = auVar37._0_4_ + fVar30 + auVar37._4_4_ + fVar31;
  fVar31 = auVar39._0_4_ + auVar38._0_4_ + auVar39._4_4_ + auVar38._4_4_;
  bVar4 = false;
  bVar5 = true;
  if (0.0 <= fVar30) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar31) && !NAN(fVar30)) {
      bVar4 = fVar31 == fVar30;
      bVar5 = fVar30 <= fVar31;
    }
  }
  if (!bVar5 || bVar4) {
    return *param_3;
  }
  fVar32 = fVar34 * fVar31 - fVar35 * fVar30;
  if (((fVar30 <= 0.0) && (0.0 < fVar34)) && (fVar32 <= 0.0)) {
    fVar34 = fVar34 / (fVar34 - fVar30);
    auVar8._0_4_ = fVar7 + fVar34 * fVar19;
    auVar8._4_4_ = fVar12 + fVar34 * fVar20;
    auVar8._8_4_ = fVar13 + fVar34 * fVar21;
    auVar8._12_4_ = fVar14 + 0.0;
    return auVar8;
  }
  fVar43 = fVar43 - fVar6;
  auVar44._0_4_ = fVar19 * (fVar40 - fVar27);
  auVar44._4_4_ = fVar20 * (fVar41 - fVar28);
  auVar44._8_4_ = fVar21 * (fVar42 - fVar29);
  auVar44._12_4_ = fVar22 * fVar43;
  auVar37 = NEON_ext(auVar44,auVar44,8,1);
  auVar45._0_4_ = fVar15 * (fVar40 - fVar27);
  auVar45._4_4_ = fVar16 * (fVar41 - fVar28);
  auVar45._8_4_ = fVar17 * (fVar42 - fVar29);
  auVar45._12_4_ = fVar18 * fVar43;
  fVar6 = auVar37._0_4_ + auVar44._0_4_ + auVar37._4_4_ + auVar44._4_4_;
  auVar37 = NEON_ext(auVar45,auVar45,8,1);
  fVar33 = auVar37._0_4_ + auVar45._0_4_ + auVar37._4_4_ + auVar45._4_4_;
  bVar4 = false;
  bVar5 = true;
  if (0.0 <= fVar33) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar6) && !NAN(fVar33)) {
      bVar4 = fVar6 == fVar33;
      bVar5 = fVar33 <= fVar6;
    }
  }
  if (!bVar5 || bVar4) {
    return *param_4;
  }
  fVar34 = fVar35 * fVar6 - fVar34 * fVar33;
  if (((fVar33 <= 0.0) && (0.0 <= fVar35)) && (fVar34 <= 0.0)) {
    fVar35 = fVar35 / (fVar35 - fVar33);
    auVar9._0_4_ = fVar7 + fVar35 * fVar15;
    auVar9._4_4_ = fVar12 + fVar35 * fVar16;
    auVar9._8_4_ = fVar13 + fVar35 * fVar17;
    auVar9._12_4_ = fVar14 + 0.0;
    return auVar9;
  }
  fVar35 = fVar30 * fVar33 - fVar31 * fVar6;
  if (((fVar35 <= 0.0) && (fVar31 = fVar31 - fVar30, 0.0 <= fVar31)) && (0.0 <= fVar6 - fVar33)) {
    fVar31 = fVar31 / (fVar31 + (fVar6 - fVar33));
    auVar11._0_4_ = fVar23 + fVar31 * (fVar27 - fVar23);
    auVar11._4_4_ = fVar24 + fVar31 * (fVar28 - fVar24);
    auVar11._8_4_ = fVar25 + fVar31 * (fVar29 - fVar25);
    auVar11._12_4_ = fVar26 + 0.0;
    return auVar11;
  }
  fVar35 = 1.0 / (fVar32 + fVar35 + fVar34);
  fVar34 = fVar34 * fVar35;
  fVar32 = fVar32 * fVar35;
  auVar10._0_4_ = fVar15 * fVar32 + fVar7 + fVar19 * fVar34;
  auVar10._4_4_ = fVar16 * fVar32 + fVar12 + fVar20 * fVar34;
  auVar10._8_4_ = fVar17 * fVar32 + fVar13 + fVar21 * fVar34;
  auVar10._12_4_ = fVar18 * fVar32 + fVar14 + fVar22 * fVar34;
  return auVar10;
}


