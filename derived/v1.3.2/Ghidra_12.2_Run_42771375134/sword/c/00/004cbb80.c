/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cbb80; name: FUN_004cbb80
 */


void FUN_004cbb80(float param_1,float param_2,ushort *param_3,long *param_4,undefined8 *param_5)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar1 = *param_3;
  if (uVar1 >> 2 != 0) {
    fVar22 = param_1 + param_2;
    fVar21 = param_2 * 4.0;
    fVar18 = param_1 + param_2 * 3.0;
    lVar15 = *param_4;
    uVar16 = (ulong)*(ushort *)(param_4 + 2);
    fVar25 = param_2 + param_2 + param_1;
    lVar14 = 0;
    do {
      lVar17 = lVar14 * 0x10;
      lVar14 = lVar14 + 1;
      pfVar2 = (float *)(lVar15 + lVar17);
      pfVar3 = (float *)(lVar15 + uVar16 * 4 + lVar17);
      pfVar4 = (float *)(lVar15 + uVar16 * 8 + lVar17);
      pfVar5 = (float *)(lVar15 + uVar16 * 0x1c + lVar17);
      pfVar6 = (float *)(lVar15 + uVar16 * 0xc + lVar17);
      pfVar7 = (float *)(lVar15 + uVar16 * 0x10 + lVar17);
      pfVar8 = (float *)(lVar15 + uVar16 * 0x14 + lVar17);
      pfVar9 = (float *)(lVar15 + uVar16 * 0x18 + lVar17);
      auVar19._0_4_ = *pfVar2 * param_1;
      auVar19._4_4_ = pfVar2[1] * fVar22;
      auVar19._8_4_ = pfVar2[2] * fVar25;
      auVar19._12_4_ = pfVar2[3] * fVar18;
      auVar23._0_4_ = *pfVar3 * param_1;
      auVar23._4_4_ = pfVar3[1] * fVar22;
      auVar23._8_4_ = pfVar3[2] * fVar25;
      auVar23._12_4_ = pfVar3[3] * fVar18;
      auVar26._0_4_ = *pfVar4 * param_1;
      auVar26._4_4_ = pfVar4[1] * fVar22;
      auVar26._8_4_ = pfVar4[2] * fVar25;
      auVar26._12_4_ = pfVar4[3] * fVar18;
      auVar27._0_4_ = *pfVar5 * param_1;
      auVar27._4_4_ = pfVar5[1] * fVar22;
      auVar27._8_4_ = pfVar5[2] * fVar25;
      auVar27._12_4_ = pfVar5[3] * fVar18;
      auVar28._0_4_ = *pfVar6 * param_1;
      auVar28._4_4_ = pfVar6[1] * fVar22;
      auVar28._8_4_ = pfVar6[2] * fVar25;
      auVar28._12_4_ = pfVar6[3] * fVar18;
      auVar20 = NEON_ext(auVar19,auVar19,8,1);
      auVar30._0_4_ = *pfVar7 * param_1;
      auVar30._4_4_ = pfVar7[1] * fVar22;
      auVar30._8_4_ = pfVar7[2] * fVar25;
      auVar30._12_4_ = pfVar7[3] * fVar18;
      auVar32._0_4_ = *pfVar8 * param_1;
      auVar32._4_4_ = pfVar8[1] * fVar22;
      auVar32._8_4_ = pfVar8[2] * fVar25;
      auVar32._12_4_ = pfVar8[3] * fVar18;
      auVar24 = NEON_ext(auVar23,auVar23,8,1);
      auVar33._0_4_ = *pfVar9 * param_1;
      auVar33._4_4_ = pfVar9[1] * fVar22;
      auVar33._8_4_ = pfVar9[2] * fVar25;
      auVar33._12_4_ = pfVar9[3] * fVar18;
      uVar10 = CONCAT44(auVar27._0_4_,auVar26._0_4_);
      uVar13 = CONCAT44(auVar33._0_4_,auVar32._0_4_);
      uVar11 = CONCAT44(auVar27._4_4_,auVar26._4_4_);
      auVar26 = NEON_ext(auVar26,auVar26,8,1);
      auVar27 = NEON_ext(auVar27,auVar27,8,1);
      auVar29 = NEON_ext(auVar28,auVar28,8,1);
      uVar12 = CONCAT44(auVar33._4_4_,auVar32._4_4_);
      auVar31 = NEON_ext(auVar30,auVar30,8,1);
      auVar32 = NEON_ext(auVar32,auVar32,8,1);
      auVar33 = NEON_ext(auVar33,auVar33,8,1);
      param_5[1] = uVar10;
      uVar10 = CONCAT44(auVar23._0_4_,auVar19._0_4_);
      *param_5 = uVar10;
      param_5[3] = uVar13;
      uVar10 = CONCAT44(auVar30._0_4_,auVar28._0_4_);
      param_5[2] = uVar10;
      param_1 = param_1 + fVar21;
      fVar22 = fVar22 + fVar21;
      fVar25 = fVar25 + fVar21;
      fVar18 = fVar18 + fVar21;
      param_5[5] = uVar11;
      uVar10 = CONCAT44(auVar23._4_4_,auVar19._4_4_);
      param_5[4] = uVar10;
      param_5[7] = uVar12;
      uVar10 = CONCAT44(auVar30._4_4_,auVar28._4_4_);
      param_5[6] = uVar10;
      param_5[9] = CONCAT44(auVar27._0_4_,auVar26._0_4_);
      param_5[8] = CONCAT44(auVar24._0_4_,auVar20._0_4_);
      param_5[0xb] = CONCAT44(auVar33._0_4_,auVar32._0_4_);
      param_5[10] = CONCAT44(auVar31._0_4_,auVar29._0_4_);
      param_5[0xd] = CONCAT44(auVar27._4_4_,auVar26._4_4_);
      param_5[0xc] = CONCAT44(auVar24._4_4_,auVar20._4_4_);
      param_5[0xf] = CONCAT44(auVar33._4_4_,auVar32._4_4_);
      param_5[0xe] = CONCAT44(auVar31._4_4_,auVar29._4_4_);
      param_5 = param_5 + 0x10;
    } while ((uint)(uVar1 >> 2) != (uint)lVar14);
  }
  return;
}


