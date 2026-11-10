/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007268d0; name: FUN_007268d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007268d0(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  
  uVar24 = _DAT_01d4b7b0;
  uVar25 = _UNK_01d4adb8;
  uVar26 = _DAT_01d4adb0;
  plVar17 = *(long **)(param_1 + 0x368);
  plVar19 = *(long **)(param_1 + 0x370);
  if (((plVar17 != plVar19) && ((long *)plVar17[1] != (long *)*plVar17)) &&
     (*(int *)(*(long *)*plVar17 + 0x1dc) != 0)) {
    puVar16 = *(undefined8 **)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x4a8) = _UNK_01d4b7b8;
    *(undefined8 *)(param_1 + 0x4a0) = uVar24;
    *(undefined8 *)(param_1 + 0x4b8) = uVar25;
    *(undefined8 *)(param_1 + 0x4b0) = uVar26;
    if (puVar16 != *(undefined8 **)(param_1 + 0x478)) {
      lVar18 = *(long *)(param_1 + 0x108);
      uVar26 = NEON_fmov(0x3f800000,4);
      do {
        fVar27 = *(float *)(lVar18 + 0x1b0);
        fVar66 = *(float *)(lVar18 + 0x1b4);
        fVar8 = *(float *)(lVar18 + 0x1b8);
        fVar35 = *(float *)(lVar18 + 0x1c0);
        fVar36 = *(float *)(lVar18 + 0x1c4);
        fVar50 = *(float *)(lVar18 + 0x1c8);
        fVar42 = (float)puVar16[1];
        fVar52 = (float)((ulong)puVar16[1] >> 0x20);
        fVar53 = (float)*puVar16;
        fVar55 = (float)((ulong)*puVar16 >> 0x20);
        fVar37 = (float)((ulong)uVar26 >> 0x20);
        fVar9 = *(float *)(puVar16 + 6);
        fVar10 = *(float *)((long)puVar16 + 0x34);
        fVar11 = *(float *)(puVar16 + 7);
        fVar38 = *(float *)(puVar16 + 2);
        fVar39 = *(float *)((long)puVar16 + 0x14);
        fVar40 = *(float *)(puVar16 + 3);
        fVar54 = *(float *)((long)puVar16 + 0x1c);
        fVar12 = *(float *)(puVar16 + 4);
        fVar13 = *(float *)((long)puVar16 + 0x24);
        fVar14 = *(float *)(puVar16 + 5);
        fVar15 = *(float *)((long)puVar16 + 0x2c);
        puVar16 = puVar16 + 8;
        fVar59 = fVar53 * fVar27 + fVar38 * fVar66;
        fVar60 = fVar55 * fVar27 + fVar39 * fVar66;
        fVar61 = fVar42 * fVar27 + fVar40 * fVar66;
        fVar62 = fVar52 * fVar27 + fVar54 * fVar66;
        fVar41 = fVar53 * fVar35 + fVar38 * fVar66;
        fVar45 = fVar55 * fVar35 + fVar39 * fVar66;
        fVar46 = fVar42 * fVar35 + fVar40 * fVar66;
        fVar47 = fVar52 * fVar35 + fVar54 * fVar66;
        fVar63 = fVar53 * fVar27 + fVar38 * fVar36;
        fVar64 = fVar55 * fVar27 + fVar39 * fVar36;
        fVar65 = fVar42 * fVar27 + fVar40 * fVar36;
        fVar66 = fVar52 * fVar27 + fVar54 * fVar36;
        fVar48 = fVar53 * fVar35 + fVar38 * fVar36;
        fVar49 = fVar55 * fVar35 + fVar39 * fVar36;
        fVar51 = fVar42 * fVar35 + fVar40 * fVar36;
        fVar53 = fVar52 * fVar35 + fVar54 * fVar36;
        fVar27 = 1.0 / (fVar62 + fVar15 * fVar50 + fVar37 * 1.0);
        fVar35 = 1.0 / (fVar47 + fVar15 * fVar50 + fVar37 * 1.0);
        fVar54 = 1.0 / (fVar66 + fVar15 * fVar8 + fVar37 * 1.0);
        auVar30._0_4_ = (fVar59 + fVar12 * fVar50 + fVar9 * fVar37) * fVar27;
        auVar30._4_4_ = (fVar60 + fVar13 * fVar50 + fVar10 * fVar37) * fVar27;
        fVar66 = 1.0 / (fVar66 + fVar15 * fVar50 + fVar37 * 1.0);
        fVar39 = (fVar63 + fVar12 * fVar8 + fVar9 * fVar37) * fVar54;
        fVar40 = (fVar64 + fVar13 * fVar8 + fVar10 * fVar37) * fVar54;
        fVar54 = (fVar65 + fVar14 * fVar8 + fVar11 * fVar37) * fVar54;
        fVar55 = 1.0 / (fVar53 + fVar15 * fVar8 + fVar37 * 1.0);
        fVar36 = (fVar41 + fVar12 * fVar50 + fVar9 * fVar37) * fVar35;
        fVar38 = (fVar45 + fVar13 * fVar50 + fVar10 * fVar37) * fVar35;
        fVar35 = (fVar46 + fVar14 * fVar50 + fVar11 * fVar37) * fVar35;
        fVar42 = 1.0 / (fVar47 + fVar15 * fVar8 + fVar37 * 1.0);
        auVar29._0_4_ = (fVar63 + fVar12 * fVar50 + fVar9 * fVar37) * fVar66;
        auVar29._4_4_ = (fVar64 + fVar13 * fVar50 + fVar10 * fVar37) * fVar66;
        auVar29._8_4_ = (fVar65 + fVar14 * fVar50 + fVar11 * fVar37) * fVar66;
        fVar66 = 1.0 / (fVar53 + fVar15 * fVar50 + fVar37 * 1.0);
        fVar47 = (fVar48 + fVar12 * fVar8 + fVar9 * fVar37) * fVar55;
        fVar53 = (fVar49 + fVar13 * fVar8 + fVar10 * fVar37) * fVar55;
        fVar55 = (fVar51 + fVar14 * fVar8 + fVar11 * fVar37) * fVar55;
        auVar56._8_8_ = uVar25;
        auVar56._0_8_ = uVar26;
        auVar32._0_4_ = (fVar41 + fVar12 * fVar8 + fVar9 * fVar37) * fVar42;
        auVar32._4_4_ = (fVar45 + fVar13 * fVar8 + fVar10 * fVar37) * fVar42;
        auVar57._4_12_ = auVar56._4_12_;
        auVar57._0_4_ = (fVar46 + fVar14 * fVar8 + fVar11 * fVar37) * fVar42;
        auVar43._8_8_ = uVar25;
        auVar43._0_8_ = uVar26;
        auVar28._0_4_ = (fVar48 + fVar12 * fVar50 + fVar9 * fVar37) * fVar66;
        auVar28._4_4_ = (fVar49 + fVar13 * fVar50 + fVar10 * fVar37) * fVar66;
        auVar28._8_4_ = (fVar51 + fVar14 * fVar50 + fVar11 * fVar37) * fVar66;
        fVar66 = 1.0 / (fVar62 + fVar15 * fVar8 + fVar37 * 1.0);
        auVar32._8_8_ = auVar57._0_8_;
        auVar44._4_12_ = auVar43._4_12_;
        auVar44._0_4_ = (fVar61 + fVar14 * fVar50 + fVar11 * fVar37) * fVar27;
        auVar30._8_8_ = auVar44._0_8_;
        fVar27 = (fVar59 + fVar12 * fVar8 + fVar9 * fVar37) * fVar66;
        fVar50 = (fVar60 + fVar13 * fVar8 + fVar10 * fVar37) * fVar66;
        fVar66 = (fVar61 + fVar14 * fVar8 + fVar11 * fVar37) * fVar66;
        auVar6._4_4_ = fVar50;
        auVar6._0_4_ = fVar27;
        auVar6._8_4_ = fVar66;
        auVar6._12_4_ = fVar37;
        auVar58 = NEON_fmin(auVar6,auVar32,4);
        auVar7._4_4_ = fVar50;
        auVar7._0_4_ = fVar27;
        auVar7._8_4_ = fVar66;
        auVar7._12_4_ = fVar37;
        auVar33 = NEON_fmax(auVar7,auVar32,4);
        auVar34._4_4_ = fVar40;
        auVar34._0_4_ = fVar39;
        auVar34._8_4_ = fVar54;
        auVar34._12_4_ = fVar37;
        auVar58 = NEON_fmin(auVar58,auVar34,4);
        auVar3._4_4_ = fVar40;
        auVar3._0_4_ = fVar39;
        auVar3._8_4_ = fVar54;
        auVar3._12_4_ = fVar37;
        auVar33 = NEON_fmax(auVar33,auVar3,4);
        auVar4._4_4_ = fVar53;
        auVar4._0_4_ = fVar47;
        auVar4._8_4_ = fVar55;
        auVar4._12_4_ = fVar37;
        auVar58 = NEON_fmin(auVar58,auVar4,4);
        auVar5._4_4_ = fVar53;
        auVar5._0_4_ = fVar47;
        auVar5._8_4_ = fVar55;
        auVar5._12_4_ = fVar37;
        auVar33 = NEON_fmax(auVar33,auVar5,4);
        auVar58 = NEON_fmin(auVar58,auVar30,4);
        auVar31 = NEON_fmax(auVar33,auVar30,4);
        auVar29._12_4_ = fVar37;
        auVar33._4_4_ = fVar38;
        auVar33._0_4_ = fVar36;
        auVar33._8_4_ = fVar35;
        auVar33._12_4_ = fVar37;
        auVar34 = NEON_fmin(auVar58,auVar33,4);
        auVar58._4_4_ = fVar38;
        auVar58._0_4_ = fVar36;
        auVar58._8_4_ = fVar35;
        auVar58._12_4_ = fVar37;
        auVar33 = NEON_fmax(auVar31,auVar58,4);
        auVar28._12_4_ = fVar37;
        auVar58 = NEON_fmin(auVar34,auVar29,4);
        auVar33 = NEON_fmax(auVar33,auVar29,4);
        auVar58 = NEON_fmin(auVar58,auVar28,4);
        auVar33 = NEON_fmax(auVar33,auVar28,4);
        auVar58 = NEON_fmin(*(undefined1 (*) [16])(param_1 + 0x4a0),auVar58,4);
        auVar31._12_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0x4b8) >> 0x20);
        auVar31._0_12_ = *(undefined1 (*) [12])(param_1 + 0x4b0);
        auVar33 = NEON_fmax(auVar31,auVar33,4);
        *(long *)(param_1 + 0x4a8) = auVar58._8_8_;
        *(long *)(param_1 + 0x4a0) = auVar58._0_8_;
        *(long *)(param_1 + 0x4b8) = auVar33._8_8_;
        *(long *)(param_1 + 0x4b0) = auVar33._0_8_;
      } while (puVar16 != *(undefined8 **)(param_1 + 0x478));
      plVar17 = *(long **)(param_1 + 0x368);
      plVar19 = *(long **)(param_1 + 0x370);
    }
    if (plVar17 != plVar19) {
      puVar16 = (undefined8 *)(param_1 + 0x4a0);
      do {
        plVar20 = (long *)*plVar17;
        plVar2 = (long *)plVar17[1];
        if ((((long)plVar2 - (long)plVar20 != 0) && (plVar20 != plVar2)) &&
           (lVar18 = *plVar20, *(int *)(lVar18 + 0x1dc) != 0)) {
          uVar26 = *(undefined8 *)(param_1 + 0x4a8);
          *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
          *(undefined8 *)(lVar18 + 0x1e8) = uVar26;
          uVar26 = *puVar16;
          plVar21 = plVar20 + 1;
          *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
          *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
          if (plVar21 != plVar2) {
            uVar22 = ((long)plVar2 - (long)plVar20) - 0x10;
            uVar1 = ((uint)(uVar22 >> 3) & 0x1fffffff) + 1;
            if ((uVar1 & 7) != 0) {
              lVar18 = -((ulong)uVar1 & 7);
              plVar20 = plVar21;
              do {
                plVar21 = plVar20 + 1;
                lVar23 = *plVar20;
                uVar26 = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar23 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
                uVar25 = *(undefined8 *)(param_1 + 0x4b0);
                lVar18 = lVar18 + 1;
                *(undefined8 *)(lVar23 + 0x1e0) = *puVar16;
                *(undefined8 *)(lVar23 + 0x1e8) = uVar26;
                *(undefined8 *)(lVar23 + 0x1f0) = uVar25;
                plVar20 = plVar21;
              } while (lVar18 != 0);
            }
            if (0x37 < uVar22) {
              do {
                lVar18 = *plVar21;
                uVar25 = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
                uVar26 = *puVar16;
                uVar24 = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e8) = uVar25;
                *(undefined8 *)(lVar18 + 0x1f0) = uVar24;
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
                lVar18 = plVar21[1];
                uVar26 = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
                *(undefined8 *)(lVar18 + 0x1e8) = uVar26;
                uVar26 = *puVar16;
                *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
                lVar18 = plVar21[2];
                uVar26 = *(undefined8 *)(param_1 + 0x4b8);
                *(undefined8 *)(lVar18 + 0x1e8) = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = uVar26;
                uVar26 = *puVar16;
                *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
                lVar18 = plVar21[3];
                uVar26 = *(undefined8 *)(param_1 + 0x4b8);
                *(undefined8 *)(lVar18 + 0x1e8) = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = uVar26;
                uVar26 = *puVar16;
                *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
                lVar18 = plVar21[4];
                uVar26 = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
                *(undefined8 *)(lVar18 + 0x1e8) = uVar26;
                uVar26 = *puVar16;
                *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
                lVar18 = plVar21[5];
                uVar26 = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
                *(undefined8 *)(lVar18 + 0x1e8) = uVar26;
                uVar26 = *puVar16;
                *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
                lVar18 = plVar21[6];
                uVar26 = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
                *(undefined8 *)(lVar18 + 0x1e8) = uVar26;
                uVar26 = *puVar16;
                *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
                lVar18 = plVar21[7];
                uVar26 = *(undefined8 *)(param_1 + 0x4a8);
                *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x4b8);
                *(undefined8 *)(lVar18 + 0x1e8) = uVar26;
                uVar26 = *puVar16;
                plVar21 = plVar21 + 8;
                *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_1 + 0x4b0);
                *(undefined8 *)(lVar18 + 0x1e0) = uVar26;
              } while (plVar21 != plVar2);
            }
          }
        }
        plVar17 = plVar17 + 9;
      } while (plVar17 != plVar19);
    }
  }
  return;
}


