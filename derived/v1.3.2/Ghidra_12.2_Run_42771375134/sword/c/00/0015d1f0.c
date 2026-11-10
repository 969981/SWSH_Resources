/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0015d1f0; name: FUN_0015d1f0
 */


void FUN_0015d1f0(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  undefined1 auVar28 [16];
  uint uVar29;
  ulong *puVar30;
  uint *puVar31;
  ulong uVar32;
  float *pfVar33;
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
  undefined4 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  uint local_510 [64];
  ulong local_410 [128];
  
  fVar39 = -(float)param_3[2];
  fVar40 = -(float)((ulong)param_3[2] >> 0x20);
  fVar41 = -(float)param_3[3];
  fVar34 = -(float)*param_3;
  fVar35 = -(float)((ulong)*param_3 >> 0x20);
  fVar36 = -(float)param_3[1];
  puVar2 = (undefined8 *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a));
  lVar3 = param_1 + (ulong)*(ushort *)(param_1 + 10);
  if (param_2 == 0) {
    uVar29 = 0;
  }
  else {
    uVar32 = 0;
    do {
      pauVar4 = (undefined1 (*) [16])(lVar3 + (ulong)param_2 * 0x20);
      pauVar1 = pauVar4 + 1;
      uVar48 = (undefined4)((ulong)*(undefined8 *)(pauVar4[1] + 8) >> 0x20);
      fVar42 = (float)*(undefined8 *)*pauVar1;
      fVar44 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar51._4_4_ = fVar35;
      auVar51._0_4_ = fVar34;
      auVar51._8_4_ = fVar36;
      auVar51._12_4_ = 0;
      auVar56._4_4_ = fVar35;
      auVar56._0_4_ = fVar34;
      auVar56._8_4_ = fVar36;
      auVar56._12_4_ = 0;
      auVar51 = NEON_ext(auVar51,auVar56,8,1);
      auVar21._12_4_ = uVar48;
      auVar21._0_12_ = *(undefined1 (*) [12])*pauVar1;
      auVar22._12_4_ = uVar48;
      auVar22._0_12_ = *(undefined1 (*) [12])*pauVar1;
      auVar56 = NEON_ext(auVar21,auVar22,8,1);
      fVar43 = fVar34 * fVar44 - fVar35 * fVar42;
      uVar49 = NEON_ext(CONCAT44(fVar35 * (float)*(undefined8 *)(pauVar4[1] + 8) - fVar36 * fVar44,
                                 fVar43),
                        CONCAT44(auVar51._4_4_ * fVar44 - fVar35 * auVar56._4_4_,
                                 auVar51._0_4_ * fVar42 - fVar34 * auVar56._0_4_),4,1);
      fVar44 = fVar39 + (float)uVar49;
      fVar46 = fVar40 + (float)((ulong)uVar49 >> 0x20);
      fVar43 = fVar41 + fVar43;
      pfVar33 = (float *)(puVar2 + (ulong)param_2 * 0x14 + 0x12);
      local_410[uVar32 * 2 + 1] = (ulong)(uint)fVar43;
      local_410[uVar32 * 2] = CONCAT44(fVar46,fVar44);
      fVar39 = fVar39 - pfVar33[0x14] * fVar43;
      fVar40 = fVar40 - pfVar33[0x15] * fVar43;
      fVar41 = fVar41 - pfVar33[0x16] * fVar43;
      fVar42 = 0.0 - pfVar33[0x17] * fVar43;
      auVar13._4_4_ = fVar40;
      auVar13._0_4_ = fVar39;
      auVar13._8_4_ = fVar41;
      auVar13._12_4_ = fVar42;
      auVar14._4_4_ = fVar40;
      auVar14._0_4_ = fVar39;
      auVar14._8_4_ = fVar41;
      auVar14._12_4_ = fVar42;
      auVar56 = NEON_ext(auVar13,auVar14,8,1);
      fVar34 = fVar34 - pfVar33[0x10] * fVar43;
      fVar35 = fVar35 - pfVar33[0x11] * fVar43;
      fVar36 = fVar36 - pfVar33[0x12] * fVar43;
      fVar41 = 0.0 - pfVar33[0x13] * fVar43;
      auVar54._4_4_ = fVar35;
      auVar54._0_4_ = fVar34;
      auVar54._8_4_ = fVar36;
      auVar54._12_4_ = fVar41;
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = fVar41;
      auVar51 = NEON_ext(auVar54,auVar6,8,1);
      fVar39 = fVar39 - pfVar33[0xc] * fVar46;
      fVar40 = fVar40 - pfVar33[0xd] * fVar46;
      fVar36 = auVar56._0_4_ - pfVar33[0xe] * fVar46;
      fVar41 = 0.0 - pfVar33[0xf] * fVar46;
      auVar15._4_4_ = fVar40;
      auVar15._0_4_ = fVar39;
      auVar15._8_4_ = fVar36;
      auVar15._12_4_ = fVar41;
      auVar16._4_4_ = fVar40;
      auVar16._0_4_ = fVar39;
      auVar16._8_4_ = fVar36;
      auVar16._12_4_ = fVar41;
      auVar54 = NEON_ext(auVar15,auVar16,8,1);
      fVar34 = fVar34 - pfVar33[8] * fVar46;
      fVar35 = fVar35 - pfVar33[9] * fVar46;
      fVar36 = auVar51._0_4_ - pfVar33[10] * fVar46;
      fVar41 = 0.0 - pfVar33[0xb] * fVar46;
      auVar7._4_4_ = fVar35;
      auVar7._0_4_ = fVar34;
      auVar7._8_4_ = fVar36;
      auVar7._12_4_ = fVar41;
      auVar8._4_4_ = fVar35;
      auVar8._0_4_ = fVar34;
      auVar8._8_4_ = fVar36;
      auVar8._12_4_ = fVar41;
      auVar56 = NEON_ext(auVar7,auVar8,8,1);
      auVar51 = *pauVar4;
      fVar34 = fVar34 - *pfVar33 * fVar44;
      fVar35 = fVar35 - pfVar33[1] * fVar44;
      fVar36 = auVar56._0_4_ - pfVar33[2] * fVar44;
      fVar41 = 0.0 - pfVar33[3] * fVar44;
      auVar9._4_4_ = fVar35;
      auVar9._0_4_ = fVar34;
      auVar9._8_4_ = fVar36;
      auVar9._12_4_ = fVar41;
      auVar10._4_4_ = fVar35;
      auVar10._0_4_ = fVar34;
      auVar10._8_4_ = fVar36;
      auVar10._12_4_ = fVar41;
      auVar56 = NEON_ext(auVar9,auVar10,8,1);
      fVar39 = fVar39 - pfVar33[4] * fVar44;
      fVar40 = fVar40 - pfVar33[5] * fVar44;
      fVar41 = auVar54._0_4_ - pfVar33[6] * fVar44;
      fVar42 = 0.0 - pfVar33[7] * fVar44;
      fVar43 = auVar51._4_4_;
      local_510[uVar32] = param_2;
      auVar54 = NEON_ext(auVar51,auVar51,8,1);
      fVar36 = auVar56._0_4_;
      uVar49 = NEON_ext(CONCAT44(fVar35,fVar34),(ulong)(uint)fVar36,4,1);
      auVar17._4_4_ = fVar40;
      auVar17._0_4_ = fVar39;
      auVar17._8_4_ = fVar41;
      auVar17._12_4_ = fVar42;
      auVar18._4_4_ = fVar40;
      auVar18._0_4_ = fVar39;
      auVar18._8_4_ = fVar41;
      auVar18._12_4_ = fVar42;
      auVar56 = NEON_ext(auVar17,auVar18,8,1);
      fVar41 = auVar51._0_4_ * (float)uVar49 - fVar43 * fVar34;
      uVar49 = NEON_ext(CONCAT44(fVar43 * (float)((ulong)uVar49 >> 0x20) - auVar51._8_4_ * fVar35,
                                 fVar41),
                        CONCAT44(auVar54._4_4_ * fVar35 - fVar43 * 0.0,
                                 auVar54._0_4_ * fVar34 - auVar51._0_4_ * fVar36),4,1);
      uVar29 = (int)uVar32 + 1;
      fVar39 = fVar39 + (float)uVar49;
      fVar40 = fVar40 + (float)((ulong)uVar49 >> 0x20);
      fVar41 = auVar56._0_4_ + fVar41;
      param_2 = (uint)*(byte *)(param_1 + (ulong)param_2 + 0x40);
      uVar32 = (ulong)uVar29;
    } while (param_2 != 0);
  }
  auVar53._0_4_ = fVar34 * *(float *)(puVar2 + 6);
  auVar53._4_4_ = fVar35 * *(float *)((long)puVar2 + 0x34);
  auVar53._8_4_ = fVar36 * *(float *)(puVar2 + 7);
  auVar53._12_4_ = *(float *)((long)puVar2 + 0x3c) * 0.0;
  auVar57._0_4_ = fVar34 * *(float *)(puVar2 + 8);
  auVar57._4_4_ = fVar35 * *(float *)((long)puVar2 + 0x44);
  auVar57._8_4_ = fVar36 * *(float *)(puVar2 + 9);
  auVar57._12_4_ = *(float *)((long)puVar2 + 0x4c) * 0.0;
  auVar56 = NEON_ext(auVar53,auVar53,8,1);
  auVar51 = NEON_ext(auVar57,auVar57,8,1);
  fVar44 = fVar34 * *(float *)(puVar2 + 10);
  fVar46 = fVar35 * *(float *)((long)puVar2 + 0x54);
  fVar37 = fVar36 * *(float *)(puVar2 + 0xb);
  fVar38 = *(float *)((long)puVar2 + 0x5c) * 0.0;
  fVar42 = auVar51._0_4_ + auVar51._4_4_;
  fVar43 = auVar56._0_4_ + auVar56._4_4_;
  auVar11._4_4_ = fVar46;
  auVar11._0_4_ = fVar44;
  auVar11._8_4_ = fVar37;
  auVar11._12_4_ = fVar38;
  auVar12._4_4_ = fVar46;
  auVar12._0_4_ = fVar44;
  auVar12._8_4_ = fVar37;
  auVar12._12_4_ = fVar38;
  auVar51 = NEON_ext(auVar11,auVar12,8,1);
  uVar49 = NEON_ext(CONCAT44(auVar53._0_4_ + auVar53._4_4_ + fVar43,
                             auVar53._0_4_ + auVar53._4_4_ + fVar43),
                    CONCAT44(auVar57._0_4_ + auVar57._4_4_ + fVar42,
                             auVar57._0_4_ + auVar57._4_4_ + fVar42),4,1);
  uVar50 = CONCAT44(-((float)((ulong)*puVar2 >> 0x20) * fVar34 +
                      (float)((ulong)puVar2[2] >> 0x20) * fVar35 +
                      *(float *)((long)puVar2 + 0x24) * fVar36 +
                     *(float *)((long)puVar2 + 0x34) * fVar39 +
                     *(float *)((long)puVar2 + 0x44) * fVar40 +
                     *(float *)((long)puVar2 + 0x54) * fVar41),
                    -((float)*puVar2 * fVar34 + (float)puVar2[2] * fVar35 +
                      *(float *)(puVar2 + 4) * fVar36 +
                     *(float *)(puVar2 + 6) * fVar39 + *(float *)(puVar2 + 8) * fVar40 +
                     *(float *)(puVar2 + 10) * fVar41));
  uVar32 = (ulong)(uint)-((float)puVar2[1] * fVar34 + (float)puVar2[3] * fVar35 +
                          *(float *)(puVar2 + 5) * fVar36 +
                         *(float *)(puVar2 + 7) * fVar39 + *(float *)(puVar2 + 9) * fVar40 +
                         *(float *)(puVar2 + 0xb) * fVar41);
  fVar35 = -(*(float *)(puVar2 + 0xc) * fVar39 + *(float *)(puVar2 + 0xe) * fVar40 +
             *(float *)(puVar2 + 0x10) * fVar41 + (float)uVar49);
  fVar36 = -(*(float *)((long)puVar2 + 100) * fVar39 + *(float *)((long)puVar2 + 0x74) * fVar40 +
             *(float *)((long)puVar2 + 0x84) * fVar41 + (float)((ulong)uVar49 >> 0x20));
  fVar39 = -(*(float *)(puVar2 + 0xd) * fVar39 + *(float *)(puVar2 + 0xf) * fVar40 +
             *(float *)(puVar2 + 0x11) * fVar41 + fVar44 + fVar46 + auVar51._0_4_ + auVar51._4_4_);
  fVar34 = 0.0;
  if (uVar29 != 0) {
    puVar30 = local_410 + (ulong)(uVar29 - 1) * 2;
    puVar31 = local_510 + (uVar29 - 1);
    do {
      pauVar5 = (undefined1 (*) [12])(lVar3 + (ulong)*puVar31 * 0x20);
      pfVar33 = (float *)(puVar2 + (ulong)*puVar31 * 0x14 + 0x12);
      uVar48 = (undefined4)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
      fVar40 = (float)*(undefined8 *)*pauVar5;
      fVar41 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
      auVar23._12_4_ = uVar48;
      auVar23._0_12_ = *pauVar5;
      auVar24._12_4_ = uVar48;
      auVar24._0_12_ = *pauVar5;
      auVar51 = NEON_ext(auVar23,auVar24,8,1);
      auVar19._4_4_ = fVar36;
      auVar19._0_4_ = fVar35;
      auVar19._8_4_ = fVar39;
      auVar19._12_4_ = fVar34;
      auVar20._4_4_ = fVar36;
      auVar20._0_4_ = fVar35;
      auVar20._8_4_ = fVar39;
      auVar20._12_4_ = fVar34;
      auVar56 = NEON_ext(auVar19,auVar20,8,1);
      fVar61 = (float)*puVar30;
      fVar37 = fVar36 * fVar40 - fVar35 * fVar41;
      fVar62 = (float)(*puVar30 >> 0x20);
      uVar49 = NEON_ext(CONCAT44(fVar39 * fVar41 - fVar36 * (float)*(undefined8 *)(*pauVar5 + 8),
                                 fVar37),
                        CONCAT44(fVar36 * auVar51._4_4_ - auVar56._4_4_ * fVar41,
                                 fVar35 * auVar51._0_4_ - auVar56._0_4_ * fVar40),4,1);
      fVar44 = (float)uVar50 - (float)uVar49;
      fVar46 = (float)((ulong)uVar50 >> 0x20) - (float)((ulong)uVar49 >> 0x20);
      fVar37 = (float)uVar32 - fVar37;
      fVar38 = (float)(uVar32 >> 0x20) - 0.0;
      uVar29 = uVar29 - 1;
      fVar63 = (float)puVar30[1];
      auVar55._0_4_ = fVar35 * pfVar33[4];
      auVar55._4_4_ = fVar36 * pfVar33[5];
      auVar55._8_4_ = fVar39 * pfVar33[6];
      auVar55._12_4_ = fVar34 * pfVar33[7];
      auVar52._0_4_ = pfVar33[8] * fVar44;
      auVar52._4_4_ = pfVar33[9] * fVar46;
      auVar52._8_4_ = pfVar33[10] * fVar37;
      auVar52._12_4_ = pfVar33[0xb] * fVar38;
      auVar56 = NEON_ext(auVar52,auVar52,8,1);
      fVar45 = *pfVar33 * fVar44;
      fVar47 = pfVar33[1] * fVar46;
      auVar51 = NEON_ext(auVar55,auVar55,8,1);
      auVar59._0_4_ = fVar35 * pfVar33[0xc];
      auVar59._4_4_ = fVar36 * pfVar33[0xd];
      auVar59._8_4_ = fVar39 * pfVar33[0xe];
      auVar59._12_4_ = fVar34 * pfVar33[0xf];
      fVar40 = auVar51._0_4_ + auVar51._4_4_;
      auVar58._0_4_ = pfVar33[0x10] * fVar44;
      auVar58._4_4_ = pfVar33[0x11] * fVar46;
      auVar58._8_4_ = pfVar33[0x12] * fVar37;
      auVar58._12_4_ = pfVar33[0x13] * fVar38;
      auVar25._4_4_ = fVar47;
      auVar25._0_4_ = fVar45;
      auVar25._8_4_ = pfVar33[2] * fVar37;
      auVar25._12_4_ = pfVar33[3] * fVar38;
      auVar26._4_4_ = fVar47;
      auVar26._0_4_ = fVar45;
      auVar26._8_4_ = pfVar33[2] * fVar37;
      auVar26._12_4_ = pfVar33[3] * fVar38;
      auVar51 = NEON_ext(auVar25,auVar26,8,1);
      fVar41 = auVar51._0_4_ + auVar51._4_4_;
      auVar51 = NEON_ext(auVar59,auVar59,8,1);
      auVar60._0_4_ = fVar35 * (float)*(undefined8 *)(pfVar33 + 0x14);
      auVar60._4_4_ = fVar36 * (float)((ulong)*(undefined8 *)(pfVar33 + 0x14) >> 0x20);
      auVar60._8_4_ = fVar39 * (float)*(undefined8 *)(pfVar33 + 0x16);
      auVar60._12_4_ = fVar34 * (float)((ulong)*(undefined8 *)(pfVar33 + 0x16) >> 0x20);
      fVar42 = auVar56._0_4_ + auVar56._4_4_;
      auVar54 = NEON_ext(auVar58,auVar58,8,1);
      fVar43 = auVar51._0_4_ + auVar51._4_4_;
      auVar56 = NEON_ext(auVar60,auVar60,8,1);
      uVar49 = NEON_ext(CONCAT44(fVar45 + fVar47 + fVar41,fVar45 + fVar47 + fVar41),
                        CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar42,
                                 auVar52._0_4_ + auVar52._4_4_ + fVar42),4,1);
      uVar50 = NEON_ext(CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar40,
                                 auVar55._0_4_ + auVar55._4_4_ + fVar40),
                        CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar43,
                                 auVar59._0_4_ + auVar59._4_4_ + fVar43),4,1);
      auVar51 = *(undefined1 (*) [16])(pauVar5[1] + 4);
      fVar40 = (float)uVar49 + (float)uVar50 +
               (float)*(undefined8 *)(pfVar33 + 0x18) * fVar61 +
               (float)*(undefined8 *)(pfVar33 + 0x1c) * fVar62 + pfVar33[0x20] * fVar63;
      fVar41 = (float)((ulong)uVar49 >> 0x20) + (float)((ulong)uVar50 >> 0x20) +
               (float)((ulong)*(undefined8 *)(pfVar33 + 0x18) >> 0x20) * fVar61 +
               (float)((ulong)*(undefined8 *)(pfVar33 + 0x1c) >> 0x20) * fVar62 +
               pfVar33[0x21] * fVar63;
      fVar42 = auVar58._0_4_ + auVar58._4_4_ + auVar54._0_4_ + auVar54._4_4_ +
               auVar60._0_4_ + auVar60._4_4_ + auVar56._0_4_ + auVar56._4_4_ +
               (float)*(undefined8 *)(pfVar33 + 0x1a) * fVar61 +
               (float)*(undefined8 *)(pfVar33 + 0x1e) * fVar62 + pfVar33[0x22] * fVar63;
      fVar45 = auVar51._4_4_;
      auVar56 = NEON_ext(auVar51,auVar51,8,1);
      auVar27._4_4_ = fVar41;
      auVar27._0_4_ = fVar40;
      auVar27._8_4_ = fVar42;
      auVar27._12_4_ = 0;
      auVar28._4_4_ = fVar41;
      auVar28._0_4_ = fVar40;
      auVar28._8_4_ = fVar42;
      auVar28._12_4_ = 0;
      auVar54 = NEON_ext(auVar27,auVar28,8,1);
      fVar35 = fVar35 - fVar40;
      fVar36 = fVar36 - fVar41;
      fVar39 = fVar39 - fVar42;
      fVar34 = fVar34 - 0.0;
      fVar43 = auVar51._0_4_ * fVar41 - fVar45 * fVar40;
      uVar49 = NEON_ext(CONCAT44(fVar45 * fVar42 - auVar51._8_4_ * fVar41,fVar43),
                        CONCAT44(auVar56._4_4_ * fVar41 - fVar45 * auVar54._4_4_,
                                 auVar56._0_4_ * fVar40 - auVar51._0_4_ * auVar54._0_4_),4,1);
      uVar50 = CONCAT44(fVar46 - (float)((ulong)uVar49 >> 0x20),fVar44 - (float)uVar49);
      uVar32 = CONCAT44(fVar38 - 0.0,fVar37 - fVar43);
      puVar30 = puVar30 + -2;
      puVar31 = puVar31 + -1;
    } while (uVar29 != 0);
  }
  param_4[1] = uVar32;
  *param_4 = uVar50;
  param_4[3] = CONCAT44(fVar34,fVar39);
  param_4[2] = CONCAT44(fVar36,fVar35);
  return;
}


