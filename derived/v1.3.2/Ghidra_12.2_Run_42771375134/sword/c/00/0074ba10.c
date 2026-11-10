/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074ba10; name: FUN_0074ba10
 */


void FUN_0074ba10(float *param_1,long param_2)

{
  ulong uVar1;
  float *pfVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
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
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  
  fVar46 = (float)*(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  fVar20 = (float)uVar6;
  fVar22 = (float)((ulong)uVar6 >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_2 + 0x30);
  fVar26 = (float)*(undefined8 *)(param_2 + 0x38);
  fVar45 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  fVar25 = *(float *)(param_2 + 0x44);
  fVar21 = *(float *)(param_2 + 0x60);
  fVar18 = *(float *)(param_2 + 100);
  fVar19 = *(float *)(param_2 + 0x68);
  fVar28 = *(float *)(param_2 + 0x6c);
  fVar51 = (float)*(undefined8 *)(param_2 + 0x70);
  fVar50 = fVar51 * (fVar27 - fVar21);
  fVar53 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  fVar52 = fVar53 * (fVar45 - fVar18);
  fVar55 = (float)*(undefined8 *)(param_2 + 0x78);
  fVar54 = fVar55 * (fVar46 - fVar19);
  fVar57 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
  fVar56 = fVar57 * (0.0 - fVar28);
  fVar32 = fVar51 * (fVar27 - fVar21);
  fVar33 = fVar53 * (fVar22 - fVar18);
  fVar34 = fVar55 * (fVar26 - fVar19);
  fVar35 = fVar57 * (0.0 - fVar28);
  fVar36 = fVar51 * (*(float *)(param_2 + 0x20) - fVar21);
  fVar38 = fVar53 * (*(float *)(param_2 + 0x24) - fVar18);
  fVar39 = fVar55 * (fVar46 - fVar19);
  fVar40 = fVar57 * (0.0 - fVar28);
  auVar42._4_4_ = fVar38;
  auVar42._0_4_ = fVar36;
  auVar42._8_4_ = fVar39;
  auVar42._12_4_ = fVar40;
  auVar48._4_4_ = fVar38;
  auVar48._0_4_ = fVar36;
  auVar48._8_4_ = fVar39;
  auVar48._12_4_ = fVar40;
  auVar42 = NEON_ext(auVar42,auVar48,8,1);
  fVar39 = fVar51 * (fVar20 - fVar21);
  fVar40 = fVar53 * (fVar45 - fVar18);
  fVar23 = fVar55 * (fVar26 - fVar19);
  fVar24 = fVar57 * (0.0 - fVar28);
  auVar43._0_4_ = fVar51 * (fVar27 - fVar21);
  auVar43._4_4_ = fVar53 * (fVar22 - fVar18);
  auVar43._8_4_ = fVar55 * (fVar46 - fVar19);
  auVar43._12_4_ = fVar57 * (0.0 - fVar28);
  auVar58 = NEON_ext(auVar43,auVar43,8,1);
  fVar27 = fVar51 * (fVar27 - fVar21);
  fVar29 = fVar53 * (fVar45 - fVar18);
  fVar30 = fVar55 * (fVar26 - fVar19);
  fVar31 = fVar57 * (0.0 - fVar28);
  fVar44 = fVar51 * (fVar20 - fVar21);
  fVar45 = fVar53 * (fVar45 - fVar18);
  fVar46 = fVar55 * (fVar46 - fVar19);
  fVar47 = fVar57 * (0.0 - fVar28);
  auVar59._4_4_ = fVar45;
  auVar59._0_4_ = fVar44;
  auVar59._8_4_ = fVar46;
  auVar59._12_4_ = fVar47;
  auVar9._4_4_ = fVar45;
  auVar9._0_4_ = fVar44;
  auVar9._8_4_ = fVar46;
  auVar9._12_4_ = fVar47;
  auVar48 = NEON_ext(auVar59,auVar9,8,1);
  auVar10._4_4_ = fVar52;
  auVar10._0_4_ = fVar50;
  auVar10._8_4_ = fVar54;
  auVar10._12_4_ = fVar56;
  auVar11._4_4_ = fVar52;
  auVar11._0_4_ = fVar50;
  auVar11._8_4_ = fVar54;
  auVar11._12_4_ = fVar56;
  auVar59 = NEON_ext(auVar10,auVar11,8,1);
  auVar49._4_4_ = fVar29;
  auVar49._0_4_ = fVar27;
  auVar49._8_4_ = fVar30;
  auVar49._12_4_ = fVar31;
  auVar60._4_4_ = fVar29;
  auVar60._0_4_ = fVar27;
  auVar60._8_4_ = fVar30;
  auVar60._12_4_ = fVar31;
  auVar41 = NEON_ext(auVar49,auVar60,8,1);
  fVar46 = auVar41._0_4_ + fVar27 + auVar41._4_4_ + fVar29;
  fVar51 = fVar51 * (fVar20 - fVar21);
  fVar53 = fVar53 * (fVar22 - fVar18);
  fVar55 = fVar55 * (fVar26 - fVar19);
  fVar57 = fVar57 * (0.0 - fVar28);
  auVar12._4_4_ = fVar53;
  auVar12._0_4_ = fVar51;
  auVar12._8_4_ = fVar55;
  auVar12._12_4_ = fVar57;
  auVar13._4_4_ = fVar53;
  auVar13._0_4_ = fVar51;
  auVar13._8_4_ = fVar55;
  auVar13._12_4_ = fVar57;
  auVar49 = NEON_ext(auVar12,auVar13,8,1);
  auVar7._4_4_ = fVar33;
  auVar7._0_4_ = fVar32;
  auVar7._8_4_ = fVar34;
  auVar7._12_4_ = fVar35;
  auVar8._4_4_ = fVar33;
  auVar8._0_4_ = fVar32;
  auVar8._8_4_ = fVar34;
  auVar8._12_4_ = fVar35;
  auVar60 = NEON_ext(auVar7,auVar8,8,1);
  auVar41._4_4_ = fVar40;
  auVar41._0_4_ = fVar39;
  auVar41._8_4_ = fVar23;
  auVar41._12_4_ = fVar24;
  auVar5._4_4_ = fVar40;
  auVar5._0_4_ = fVar39;
  auVar5._8_4_ = fVar23;
  auVar5._12_4_ = fVar24;
  auVar41 = NEON_ext(auVar41,auVar5,8,1);
  fVar18 = auVar60._0_4_ + fVar32 + auVar60._4_4_ + fVar33;
  fVar19 = auVar41._0_4_ + fVar39 + auVar41._4_4_ + fVar40;
  fVar21 = fVar19;
  if (fVar19 <= fVar18) {
    fVar21 = fVar18;
  }
  fVar28 = fVar46;
  if (fVar46 <= fVar21) {
    fVar28 = fVar21;
  }
  if (fVar28 <= fVar25) {
    fVar28 = 0.0;
    fVar21 = 0.0;
  }
  else {
    uVar37 = NEON_fminnm(auVar42._0_4_ + fVar36 + auVar42._4_4_ + fVar38,DAT_01d4c18c);
    uVar37 = NEON_fminnm(auVar58._0_4_ + auVar43._0_4_ + auVar58._4_4_ + auVar43._4_4_,uVar37);
    uVar37 = NEON_fminnm(auVar48._0_4_ + fVar44 + auVar48._4_4_ + fVar45,uVar37);
    uVar37 = NEON_fminnm(auVar59._0_4_ + fVar50 + auVar59._4_4_ + fVar52,uVar37);
    uVar37 = NEON_fminnm(auVar49._0_4_ + fVar51 + auVar49._4_4_ + fVar53,uVar37);
    uVar37 = NEON_fminnm(fVar18,uVar37);
    uVar37 = NEON_fminnm(fVar19,uVar37);
    fVar21 = (float)NEON_fminnm(fVar46,uVar37);
    if (fVar21 <= fVar25) {
      fVar21 = fVar25;
    }
    if (fVar28 <= fVar21 + 1.0) {
      fVar28 = fVar21 + 1.0;
    }
    if (fVar28 != 0.0) goto LAB_0074bbd8;
  }
  if (fVar21 == 0.0) {
    param_1[4] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return;
  }
LAB_0074bbd8:
  bVar4 = *(byte *)(param_2 + 0x10);
  uVar16 = (ulong)bVar4;
  if (bVar4 == 1) {
    *param_1 = fVar21;
    param_1[1] = fVar28;
  }
  else {
    lVar14 = uVar16 + 1;
    if (bVar4 != 0) {
      fVar19 = 1.0 / (float)(uint)bVar4;
      fVar18 = *(float *)(param_2 + 0x50);
      uVar17 = 0;
      do {
        uVar1 = uVar17 + 1;
        fVar46 = powf(fVar28 / fVar21,fVar19 * (float)(int)uVar1);
        param_1[uVar17 + 1] =
             fVar21 * fVar46 +
             fVar18 * ((fVar21 + fVar19 * (fVar28 - fVar21) * (float)(int)uVar1) - fVar21 * fVar46);
        uVar17 = uVar1;
      } while (uVar16 != uVar1);
    }
    *param_1 = fVar21;
    param_1[uVar16] = fVar28;
    if ((uint)lVar14 < 5) {
      uVar16 = 4 - lVar14;
      uVar3 = -(uint)bVar4 & 3;
      if (uVar3 != 0) {
        lVar15 = -(ulong)uVar3;
        do {
          param_1[lVar14] = fVar28;
          lVar14 = lVar14 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0);
      }
      if (2 < uVar16) {
        lVar14 = lVar14 * 4 + 8;
        do {
          pfVar2 = (float *)((long)param_1 + lVar14);
          lVar14 = lVar14 + 0x10;
          pfVar2[-2] = fVar28;
          pfVar2[-1] = fVar28;
          *pfVar2 = fVar28;
          pfVar2[1] = fVar28;
        } while (lVar14 != 0x1c);
      }
    }
  }
  return;
}


