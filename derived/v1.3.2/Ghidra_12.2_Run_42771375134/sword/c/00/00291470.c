/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00291470; name: FUN_00291470
 */


undefined8
FUN_00291470(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  
  uVar6 = (ulong)*(byte *)(param_1 + 0x20);
  if (uVar6 == 0) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    lVar7 = *(long *)(param_1 + 0x30);
  }
  else {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    lVar7 = *(long *)(param_1 + 0x30);
    lVar8 = 0;
    uVar9 = 0;
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar8);
      fVar16 = (float)puVar1[2] - (float)*param_3;
      fVar17 = (float)((ulong)puVar1[2] >> 0x20) - (float)((ulong)*param_3 >> 0x20);
      fVar18 = (float)puVar1[3] - (float)param_3[1];
      fVar19 = (float)((ulong)puVar1[3] >> 0x20) - (float)((ulong)param_3[1] >> 0x20);
      fVar12 = (float)*puVar1 - (float)uVar10;
      fVar13 = (float)((ulong)*puVar1 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
      fVar14 = (float)puVar1[1] - (float)uVar11;
      fVar15 = (float)((ulong)puVar1[1] >> 0x20) - (float)((ulong)uVar11 >> 0x20);
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      fVar19 = fVar19 * fVar19;
      auVar4._4_4_ = fVar17;
      auVar4._0_4_ = fVar16;
      auVar4._8_4_ = fVar18;
      auVar4._12_4_ = fVar19;
      auVar5._4_4_ = fVar17;
      auVar5._0_4_ = fVar16;
      auVar5._8_4_ = fVar18;
      auVar5._12_4_ = fVar19;
      auVar20 = NEON_ext(auVar4,auVar5,8,1);
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar18 = auVar20._0_4_ + auVar20._4_4_;
      auVar20._4_4_ = fVar13;
      auVar20._0_4_ = fVar12;
      auVar20._8_4_ = fVar14;
      auVar20._12_4_ = fVar15;
      auVar2._4_4_ = fVar13;
      auVar2._0_4_ = fVar12;
      auVar2._8_4_ = fVar14;
      auVar2._12_4_ = fVar15;
      auVar20 = NEON_ext(auVar20,auVar2,8,1);
      fVar14 = auVar20._0_4_ + auVar20._4_4_;
      uVar3 = NEON_fmin(CONCAT44(fVar16 + fVar17 + fVar18,fVar16 + fVar17 + fVar18),
                        CONCAT44(fVar12 + fVar13 + fVar14,fVar12 + fVar13 + fVar14),4);
      if ((float)uVar3 < (float)*param_5 * (float)*param_5) {
        ((undefined8 *)(lVar7 + lVar8))[1] = uVar11;
        *(undefined8 *)(lVar7 + lVar8) = uVar10;
        uVar10 = *param_3;
        lVar7 = *(long *)(param_1 + 0x30) + lVar8;
        *(undefined8 *)(lVar7 + 0x18) = param_3[1];
        *(undefined8 *)(lVar7 + 0x10) = uVar10;
        uVar10 = *param_4;
        lVar8 = *(long *)(param_1 + 0x30) + lVar8;
        *(undefined8 *)(lVar8 + 0x28) = param_4[1];
        *(undefined8 *)(lVar8 + 0x20) = uVar10;
        return 0;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x30;
    } while (uVar9 < uVar6);
    if (3 < *(byte *)(param_1 + 0x20)) {
      FUN_0028f420();
      return 0;
    }
  }
  puVar1 = (undefined8 *)(lVar7 + uVar6 * 0x30);
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  uVar10 = *param_3;
  lVar7 = *(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x20) * 0x30;
  *(undefined8 *)(lVar7 + 0x18) = param_3[1];
  *(undefined8 *)(lVar7 + 0x10) = uVar10;
  uVar11 = param_4[1];
  uVar10 = *param_4;
  lVar7 = *(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x20) * 0x30;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) + 1;
  *(undefined8 *)(lVar7 + 0x28) = uVar11;
  *(undefined8 *)(lVar7 + 0x20) = uVar10;
  return 1;
}


