/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cba70; name: FUN_004cba70
 */


void FUN_004cba70(float param_1,float param_2,ushort *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  
  if (*param_3 >> 2 != 0) {
    fVar15 = param_1 + param_2;
    fVar14 = param_2 * 4.0;
    fVar11 = param_1 + param_2 * 3.0;
    uVar8 = (ulong)*(ushort *)(param_4 + 2);
    fVar18 = param_2 + param_2 + param_1;
    iVar10 = -(uint)(*param_3 >> 2);
    puVar9 = (undefined8 *)*param_4;
    do {
      pfVar1 = (float *)((long)puVar9 + uVar8 * 4);
      iVar10 = iVar10 + 1;
      pfVar2 = (float *)(puVar9 + uVar8);
      pfVar3 = (float *)((long)puVar9 + uVar8 * 0x14);
      pfVar4 = (float *)((long)puVar9 + uVar8 * 0xc);
      pfVar5 = (float *)(puVar9 + uVar8 * 2);
      fVar25 = (float)*puVar9 * param_1;
      fVar26 = (float)((ulong)*puVar9 >> 0x20) * fVar15;
      fVar27 = (float)puVar9[1] * fVar18;
      fVar28 = (float)((ulong)puVar9[1] >> 0x20) * fVar11;
      auVar13._4_4_ = fVar26;
      auVar13._0_4_ = fVar25;
      auVar13._8_4_ = fVar27;
      auVar13._12_4_ = fVar28;
      auVar17._4_4_ = fVar26;
      auVar17._0_4_ = fVar25;
      auVar17._8_4_ = fVar27;
      auVar17._12_4_ = fVar28;
      auVar29 = NEON_ext(auVar13,auVar17,8,1);
      auVar12._0_4_ = *pfVar1 * param_1;
      auVar12._4_4_ = pfVar1[1] * fVar15;
      auVar12._8_4_ = pfVar1[2] * fVar18;
      auVar12._12_4_ = pfVar1[3] * fVar11;
      auVar16._0_4_ = *pfVar2 * param_1;
      auVar16._4_4_ = pfVar2[1] * fVar15;
      auVar16._8_4_ = pfVar2[2] * fVar18;
      auVar16._12_4_ = pfVar2[3] * fVar11;
      auVar19._0_4_ = *pfVar3 * param_1;
      auVar19._4_4_ = pfVar3[1] * fVar15;
      auVar19._8_4_ = pfVar3[2] * fVar18;
      auVar19._12_4_ = pfVar3[3] * fVar11;
      auVar21._0_4_ = *pfVar4 * param_1;
      auVar21._4_4_ = pfVar4[1] * fVar15;
      auVar21._8_4_ = pfVar4[2] * fVar18;
      auVar21._12_4_ = pfVar4[3] * fVar11;
      auVar13 = NEON_ext(auVar12,auVar12,8,1);
      auVar23._0_4_ = *pfVar5 * param_1;
      auVar23._4_4_ = pfVar5[1] * fVar15;
      auVar23._8_4_ = pfVar5[2] * fVar18;
      auVar23._12_4_ = pfVar5[3] * fVar11;
      uVar7 = CONCAT44(auVar19._0_4_,auVar16._0_4_);
      uVar6 = CONCAT44(auVar12._4_4_,fVar26);
      auVar17 = NEON_ext(auVar16,auVar16,8,1);
      auVar20 = NEON_ext(auVar19,auVar19,8,1);
      auVar22 = NEON_ext(auVar21,auVar21,8,1);
      auVar24 = NEON_ext(auVar23,auVar23,8,1);
      param_1 = param_1 + fVar14;
      fVar15 = fVar15 + fVar14;
      fVar18 = fVar18 + fVar14;
      fVar11 = fVar11 + fVar14;
      param_5[1] = uVar7;
      uVar7 = CONCAT44(auVar12._0_4_,fVar25);
      *param_5 = uVar7;
      param_5[3] = uVar6;
      uVar6 = CONCAT44(auVar23._0_4_,auVar21._0_4_);
      param_5[2] = uVar6;
      uVar6 = CONCAT44(auVar23._4_4_,auVar21._4_4_);
      param_5[5] = uVar6;
      uVar6 = CONCAT44(auVar19._4_4_,auVar16._4_4_);
      param_5[4] = uVar6;
      param_5[7] = CONCAT44(auVar20._0_4_,auVar17._0_4_);
      param_5[6] = CONCAT44(auVar13._0_4_,auVar29._0_4_);
      param_5[9] = CONCAT44(auVar13._4_4_,auVar29._4_4_);
      param_5[8] = CONCAT44(auVar24._0_4_,auVar22._0_4_);
      param_5[0xb] = CONCAT44(auVar24._4_4_,auVar22._4_4_);
      param_5[10] = CONCAT44(auVar20._4_4_,auVar17._4_4_);
      param_5 = param_5 + 0xc;
      puVar9 = puVar9 + 2;
    } while (iVar10 != 0);
  }
  return;
}


