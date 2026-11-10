/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd6620; name: FUN_00dd6620
 */


undefined1  [16] FUN_00dd6620(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar1 = *param_1;
  fVar14 = auVar1._8_4_;
  fVar12 = auVar1._4_4_;
  fVar6 = (float)param_2[2];
  auVar8._0_4_ = -(uint)(fVar6 < auVar1._0_4_);
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  auVar8._4_4_ = auVar8._0_4_;
  auVar8._8_4_ = auVar8._0_4_;
  auVar8._12_4_ = auVar8._0_4_;
  auVar9._4_4_ = fVar12;
  auVar9._0_4_ = fVar6;
  auVar9._8_4_ = fVar14;
  auVar9._12_4_ = auVar1._12_4_;
  auVar9 = auVar1 ^ (auVar1 ^ auVar9) & auVar8;
  fVar6 = (float)*param_2;
  fVar13 = (float)((ulong)*param_2 >> 0x20);
  auVar15._0_4_ = -(uint)(auVar1._0_4_ < fVar6);
  auVar15._4_4_ = auVar15._0_4_;
  auVar15._8_4_ = auVar15._0_4_;
  auVar15._12_4_ = auVar15._0_4_;
  auVar1._4_4_ = auVar9._4_4_;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = auVar9._8_4_;
  auVar1._12_4_ = auVar9._12_4_;
  auVar9 = auVar9 ^ (auVar9 ^ auVar1) & auVar15;
  auVar10._0_4_ = -(uint)(fVar7 < fVar12);
  auVar10._4_4_ = auVar10._0_4_;
  auVar10._8_4_ = auVar10._0_4_;
  auVar10._12_4_ = auVar10._0_4_;
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = auVar9._0_4_;
  auVar4._8_8_ = auVar9._8_8_;
  auVar9 = auVar9 ^ (auVar9 ^ auVar4) & auVar10;
  auVar16._0_4_ = -(uint)(fVar12 < fVar13);
  auVar16._4_4_ = auVar16._0_4_;
  auVar16._8_4_ = auVar16._0_4_;
  auVar16._12_4_ = auVar16._0_4_;
  auVar2._4_4_ = fVar13;
  auVar2._0_4_ = auVar9._0_4_;
  auVar2._8_4_ = auVar9._8_4_;
  auVar2._12_4_ = auVar9._12_4_;
  auVar9 = auVar9 ^ (auVar9 ^ auVar2) & auVar16;
  auVar11._0_4_ = -(uint)((float)param_2[3] < fVar14);
  auVar11._4_4_ = auVar11._0_4_;
  auVar11._8_4_ = auVar11._0_4_;
  auVar11._12_4_ = auVar11._0_4_;
  auVar3._8_4_ = (float)param_2[3];
  auVar3._0_8_ = auVar9._0_8_;
  auVar3._12_4_ = 0;
  auVar9 = auVar9 ^ (auVar9 ^ auVar3) & auVar11;
  auVar5._0_4_ = -(uint)(fVar14 < (float)param_2[1]);
  auVar17._8_4_ = (float)param_2[1];
  auVar17._0_8_ = auVar9._0_8_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  auVar17._12_4_ = 0;
  return auVar9 ^ (auVar9 ^ auVar17) & auVar5;
}


