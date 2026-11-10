/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016d320; name: FUN_0016d320
 */


void FUN_0016d320(undefined8 *param_1)

{
  float *pfVar1;
  long lVar2;
  ushort uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  pfVar12 = (float *)*param_1;
  fVar21 = *pfVar12;
  fVar22 = pfVar12[1];
  fVar24 = pfVar12[4];
  fVar23 = pfVar12[2];
  uVar15 = param_1[4];
  fVar25 = pfVar12[5];
  fVar26 = pfVar12[6];
  uVar3 = *(ushort *)(uVar15 + 2);
  if ((ulong)uVar3 != 0) {
    uVar16 = uVar15;
    do {
      uVar14 = (ulong)*(byte *)(uVar16 + 1);
      Hint_Prefetch(uVar16 + 0x30,0,0,0);
      uVar13 = uVar16 + 0x30 + uVar14 * 0x30;
      lVar2 = uVar16 + *(ushort *)(uVar16 + 2);
      Hint_Prefetch(lVar2 + 0x20,0,0,0);
      if (uVar14 != 0) {
        fVar30 = *(float *)(uVar16 + 8);
        fVar29 = *(float *)(uVar16 + 0x18);
        fVar27 = (float)*(undefined8 *)(uVar16 + 0x10);
        fVar28 = (float)((ulong)*(undefined8 *)(uVar16 + 0x10) >> 0x20);
        puVar17 = (undefined4 *)(uVar16 + 0x5c);
        fVar4 = *(float *)(uVar16 + 4);
        pfVar18 = (float *)(lVar2 + 0x20);
        do {
          Hint_Prefetch(puVar17 + 0x15,0,0,0);
          fVar8 = (float)puVar17[-0xb];
          fVar9 = (float)puVar17[-10];
          fVar10 = (float)puVar17[-9];
          fVar11 = (float)puVar17[-8];
          pfVar19 = (float *)(puVar17 + -2);
          uVar14 = uVar14 - 1;
          fVar31 = *pfVar18;
          pfVar1 = (float *)(puVar17 + -3);
          uVar5 = *puVar17;
          puVar17 = puVar17 + 0xc;
          auVar33._0_4_ = fVar27 * fVar21 + fVar24 * fVar8;
          auVar33._4_4_ = fVar28 * fVar22 + fVar25 * fVar9;
          auVar33._8_4_ = fVar29 * fVar23 + fVar26 * fVar10;
          auVar33._12_4_ = fVar11 * 0.0 + 0.0;
          auVar35 = NEON_ext(auVar33,auVar33,8,1);
          fVar20 = auVar35._0_4_ + auVar35._4_4_;
          uVar32 = NEON_fmax(CONCAT44(*pfVar19 - (auVar33._0_4_ + auVar33._4_4_ + fVar20) * *pfVar1,
                                      *pfVar19 - (auVar33._0_4_ + auVar33._4_4_ + fVar20) * *pfVar1)
                             ,CONCAT44(-fVar31,-fVar31),4);
          uVar32 = NEON_fmin(CONCAT44(fVar31 + (float)((ulong)uVar32 >> 0x20),fVar31 + (float)uVar32
                                     ),CONCAT44(uVar5,uVar5),4);
          fVar31 = (float)uVar32 - fVar31;
          *pfVar18 = (float)uVar32;
          fVar20 = fVar4 * fVar31;
          fVar21 = fVar21 + fVar27 * fVar30 * fVar31;
          fVar22 = fVar22 + fVar28 * fVar30 * fVar31;
          fVar23 = fVar23 + fVar29 * fVar30 * fVar31;
          fVar31 = fVar31 * 0.0 + 0.0;
          auVar35._4_4_ = fVar22;
          auVar35._0_4_ = fVar21;
          auVar35._8_4_ = fVar23;
          auVar35._12_4_ = fVar31;
          auVar34._4_4_ = fVar22;
          auVar34._0_4_ = fVar21;
          auVar34._8_4_ = fVar23;
          auVar34._12_4_ = fVar31;
          auVar34 = NEON_ext(auVar35,auVar34,8,1);
          fVar24 = fVar24 + fVar8 * fVar20;
          fVar25 = fVar25 + fVar9 * fVar20;
          fVar26 = fVar26 + fVar10 * fVar20;
          fVar23 = fVar11 * fVar20 + 0.0;
          auVar6._4_4_ = fVar25;
          auVar6._0_4_ = fVar24;
          auVar6._8_4_ = fVar26;
          auVar6._12_4_ = fVar23;
          auVar7._4_4_ = fVar25;
          auVar7._0_4_ = fVar24;
          auVar7._8_4_ = fVar26;
          auVar7._12_4_ = fVar23;
          auVar35 = NEON_ext(auVar6,auVar7,8,1);
          fVar23 = auVar34._0_4_;
          fVar26 = auVar35._0_4_;
          pfVar18 = pfVar18 + 1;
        } while (uVar14 != 0);
      }
      uVar16 = uVar13;
    } while (uVar13 < uVar15 + uVar3);
  }
  *(ulong *)pfVar12 = CONCAT44(fVar22,fVar21);
  pfVar12[2] = fVar23;
  *(ulong *)(pfVar12 + 4) = CONCAT44(fVar25,fVar24);
  pfVar12[6] = fVar26;
  return;
}


