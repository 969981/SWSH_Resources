/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00163630; name: FUN_00163630
 */


void FUN_00163630(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,uint param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  ushort uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  fVar15 = -param_1._0_4_;
  fVar16 = -param_1._4_4_;
  fVar17 = -param_1._8_4_;
  fVar19 = -param_2._0_4_;
  fVar20 = -param_2._4_4_;
  fVar21 = -param_2._8_4_;
  fVar18 = 0.0;
  fVar22 = 0.0;
  lVar2 = param_3 + (ulong)*(ushort *)(param_3 + 0x1a) + 0x90;
  if (param_4 != 0) {
    uVar5 = *(ushort *)(param_3 + 10);
    lVar3 = param_3 + (ulong)*(ushort *)(param_3 + 8) * 0x40 + 0x80;
    uVar13 = param_4;
    do {
      uVar12 = (ulong)uVar13;
      pfVar14 = (float *)(lVar2 + (ulong)uVar13 * 0xa0);
      pauVar4 = (undefined1 (*) [16])(param_3 + (ulong)uVar5 + uVar12 * 0x20);
      pauVar1 = pauVar4 + 1;
      uVar26 = (undefined4)((ulong)*(undefined8 *)(pauVar4[1] + 8) >> 0x20);
      fVar31 = (float)*(undefined8 *)*pauVar1;
      fVar24 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar28._4_4_ = fVar16;
      auVar28._0_4_ = fVar15;
      auVar28._8_4_ = fVar17;
      auVar28._12_4_ = fVar18;
      auVar35._4_4_ = fVar16;
      auVar35._0_4_ = fVar15;
      auVar35._8_4_ = fVar17;
      auVar35._12_4_ = fVar18;
      auVar28 = NEON_ext(auVar28,auVar35,8,1);
      auVar37._12_4_ = uVar26;
      auVar37._0_12_ = *(undefined1 (*) [12])*pauVar1;
      auVar38._12_4_ = uVar26;
      auVar38._0_12_ = *(undefined1 (*) [12])*pauVar1;
      auVar35 = NEON_ext(auVar37,auVar38,8,1);
      fVar23 = fVar15 * fVar24 - fVar16 * fVar31;
      uVar27 = NEON_ext(CONCAT44(fVar16 * (float)*(undefined8 *)(pauVar4[1] + 8) - fVar17 * fVar24,
                                 fVar23),
                        CONCAT44(auVar28._4_4_ * fVar24 - fVar16 * auVar35._4_4_,
                                 auVar28._0_4_ * fVar31 - fVar15 * auVar35._0_4_),4,1);
      fVar24 = fVar19 + (float)uVar27;
      fVar25 = fVar20 + (float)((ulong)uVar27 >> 0x20);
      fVar23 = fVar21 + fVar23;
      auVar29._0_4_ = pfVar14[0xc] * fVar25 + pfVar14[0x14] * fVar23;
      auVar29._4_4_ = pfVar14[0xd] * fVar25 + pfVar14[0x15] * fVar23;
      auVar29._8_4_ = pfVar14[0xe] * fVar25 + pfVar14[0x16] * fVar23;
      auVar29._12_4_ = pfVar14[0xf] * fVar25 + 0.0;
      fVar31 = (float)*(undefined8 *)(pfVar14 + 8) * fVar25 + pfVar14[0x10] * fVar23;
      fVar32 = (float)((ulong)*(undefined8 *)(pfVar14 + 8) >> 0x20) * fVar25 +
               pfVar14[0x11] * fVar23;
      fVar33 = (float)*(undefined8 *)(pfVar14 + 10) * fVar25 + pfVar14[0x12] * fVar23;
      fVar34 = (float)((ulong)*(undefined8 *)(pfVar14 + 10) >> 0x20) * fVar25 + 0.0;
      auVar36 = NEON_ext(auVar29,auVar29,8,1);
      auVar8._4_4_ = fVar32;
      auVar8._0_4_ = fVar31;
      auVar8._8_4_ = fVar33;
      auVar8._12_4_ = fVar34;
      auVar9._4_4_ = fVar32;
      auVar9._0_4_ = fVar31;
      auVar9._8_4_ = fVar33;
      auVar9._12_4_ = fVar34;
      auVar35 = NEON_ext(auVar8,auVar9,8,1);
      auVar28 = *pauVar4;
      auVar30._0_4_ = pfVar14[4] * fVar24 + auVar29._0_4_;
      auVar30._4_4_ = pfVar14[5] * fVar24 + auVar29._4_4_;
      auVar30._8_4_ = pfVar14[6] * fVar24 + auVar36._0_4_;
      auVar30._12_4_ = pfVar14[7] * fVar24 + 0.0;
      fVar31 = *pfVar14 * fVar24 + fVar31;
      fVar32 = pfVar14[1] * fVar24 + fVar32;
      fVar33 = pfVar14[2] * fVar24 + auVar35._0_4_;
      fVar34 = pfVar14[3] * fVar24 + 0.0;
      auVar38 = NEON_ext(auVar30,auVar30,8,1);
      auVar10._4_4_ = fVar32;
      auVar10._0_4_ = fVar31;
      auVar10._8_4_ = fVar33;
      auVar10._12_4_ = fVar34;
      auVar11._4_4_ = fVar32;
      auVar11._0_4_ = fVar31;
      auVar11._8_4_ = fVar33;
      auVar11._12_4_ = fVar34;
      auVar35 = NEON_ext(auVar10,auVar11,8,1);
      auVar37 = NEON_ext(auVar28,auVar28,8,1);
      fVar15 = fVar15 - fVar31;
      fVar16 = fVar16 - fVar32;
      fVar17 = fVar17 - auVar35._0_4_;
      fVar18 = fVar18 - 0.0;
      fVar33 = auVar28._4_4_;
      auVar36._4_4_ = fVar16;
      auVar36._0_4_ = fVar15;
      auVar36._8_4_ = fVar17;
      auVar36._12_4_ = fVar18;
      auVar7._4_4_ = fVar16;
      auVar7._0_4_ = fVar15;
      auVar7._8_4_ = fVar17;
      auVar7._12_4_ = fVar18;
      auVar35 = NEON_ext(auVar36,auVar7,8,1);
      fVar32 = auVar28._0_4_ * fVar16 - fVar33 * fVar15;
      pfVar14 = (float *)(lVar3 + uVar12 * 0x10);
      fVar31 = *pfVar14;
      uVar27 = NEON_ext(CONCAT44(fVar33 * fVar17 - auVar28._8_4_ * fVar16,fVar32),
                        CONCAT44(auVar37._4_4_ * fVar16 - fVar33 * auVar35._4_4_,
                                 auVar37._0_4_ * fVar15 - auVar28._0_4_ * auVar35._0_4_),4,1);
      puVar6 = (undefined8 *)(lVar3 + uVar12 * 0x10);
      puVar6[1] = CONCAT44(pfVar14[3] + fVar22 + 0.0,pfVar14[2] + fVar23);
      *puVar6 = CONCAT44(pfVar14[1] + fVar25,fVar31 + fVar24);
      uVar13 = (uint)*(byte *)(param_3 + uVar12 + 0x40);
      fVar19 = (fVar19 - auVar30._0_4_) + (float)uVar27;
      fVar20 = (fVar20 - auVar30._4_4_) + (float)((ulong)uVar27 >> 0x20);
      fVar21 = (fVar21 - auVar38._0_4_) + fVar32;
      fVar22 = (fVar22 - 0.0) + 0.0;
    } while (uVar13 != 0);
  }
  *(ulong *)(param_3 + 0x28) =
       CONCAT44(fVar18 + (float)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20),
                fVar17 + (float)*(undefined8 *)(param_3 + 0x28));
  *(ulong *)(param_3 + 0x20) =
       CONCAT44(fVar16 + (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20),
                fVar15 + (float)*(undefined8 *)(param_3 + 0x20));
  *(ulong *)(param_3 + 0x38) =
       CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20),
                fVar21 + (float)*(undefined8 *)(param_3 + 0x38));
  *(ulong *)(param_3 + 0x30) =
       CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20),
                fVar19 + (float)*(undefined8 *)(param_3 + 0x30));
  *(ulong *)(param_3 + 0x10) =
       *(ulong *)(param_3 + 0x10) | *(ulong *)(lVar2 + (ulong)param_4 * 0xa0 + 0x98);
  return;
}


