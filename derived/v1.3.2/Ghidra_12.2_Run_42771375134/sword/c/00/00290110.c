/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00290110; name: FUN_00290110
 */


void FUN_00290110(long param_1,long param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  
  uVar8 = (ulong)*(byte *)(param_1 + 0x20);
  if (*(byte *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x1000) = 0;
    return;
  }
  lVar6 = 0;
  uVar5 = 0;
  uVar7 = 1;
  do {
    lVar1 = *(long *)(param_1 + 0x30) + lVar6;
    fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20);
    if (fVar10 <= (float)*param_5) {
      auVar23 = *param_4;
      fVar19 = auVar23._8_4_;
      fVar17 = auVar23._0_4_;
      fVar18 = auVar23._4_4_;
      auVar21 = *(undefined1 (*) [16])(lVar1 + 0x10);
      fVar12 = auVar21._4_4_;
      fVar9 = auVar23._12_4_;
      auVar25._12_4_ = 0;
      auVar25._0_12_ = auVar23._0_12_;
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auVar23._0_12_;
      auVar23 = NEON_ext(auVar25,auVar3,8,1);
      auVar25 = NEON_ext(auVar21,auVar21,8,1);
      fVar13 = auVar21._8_4_;
      fVar11 = auVar21._0_4_;
      fVar20 = fVar9 * fVar9 + -0.5;
      fVar24 = fVar17 * fVar12 - fVar18 * fVar11;
      uVar22 = NEON_ext(CONCAT44(fVar18 * fVar13 - fVar19 * fVar12,fVar24),
                        CONCAT44(auVar23._4_4_ * fVar12 - fVar18 * auVar25._4_4_,
                                 auVar23._0_4_ * fVar11 - fVar17 * auVar25._0_4_),4,1);
      auVar16._0_4_ = fVar17 * fVar11;
      auVar16._4_4_ = fVar18 * fVar12;
      auVar16._8_4_ = fVar19 * fVar13;
      auVar16._12_4_ = auVar21._12_4_ * 0.0;
      puVar2 = (undefined8 *)(param_2 + uVar5 * 0x40);
      auVar14._0_4_ = fVar11 * fVar20 + (float)uVar22 * fVar9;
      auVar14._4_4_ = fVar12 * fVar20 + (float)((ulong)uVar22 >> 0x20) * fVar9;
      auVar14._8_4_ = fVar13 * fVar20 + fVar24 * fVar9;
      auVar14._12_4_ = fVar9 * 0.0 + 0.0;
      auVar23 = NEON_ext(auVar14,auVar14,8,1);
      auVar21 = NEON_ext(auVar16,auVar16,8,1);
      fVar9 = auVar16._0_4_ + auVar16._4_4_ + auVar21._0_4_ + auVar21._4_4_;
      uVar5 = (ulong)((int)uVar5 + 1);
      auVar15._0_4_ = fVar17 * fVar9 + auVar14._0_4_;
      auVar15._4_4_ = fVar18 * fVar9 + auVar14._4_4_;
      auVar15._8_4_ = fVar19 * fVar9 + auVar23._0_4_;
      auVar15._12_4_ = fVar9 * 0.0 + 0.0;
      auVar23 = NEON_ext(auVar15,auVar15,8,1);
      fVar9 = (float)*(undefined8 *)param_4[1] + auVar15._0_4_ + auVar15._0_4_;
      fVar11 = (float)((ulong)*(undefined8 *)param_4[1] >> 0x20) + auVar15._4_4_ + auVar15._4_4_;
      fVar12 = (float)*(undefined8 *)(param_4[1] + 8) + auVar23._0_4_ + auVar23._0_4_;
      fVar13 = (float)((ulong)*(undefined8 *)(param_4[1] + 8) >> 0x20) + 0.0;
      auVar23._4_4_ = fVar11;
      auVar23._0_4_ = fVar9;
      auVar23._8_4_ = fVar12;
      auVar23._12_4_ = fVar13;
      auVar21._4_4_ = fVar11;
      auVar21._0_4_ = fVar9;
      auVar21._8_4_ = fVar12;
      auVar21._12_4_ = fVar13;
      auVar23 = NEON_ext(auVar23,auVar21,8,1);
      uVar22 = *param_3;
      puVar2[1] = param_3[1];
      *puVar2 = uVar22;
      puVar2[3] = (ulong)auVar23._0_4_;
      puVar2[2] = CONCAT44(fVar11,fVar9);
      *(float *)((long)puVar2 + 0xc) = fVar10;
      *(undefined4 *)((long)puVar2 + 0x34) = 0xffffffff;
      uVar8 = (ulong)*(byte *)(param_1 + 0x20);
    }
    if (0x3f < (uint)uVar5) break;
    lVar6 = lVar6 + 0x30;
    bVar4 = uVar7 < uVar8;
    uVar7 = uVar7 + 1;
  } while (bVar4);
  *(uint *)(param_2 + 0x1000) = (uint)uVar5;
  return;
}


