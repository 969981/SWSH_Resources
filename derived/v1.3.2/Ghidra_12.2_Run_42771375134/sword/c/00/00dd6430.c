/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd6430; name: FUN_00dd6430
 */


bool FUN_00dd6430(float param_1,float param_2,float param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,float *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar27 = (float)param_5[1];
  fVar28 = (float)((ulong)param_5[1] >> 0x20);
  fVar25 = (float)*param_5;
  fVar26 = (float)((ulong)*param_5 >> 0x20);
  fVar11 = ((float)*param_4 + fVar25) * 0.5;
  fVar13 = ((float)((ulong)*param_4 >> 0x20) + fVar26) * 0.5;
  fVar15 = ((float)param_4[1] + fVar27) * 0.5;
  fVar17 = ((float)((ulong)param_4[1] >> 0x20) + fVar28) * 0.5;
  fVar25 = fVar25 - fVar11;
  fVar26 = fVar26 - fVar13;
  fVar27 = fVar27 - fVar15;
  fVar28 = fVar28 - fVar17;
  fVar11 = fVar11 - (float)*param_6;
  fVar13 = fVar13 - (float)((ulong)*param_6 >> 0x20);
  fVar15 = fVar15 - (float)param_6[1];
  fVar17 = fVar17 - (float)((ulong)param_6[1] >> 0x20);
  fVar21 = (float)param_7[1];
  fVar22 = (float)((ulong)param_7[1] >> 0x20);
  fVar19 = (float)*param_7;
  fVar20 = (float)((ulong)*param_7 >> 0x20);
  fVar12 = fVar19 * fVar11;
  fVar14 = fVar20 * fVar13;
  fVar16 = fVar21 * fVar15;
  fVar18 = fVar22 * fVar17;
  auVar23._4_4_ = fVar14;
  auVar23._0_4_ = fVar12;
  auVar23._8_4_ = fVar16;
  auVar23._12_4_ = fVar18;
  auVar24._4_4_ = fVar14;
  auVar24._0_4_ = fVar12;
  auVar24._8_4_ = fVar16;
  auVar24._12_4_ = fVar18;
  auVar23 = NEON_ext(auVar23,auVar24,8,1);
  fVar19 = fVar19 * fVar25;
  fVar20 = fVar20 * fVar26;
  fVar21 = fVar21 * fVar27;
  fVar22 = fVar22 * fVar28;
  auVar1._4_4_ = fVar20;
  auVar1._0_4_ = fVar19;
  auVar1._8_4_ = fVar21;
  auVar1._12_4_ = fVar22;
  auVar2._4_4_ = fVar20;
  auVar2._0_4_ = fVar19;
  auVar2._8_4_ = fVar21;
  auVar2._12_4_ = fVar22;
  auVar24 = NEON_ext(auVar1,auVar2,8,1);
  fVar12 = auVar23._0_4_ + fVar12 + auVar23._4_4_ + fVar14;
  fVar14 = auVar24._0_4_ + fVar19 + auVar24._4_4_ + fVar20;
  if (ABS(fVar14) + param_1 < ABS(fVar12)) {
    return false;
  }
  fVar29 = (float)param_8[1];
  fVar30 = (float)((ulong)param_8[1] >> 0x20);
  fVar21 = (float)*param_8;
  fVar22 = (float)((ulong)*param_8 >> 0x20);
  fVar16 = fVar11 * fVar21;
  fVar18 = fVar13 * fVar22;
  fVar19 = fVar15 * fVar29;
  fVar20 = fVar17 * fVar30;
  fVar21 = fVar25 * fVar21;
  fVar22 = fVar26 * fVar22;
  fVar29 = fVar27 * fVar29;
  fVar30 = fVar28 * fVar30;
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar16;
  auVar3._8_4_ = fVar19;
  auVar3._12_4_ = fVar20;
  auVar4._4_4_ = fVar18;
  auVar4._0_4_ = fVar16;
  auVar4._8_4_ = fVar19;
  auVar4._12_4_ = fVar20;
  auVar23 = NEON_ext(auVar3,auVar4,8,1);
  auVar7._4_4_ = fVar22;
  auVar7._0_4_ = fVar21;
  auVar7._8_4_ = fVar29;
  auVar7._12_4_ = fVar30;
  auVar8._4_4_ = fVar22;
  auVar8._0_4_ = fVar21;
  auVar8._8_4_ = fVar29;
  auVar8._12_4_ = fVar30;
  auVar24 = NEON_ext(auVar7,auVar8,8,1);
  fVar16 = auVar23._0_4_ + fVar16 + auVar23._4_4_ + fVar18;
  fVar18 = auVar24._0_4_ + fVar21 + auVar24._4_4_ + fVar22;
  if (ABS(fVar18) + param_2 < ABS(fVar16)) {
    return false;
  }
  fVar25 = fVar25 * *param_9;
  fVar26 = fVar26 * param_9[1];
  fVar27 = fVar27 * param_9[2];
  fVar28 = fVar28 * param_9[3];
  fVar11 = fVar11 * *param_9;
  fVar13 = fVar13 * param_9[1];
  fVar15 = fVar15 * param_9[2];
  fVar17 = fVar17 * param_9[3];
  auVar5._4_4_ = fVar26;
  auVar5._0_4_ = fVar25;
  auVar5._8_4_ = fVar27;
  auVar5._12_4_ = fVar28;
  auVar6._4_4_ = fVar26;
  auVar6._0_4_ = fVar25;
  auVar6._8_4_ = fVar27;
  auVar6._12_4_ = fVar28;
  auVar23 = NEON_ext(auVar5,auVar6,8,1);
  auVar9._4_4_ = fVar13;
  auVar9._0_4_ = fVar11;
  auVar9._8_4_ = fVar15;
  auVar9._12_4_ = fVar17;
  auVar10._4_4_ = fVar13;
  auVar10._0_4_ = fVar11;
  auVar10._8_4_ = fVar15;
  auVar10._12_4_ = fVar17;
  auVar24 = NEON_ext(auVar9,auVar10,8,1);
  fVar15 = auVar23._0_4_ + fVar25 + auVar23._4_4_ + fVar26;
  fVar11 = auVar24._0_4_ + fVar11 + auVar24._4_4_ + fVar13;
  if (ABS(fVar15) + param_3 < ABS(fVar11)) {
    return false;
  }
  fVar13 = ABS(fVar18) + DAT_01d4c708;
  fVar17 = ABS(fVar15) + DAT_01d4c708;
  if (fVar13 * param_3 + fVar17 * param_2 < ABS(fVar16 * fVar15 - fVar11 * fVar18)) {
    return false;
  }
  fVar25 = ABS(fVar14) + DAT_01d4c708;
  if (fVar25 * param_3 + fVar17 * param_1 < ABS(fVar11 * fVar14 - fVar12 * fVar15)) {
    return false;
  }
  return ABS(fVar12 * fVar18 - fVar16 * fVar14) <= fVar25 * param_2 + fVar13 * param_1;
}


