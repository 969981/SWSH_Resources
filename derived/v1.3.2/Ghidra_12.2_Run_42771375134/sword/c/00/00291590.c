/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00291590; name: FUN_00291590
 */


undefined8
FUN_00291590(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  float *pfVar1;
  long lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  
  bVar3 = *(byte *)(param_1 + 0x20);
  uVar8 = (ulong)bVar3;
  if (uVar8 == 0) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar9 = *(undefined8 **)(param_1 + 0x30);
  }
  else {
    fVar16 = (float)param_3[1];
    fVar17 = (float)((ulong)param_3[1] >> 0x20);
    fVar14 = (float)*param_3;
    fVar15 = (float)((ulong)*param_3 >> 0x20);
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar9 = *(undefined8 **)(param_1 + 0x30);
    lVar10 = 0;
    uVar11 = 0;
    do {
      pfVar1 = (float *)((long)puVar9 + lVar10);
      fVar25 = (float)*(undefined8 *)(pfVar1 + 4) - fVar14;
      fVar26 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) - fVar15;
      fVar27 = (float)*(undefined8 *)(pfVar1 + 6) - fVar16;
      fVar28 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) - fVar17;
      fVar18 = *pfVar1 - (float)uVar12;
      fVar22 = pfVar1[1] - (float)((ulong)uVar12 >> 0x20);
      fVar23 = pfVar1[2] - (float)uVar13;
      fVar24 = pfVar1[3] - (float)((ulong)uVar13 >> 0x20);
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      fVar27 = fVar27 * fVar27;
      fVar28 = fVar28 * fVar28;
      auVar29._4_4_ = fVar26;
      auVar29._0_4_ = fVar25;
      auVar29._8_4_ = fVar27;
      auVar29._12_4_ = fVar28;
      auVar21._4_4_ = fVar26;
      auVar21._0_4_ = fVar25;
      auVar21._8_4_ = fVar27;
      auVar21._12_4_ = fVar28;
      auVar29 = NEON_ext(auVar29,auVar21,8,1);
      auVar20._0_4_ = fVar18 * fVar18;
      auVar20._4_4_ = fVar22 * fVar22;
      auVar20._8_4_ = fVar23 * fVar23;
      auVar20._12_4_ = fVar24 * fVar24;
      fVar18 = auVar29._0_4_ + auVar29._4_4_;
      auVar29 = NEON_ext(auVar20,auVar20,8,1);
      fVar22 = auVar29._0_4_ + auVar29._4_4_;
      uVar19 = NEON_fmin(CONCAT44(fVar25 + fVar26 + fVar18,fVar25 + fVar26 + fVar18),
                         CONCAT44(auVar20._0_4_ + auVar20._4_4_ + fVar22,
                                  auVar20._0_4_ + auVar20._4_4_ + fVar22),4);
      if ((float)uVar19 < (float)*param_5 * (float)*param_5) {
        ((undefined8 *)((long)puVar9 + lVar10))[1] = uVar13;
        *(undefined8 *)((long)puVar9 + lVar10) = uVar12;
        uVar12 = *param_3;
        lVar2 = *(long *)(param_1 + 0x30) + lVar10;
        *(undefined8 *)(lVar2 + 0x18) = param_3[1];
        *(undefined8 *)(lVar2 + 0x10) = uVar12;
        uVar12 = *param_4;
        lVar10 = *(long *)(param_1 + 0x30) + lVar10;
        *(undefined8 *)(lVar10 + 0x28) = param_4[1];
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        return 0;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x30;
    } while (uVar11 < uVar8);
    if (1 < bVar3) {
      if (bVar3 != 2) {
        return 0;
      }
      fVar18 = (float)puVar9[2] - fVar14;
      fVar22 = (float)((ulong)puVar9[2] >> 0x20) - fVar15;
      fVar23 = (float)puVar9[3] - fVar16;
      fVar24 = (float)((ulong)puVar9[3] >> 0x20) - fVar17;
      fVar15 = *(float *)((long)puVar9 + 0x44) - fVar15;
      fVar17 = *(float *)((long)puVar9 + 0x4c) - fVar17;
      fVar18 = fVar18 * fVar18;
      fVar22 = fVar22 * fVar22;
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      auVar6._4_4_ = fVar22;
      auVar6._0_4_ = fVar18;
      auVar6._8_4_ = fVar23;
      auVar6._12_4_ = fVar24;
      auVar7._4_4_ = fVar22;
      auVar7._0_4_ = fVar18;
      auVar7._8_4_ = fVar23;
      auVar7._12_4_ = fVar24;
      auVar29 = NEON_ext(auVar6,auVar7,8,1);
      fVar14 = (*(float *)(puVar9 + 8) - fVar14) * (*(float *)(puVar9 + 8) - fVar14);
      fVar15 = fVar15 * fVar15;
      fVar16 = (*(float *)(puVar9 + 9) - fVar16) * (*(float *)(puVar9 + 9) - fVar16);
      fVar17 = fVar17 * fVar17;
      auVar4._4_4_ = fVar15;
      auVar4._0_4_ = fVar14;
      auVar4._8_4_ = fVar16;
      auVar4._12_4_ = fVar17;
      auVar5._4_4_ = fVar15;
      auVar5._0_4_ = fVar14;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar17;
      auVar21 = NEON_ext(auVar4,auVar5,8,1);
      if (fVar14 + fVar15 + auVar21._0_4_ + auVar21._4_4_ <
          fVar18 + fVar22 + auVar29._0_4_ + auVar29._4_4_) {
        puVar9[7] = uVar13;
        puVar9[6] = uVar12;
        uVar12 = *param_3;
        lVar10 = *(long *)(param_1 + 0x30);
        *(undefined8 *)(lVar10 + 0x48) = param_3[1];
        *(undefined8 *)(lVar10 + 0x40) = uVar12;
        uVar12 = *param_4;
        lVar10 = *(long *)(param_1 + 0x30);
        *(undefined8 *)(lVar10 + 0x58) = param_4[1];
        *(undefined8 *)(lVar10 + 0x50) = uVar12;
        return 0;
      }
      puVar9[1] = uVar13;
      *puVar9 = uVar12;
      uVar12 = *param_3;
      lVar10 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar10 + 0x18) = param_3[1];
      *(undefined8 *)(lVar10 + 0x10) = uVar12;
      uVar12 = *param_4;
      lVar10 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar10 + 0x28) = param_4[1];
      *(undefined8 *)(lVar10 + 0x20) = uVar12;
      return 0;
    }
  }
  (puVar9 + uVar8 * 6)[1] = uVar13;
  puVar9[uVar8 * 6] = uVar12;
  uVar12 = *param_3;
  lVar10 = *(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x20) * 0x30;
  *(undefined8 *)(lVar10 + 0x18) = param_3[1];
  *(undefined8 *)(lVar10 + 0x10) = uVar12;
  lVar10 = *(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x20) * 0x30;
  uVar13 = param_4[1];
  uVar12 = *param_4;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) + 1;
  *(undefined8 *)(lVar10 + 0x28) = uVar13;
  *(undefined8 *)(lVar10 + 0x20) = uVar12;
  return 1;
}


