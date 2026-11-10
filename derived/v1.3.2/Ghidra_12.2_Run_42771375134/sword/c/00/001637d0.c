/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001637d0; name: FUN_001637d0
 */


void FUN_001637d0(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined8 *puVar5;
  float *pfVar6;
  bool bVar7;
  ushort uVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined *puVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  float *pfVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  ulong local_930 [2];
  undefined8 uStack_920;
  float fStack_91c;
  undefined8 uStack_918;
  uint local_130 [64];
  
  puVar2 = (undefined8 *)(param_2 + (ulong)*(ushort *)(param_2 + 0x1a));
  lVar1 = param_2 + 0x80;
  uVar26 = *(ulong *)(param_2 + 0x10) & puVar2[(param_3 & 0xffffffff) * 0x14 + 0x25];
  if (uVar26 != 0) {
    uVar26 = puVar2[(param_3 & 0xffffffff) * 0x14 + 0x25] & -(uVar26 & -uVar26);
    uVar8 = *(ushort *)(param_2 + 10);
    lVar21 = (ulong)*(ushort *)(param_2 + 8) * 0x20;
    bVar7 = (uVar26 & 1) != 0;
    if (bVar7) {
      fVar39 = -(float)*(undefined8 *)(param_2 + 0x20);
      fVar40 = -(float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
      fVar32 = -(float)*(undefined8 *)(param_2 + 0x28);
      fVar33 = -(float)*(undefined8 *)(param_2 + 0x30);
      fVar34 = -(float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
      fVar63 = -(float)*(undefined8 *)(param_2 + 0x38);
      fVar44 = (float)puVar2[9];
      fVar41 = (float)puVar2[8];
      fVar42 = (float)((ulong)puVar2[8] >> 0x20);
      fVar47 = fVar39 * fVar41;
      fVar43 = fVar40 * fVar42;
      fVar38 = fVar32 * fVar44;
      fVar52 = (float)((ulong)puVar2[9] >> 0x20) * 0.0;
      auVar55._0_4_ = fVar39 * *(float *)(puVar2 + 10);
      auVar55._4_4_ = fVar40 * *(float *)((long)puVar2 + 0x54);
      auVar55._8_4_ = fVar32 * *(float *)(puVar2 + 0xb);
      auVar55._12_4_ = *(float *)((long)puVar2 + 0x5c) * 0.0;
      auVar59._0_4_ = fVar39 * *(float *)(puVar2 + 6);
      auVar59._4_4_ = fVar40 * *(float *)((long)puVar2 + 0x34);
      auVar59._8_4_ = fVar32 * *(float *)(puVar2 + 7);
      auVar59._12_4_ = *(float *)((long)puVar2 + 0x3c) * 0.0;
      auVar65 = NEON_ext(auVar59,auVar59,8,1);
      fVar37 = auVar65._0_4_ + auVar65._4_4_;
      auVar65._4_4_ = fVar43;
      auVar65._0_4_ = fVar47;
      auVar65._8_4_ = fVar38;
      auVar65._12_4_ = fVar52;
      auVar56._4_4_ = fVar43;
      auVar56._0_4_ = fVar47;
      auVar56._8_4_ = fVar38;
      auVar56._12_4_ = fVar52;
      auVar65 = NEON_ext(auVar65,auVar56,8,1);
      auVar56 = NEON_ext(auVar55,auVar55,8,1);
      fVar38 = auVar65._0_4_ + auVar65._4_4_;
      fVar41 = (float)*puVar2 * fVar39 + (float)puVar2[2] * fVar40 + (float)puVar2[4] * fVar32 +
               *(float *)(puVar2 + 6) * fVar33 + fVar41 * fVar34 + *(float *)(puVar2 + 10) * fVar63;
      fVar42 = (float)((ulong)*puVar2 >> 0x20) * fVar39 + (float)((ulong)puVar2[2] >> 0x20) * fVar40
               + (float)((ulong)puVar2[4] >> 0x20) * fVar32 +
               *(float *)((long)puVar2 + 0x34) * fVar33 + fVar42 * fVar34 +
               *(float *)((long)puVar2 + 0x54) * fVar63;
      uVar22 = CONCAT44(fVar42,fVar41);
      fVar40 = (float)puVar2[1] * fVar39 + (float)puVar2[3] * fVar40 + (float)puVar2[5] * fVar32 +
               *(float *)(puVar2 + 7) * fVar33 + fVar44 * fVar34 + *(float *)(puVar2 + 0xb) * fVar63
      ;
      uVar36 = (ulong)(uint)fVar40;
      uVar35 = NEON_ext(CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar37,
                                 auVar59._0_4_ + auVar59._4_4_ + fVar37),
                        CONCAT44(fVar47 + fVar43 + fVar38,fVar47 + fVar43 + fVar38),4,1);
      uVar48 = *(undefined8 *)(param_2 + 0x98);
      uVar54 = *(undefined8 *)(param_2 + 0x90);
      fVar37 = (float)puVar2[0xc] * fVar33 + (float)puVar2[0xe] * fVar34 +
               *(float *)(puVar2 + 0x10) * fVar63 + (float)uVar35;
      fVar38 = (float)((ulong)puVar2[0xc] >> 0x20) * fVar33 +
               (float)((ulong)puVar2[0xe] >> 0x20) * fVar34 +
               *(float *)((long)puVar2 + 0x84) * fVar63 + (float)((ulong)uVar35 >> 0x20);
      fVar39 = (float)puVar2[0xd] * fVar33 + (float)puVar2[0xf] * fVar34 +
               *(float *)(puVar2 + 0x11) * fVar63 +
               auVar55._0_4_ + auVar55._4_4_ + auVar56._0_4_ + auVar56._4_4_;
      *(ulong *)(param_2 + 0x88) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20) + 0.0,
                    fVar40 + (float)*(undefined8 *)(param_2 + 0x88));
      *(ulong *)(param_2 + 0x80) =
           CONCAT44(fVar42 + (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(param_2 + 0x80));
      *(float *)(param_2 + 0x98) = (float)uVar48 + fVar39;
      *(float *)(param_2 + 0x9c) = (float)((ulong)uVar48 >> 0x20) + 0.0;
      *(float *)(param_2 + 0x90) = (float)uVar54 + fVar37;
      *(float *)(param_2 + 0x94) = (float)((ulong)uVar54 >> 0x20) + fVar38;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      local_130[0] = 0;
      local_930[1] = uVar36;
      local_930[0] = uVar22;
      uStack_918 = (ulong)(uint)fVar39;
      uStack_920 = CONCAT44(fVar38,fVar37);
      uVar27 = puVar2[0x24];
      uVar29 = uVar26 - 1;
      puVar19 = PTR_DAT_02710c28;
    }
    else {
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      uVar27 = 0;
      uVar36 = 0;
      uVar22 = 0;
      uVar29 = uVar26;
      puVar19 = PTR_DAT_02710c28;
    }
    uVar20 = (uint)bVar7;
    PTR_DAT_02710c28 = puVar19;
    if (uVar29 != 0) {
      fVar40 = 0.0;
      lVar3 = lVar1 + lVar21 + lVar21;
      do {
        uVar23 = (uint)(uVar29 >> 0x20);
        uVar28 = (uint)uVar29;
        uVar23 = *(int *)(puVar19 + (ulong)((uVar23 & -uVar23) * 0x77cb531 >> 0x1b) * 4) + 0x20;
        if (uVar28 != 0) {
          uVar23 = *(uint *)(puVar19 + (ulong)((uVar28 & -uVar28) * 0x77cb531 >> 0x1b) * 4);
        }
        uVar24 = (ulong)uVar23;
        lVar31 = uVar24 * 0x20;
        pfVar6 = (float *)(lVar1 + lVar21 + lVar31);
        pauVar4 = (undefined1 (*) [16])(param_2 + (ulong)uVar8 + lVar31);
        puVar5 = (undefined8 *)(lVar1 + lVar31);
        pfVar30 = (float *)(puVar2 + uVar24 * 0x14 + 0x12);
        fVar37 = fVar37 + (float)*(undefined8 *)(pfVar6 + 4);
        fVar38 = fVar38 + (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20);
        fVar39 = fVar39 + (float)*(undefined8 *)(pfVar6 + 6);
        fVar40 = fVar40 + (float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20);
        auVar11._4_4_ = fVar38;
        auVar11._0_4_ = fVar37;
        auVar11._8_4_ = fVar39;
        auVar11._12_4_ = fVar40;
        auVar12._4_4_ = fVar38;
        auVar12._0_4_ = fVar37;
        auVar12._8_4_ = fVar39;
        auVar12._12_4_ = fVar40;
        auVar59 = NEON_ext(auVar11,auVar12,8,1);
        auVar65 = *pauVar4;
        pauVar9 = pauVar4 + 1;
        uVar53 = (undefined4)((ulong)*(undefined8 *)(pauVar4[1] + 8) >> 0x20);
        fVar50 = (float)*(undefined8 *)*pauVar9;
        fVar51 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
        uVar29 = uVar29 - 1 & uVar29;
        fVar32 = auVar65._4_4_;
        auVar56 = NEON_ext(auVar65,auVar65,8,1);
        puVar10 = (undefined8 *)(lVar3 + uVar24 * 0x10);
        fVar45 = (float)puVar10[1];
        uVar54 = *puVar10;
        fVar44 = (float)uVar54;
        fVar52 = (float)((ulong)uVar54 >> 0x20);
        fVar47 = fVar37 * fVar32 - fVar38 * auVar65._0_4_;
        uVar54 = NEON_ext(CONCAT44(fVar38 * auVar65._8_4_ - fVar39 * fVar32,fVar47),
                          CONCAT44(auVar59._4_4_ * fVar32 - fVar38 * auVar56._4_4_,
                                   auVar59._0_4_ * auVar65._0_4_ - fVar37 * auVar56._0_4_),4,1);
        fVar61 = fVar37 * (float)*(undefined8 *)(pfVar30 + 0x14);
        fVar62 = fVar38 * (float)((ulong)*(undefined8 *)(pfVar30 + 0x14) >> 0x20);
        fVar63 = fVar39 * (float)*(undefined8 *)(pfVar30 + 0x16);
        fVar64 = fVar40 * (float)((ulong)*(undefined8 *)(pfVar30 + 0x16) >> 0x20);
        auVar49._0_4_ = fVar37 * pfVar30[4];
        auVar49._4_4_ = fVar38 * pfVar30[5];
        auVar49._8_4_ = fVar39 * pfVar30[6];
        auVar49._12_4_ = fVar40 * pfVar30[7];
        auVar65 = NEON_ext(auVar49,auVar49,8,1);
        fVar41 = (float)uVar22 + *pfVar6 + (float)uVar54;
        fVar42 = (float)(uVar22 >> 0x20) + pfVar6[1] + (float)((ulong)uVar54 >> 0x20);
        fVar47 = (float)uVar36 + pfVar6[2] + fVar47;
        fVar43 = (float)(uVar36 >> 0x20) + pfVar6[3] + 0.0;
        fVar32 = auVar65._0_4_ + auVar65._4_4_;
        auVar58._0_4_ = *pfVar30 * fVar41;
        auVar58._4_4_ = pfVar30[1] * fVar42;
        auVar58._8_4_ = pfVar30[2] * fVar47;
        auVar58._12_4_ = pfVar30[3] * fVar43;
        auVar65 = NEON_ext(auVar58,auVar58,8,1);
        auVar57._0_4_ = fVar37 * pfVar30[0xc];
        auVar57._4_4_ = fVar38 * pfVar30[0xd];
        auVar57._8_4_ = fVar39 * pfVar30[0xe];
        auVar57._12_4_ = fVar40 * pfVar30[0xf];
        fVar33 = auVar65._0_4_ + auVar65._4_4_;
        auVar46._0_4_ = pfVar30[8] * fVar41;
        auVar46._4_4_ = pfVar30[9] * fVar42;
        auVar46._8_4_ = pfVar30[10] * fVar47;
        auVar46._12_4_ = pfVar30[0xb] * fVar43;
        auVar65 = NEON_ext(auVar46,auVar46,8,1);
        auVar60._0_4_ = pfVar30[0x10] * fVar41;
        auVar60._4_4_ = pfVar30[0x11] * fVar42;
        auVar60._8_4_ = pfVar30[0x12] * fVar47;
        auVar60._12_4_ = pfVar30[0x13] * fVar43;
        auVar59 = NEON_ext(auVar60,auVar60,8,1);
        fVar34 = auVar65._0_4_ + auVar65._4_4_;
        auVar56 = NEON_ext(auVar57,auVar57,8,1);
        auVar17._4_4_ = fVar62;
        auVar17._0_4_ = fVar61;
        auVar17._8_4_ = fVar63;
        auVar17._12_4_ = fVar64;
        auVar18._4_4_ = fVar62;
        auVar18._0_4_ = fVar61;
        auVar18._8_4_ = fVar63;
        auVar18._12_4_ = fVar64;
        auVar65 = NEON_ext(auVar17,auVar18,8,1);
        fVar63 = auVar56._0_4_ + auVar56._4_4_;
        uVar48 = NEON_ext(CONCAT44(auVar49._0_4_ + auVar49._4_4_ + fVar32,
                                   auVar49._0_4_ + auVar49._4_4_ + fVar32),
                          CONCAT44(auVar57._0_4_ + auVar57._4_4_ + fVar63,
                                   auVar57._0_4_ + auVar57._4_4_ + fVar63),4,1);
        uVar54 = NEON_ext(CONCAT44(auVar58._0_4_ + auVar58._4_4_ + fVar33,
                                   auVar58._0_4_ + auVar58._4_4_ + fVar33),
                          CONCAT44(auVar46._0_4_ + auVar46._4_4_ + fVar34,
                                   auVar46._0_4_ + auVar46._4_4_ + fVar34),4,1);
        fVar32 = pfVar30[0x18] * fVar44 + pfVar30[0x1c] * fVar52 + pfVar30[0x20] * fVar45 +
                 (float)uVar54 + (float)uVar48;
        fVar33 = pfVar30[0x19] * fVar44 + pfVar30[0x1d] * fVar52 + pfVar30[0x21] * fVar45 +
                 (float)((ulong)uVar54 >> 0x20) + (float)((ulong)uVar48 >> 0x20);
        fVar34 = pfVar30[0x1a] * fVar44 + pfVar30[0x1e] * fVar52 + pfVar30[0x22] * fVar45 +
                 auVar60._0_4_ + auVar60._4_4_ + auVar59._0_4_ + auVar59._4_4_ +
                 fVar61 + fVar62 + auVar65._0_4_ + auVar65._4_4_;
        auVar15._12_4_ = uVar53;
        auVar15._0_12_ = *(undefined1 (*) [12])*pauVar9;
        auVar16._12_4_ = uVar53;
        auVar16._0_12_ = *(undefined1 (*) [12])*pauVar9;
        auVar65 = NEON_ext(auVar15,auVar16,8,1);
        auVar13._4_4_ = fVar33;
        auVar13._0_4_ = fVar32;
        auVar13._8_4_ = fVar34;
        auVar13._12_4_ = 0;
        auVar14._4_4_ = fVar33;
        auVar14._0_4_ = fVar32;
        auVar14._8_4_ = fVar34;
        auVar14._12_4_ = 0;
        auVar56 = NEON_ext(auVar13,auVar14,8,1);
        fVar37 = fVar37 - fVar32;
        fVar38 = fVar38 - fVar33;
        fVar39 = fVar39 - fVar34;
        fVar40 = fVar40 - 0.0;
        fVar63 = fVar50 * fVar33 - fVar51 * fVar32;
        uVar54 = NEON_ext(CONCAT44(fVar51 * fVar34 - (float)*(undefined8 *)(pauVar4[1] + 8) * fVar33
                                   ,fVar63),
                          CONCAT44(auVar65._4_4_ * fVar33 - fVar51 * auVar56._4_4_,
                                   auVar65._0_4_ * fVar32 - fVar50 * auVar56._0_4_),4,1);
        fVar41 = fVar41 - (float)uVar54;
        fVar42 = fVar42 - (float)((ulong)uVar54 >> 0x20);
        uVar22 = CONCAT44(fVar42,fVar41);
        fVar47 = fVar47 - fVar63;
        uVar36 = CONCAT44(fVar43 - 0.0,fVar47);
        puVar5[1] = CONCAT44((float)((ulong)puVar5[1] >> 0x20) + (fVar43 - 0.0),
                             (float)puVar5[1] + fVar47);
        *puVar5 = CONCAT44((float)((ulong)*puVar5 >> 0x20) + fVar42,(float)*puVar5 + fVar41);
        *(float *)(puVar5 + 3) = *(float *)(puVar5 + 3) + fVar39;
        *(float *)((long)puVar5 + 0x1c) = *(float *)((long)puVar5 + 0x1c) + fVar40;
        *(float *)(puVar5 + 2) = *(float *)(puVar5 + 2) + fVar37;
        *(float *)((long)puVar5 + 0x14) = *(float *)((long)puVar5 + 0x14) + fVar38;
        pfVar6[2] = 0.0;
        pfVar6[3] = 0.0;
        pfVar6[0] = 0.0;
        pfVar6[1] = 0.0;
        pfVar6[6] = 0.0;
        pfVar6[7] = 0.0;
        pfVar6[4] = 0.0;
        pfVar6[5] = 0.0;
        puVar5 = (undefined8 *)(lVar3 + uVar24 * 0x10);
        puVar5[1] = 0;
        *puVar5 = 0;
        local_130[uVar24] = uVar20;
        uVar25 = *(ulong *)(pfVar30 + 0x24);
        uVar24 = (ulong)uVar20;
        uVar20 = uVar20 + 1;
        local_930[uVar24 * 4 + 1] = uVar36;
        local_930[uVar24 * 4] = uVar22;
        (&uStack_918)[uVar24 * 4] = CONCAT44(fVar40,fVar39);
        local_930[uVar24 * 4 + 2] = CONCAT44(fVar38,fVar37);
        uVar27 = uVar25 | uVar27;
      } while (uVar29 != 0);
    }
    puVar19 = PTR_DAT_02710c28;
    for (uVar29 = uVar27 & (uVar26 ^ 0xffffffffffffffff); uVar29 != 0; uVar29 = uVar29 - 1 & uVar29)
    {
      uVar20 = (uint)(uVar29 >> 0x20);
      uVar23 = (uint)uVar29;
      uVar20 = *(int *)(puVar19 + (ulong)((uVar20 & -uVar20) * 0x77cb531 >> 0x1b) * 4) + 0x20;
      if (uVar23 != 0) {
        uVar20 = *(uint *)(puVar19 + (ulong)((uVar23 & -uVar23) * 0x77cb531 >> 0x1b) * 4);
      }
      pfVar6 = (float *)(lVar1 + lVar21 + (ulong)uVar20 * 0x20);
      uVar22 = (ulong)local_130[*(byte *)(param_2 + (ulong)uVar20 + 0x40)];
      uVar48 = *(undefined8 *)(pfVar6 + 6);
      uVar54 = *(undefined8 *)(pfVar6 + 4);
      uVar24 = local_930[uVar22 * 4 + 1];
      uVar36 = local_930[uVar22 * 4];
      pfVar6[2] = pfVar6[2] + (float)uVar24;
      pfVar6[3] = pfVar6[3] + (float)(uVar24 >> 0x20);
      *pfVar6 = *pfVar6 + (float)uVar36;
      pfVar6[1] = pfVar6[1] + (float)(uVar36 >> 0x20);
      fVar37 = *(float *)(local_930 + uVar22 * 4 + 2);
      fVar38 = *(float *)((long)local_930 + uVar22 * 0x20 + 0x14);
      fVar39 = *(float *)((long)&uStack_918 + uVar22 * 0x20 + 4);
      pfVar6[6] = (float)uVar48 + *(float *)(&uStack_918 + uVar22 * 4);
      pfVar6[7] = (float)((ulong)uVar48 >> 0x20) + fVar39;
      pfVar6[4] = (float)uVar54 + fVar37;
      pfVar6[5] = (float)((ulong)uVar54 >> 0x20) + fVar38;
    }
    *(ulong *)(param_2 + 0x10) = (*(ulong *)(param_2 + 0x10) | uVar27) & ~uVar26;
  }
  puVar2 = (undefined8 *)(lVar1 + (param_3 & 0xffffffff) * 0x20);
  uVar54 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar54;
  uVar54 = puVar2[2];
  param_1[3] = puVar2[3];
  param_1[2] = uVar54;
  return;
}


