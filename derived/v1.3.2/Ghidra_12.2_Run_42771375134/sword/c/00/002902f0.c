/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002902f0; name: FUN_002902f0
 */


void FUN_002902f0(long param_1,long param_2,undefined8 *param_3,float *param_4,
                 undefined1 (*param_5) [16],undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x20);
  if (*(byte *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x1000) = 0;
    return;
  }
  lVar4 = 0;
  uVar5 = 0;
  uVar6 = 1;
  do {
    fVar12 = (float)*param_6;
    fVar9 = (float)((ulong)*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar4 + 0x28) >> 0x20) -
            fVar12;
    if (fVar9 <= (float)*param_7) {
      auVar21 = *param_5;
      fVar19 = auVar21._8_4_;
      fVar17 = auVar21._0_4_;
      fVar18 = auVar21._4_4_;
      auVar22 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x30) + lVar4);
      fVar11 = auVar22._4_4_;
      auVar26 = NEON_ext(auVar22,auVar22,8,1);
      auVar24._12_4_ = 0;
      auVar24._0_12_ = auVar21._0_12_;
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar21._0_12_;
      auVar24 = NEON_ext(auVar24,auVar2,8,1);
      fVar16 = auVar22._8_4_;
      fVar10 = auVar22._0_4_;
      fVar8 = auVar21._12_4_;
      fVar20 = fVar8 * fVar8 + -0.5;
      fVar25 = fVar17 * fVar11 - fVar18 * fVar10;
      uVar23 = NEON_ext(CONCAT44(fVar18 * fVar16 - fVar19 * fVar11,fVar25),
                        CONCAT44(auVar24._4_4_ * fVar11 - fVar18 * auVar26._4_4_,
                                 auVar24._0_4_ * fVar10 - fVar17 * auVar26._0_4_),4,1);
      auVar15._0_4_ = fVar17 * fVar10;
      auVar15._4_4_ = fVar18 * fVar11;
      auVar15._8_4_ = fVar19 * fVar16;
      auVar15._12_4_ = auVar22._12_4_ * 0.0;
      puVar1 = (undefined8 *)(param_2 + uVar5 * 0x40);
      uVar5 = (ulong)((int)uVar5 + 1);
      auVar13._0_4_ = fVar10 * fVar20 + (float)uVar23 * fVar8;
      auVar13._4_4_ = fVar11 * fVar20 + (float)((ulong)uVar23 >> 0x20) * fVar8;
      auVar13._8_4_ = fVar16 * fVar20 + fVar25 * fVar8;
      auVar13._12_4_ = fVar8 * 0.0 + 0.0;
      auVar21 = NEON_ext(auVar13,auVar13,8,1);
      auVar22 = NEON_ext(auVar15,auVar15,8,1);
      fVar8 = auVar15._0_4_ + auVar15._4_4_ + auVar22._0_4_ + auVar22._4_4_;
      auVar14._0_4_ = fVar17 * fVar8 + auVar13._0_4_;
      auVar14._4_4_ = fVar18 * fVar8 + auVar13._4_4_;
      auVar14._8_4_ = fVar19 * fVar8 + auVar21._0_4_;
      auVar14._12_4_ = fVar8 * 0.0 + 0.0;
      auVar21 = NEON_ext(auVar14,auVar14,8,1);
      auVar26._0_4_ = *(float *)param_5[1] + auVar14._0_4_ + auVar14._0_4_;
      auVar26._4_4_ = *(float *)(param_5[1] + 4) + auVar14._4_4_ + auVar14._4_4_;
      auVar26._8_4_ = *(float *)(param_5[1] + 8) + auVar21._0_4_ + auVar21._0_4_;
      auVar26._12_4_ = *(float *)(param_5[1] + 0xc) + 0.0;
      auVar21 = NEON_ext(auVar26,auVar26,8,1);
      fVar8 = auVar26._0_4_ - *param_4 * fVar12;
      fVar10 = auVar26._4_4_ - param_4[1] * fVar12;
      fVar11 = auVar21._0_4_ - param_4[2] * fVar12;
      fVar12 = 0.0 - param_4[3] * fVar12;
      auVar21._4_4_ = fVar10;
      auVar21._0_4_ = fVar8;
      auVar21._8_4_ = fVar11;
      auVar21._12_4_ = fVar12;
      auVar22._4_4_ = fVar10;
      auVar22._0_4_ = fVar8;
      auVar22._8_4_ = fVar11;
      auVar22._12_4_ = fVar12;
      auVar21 = NEON_ext(auVar21,auVar22,8,1);
      uVar23 = *param_3;
      puVar1[1] = param_3[1];
      *puVar1 = uVar23;
      puVar1[3] = (ulong)auVar21._0_4_;
      puVar1[2] = CONCAT44(fVar10,fVar8);
      *(float *)((long)puVar1 + 0xc) = fVar9;
      *(undefined4 *)((long)puVar1 + 0x34) = 0xffffffff;
      uVar7 = (ulong)*(byte *)(param_1 + 0x20);
    }
    if (0x3f < (uint)uVar5) break;
    lVar4 = lVar4 + 0x30;
    bVar3 = uVar6 < uVar7;
    uVar6 = uVar6 + 1;
  } while (bVar3);
  *(uint *)(param_2 + 0x1000) = (uint)uVar5;
  return;
}


