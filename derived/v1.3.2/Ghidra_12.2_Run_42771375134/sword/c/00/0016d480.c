/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016d480; name: FUN_0016d480
 */


void FUN_0016d480(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float *pfVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  pfVar15 = (float *)*param_1;
  fVar24 = *pfVar15;
  fVar25 = pfVar15[1];
  fVar21 = pfVar15[4];
  fVar26 = pfVar15[2];
  fVar22 = pfVar15[5];
  fVar23 = pfVar15[6];
  if ((ulong)*(ushort *)((long)param_1 + 0x1e) != 0) {
    uVar16 = param_1[4];
    uVar2 = uVar16 + (ulong)*(ushort *)((long)param_1 + 0x1e) * 0x10;
    do {
      bVar5 = *(byte *)(uVar16 + 1);
      bVar6 = *(byte *)(uVar16 + 2);
      lVar3 = uVar16 + 0x20 + ((ulong)((uint)bVar5 * 4 + 0xc) & 0x7f0);
      if ((ulong)bVar6 != 0) {
        uVar17 = (uint)bVar5;
        if ((uint)bVar6 <= (uint)bVar5 && uVar17 != bVar6) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        fVar27 = *(float *)(uVar16 + 4);
        fVar8 = *(float *)(uVar16 + 8);
        uVar7 = 0;
        if (uVar17 != 0) {
          uVar7 = bVar6 / uVar17;
        }
        fVar9 = *(float *)(uVar16 + 0x10);
        uVar17 = 0;
        uVar19 = 0;
        do {
          uVar18 = 0;
          do {
            uVar1 = uVar17 + uVar18;
            uVar18 = uVar18 + 1;
            pfVar4 = (float *)(lVar3 + (ulong)uVar1 * 0x40);
            Hint_Prefetch(lVar3 + (ulong)(uVar1 + 1) * 0x40,0,0,0);
            fVar33 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
            fVar29 = (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
            fVar35 = fVar24 * *pfVar4;
            fVar36 = fVar25 * pfVar4[1];
            fVar37 = fVar26 * pfVar4[2];
            auVar13._4_4_ = fVar36;
            auVar13._0_4_ = fVar35;
            auVar13._8_4_ = fVar37;
            auVar13._12_4_ = 0;
            auVar14._4_4_ = fVar36;
            auVar14._0_4_ = fVar35;
            auVar14._8_4_ = fVar37;
            auVar14._12_4_ = 0;
            auVar38 = NEON_ext(auVar13,auVar14,8,1);
            fVar37 = auVar38._0_4_ + auVar38._4_4_;
            fVar30 = (float)*(undefined8 *)(pfVar4 + 4);
            auVar39._0_4_ = fVar21 * fVar30;
            fVar31 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
            auVar39._4_4_ = fVar22 * fVar31;
            fVar32 = (float)*(undefined8 *)(pfVar4 + 6);
            auVar39._8_4_ = fVar23 * fVar32;
            auVar39._12_4_ = 0;
            auVar38 = NEON_ext(auVar39,auVar39,8,1);
            fVar20 = auVar38._0_4_ + auVar38._4_4_;
            fVar34 = fVar27 * *(float *)(uVar16 + 0x20 + uVar19 * 4);
            uVar28 = NEON_fmin(CONCAT44((fVar33 - pfVar4[0xc] * fVar29) +
                                        (fVar35 + fVar36 + fVar37 +
                                        auVar39._0_4_ + auVar39._4_4_ + fVar20) * fVar29,
                                        (fVar33 - pfVar4[0xc] * fVar29) +
                                        (fVar35 + fVar36 + fVar37 +
                                        auVar39._0_4_ + auVar39._4_4_ + fVar20) * fVar29),
                               CONCAT44(fVar34,fVar34),4);
            uVar28 = NEON_fmax(uVar28,CONCAT44(-fVar34,-fVar34),4);
            fVar33 = (float)uVar28 - fVar33;
            fVar24 = fVar24 + fVar8 * *pfVar4 * fVar33;
            fVar25 = fVar25 + fVar8 * pfVar4[1] * fVar33;
            fVar26 = fVar26 + fVar8 * pfVar4[2] * fVar33;
            fVar37 = fVar33 * 0.0 + 0.0;
            auVar11._4_4_ = fVar25;
            auVar11._0_4_ = fVar24;
            auVar11._8_4_ = fVar26;
            auVar11._12_4_ = fVar37;
            auVar12._4_4_ = fVar25;
            auVar12._0_4_ = fVar24;
            auVar12._8_4_ = fVar26;
            auVar12._12_4_ = fVar37;
            auVar38 = NEON_ext(auVar11,auVar12,8,1);
            fVar26 = auVar38._0_4_;
            *(ulong *)(pfVar4 + 2) =
                 CONCAT44((int)((ulong)uVar28 >> 0x20),(int)*(undefined8 *)(pfVar4 + 2));
            *(undefined8 *)pfVar4 = *(undefined8 *)pfVar4;
            fVar21 = fVar21 + fVar9 * fVar30 * fVar33;
            fVar22 = fVar22 + fVar9 * fVar31 * fVar33;
            fVar23 = fVar23 + fVar9 * fVar32 * fVar33;
            fVar37 = fVar33 * 0.0 + 0.0;
            auVar38._4_4_ = fVar22;
            auVar38._0_4_ = fVar21;
            auVar38._8_4_ = fVar23;
            auVar38._12_4_ = fVar37;
            auVar10._4_4_ = fVar22;
            auVar10._0_4_ = fVar21;
            auVar10._8_4_ = fVar23;
            auVar10._12_4_ = fVar37;
            auVar38 = NEON_ext(auVar38,auVar10,8,1);
            fVar23 = auVar38._0_4_;
          } while (uVar18 < uVar7);
          uVar17 = uVar17 + uVar18;
          uVar19 = (ulong)((int)uVar19 + 1);
        } while (uVar17 < bVar6);
      }
      uVar16 = lVar3 + (ulong)bVar6 * 0x40;
    } while (uVar16 < uVar2);
  }
  *(ulong *)pfVar15 = CONCAT44(fVar25,fVar24);
  pfVar15[2] = fVar26;
  *(ulong *)(pfVar15 + 4) = CONCAT44(fVar22,fVar21);
  pfVar15[6] = fVar23;
  return;
}


