/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006aea50; name: FUN_006aea50
 */


void FUN_006aea50(long param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar5 = (undefined8 *)(param_1 + 0x40);
  *puVar5 = 0;
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar14 = *(float *)(param_1 + 0x34);
  fVar7 = fVar16 * fVar16;
  fVar12 = fVar14 * fVar14;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(float *)(param_1 + 0x60) = fVar16;
  *(float *)(param_1 + 100) = fVar14;
  *(float *)(param_1 + 0x68) = fVar7;
  *(float *)(param_1 + 0x6c) = fVar12;
  if (fVar12 <= fVar7) {
    fVar14 = SQRT(fVar7 - fVar12);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *puVar5 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (NAN(fVar14)) {
      fVar14 = sqrtf(fVar7 - fVar12);
    }
    fVar13 = *(float *)(param_1 + 0x54);
    fVar12 = *(float *)(param_1 + 0x58);
    fVar9 = *(float *)(param_1 + 0x5c);
    fVar7 = -fVar14;
    fVar10 = (float)*(undefined8 *)(param_1 + 0x48);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  }
  else {
    fVar8 = SQRT(fVar12 - fVar7);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *puVar5 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar12 - fVar7);
    }
    fVar7 = *(float *)(param_1 + 0x50);
    fVar12 = *(float *)(param_1 + 0x58);
    fVar9 = *(float *)(param_1 + 0x5c);
    fVar13 = -fVar8;
    fVar10 = (float)*(undefined8 *)(param_1 + 0x48);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    fVar14 = (float)*(undefined8 *)(param_1 + 0x40);
  }
  *(float *)(param_1 + 0x58) = fVar12;
  *(float *)(param_1 + 0x5c) = fVar9;
  *(float *)(param_1 + 0x50) = fVar7;
  *(float *)(param_1 + 0x54) = fVar13;
  puVar6 = (undefined8 *)(param_1 + 0x80);
  *puVar6 = 0;
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar11,fVar10);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar8,fVar14);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  fVar14 = (fVar16 - fVar14) * (fVar16 - fVar14);
  fVar8 = (0.0 - fVar8) * (0.0 - fVar8);
  fVar10 = (0.0 - fVar10) * (0.0 - fVar10);
  fVar11 = (0.0 - fVar11) * (0.0 - fVar11);
  auVar17._4_4_ = fVar8;
  auVar17._0_4_ = fVar14;
  auVar17._8_4_ = fVar10;
  auVar17._12_4_ = fVar11;
  auVar18._4_4_ = fVar8;
  auVar18._0_4_ = fVar14;
  auVar18._8_4_ = fVar10;
  auVar18._12_4_ = fVar11;
  auVar18 = NEON_ext(auVar17,auVar18,8,1);
  auVar15._0_4_ = (fVar16 - fVar7) * (fVar16 - fVar7);
  auVar15._4_4_ = (0.0 - fVar13) * (0.0 - fVar13);
  auVar15._8_4_ = (0.0 - fVar12) * (0.0 - fVar12);
  auVar15._12_4_ = (0.0 - fVar9) * (0.0 - fVar9);
  auVar17 = NEON_ext(auVar15,auVar15,8,1);
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar12 = *(float *)(param_1 + 0x30);
  fVar7 = -fVar12;
  if (0.0 <= fVar12) {
    fVar7 = fVar12;
  }
  *(float *)(param_1 + 0xa0) = fVar16;
  *(float *)(param_1 + 0xa4) = fVar7;
  fVar7 = fVar7 * fVar7;
  fVar12 = fVar16 * fVar16;
  *(float *)(param_1 + 0x70) =
       SQRT(auVar17._0_4_ + auVar15._0_4_ + auVar17._4_4_ + auVar15._4_4_) +
       SQRT(auVar18._0_4_ + fVar14 + auVar18._4_4_ + fVar8);
  *(float *)(param_1 + 0xa8) = fVar12;
  *(float *)(param_1 + 0xac) = fVar7;
  if (fVar7 <= fVar12) {
    fVar14 = SQRT(fVar12 - fVar7);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (NAN(fVar14)) {
      fVar14 = sqrtf(fVar12 - fVar7);
    }
    fVar10 = (float)*(undefined8 *)(param_1 + 0x98);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
    fVar13 = -fVar14;
    fVar9 = *(float *)(param_1 + 0x84);
    fVar7 = *(float *)(param_1 + 0x88);
    fVar12 = *(float *)(param_1 + 0x8c);
  }
  else {
    fVar9 = SQRT(fVar7 - fVar12);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar7 - fVar12);
    }
    fVar10 = (float)*(undefined8 *)(param_1 + 0x98);
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    fVar13 = (float)*(undefined8 *)(param_1 + 0x90);
    fVar8 = -fVar9;
    fVar14 = *(float *)(param_1 + 0x80);
    fVar7 = *(float *)(param_1 + 0x88);
    fVar12 = *(float *)(param_1 + 0x8c);
  }
  *(ulong *)(param_1 + 0x98) = CONCAT44(fVar11,fVar10);
  *(ulong *)(param_1 + 0x90) = CONCAT44(fVar8,fVar13);
  *(float *)(param_1 + 0x88) = fVar7;
  *(float *)(param_1 + 0x8c) = fVar12;
  *(float *)(param_1 + 0x80) = fVar14;
  *(float *)(param_1 + 0x84) = fVar9;
  fVar13 = (fVar16 - fVar13) * (fVar16 - fVar13);
  fVar8 = (0.0 - fVar8) * (0.0 - fVar8);
  fVar10 = (0.0 - fVar10) * (0.0 - fVar10);
  fVar11 = (0.0 - fVar11) * (0.0 - fVar11);
  auVar1._4_4_ = fVar8;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar10;
  auVar1._12_4_ = fVar11;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar13;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar11;
  auVar17 = NEON_ext(auVar1,auVar2,8,1);
  fVar14 = (fVar16 - fVar14) * (fVar16 - fVar14);
  fVar16 = (0.0 - fVar9) * (0.0 - fVar9);
  fVar7 = (0.0 - fVar7) * (0.0 - fVar7);
  fVar12 = (0.0 - fVar12) * (0.0 - fVar12);
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar14;
  auVar3._8_4_ = fVar7;
  auVar3._12_4_ = fVar12;
  auVar4._4_4_ = fVar16;
  auVar4._0_4_ = fVar14;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar12;
  auVar18 = NEON_ext(auVar3,auVar4,8,1);
  *(float *)(param_1 + 0xb0) =
       SQRT(auVar17._0_4_ + fVar13 + auVar17._4_4_ + fVar8) +
       SQRT(auVar18._0_4_ + fVar14 + auVar18._4_4_ + fVar16);
  if (0.0 <= *param_3) {
    puVar6 = puVar5;
  }
  FUN_006af610(puVar6,param_2,param_3,param_4,param_5);
  return;
}


