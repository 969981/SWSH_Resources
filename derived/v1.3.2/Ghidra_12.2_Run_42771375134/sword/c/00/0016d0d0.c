/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016d0d0; name: FUN_0016d0d0
 */


void FUN_0016d0d0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  
  pfVar5 = (float *)*param_1;
  pfVar6 = (float *)param_1[1];
  fVar39 = *pfVar5;
  fVar40 = pfVar5[1];
  fVar41 = pfVar5[2];
  fVar42 = *pfVar6;
  fVar46 = pfVar5[4];
  fVar47 = pfVar5[5];
  fVar43 = pfVar6[1];
  fVar36 = pfVar6[4];
  fVar44 = pfVar6[2];
  fVar37 = pfVar6[5];
  fVar48 = pfVar5[6];
  fVar38 = pfVar6[6];
  if ((ulong)*(ushort *)((long)param_1 + 0x1e) != 0) {
    uVar30 = param_1[4];
    uVar2 = uVar30 + (ulong)*(ushort *)((long)param_1 + 0x1e) * 0x10;
    do {
      bVar7 = *(byte *)(uVar30 + 1);
      bVar8 = *(byte *)(uVar30 + 2);
      lVar3 = uVar30 + 0x20 + ((ulong)((uint)bVar7 * 4 + 0xc) & 0x7f0);
      if ((ulong)bVar8 != 0) {
        uVar31 = (uint)bVar7;
        if ((uint)bVar8 <= (uint)bVar7 && uVar31 != bVar8) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        fVar10 = *(float *)(uVar30 + 0x10);
        fVar49 = *(float *)(uVar30 + 4);
        uVar33 = 0;
        fVar11 = *(float *)(uVar30 + 0x14);
        fVar12 = *(float *)(uVar30 + 8);
        uVar9 = 0;
        if (uVar31 != 0) {
          uVar9 = bVar8 / uVar31;
        }
        fVar13 = *(float *)(uVar30 + 0xc);
        uVar32 = 0;
        do {
          uVar31 = 0;
          do {
            uVar1 = uVar33 + uVar31;
            uVar31 = uVar31 + 1;
            pfVar4 = (float *)(lVar3 + (ulong)uVar1 * 0x40);
            Hint_Prefetch(pfVar4 + 0x20,0,0,0);
            fVar45 = *pfVar4;
            fVar28 = pfVar4[1];
            fVar29 = pfVar4[2];
            fVar51 = (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
            fVar53 = fVar36 * pfVar4[8];
            fVar55 = fVar37 * pfVar4[9];
            fVar56 = fVar38 * pfVar4[10];
            auVar20._4_4_ = fVar55;
            auVar20._0_4_ = fVar53;
            auVar20._8_4_ = fVar56;
            auVar20._12_4_ = 0;
            auVar21._4_4_ = fVar55;
            auVar21._0_4_ = fVar53;
            auVar21._8_4_ = fVar56;
            auVar21._12_4_ = 0;
            auVar64 = NEON_ext(auVar20,auVar21,8,1);
            fVar57 = fVar39 * fVar45;
            fVar58 = fVar40 * fVar28;
            fVar56 = auVar64._0_4_ + auVar64._4_4_;
            fVar59 = fVar46 * pfVar4[4];
            fVar60 = fVar47 * pfVar4[5];
            fVar61 = fVar48 * pfVar4[6];
            auVar24._4_4_ = fVar60;
            auVar24._0_4_ = fVar59;
            auVar24._8_4_ = fVar61;
            auVar24._12_4_ = 0;
            auVar25._4_4_ = fVar60;
            auVar25._0_4_ = fVar59;
            auVar25._8_4_ = fVar61;
            auVar25._12_4_ = 0;
            auVar64 = NEON_ext(auVar24,auVar25,8,1);
            fVar62 = fVar42 * fVar45;
            fVar63 = fVar43 * fVar28;
            auVar22._4_4_ = fVar58;
            auVar22._0_4_ = fVar57;
            auVar22._8_4_ = fVar41 * fVar29;
            auVar22._12_4_ = 0;
            auVar23._4_4_ = fVar58;
            auVar23._0_4_ = fVar57;
            auVar23._8_4_ = fVar41 * fVar29;
            auVar23._12_4_ = 0;
            auVar65 = NEON_ext(auVar22,auVar23,8,1);
            fVar61 = auVar64._0_4_ + auVar64._4_4_;
            fVar34 = auVar65._0_4_ + auVar65._4_4_;
            auVar26._4_4_ = fVar63;
            auVar26._0_4_ = fVar62;
            auVar26._8_4_ = fVar44 * fVar29;
            auVar26._12_4_ = 0;
            auVar27._4_4_ = fVar63;
            auVar27._0_4_ = fVar62;
            auVar27._8_4_ = fVar44 * fVar29;
            auVar27._12_4_ = 0;
            auVar64 = NEON_ext(auVar26,auVar27,8,1);
            fVar35 = auVar64._0_4_ + auVar64._4_4_;
            fVar52 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
            fVar54 = fVar49 * *(float *)(uVar30 + 0x20 + uVar32 * 4);
            uVar50 = NEON_fmin(CONCAT44((fVar52 - pfVar4[0xc] * fVar51) +
                                        ((fVar57 + fVar58 + fVar34 + fVar59 + fVar60 + fVar61) -
                                        (fVar62 + fVar63 + fVar35 + fVar53 + fVar55 + fVar56)) *
                                        fVar51,(fVar52 - pfVar4[0xc] * fVar51) +
                                               ((fVar57 + fVar58 + fVar34 + fVar59 + fVar60 + fVar61
                                                ) - (fVar62 + fVar63 + fVar35 +
                                                    fVar53 + fVar55 + fVar56)) * fVar51),
                               CONCAT44(fVar54,fVar54),4);
            uVar50 = NEON_fmax(uVar50,CONCAT44(-fVar54,-fVar54),4);
            fVar52 = (float)uVar50 - fVar52;
            fVar39 = fVar39 + fVar12 * fVar45 * fVar52;
            fVar40 = fVar40 + fVar12 * fVar28 * fVar52;
            fVar41 = fVar41 + fVar12 * fVar29 * fVar52;
            fVar56 = fVar52 * 0.0 + 0.0;
            fVar42 = fVar42 - fVar13 * fVar45 * fVar52;
            fVar43 = fVar43 - fVar13 * fVar28 * fVar52;
            fVar44 = fVar44 - fVar13 * fVar29 * fVar52;
            fVar45 = 0.0 - fVar52 * 0.0;
            auVar14._4_4_ = fVar40;
            auVar14._0_4_ = fVar39;
            auVar14._8_4_ = fVar41;
            auVar14._12_4_ = fVar56;
            auVar15._4_4_ = fVar40;
            auVar15._0_4_ = fVar39;
            auVar15._8_4_ = fVar41;
            auVar15._12_4_ = fVar56;
            auVar64 = NEON_ext(auVar14,auVar15,8,1);
            fVar41 = auVar64._0_4_;
            *(ulong *)(pfVar4 + 2) =
                 CONCAT44((int)((ulong)uVar50 >> 0x20),(int)*(undefined8 *)(pfVar4 + 2));
            *(undefined8 *)pfVar4 = *(undefined8 *)pfVar4;
            auVar16._4_4_ = fVar43;
            auVar16._0_4_ = fVar42;
            auVar16._8_4_ = fVar44;
            auVar16._12_4_ = fVar45;
            auVar17._4_4_ = fVar43;
            auVar17._0_4_ = fVar42;
            auVar17._8_4_ = fVar44;
            auVar17._12_4_ = fVar45;
            auVar64 = NEON_ext(auVar16,auVar17,8,1);
            fVar44 = auVar64._0_4_;
            fVar45 = fVar10 * fVar52;
            fVar46 = fVar46 + pfVar4[4] * fVar45;
            fVar47 = fVar47 + pfVar4[5] * fVar45;
            fVar48 = fVar48 + pfVar4[6] * fVar45;
            fVar45 = fVar45 * 0.0 + 0.0;
            auVar18._4_4_ = fVar47;
            auVar18._0_4_ = fVar46;
            auVar18._8_4_ = fVar48;
            auVar18._12_4_ = fVar45;
            auVar19._4_4_ = fVar47;
            auVar19._0_4_ = fVar46;
            auVar19._8_4_ = fVar48;
            auVar19._12_4_ = fVar45;
            auVar64 = NEON_ext(auVar18,auVar19,8,1);
            fVar48 = auVar64._0_4_;
            fVar52 = fVar11 * fVar52;
            fVar36 = fVar36 - pfVar4[8] * fVar52;
            fVar37 = fVar37 - pfVar4[9] * fVar52;
            fVar38 = fVar38 - pfVar4[10] * fVar52;
            fVar45 = 0.0 - fVar52 * 0.0;
            auVar64._4_4_ = fVar37;
            auVar64._0_4_ = fVar36;
            auVar64._8_4_ = fVar38;
            auVar64._12_4_ = fVar45;
            auVar65._4_4_ = fVar37;
            auVar65._0_4_ = fVar36;
            auVar65._8_4_ = fVar38;
            auVar65._12_4_ = fVar45;
            auVar64 = NEON_ext(auVar64,auVar65,8,1);
            fVar38 = auVar64._0_4_;
          } while (uVar31 < uVar9);
          uVar33 = uVar33 + uVar31;
          uVar32 = (ulong)((int)uVar32 + 1);
        } while (uVar33 < bVar8);
      }
      uVar30 = lVar3 + (ulong)bVar8 * 0x40;
    } while (uVar30 < uVar2);
  }
  *(ulong *)pfVar5 = CONCAT44(fVar40,fVar39);
  pfVar5[2] = fVar41;
  *(ulong *)pfVar6 = CONCAT44(fVar43,fVar42);
  pfVar6[2] = fVar44;
  *(ulong *)(pfVar5 + 4) = CONCAT44(fVar47,fVar46);
  pfVar5[6] = fVar48;
  *(ulong *)(pfVar6 + 4) = CONCAT44(fVar37,fVar36);
  pfVar6[6] = fVar38;
  return;
}


