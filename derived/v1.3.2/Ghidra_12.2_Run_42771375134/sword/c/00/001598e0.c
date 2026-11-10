/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001598e0; name: thunk_FUN_0015c380
 */


void thunk_FUN_0015c380(long param_1,undefined8 *param_2,long param_3)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  byte *pbVar24;
  float *pfVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  ulong uVar28;
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
  undefined8 uVar43;
  undefined1 auVar44 [16];
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float afStack_c10 [4];
  float afStack_c00 [252];
  ulong auStack_810 [2];
  ulong auStack_800 [4];
  float afStack_7e0 [500];
  
  uVar3 = *(ushort *)(param_1 + 8);
  uVar17 = (ulong)uVar3;
  pfVar18 = (float *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a));
  uVar4 = *(ushort *)(param_1 + 10);
  if (uVar3 < 2) {
    pfVar22 = pfVar18;
  }
  else {
    uVar23 = (ulong)(uVar3 - 1);
    pfVar22 = (float *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a) + uVar23 * 0xa0 + 0xe0);
    pauVar26 = (undefined1 (*) [16])(param_1 + uVar23 * 0x20 + (ulong)uVar4 + 0x10);
    pfVar21 = afStack_c10 + uVar23 * 4;
    pbVar24 = (byte *)(param_1 + uVar23 + 0x40);
    pfVar25 = (float *)(param_2 + uVar23 * 4 + 2);
    do {
      pauVar1 = (undefined1 (*) [12])(pfVar25 + -4);
      fVar38 = (float)*(undefined8 *)(pfVar25 + -2);
      fVar39 = (float)((ulong)*(undefined8 *)(pfVar25 + -2) >> 0x20);
      fVar34 = (float)*(undefined8 *)*pauVar1;
      fVar36 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar52 = *pauVar26;
      fVar29 = auVar52._4_4_;
      auVar44._12_4_ = fVar39;
      auVar44._0_12_ = *pauVar1;
      auVar53._12_4_ = fVar39;
      auVar53._0_12_ = *pauVar1;
      auVar44 = NEON_ext(auVar44,auVar53,8,1);
      auVar53 = NEON_ext(auVar52,auVar52,8,1);
      fVar33 = fVar34 * fVar29 - fVar36 * auVar52._0_4_;
      uVar43 = NEON_ext(CONCAT44(fVar36 * auVar52._8_4_ - fVar38 * fVar29,fVar33),
                        CONCAT44(auVar44._4_4_ * fVar29 - fVar36 * auVar53._4_4_,
                                 auVar44._0_4_ * auVar52._0_4_ - fVar34 * auVar53._0_4_),4,1);
      uVar5 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar5;
      fVar29 = *pfVar25;
      fVar30 = pfVar25[1];
      fVar31 = pfVar25[2];
      fVar32 = pfVar25[3];
      fVar41 = fVar29 + (float)uVar43;
      fVar49 = fVar30 + (float)((ulong)uVar43 >> 0x20);
      fVar33 = fVar31 + fVar33;
      pfVar21[2] = fVar33;
      pfVar21[3] = fVar32 + 0.0;
      *pfVar21 = fVar41;
      pfVar21[1] = fVar49;
      auVar55._0_4_ = pfVar22[-0xc] * fVar49 + pfVar22[-4] * fVar33;
      auVar55._4_4_ = pfVar22[-0xb] * fVar49 + pfVar22[-3] * fVar33;
      auVar55._8_4_ = pfVar22[-10] * fVar49 + pfVar22[-2] * fVar33;
      auVar55._12_4_ = pfVar22[-9] * fVar49 + 0.0;
      auVar44 = NEON_ext(auVar55,auVar55,8,1);
      auVar54._0_4_ = pfVar22[-8] * fVar49 + *pfVar22 * fVar33;
      auVar54._4_4_ = pfVar22[-7] * fVar49 + pfVar22[1] * fVar33;
      auVar54._8_4_ = pfVar22[-6] * fVar49 + pfVar22[2] * fVar33;
      auVar54._12_4_ = pfVar22[-5] * fVar49 + 0.0;
      pfVar2 = pfVar22 + -0x14;
      pfVar14 = pfVar22 + -0x13;
      pfVar15 = pfVar22 + -0x12;
      pfVar16 = pfVar22 + -0x11;
      pfVar6 = pfVar22 + -0x10;
      pfVar11 = pfVar22 + -0xf;
      pfVar12 = pfVar22 + -0xe;
      pfVar13 = pfVar22 + -0xd;
      pfVar22 = pfVar22 + -0x28;
      auVar53 = NEON_ext(auVar54,auVar54,8,1);
      auVar50._0_4_ = *pfVar2 * fVar41 + auVar55._0_4_;
      auVar50._4_4_ = *pfVar14 * fVar41 + auVar55._4_4_;
      auVar50._8_4_ = *pfVar15 * fVar41 + auVar44._0_4_;
      auVar50._12_4_ = *pfVar16 * fVar41 + 0.0;
      auVar44 = pauVar26[-1];
      auVar52 = NEON_ext(auVar50,auVar50,8,1);
      pfVar2 = (float *)(param_2 + (ulong)*pbVar24 * 4);
      pauVar26 = pauVar26 + -2;
      auVar45._0_4_ = *pfVar6 * fVar41 + auVar54._0_4_;
      auVar45._4_4_ = *pfVar11 * fVar41 + auVar54._4_4_;
      auVar45._8_4_ = *pfVar12 * fVar41 + auVar53._0_4_;
      auVar45._12_4_ = *pfVar13 * fVar41 + 0.0;
      auVar55 = NEON_ext(auVar45,auVar45,8,1);
      auVar53 = NEON_ext(auVar44,auVar44,8,1);
      fVar34 = fVar34 - auVar50._0_4_;
      fVar36 = fVar36 - auVar50._4_4_;
      fVar38 = fVar38 - auVar52._0_4_;
      fVar39 = fVar39 - 0.0;
      fVar41 = auVar44._4_4_;
      auVar52._4_4_ = fVar36;
      auVar52._0_4_ = fVar34;
      auVar52._8_4_ = fVar38;
      auVar52._12_4_ = fVar39;
      auVar67._4_4_ = fVar36;
      auVar67._0_4_ = fVar34;
      auVar67._8_4_ = fVar38;
      auVar67._12_4_ = fVar39;
      auVar52 = NEON_ext(auVar52,auVar67,8,1);
      fVar33 = auVar44._0_4_ * fVar36 - fVar41 * fVar34;
      uVar43 = NEON_ext(CONCAT44(fVar41 * fVar38 - auVar44._8_4_ * fVar36,fVar33),
                        CONCAT44(auVar53._4_4_ * fVar36 - fVar41 * auVar52._4_4_,
                                 auVar53._0_4_ * fVar34 - auVar44._0_4_ * auVar52._0_4_),4,1);
      *(ulong *)(pfVar2 + 2) = CONCAT44(pfVar2[3] + fVar39,pfVar2[2] + fVar38);
      *(ulong *)pfVar2 = CONCAT44(pfVar2[1] + fVar36,*pfVar2 + fVar34);
      pfVar2[6] = pfVar2[6] + (fVar31 - auVar55._0_4_) + fVar33;
      pfVar2[7] = pfVar2[7] + (fVar32 - 0.0) + 0.0;
      pfVar2[4] = pfVar2[4] + (fVar29 - auVar45._0_4_) + (float)uVar43;
      pfVar2[5] = pfVar2[5] + (fVar30 - auVar45._4_4_) + (float)((ulong)uVar43 >> 0x20);
      pfVar21 = pfVar21 + -4;
      pbVar24 = pbVar24 + -1;
      pfVar25 = pfVar25 + -8;
    } while (1 < uVar5);
    uVar17 = (ulong)*(ushort *)(param_1 + 8);
    pfVar22 = (float *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a));
  }
  fVar34 = -(float)*param_2;
  fVar36 = -(float)((ulong)*param_2 >> 0x20);
  fVar38 = -(float)param_2[1];
  fVar31 = -*(float *)(param_2 + 2);
  fVar32 = -*(float *)((long)param_2 + 0x14);
  fVar33 = -*(float *)(param_2 + 3);
  auVar51._0_4_ = fVar34 * pfVar22[0xc];
  auVar51._4_4_ = fVar36 * pfVar22[0xd];
  auVar51._8_4_ = fVar38 * pfVar22[0xe];
  auVar51._12_4_ = pfVar22[0xf] * 0.0;
  auVar56._0_4_ = fVar34 * pfVar22[0x10];
  auVar56._4_4_ = fVar36 * pfVar22[0x11];
  auVar56._8_4_ = fVar38 * pfVar22[0x12];
  auVar56._12_4_ = pfVar22[0x13] * 0.0;
  auVar57._0_4_ = fVar34 * pfVar22[0x14];
  auVar57._4_4_ = fVar36 * pfVar22[0x15];
  auVar57._8_4_ = fVar38 * pfVar22[0x16];
  auVar57._12_4_ = pfVar22[0x17] * 0.0;
  auVar44 = NEON_ext(auVar51,auVar51,8,1);
  fVar29 = auVar44._0_4_ + auVar44._4_4_;
  auVar44 = NEON_ext(auVar56,auVar56,8,1);
  fVar30 = auVar44._0_4_ + auVar44._4_4_;
  auVar44 = NEON_ext(auVar57,auVar57,8,1);
  uVar43 = NEON_ext(CONCAT44(auVar51._0_4_ + auVar51._4_4_ + fVar29,
                             auVar51._0_4_ + auVar51._4_4_ + fVar29),
                    CONCAT44(auVar56._0_4_ + auVar56._4_4_ + fVar30,
                             auVar56._0_4_ + auVar56._4_4_ + fVar30),4,1);
  auStack_810[1] =
       (ulong)(uint)(pfVar22[2] * fVar34 + pfVar22[6] * fVar36 + pfVar22[10] * fVar38 +
                    pfVar22[0xe] * fVar31 + pfVar22[0x12] * fVar32 + pfVar22[0x16] * fVar33);
  auStack_810[0] =
       CONCAT44(pfVar22[1] * fVar34 + pfVar22[5] * fVar36 + pfVar22[9] * fVar38 +
                pfVar22[0xd] * fVar31 + pfVar22[0x11] * fVar32 + pfVar22[0x15] * fVar33,
                *pfVar22 * fVar34 + pfVar22[4] * fVar36 + pfVar22[8] * fVar38 +
                pfVar22[0xc] * fVar31 + pfVar22[0x10] * fVar32 + pfVar22[0x14] * fVar33);
  auStack_800[1] =
       (ulong)(uint)(pfVar22[0x1a] * fVar31 + (float)*(undefined8 *)(pfVar22 + 0x1e) * fVar32 +
                     pfVar22[0x22] * fVar33 +
                    auVar57._0_4_ + auVar57._4_4_ + auVar44._0_4_ + auVar44._4_4_);
  auStack_800[0] =
       CONCAT44(pfVar22[0x19] * fVar31 +
                (float)((ulong)*(undefined8 *)(pfVar22 + 0x1c) >> 0x20) * fVar32 +
                pfVar22[0x21] * fVar33 + (float)((ulong)uVar43 >> 0x20),
                pfVar22[0x18] * fVar31 + (float)*(undefined8 *)(pfVar22 + 0x1c) * fVar32 +
                pfVar22[0x20] * fVar33 + (float)uVar43);
  if (1 < (uint)uVar17) {
    lVar27 = 0;
    pfVar22 = afStack_7e0;
    pfVar18 = pfVar18 + 0x6c;
    pauVar26 = (undefined1 (*) [16])(param_1 + (ulong)uVar4 + 0x30);
    do {
      uVar28 = (ulong)*(byte *)(param_1 + 0x41 + lVar27);
      auVar46._0_4_ = -*(float *)pauVar26[-1];
      auVar46._4_4_ = -*(float *)(pauVar26[-1] + 4);
      auVar46._8_4_ = -*(float *)(pauVar26[-1] + 8);
      auVar44 = *(undefined1 (*) [16])(auStack_800 + uVar28 * 4);
      uVar23 = lVar27 + 2;
      fVar39 = auVar44._4_4_;
      auVar52 = NEON_ext(auVar44,auVar44,8,1);
      fVar38 = auVar44._0_4_;
      auVar46._12_4_ = 0;
      auVar53 = NEON_ext(auVar46,auVar46,8,1);
      fVar41 = auVar44._8_4_;
      fVar29 = afStack_c00[lVar27 * 4];
      fVar30 = afStack_c00[lVar27 * 4 + 1];
      fVar31 = afStack_c00[lVar27 * 4 + 2];
      lVar27 = lVar27 + 1;
      fVar42 = auVar46._0_4_ * fVar39 - auVar46._4_4_ * fVar38;
      fVar60 = fVar38 * (float)*(undefined8 *)(pfVar18 + -0x14);
      fVar61 = fVar39 * (float)((ulong)*(undefined8 *)(pfVar18 + -0x14) >> 0x20);
      fVar33 = fVar41 * (float)*(undefined8 *)(pfVar18 + -0x12);
      fVar49 = auVar44._12_4_;
      fVar34 = fVar49 * (float)((ulong)*(undefined8 *)(pfVar18 + -0x12) >> 0x20);
      uVar43 = NEON_ext(CONCAT44(auVar46._4_4_ * fVar41 - auVar46._8_4_ * fVar39,fVar42),
                        CONCAT44(auVar53._4_4_ * fVar39 - auVar46._4_4_ * auVar52._4_4_,
                                 auVar53._0_4_ * fVar38 - auVar46._0_4_ * auVar52._0_4_),4,1);
      auVar58._0_4_ = fVar38 * pfVar18[-0x1c];
      auVar58._4_4_ = fVar39 * pfVar18[-0x1b];
      auVar58._8_4_ = fVar41 * pfVar18[-0x1a];
      auVar58._12_4_ = fVar49 * pfVar18[-0x19];
      fVar35 = (float)auStack_810[uVar28 * 4] + (float)uVar43;
      fVar37 = (float)(auStack_810[uVar28 * 4] >> 0x20) + (float)((ulong)uVar43 >> 0x20);
      fVar42 = (float)auStack_810[uVar28 * 4 + 1] + fVar42;
      fVar40 = (float)(auStack_810[uVar28 * 4 + 1] >> 0x20) + 0.0;
      auVar44 = NEON_ext(auVar58,auVar58,8,1);
      auVar47._0_4_ = pfVar18[-0x20] * fVar35;
      auVar47._4_4_ = pfVar18[-0x1f] * fVar37;
      auVar47._8_4_ = pfVar18[-0x1e] * fVar42;
      auVar47._12_4_ = pfVar18[-0x1d] * fVar40;
      fVar32 = auVar44._0_4_ + auVar44._4_4_;
      auVar59._0_4_ = fVar35 * pfVar18[-0x18];
      auVar59._4_4_ = fVar37 * pfVar18[-0x17];
      auVar59._8_4_ = fVar42 * pfVar18[-0x16];
      auVar59._12_4_ = fVar40 * pfVar18[-0x15];
      auVar7._4_4_ = fVar61;
      auVar7._0_4_ = fVar60;
      auVar7._8_4_ = fVar33;
      auVar7._12_4_ = fVar34;
      auVar8._4_4_ = fVar61;
      auVar8._0_4_ = fVar60;
      auVar8._8_4_ = fVar33;
      auVar8._12_4_ = fVar34;
      auVar44 = NEON_ext(auVar7,auVar8,8,1);
      fVar33 = auVar44._0_4_ + auVar44._4_4_;
      fVar63 = fVar35 * (float)*(undefined8 *)(pfVar18 + -0x10);
      fVar64 = fVar37 * (float)((ulong)*(undefined8 *)(pfVar18 + -0x10) >> 0x20);
      fVar65 = fVar42 * (float)*(undefined8 *)(pfVar18 + -0xe);
      fVar66 = fVar40 * (float)((ulong)*(undefined8 *)(pfVar18 + -0xe) >> 0x20);
      auVar44 = NEON_ext(auVar47,auVar47,8,1);
      fVar34 = auVar44._0_4_ + auVar44._4_4_;
      auVar44 = NEON_ext(auVar59,auVar59,8,1);
      auVar62._0_4_ = fVar38 * pfVar18[-0xc];
      auVar62._4_4_ = fVar39 * pfVar18[-0xb];
      auVar62._8_4_ = fVar41 * pfVar18[-10];
      auVar62._12_4_ = fVar49 * pfVar18[-9];
      fVar36 = auVar44._0_4_ + auVar44._4_4_;
      auVar9._4_4_ = fVar64;
      auVar9._0_4_ = fVar63;
      auVar9._8_4_ = fVar65;
      auVar9._12_4_ = fVar66;
      auVar10._4_4_ = fVar64;
      auVar10._0_4_ = fVar63;
      auVar10._8_4_ = fVar65;
      auVar10._12_4_ = fVar66;
      auVar52 = NEON_ext(auVar9,auVar10,8,1);
      auVar67 = NEON_ext(auVar62,auVar62,8,1);
      uVar43 = NEON_ext(CONCAT44(auVar47._0_4_ + auVar47._4_4_ + fVar34 +
                                 auVar58._0_4_ + auVar58._4_4_ + fVar32,
                                 auVar47._0_4_ + auVar47._4_4_ + fVar34 +
                                 auVar58._0_4_ + auVar58._4_4_ + fVar32),
                        CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar36 + fVar60 + fVar61 + fVar33,
                                 auVar59._0_4_ + auVar59._4_4_ + fVar36 + fVar60 + fVar61 + fVar33),
                        4,1);
      auVar44 = *pauVar26;
      auVar53 = NEON_ext(auVar44,auVar44,8,1);
      auVar48._0_4_ =
           pfVar18[-8] * fVar29 + (float)*(undefined8 *)(pfVar18 + -4) * fVar30 + *pfVar18 * fVar31
           + (float)uVar43;
      auVar48._4_4_ =
           pfVar18[-7] * fVar29 + (float)((ulong)*(undefined8 *)(pfVar18 + -4) >> 0x20) * fVar30 +
           pfVar18[1] * fVar31 + (float)((ulong)uVar43 >> 0x20);
      auVar48._8_4_ =
           pfVar18[-6] * fVar29 + (float)*(undefined8 *)(pfVar18 + -2) * fVar30 +
           pfVar18[2] * fVar31 +
           fVar63 + fVar64 + auVar52._0_4_ + auVar52._4_4_ +
           auVar62._0_4_ + auVar62._4_4_ + auVar67._0_4_ + auVar67._4_4_;
      auVar48._12_4_ = 0;
      fVar30 = auVar44._4_4_;
      auVar52 = NEON_ext(auVar48,auVar48,8,1);
      fVar29 = auVar44._0_4_ * auVar48._4_4_ - fVar30 * auVar48._0_4_;
      uVar43 = NEON_ext(CONCAT44(fVar30 * auVar48._8_4_ - auVar44._8_4_ * auVar48._4_4_,fVar29),
                        CONCAT44(auVar53._4_4_ * auVar48._4_4_ - fVar30 * auVar52._4_4_,
                                 auVar53._0_4_ * auVar48._0_4_ - auVar44._0_4_ * auVar52._0_4_),4,1)
      ;
      *(ulong *)(pfVar22 + -2) = CONCAT44(fVar40 - 0.0,fVar42 - fVar29);
      *(ulong *)(pfVar22 + -4) =
           CONCAT44(fVar37 - (float)((ulong)uVar43 >> 0x20),fVar35 - (float)uVar43);
      pfVar22[2] = fVar41 - auVar48._8_4_;
      pfVar22[3] = fVar49 - 0.0;
      *pfVar22 = fVar38 - auVar48._0_4_;
      pfVar22[1] = fVar39 - auVar48._4_4_;
      pfVar22 = pfVar22 + 8;
      pfVar18 = pfVar18 + 0x28;
      pauVar26 = pauVar26 + 2;
    } while (uVar23 < uVar17);
    uVar17 = (ulong)*(ushort *)(param_1 + 8);
  }
  if ((int)uVar17 != 0) {
    uVar17 = 0;
    puVar19 = (undefined8 *)(param_3 + 0x10);
    puVar20 = auStack_800;
    do {
      uVar23 = puVar20[-2];
      uVar17 = uVar17 + 1;
      puVar19[-1] = CONCAT44((float)((ulong)puVar19[-1] >> 0x20) + (float)(puVar20[-1] >> 0x20),
                             (float)puVar19[-1] + (float)puVar20[-1]);
      puVar19[-2] = CONCAT44((float)((ulong)puVar19[-2] >> 0x20) + (float)(uVar23 >> 0x20),
                             (float)puVar19[-2] + (float)uVar23);
      uVar23 = *puVar20;
      puVar19[1] = CONCAT44((float)((ulong)puVar19[1] >> 0x20) + (float)(puVar20[1] >> 0x20),
                            (float)puVar19[1] + (float)puVar20[1]);
      *puVar19 = CONCAT44((float)((ulong)*puVar19 >> 0x20) + (float)(uVar23 >> 0x20),
                          (float)*puVar19 + (float)uVar23);
      puVar19 = puVar19 + 4;
      puVar20 = puVar20 + 4;
    } while (uVar17 < *(ushort *)(param_1 + 8));
  }
  return;
}


