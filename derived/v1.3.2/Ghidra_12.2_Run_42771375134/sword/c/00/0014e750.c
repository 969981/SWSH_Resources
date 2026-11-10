/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014e750; name: FUN_0014e750
 */


void FUN_0014e750(undefined1 (*param_1) [16])

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  float fVar17;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_a0 [4];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)param_1[3];
  *(undefined8 *)param_1[4] = 0;
  fVar17 = *(float *)(lVar8 + 400);
  if (*(float *)(lVar8 + 0x194) <= *(float *)(lVar8 + 400)) {
    fVar17 = *(float *)(lVar8 + 0x194);
  }
  if (0.0 < fVar17) {
    fVar17 = *(float *)(lVar8 + 0x18);
    fVar21 = *(float *)(lVar8 + 0x1c);
    fVar22 = *(float *)(lVar8 + 0x20);
    fVar23 = *(float *)(lVar8 + 0x24);
    auVar18._0_4_ = *(float *)(lVar8 + 0x24) - fVar17;
    auVar18._4_4_ = *(float *)(lVar8 + 0x28) - fVar21;
    auVar18._8_4_ = *(float *)(lVar8 + 0x2c) - fVar22;
    auVar18._12_4_ = *(float *)(lVar8 + 0x30) - fVar23;
    uVar5 = *(undefined4 *)PTR_DAT_02710d80;
    auVar19._4_4_ = uVar5;
    auVar19._0_4_ = uVar5;
    auVar19._8_4_ = uVar5;
    auVar19._12_4_ = uVar5;
    auVar18 = NEON_fmax(auVar18,auVar19,4);
    fVar29 = auVar18._8_4_;
    fVar28 = auVar18._4_4_;
    fVar27 = auVar18._0_4_;
    uStack_68 = auVar18._8_8_;
    local_70 = auVar18._0_8_;
    uVar10 = 0;
    if (fVar27 <= fVar29) {
      uVar10 = 2;
    }
    uVar11 = 2;
    if (fVar29 < fVar28) {
      uVar11 = 1;
    }
    if (fVar27 <= fVar28) {
      uVar10 = uVar11;
    }
    uVar14 = (ulong)uVar10;
    auVar25._0_4_ = fVar27 * 0.0039525693;
    auVar25._4_4_ = fVar28 * 0.0039525693;
    auVar25._8_4_ = fVar29 * 0.0039525693;
    auVar25._12_4_ = auVar18._12_4_ * 0.0039525693;
    auVar18 = NEON_fmax(*param_1,auVar25,4);
    uStack_78 = auVar18._8_8_;
    local_80 = auVar18._0_8_;
    *(float *)((ulong)&local_80 | uVar14 << 2) =
         *(float *)((ulong)&local_70 | uVar14 << 2) / DAT_01d4c35c;
    uStack_88 = 0x437e0000;
    uStack_84 = 0x437e0000;
    local_90 = 0x437e0000437e0000;
    auVar19 = NEON_frecpe(auVar18,4);
    *(undefined4 *)((ulong)&local_90 | uVar14 << 2) = 0x477ffe00;
    uVar3 = *(uint *)(lVar8 + 0x198);
    uVar16 = (ulong)uVar3;
    auVar25 = NEON_frecps(auVar18,auVar19,4);
    auVar20._0_4_ = auVar19._0_4_ * auVar25._0_4_;
    auVar20._4_4_ = auVar19._4_4_ * auVar25._4_4_;
    auVar20._8_4_ = auVar19._8_4_ * auVar25._8_4_;
    auVar20._12_4_ = auVar19._12_4_ * auVar25._12_4_;
    auVar18 = NEON_frecps(auVar18,auVar20,4);
    uVar11 = uVar3 * 2 + 0x800;
    uVar1 = uVar3 * 4 + 4;
    if (uVar1 <= uVar11) {
      uVar1 = uVar11;
    }
    uVar1 = (uVar3 * 2 + 2 & 0xfffffffc) + uVar3 * 4 + uVar1;
    if (uVar1 == 0) {
      puVar15 = (uint *)0x0;
    }
    else {
      lVar8 = *(long *)(param_1[3] + 8);
      puVar15 = (uint *)(*(long *)(lVar8 + 0x10) + 0x1fU & 0xfffffffffffffff0);
      *(undefined8 *)(puVar15 + -4) = *(undefined8 *)(lVar8 + 0x18);
      puVar15[-2] = uVar1 & 0x7ffffffe;
      *(ulong *)(lVar8 + 0x10) = (long)puVar15 + (ulong)uVar1;
      *(uint **)(lVar8 + 0x18) = puVar15 + -4;
      lVar8 = *(long *)param_1[3];
    }
    fVar27 = auVar20._0_4_ * auVar18._0_4_;
    fVar28 = auVar20._4_4_ * auVar18._4_4_;
    fVar29 = auVar20._8_4_ * auVar18._8_4_;
    fVar30 = auVar20._12_4_ * auVar18._12_4_;
    puVar2 = puVar15 + uVar16;
    if (uVar3 != 0) {
      auVar18 = NEON_fmov(0x3f800000,4);
      fVar17 = auVar18._0_4_ - fVar17 * fVar27;
      fVar21 = auVar18._4_4_ - fVar21 * fVar28;
      fVar22 = auVar18._8_4_ - fVar22 * fVar29;
      fVar23 = auVar18._12_4_ - fVar23 * fVar30;
      pfVar9 = *(float **)(lVar8 + 8);
      uVar11 = (uVar10 + 1) % 3;
      uVar10 = (uVar10 + 2) % 3;
      puVar12 = puVar15;
      if (*(uint **)(lVar8 + 0x1a0) == (uint *)0x0) {
        do {
          auVar7._8_4_ = 0x437e0000;
          auVar7._0_8_ = 0x437e0000437e0000;
          auVar7._12_4_ = 0x437e0000;
          uVar16 = uVar16 - 1;
          auVar24._0_4_ = fVar17 + fVar27 * *pfVar9;
          auVar24._4_4_ = fVar21 + fVar28 * pfVar9[1];
          auVar24._8_4_ = fVar22 + fVar29 * pfVar9[2];
          auVar24._12_4_ = fVar23 + fVar30 * pfVar9[3];
          auVar19 = NEON_fmin(auVar24,auVar7,4);
          auVar19 = NEON_fmax(auVar18,auVar19,4);
          local_a0[2] = (int)auVar19._8_4_ + ((int)auVar19._8_4_ >> 0x1f);
          local_a0[3] = (int)auVar19._12_4_ + ((int)auVar19._12_4_ >> 0x1f);
          local_a0[0] = (int)auVar19._0_4_ + ((int)auVar19._0_4_ >> 0x1f);
          local_a0[1] = (int)auVar19._4_4_ + ((int)auVar19._4_4_ >> 0x1f);
          *puVar12 = local_a0[uVar14] | local_a0[uVar11] << 0x10 | local_a0[uVar10] << 0x18;
          pfVar9 = pfVar9 + 4;
          puVar12 = puVar12 + 1;
        } while (uVar16 != 0);
      }
      else {
        puVar13 = *(uint **)(lVar8 + 0x1a0);
        do {
          auVar6._8_4_ = 0x437e0000;
          auVar6._0_8_ = 0x437e0000437e0000;
          auVar6._12_4_ = 0x437e0000;
          pfVar4 = pfVar9 + (ulong)*puVar13 * 4;
          uVar16 = uVar16 - 1;
          auVar26._0_4_ = fVar17 + fVar27 * *pfVar4;
          auVar26._4_4_ = fVar21 + fVar28 * pfVar4[1];
          auVar26._8_4_ = fVar22 + fVar29 * pfVar4[2];
          auVar26._12_4_ = fVar23 + fVar30 * pfVar4[3];
          auVar19 = NEON_fmin(auVar26,auVar6,4);
          auVar19 = NEON_fmax(auVar18,auVar19,4);
          local_a0[2] = (int)auVar19._8_4_ + ((int)auVar19._8_4_ >> 0x1f);
          local_a0[3] = (int)auVar19._12_4_ + ((int)auVar19._12_4_ >> 0x1f);
          local_a0[0] = (int)auVar19._0_4_ + ((int)auVar19._0_4_ >> 0x1f);
          local_a0[1] = (int)auVar19._4_4_ + ((int)auVar19._4_4_ >> 0x1f);
          *puVar12 = local_a0[uVar14] | local_a0[uVar11] << 0x10 | local_a0[uVar10] << 0x18;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar16 != 0);
      }
    }
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)puVar2 +
                   (ulong)(((uint)((int)puVar2 - (int)puVar15) >> 2 & 0xffff) << 1) * 2),0,0x800);
  }
  return;
}


