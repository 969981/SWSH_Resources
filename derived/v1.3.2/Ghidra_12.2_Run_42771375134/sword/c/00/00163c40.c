/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00163c40; name: FUN_00163c40
 */


void FUN_00163c40(long param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 (*pauVar7) [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined *puVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  float *pfVar18;
  float fVar19;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  fVar21 = -(float)*(undefined8 *)(param_1 + 0x20);
  fVar23 = -(float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar25 = -(float)*(undefined8 *)(param_1 + 0x28);
  puVar1 = (undefined8 *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a));
  fVar28 = -(float)*(undefined8 *)(param_1 + 0x30);
  fVar29 = -(float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fVar30 = -(float)*(undefined8 *)(param_1 + 0x38);
  uVar5 = *(ushort *)(param_1 + 10);
  fVar20 = (float)puVar1[9];
  fVar34 = (float)puVar1[8];
  fVar19 = (float)((ulong)puVar1[8] >> 0x20);
  auVar46._0_4_ = fVar21 * *(float *)(puVar1 + 6);
  auVar46._4_4_ = fVar23 * *(float *)((long)puVar1 + 0x34);
  auVar46._8_4_ = fVar25 * *(float *)(puVar1 + 7);
  auVar46._12_4_ = *(float *)((long)puVar1 + 0x3c) * 0.0;
  fVar35 = fVar21 * fVar34;
  fVar37 = fVar23 * fVar19;
  fVar39 = fVar25 * fVar20;
  fVar40 = (float)((ulong)puVar1[9] >> 0x20) * 0.0;
  fVar22 = fVar21 * *(float *)(puVar1 + 10);
  fVar24 = fVar23 * *(float *)((long)puVar1 + 0x54);
  fVar26 = fVar25 * *(float *)(puVar1 + 0xb);
  fVar27 = *(float *)((long)puVar1 + 0x5c) * 0.0;
  auVar43._4_4_ = fVar24;
  auVar43._0_4_ = fVar22;
  auVar43._8_4_ = fVar26;
  auVar43._12_4_ = fVar27;
  auVar49._4_4_ = fVar24;
  auVar49._0_4_ = fVar22;
  auVar49._8_4_ = fVar26;
  auVar49._12_4_ = fVar27;
  auVar43 = NEON_ext(auVar43,auVar49,8,1);
  fVar26 = (float)*puVar1 * fVar21 + (float)puVar1[2] * fVar23 + *(float *)(puVar1 + 4) * fVar25 +
           *(float *)(puVar1 + 6) * fVar28 + fVar34 * fVar29 + *(float *)(puVar1 + 10) * fVar30;
  fVar27 = (float)((ulong)*puVar1 >> 0x20) * fVar21 + (float)((ulong)puVar1[2] >> 0x20) * fVar23 +
           *(float *)((long)puVar1 + 0x24) * fVar25 +
           *(float *)((long)puVar1 + 0x34) * fVar28 + fVar19 * fVar29 +
           *(float *)((long)puVar1 + 0x54) * fVar30;
  fVar25 = (float)puVar1[1] * fVar21 + (float)puVar1[3] * fVar23 + *(float *)(puVar1 + 5) * fVar25 +
           *(float *)(puVar1 + 7) * fVar28 + fVar20 * fVar29 + *(float *)(puVar1 + 0xb) * fVar30;
  auVar49 = NEON_ext(auVar46,auVar46,8,1);
  fVar21 = auVar49._0_4_ + auVar49._4_4_;
  auVar47._4_4_ = fVar37;
  auVar47._0_4_ = fVar35;
  auVar47._8_4_ = fVar39;
  auVar47._12_4_ = fVar40;
  auVar50._4_4_ = fVar37;
  auVar50._0_4_ = fVar35;
  auVar50._8_4_ = fVar39;
  auVar50._12_4_ = fVar40;
  auVar49 = NEON_ext(auVar47,auVar50,8,1);
  fVar23 = auVar49._0_4_ + auVar49._4_4_;
  uVar45 = NEON_ext(CONCAT44(auVar46._0_4_ + auVar46._4_4_ + fVar21,
                             auVar46._0_4_ + auVar46._4_4_ + fVar21),
                    CONCAT44(fVar35 + fVar37 + fVar23,fVar35 + fVar37 + fVar23),4,1);
  fVar21 = *(float *)(puVar1 + 0xc) * fVar28 + *(float *)(puVar1 + 0xe) * fVar29 +
           *(float *)(puVar1 + 0x10) * fVar30 + (float)uVar45;
  fVar23 = *(float *)((long)puVar1 + 100) * fVar28 + *(float *)((long)puVar1 + 0x74) * fVar29 +
           *(float *)((long)puVar1 + 0x84) * fVar30 + (float)((ulong)uVar45 >> 0x20);
  fVar22 = *(float *)(puVar1 + 0xd) * fVar28 + *(float *)(puVar1 + 0xf) * fVar29 +
           *(float *)(puVar1 + 0x11) * fVar30 + fVar22 + fVar24 + auVar43._0_4_ + auVar43._4_4_;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  pfVar12 = (float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x88) = fVar25 + *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) + 0.0;
  *pfVar12 = fVar26 + *pfVar12;
  *(float *)(param_1 + 0x84) = fVar27 + *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x98) = fVar22 + *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) + 0.0;
  *(float *)(param_1 + 0x90) = fVar21 + *(float *)(param_1 + 0x90);
  *(float *)(param_1 + 0x94) = fVar23 + *(float *)(param_1 + 0x94);
  puVar11 = PTR_DAT_02710c28;
  uVar14 = puVar1[0x24];
  if (uVar14 == 0) {
    uVar6 = *(ushort *)(param_1 + 8);
    uVar15 = (ulong)uVar6;
    puVar10 = PTR_DAT_02710c28;
  }
  else {
    uVar6 = *(ushort *)(param_1 + 8);
    uVar15 = (ulong)uVar6;
    do {
      uVar16 = (uint)(uVar14 >> 0x20);
      uVar13 = (uint)uVar14;
      uVar16 = *(int *)(puVar11 + (ulong)((uVar16 & -uVar16) * 0x77cb531 >> 0x1b) * 4) + 0x20;
      if (uVar13 != 0) {
        uVar16 = *(uint *)(puVar11 + (ulong)((uVar13 & -uVar13) * 0x77cb531 >> 0x1b) * 4);
      }
      pfVar2 = pfVar12 + uVar15 * 8 + (ulong)uVar16 * 8;
      pfVar2[2] = fVar25 + pfVar2[2];
      pfVar2[3] = pfVar2[3] + 0.0;
      *pfVar2 = fVar26 + *pfVar2;
      pfVar2[1] = fVar27 + pfVar2[1];
      pfVar2[6] = fVar22 + pfVar2[6];
      pfVar2[7] = pfVar2[7] + 0.0;
      pfVar2[4] = fVar21 + pfVar2[4];
      pfVar2[5] = fVar23 + pfVar2[5];
      uVar14 = uVar14 - 1 & uVar14;
      puVar10 = PTR_DAT_02710c28;
    } while (uVar14 != 0);
  }
  PTR_DAT_02710c28 = puVar10;
  if (1 < uVar6) {
    uVar14 = 1;
    do {
      pauVar3 = (undefined1 (*) [16])(param_1 + (ulong)uVar5 + uVar14 * 0x20);
      pfVar2 = pfVar12 + uVar15 * 8 + uVar14 * 8;
      auVar43 = *pauVar3;
      auVar49 = pauVar3[1];
      fVar21 = auVar43._4_4_;
      auVar50 = NEON_ext(auVar43,auVar43,8,1);
      pauVar7 = (undefined1 (*) [12])(pfVar2 + 4);
      fVar32 = (float)*(undefined8 *)(pfVar2 + 6);
      fVar33 = (float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20);
      fVar40 = (float)*(undefined8 *)*pauVar7;
      fVar31 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
      auVar8._12_4_ = fVar33;
      auVar8._0_12_ = *pauVar7;
      auVar9._12_4_ = fVar33;
      auVar9._0_12_ = *pauVar7;
      auVar47 = NEON_ext(auVar8,auVar9,8,1);
      fVar42 = fVar40 * fVar21 - fVar31 * auVar43._0_4_;
      uVar45 = NEON_ext(CONCAT44(fVar31 * auVar43._8_4_ - fVar32 * fVar21,fVar42),
                        CONCAT44(auVar47._4_4_ * fVar21 - fVar31 * auVar50._4_4_,
                                 auVar47._0_4_ * auVar43._0_4_ - fVar40 * auVar50._0_4_),4,1);
      pfVar4 = pfVar12 + uVar14 * 8;
      pfVar18 = pfVar12 + uVar15 * 0x10 + uVar14 * 4;
      fVar21 = *pfVar18;
      fVar23 = pfVar18[1];
      fVar22 = pfVar18[2];
      pfVar18 = (float *)(puVar1 + uVar14 * 0x14 + 0x12);
      fVar24 = pfVar18[0x20];
      fVar25 = pfVar18[0x21];
      fVar26 = pfVar18[0x22];
      fVar36 = (float)*(undefined8 *)pfVar2 + (float)uVar45;
      fVar38 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) + (float)((ulong)uVar45 >> 0x20);
      fVar42 = (float)*(undefined8 *)(pfVar2 + 2) + fVar42;
      fVar41 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) + 0.0;
      fVar27 = pfVar18[0x18];
      fVar28 = pfVar18[0x19];
      fVar29 = pfVar18[0x1a];
      fVar30 = pfVar18[0x1c];
      fVar34 = pfVar18[0x1d];
      fVar35 = pfVar18[0x1e];
      auVar51._0_4_ = fVar40 * pfVar18[4];
      auVar51._4_4_ = fVar31 * pfVar18[5];
      auVar51._8_4_ = fVar32 * pfVar18[6];
      auVar51._12_4_ = fVar33 * pfVar18[7];
      auVar48._0_4_ = *pfVar18 * fVar36;
      auVar48._4_4_ = pfVar18[1] * fVar38;
      auVar48._8_4_ = pfVar18[2] * fVar42;
      auVar48._12_4_ = pfVar18[3] * fVar41;
      auVar43 = NEON_ext(auVar48,auVar48,8,1);
      fVar19 = auVar43._0_4_ + auVar43._4_4_;
      auVar43 = NEON_ext(auVar51,auVar51,8,1);
      fVar37 = auVar43._0_4_ + auVar43._4_4_;
      auVar52._0_4_ = fVar36 * pfVar18[8];
      auVar52._4_4_ = fVar38 * pfVar18[9];
      auVar52._8_4_ = fVar42 * pfVar18[10];
      auVar52._12_4_ = fVar41 * pfVar18[0xb];
      auVar43 = NEON_ext(auVar52,auVar52,8,1);
      fVar20 = auVar43._0_4_ + auVar43._4_4_;
      auVar53._0_4_ = fVar40 * pfVar18[0xc];
      auVar53._4_4_ = fVar31 * pfVar18[0xd];
      auVar53._8_4_ = fVar32 * pfVar18[0xe];
      auVar53._12_4_ = fVar33 * pfVar18[0xf];
      auVar43 = NEON_ext(auVar53,auVar53,8,1);
      fVar39 = auVar43._0_4_ + auVar43._4_4_;
      uVar45 = NEON_ext(CONCAT44(auVar48._0_4_ + auVar48._4_4_ + fVar19 +
                                 auVar51._0_4_ + auVar51._4_4_ + fVar37,
                                 auVar48._0_4_ + auVar48._4_4_ + fVar19 +
                                 auVar51._0_4_ + auVar51._4_4_ + fVar37),
                        CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar20 +
                                 auVar53._0_4_ + auVar53._4_4_ + fVar39,
                                 auVar52._0_4_ + auVar52._4_4_ + fVar20 +
                                 auVar53._0_4_ + auVar53._4_4_ + fVar39),4,1);
      fVar19 = pfVar18[0x10];
      fVar37 = pfVar18[0x11];
      fVar20 = pfVar18[0x12];
      fVar39 = pfVar18[0x13];
      auVar55._0_4_ = fVar40 * pfVar18[0x14];
      auVar55._4_4_ = fVar31 * pfVar18[0x15];
      auVar55._8_4_ = fVar32 * pfVar18[0x16];
      auVar55._12_4_ = fVar33 * pfVar18[0x17];
      pfVar2[2] = 0.0;
      pfVar2[3] = 0.0;
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      pfVar2[6] = 0.0;
      pfVar2[7] = 0.0;
      pfVar2[4] = 0.0;
      pfVar2[5] = 0.0;
      auVar54._0_4_ = fVar36 * fVar19;
      auVar54._4_4_ = fVar38 * fVar37;
      auVar54._8_4_ = fVar42 * fVar20;
      auVar54._12_4_ = fVar41 * fVar39;
      auVar43 = NEON_ext(auVar54,auVar54,8,1);
      auVar47 = NEON_ext(auVar55,auVar55,8,1);
      fVar19 = auVar49._4_4_;
      auVar44._0_4_ = fVar27 * fVar21 + fVar30 * fVar23 + fVar24 * fVar22 + (float)uVar45;
      auVar44._4_4_ =
           fVar28 * fVar21 + fVar34 * fVar23 + fVar25 * fVar22 + (float)((ulong)uVar45 >> 0x20);
      auVar44._8_4_ =
           fVar29 * fVar21 + fVar35 * fVar23 + fVar26 * fVar22 +
           auVar54._0_4_ + auVar54._4_4_ + auVar43._0_4_ + auVar43._4_4_ +
           auVar55._0_4_ + auVar55._4_4_ + auVar47._0_4_ + auVar47._4_4_;
      auVar44._12_4_ = 0;
      auVar43 = NEON_ext(auVar49,auVar49,8,1);
      auVar47 = NEON_ext(auVar44,auVar44,8,1);
      fVar21 = auVar49._0_4_ * auVar44._4_4_ - fVar19 * auVar44._0_4_;
      uVar45 = NEON_ext(CONCAT44(fVar19 * auVar44._8_4_ - auVar49._8_4_ * auVar44._4_4_,fVar21),
                        CONCAT44(auVar43._4_4_ * auVar44._4_4_ - fVar19 * auVar47._4_4_,
                                 auVar43._0_4_ * auVar44._0_4_ - auVar49._0_4_ * auVar47._0_4_),4,1)
      ;
      fVar36 = fVar36 - (float)uVar45;
      fVar38 = fVar38 - (float)((ulong)uVar45 >> 0x20);
      fVar42 = fVar42 - fVar21;
      pfVar2 = pfVar12 + (ulong)*(ushort *)(param_1 + 8) * 0x10 + uVar14 * 4;
      pfVar2[2] = 0.0;
      pfVar2[3] = 0.0;
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      pfVar4[2] = pfVar4[2] + fVar42;
      pfVar4[3] = pfVar4[3] + (fVar41 - 0.0);
      *pfVar4 = *pfVar4 + fVar36;
      pfVar4[1] = pfVar4[1] + fVar38;
      pfVar4[6] = (fVar32 - auVar44._8_4_) + pfVar4[6];
      pfVar4[7] = (fVar33 - 0.0) + pfVar4[7];
      pfVar4[4] = (fVar40 - auVar44._0_4_) + pfVar4[4];
      pfVar4[5] = (fVar31 - auVar44._4_4_) + pfVar4[5];
      uVar15 = (ulong)*(ushort *)(param_1 + 8);
      for (uVar17 = *(ulong *)(pfVar18 + 0x24); uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar16 = (uint)(uVar17 >> 0x20);
        uVar13 = (uint)uVar17;
        uVar16 = *(int *)(puVar10 + (ulong)((uVar16 & -uVar16) * 0x77cb531 >> 0x1b) * 4) + 0x20;
        if (uVar13 != 0) {
          uVar16 = *(uint *)(puVar10 + (ulong)((uVar13 & -uVar13) * 0x77cb531 >> 0x1b) * 4);
        }
        pfVar2 = pfVar12 + uVar15 * 8 + (ulong)uVar16 * 8;
        pfVar2[2] = fVar42 + pfVar2[2];
        pfVar2[3] = (fVar41 - 0.0) + pfVar2[3];
        *pfVar2 = fVar36 + *pfVar2;
        pfVar2[1] = fVar38 + pfVar2[1];
        pfVar2[6] = (fVar32 - auVar44._8_4_) + pfVar2[6];
        pfVar2[7] = (fVar33 - 0.0) + pfVar2[7];
        pfVar2[4] = (fVar40 - auVar44._0_4_) + pfVar2[4];
        pfVar2[5] = (fVar31 - auVar44._4_4_) + pfVar2[5];
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar15);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


