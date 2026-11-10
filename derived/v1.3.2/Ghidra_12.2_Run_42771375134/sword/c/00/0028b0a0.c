/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028b0a0; name: FUN_0028b0a0
 */


undefined8
FUN_0028b0a0(long param_1,undefined8 param_2,long param_3,undefined1 (*param_4) [12],float *param_5,
            undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  
  fVar15 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar13 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  fVar21 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  fVar22 = (float)*(undefined8 *)(*param_4 + 8);
  fVar19 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  fVar17 = fVar19 * fVar19 + -0.5;
  fVar23 = fVar13 - (float)*(undefined8 *)(param_4[1] + 4);
  fVar25 = fVar14 - (float)((ulong)*(undefined8 *)(param_4[1] + 4) >> 0x20);
  fVar27 = fVar15 - (float)*(undefined8 *)param_4[2];
  fVar16 = (float)*(undefined8 *)*param_4;
  auVar32._4_4_ = fVar25;
  auVar32._0_4_ = fVar23;
  auVar32._8_4_ = fVar27;
  auVar32._12_4_ = 0;
  auVar6._4_4_ = fVar25;
  auVar6._0_4_ = fVar23;
  auVar6._8_4_ = fVar27;
  auVar6._12_4_ = 0;
  auVar32 = NEON_ext(auVar32,auVar6,8,1);
  auVar18._12_4_ = 0;
  auVar18._0_12_ = *param_4;
  auVar30._12_4_ = 0;
  auVar30._0_12_ = *param_4;
  auVar18 = NEON_ext(auVar18,auVar30,8,1);
  fVar24 = fVar16 * fVar23;
  fVar26 = fVar21 * fVar25;
  fVar29 = fVar16 * fVar25 - fVar21 * fVar23;
  uVar31 = NEON_ext(CONCAT44(fVar21 * fVar27 - fVar22 * fVar25,fVar29),
                    CONCAT44(auVar18._4_4_ * fVar25 - fVar21 * auVar32._4_4_,
                             auVar18._0_4_ * fVar23 - fVar16 * auVar32._0_4_),4,1);
  fVar28 = fVar23 * fVar17 - (float)uVar31 * fVar19;
  fVar25 = fVar25 * fVar17 - (float)((ulong)uVar31 >> 0x20) * fVar19;
  fVar17 = fVar27 * fVar17 - fVar29 * fVar19;
  fVar23 = 0.0 - fVar19 * 0.0;
  auVar9._4_4_ = fVar25;
  auVar9._0_4_ = fVar28;
  auVar9._8_4_ = fVar17;
  auVar9._12_4_ = fVar23;
  auVar10._4_4_ = fVar25;
  auVar10._0_4_ = fVar28;
  auVar10._8_4_ = fVar17;
  auVar10._12_4_ = fVar23;
  auVar30 = NEON_ext(auVar9,auVar10,8,1);
  auVar7._4_4_ = fVar26;
  auVar7._0_4_ = fVar24;
  auVar7._8_4_ = fVar22 * fVar27;
  auVar7._12_4_ = 0;
  auVar8._4_4_ = fVar26;
  auVar8._0_4_ = fVar24;
  auVar8._8_4_ = fVar22 * fVar27;
  auVar8._12_4_ = 0;
  auVar32 = NEON_ext(auVar7,auVar8,8,1);
  fVar17 = fVar24 + fVar26 + auVar32._0_4_ + auVar32._4_4_;
  fVar23 = *(float *)(param_1 + 4);
  fVar28 = fVar16 * fVar17 + fVar28;
  fVar25 = fVar21 * fVar17 + fVar25;
  fVar24 = fVar22 * fVar17 + auVar30._0_4_;
  fVar17 = fVar17 * 0.0 + 0.0;
  auVar11._4_4_ = fVar25;
  auVar11._0_4_ = fVar28;
  auVar11._8_4_ = fVar24;
  auVar11._12_4_ = fVar17;
  auVar12._4_4_ = fVar25;
  auVar12._0_4_ = fVar28;
  auVar12._8_4_ = fVar24;
  auVar12._12_4_ = fVar17;
  NEON_ext(auVar11,auVar12,8,1);
  fVar17 = (fVar28 + fVar28) - fVar23;
  if (fVar17 <= *param_5) {
    uVar31 = NEON_ext(CONCAT44(fVar19,fVar19),auVar18._0_8_,4,1);
    fVar26 = fVar16 + fVar16;
    fVar19 = fVar19 + fVar19;
    uVar20 = NEON_fmov(0xbf800000,4);
    fVar24 = fVar16 * fVar26 + (float)uVar31 * fVar19;
    fVar25 = fVar21 * fVar26 + (float)((ulong)uVar31 >> 0x20) * fVar19;
    fVar16 = fVar22 * fVar26 + -fVar21 * fVar19;
    fVar19 = fVar19 * 0.0 + 0.0;
    auVar4._4_4_ = fVar25;
    auVar4._0_4_ = fVar24;
    auVar4._8_4_ = fVar16;
    auVar4._12_4_ = fVar19;
    auVar5._4_4_ = fVar25;
    auVar5._0_4_ = fVar24;
    auVar5._8_4_ = fVar16;
    auVar5._12_4_ = fVar19;
    auVar18 = NEON_ext(auVar4,auVar5,8,1);
    fVar24 = fVar24 + (float)uVar20;
    puVar1 = (undefined8 *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
    fVar13 = fVar13 - fVar24 * fVar23;
    fVar14 = fVar14 - fVar25 * fVar23;
    fVar15 = fVar15 - auVar18._0_4_ * fVar23;
    fVar16 = 0.0 - fVar23 * 0.0;
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = fVar15;
    auVar2._12_4_ = fVar16;
    auVar3._4_4_ = fVar14;
    auVar3._0_4_ = fVar13;
    auVar3._8_4_ = fVar15;
    auVar3._12_4_ = fVar16;
    auVar30 = NEON_ext(auVar2,auVar3,8,1);
    *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
    puVar1[1] = (ulong)(uint)auVar18._0_4_;
    *puVar1 = CONCAT44(fVar25,fVar24);
    puVar1[3] = (ulong)auVar30._0_4_;
    puVar1[2] = CONCAT44(fVar14,fVar13);
    *(float *)((long)puVar1 + 0xc) = fVar17;
    *(undefined4 *)((long)puVar1 + 0x34) = 0xffffffff;
    return 1;
  }
  return 0;
}


