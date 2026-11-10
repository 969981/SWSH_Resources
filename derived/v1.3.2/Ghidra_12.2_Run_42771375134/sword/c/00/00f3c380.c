/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3c380; name: FUN_00f3c380
 */


int FUN_00f3c380(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
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
  undefined8 uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  undefined1 auVar37 [16];
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  lVar27 = *param_2;
  lVar26 = *param_1;
  uVar11 = *(undefined8 *)(lVar27 + 0x10);
  uVar23 = *(undefined8 *)(*(long *)*param_5 + 0x18);
  fVar35 = (float)uVar23;
  fVar36 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = *(undefined8 *)(*(long *)*param_5 + 0x10);
  fVar33 = (float)uVar23;
  fVar34 = (float)((ulong)uVar23 >> 0x20);
  fVar29 = (float)uVar11 - fVar33;
  fVar30 = (float)((ulong)uVar11 >> 0x20) - fVar34;
  fVar31 = (float)*(undefined8 *)(lVar27 + 0x18) - fVar35;
  fVar32 = (float)((ulong)*(undefined8 *)(lVar27 + 0x18) >> 0x20) - fVar36;
  fVar29 = fVar29 * fVar29;
  fVar30 = fVar30 * fVar30;
  fVar31 = fVar31 * fVar31;
  fVar32 = fVar32 * fVar32;
  auVar37._4_4_ = fVar30;
  auVar37._0_4_ = fVar29;
  auVar37._8_4_ = fVar31;
  auVar37._12_4_ = fVar32;
  auVar41._4_4_ = fVar30;
  auVar41._0_4_ = fVar29;
  auVar41._8_4_ = fVar31;
  auVar41._12_4_ = fVar32;
  auVar37 = NEON_ext(auVar37,auVar41,8,1);
  lVar25 = *param_3;
  fVar31 = *(float *)(lVar26 + 0x10) - fVar33;
  fVar32 = *(float *)(lVar26 + 0x14) - fVar34;
  fVar39 = *(float *)(lVar26 + 0x18) - fVar35;
  fVar40 = *(float *)(lVar26 + 0x1c) - fVar36;
  auVar38._0_4_ = fVar31 * fVar31;
  auVar38._4_4_ = fVar32 * fVar32;
  auVar38._8_4_ = fVar39 * fVar39;
  auVar38._12_4_ = fVar40 * fVar40;
  auVar41 = NEON_ext(auVar38,auVar38,8,1);
  pfVar28 = (float *)(lVar25 + 0x10);
  fVar34 = *(float *)(lVar25 + 0x14) - fVar34;
  fVar35 = *(float *)(lVar25 + 0x18) - fVar35;
  fVar36 = *(float *)(lVar25 + 0x1c) - fVar36;
  fVar31 = (*pfVar28 - fVar33) * (*pfVar28 - fVar33);
  fVar34 = fVar34 * fVar34;
  fVar35 = fVar35 * fVar35;
  fVar36 = fVar36 * fVar36;
  auVar42._4_4_ = fVar34;
  auVar42._0_4_ = fVar31;
  auVar42._8_4_ = fVar35;
  auVar42._12_4_ = fVar36;
  auVar12._4_4_ = fVar34;
  auVar12._0_4_ = fVar31;
  auVar12._8_4_ = fVar35;
  auVar12._12_4_ = fVar36;
  auVar42 = NEON_ext(auVar42,auVar12,8,1);
  fVar29 = SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30);
  fVar30 = SQRT(auVar42._0_4_ + fVar31 + auVar42._4_4_ + fVar34);
  if (fVar29 <= SQRT(auVar41._0_4_ + auVar38._0_4_ + auVar41._4_4_ + auVar38._4_4_)) {
    if (fVar30 <= fVar29) {
      iVar24 = 0;
    }
    else {
      *param_2 = lVar25;
      *param_3 = lVar27;
      lVar25 = *param_2;
      uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x18);
      fVar35 = (float)uVar11;
      fVar36 = (float)((ulong)uVar11 >> 0x20);
      uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x10);
      fVar33 = (float)uVar11;
      fVar34 = (float)((ulong)uVar11 >> 0x20);
      lVar26 = *param_1;
      fVar29 = (float)*(undefined8 *)(lVar25 + 0x10) - fVar33;
      fVar30 = (float)((ulong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) - fVar34;
      fVar31 = (float)*(undefined8 *)(lVar25 + 0x18) - fVar35;
      fVar32 = (float)((ulong)*(undefined8 *)(lVar25 + 0x18) >> 0x20) - fVar36;
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      auVar9._4_4_ = fVar30;
      auVar9._0_4_ = fVar29;
      auVar9._8_4_ = fVar31;
      auVar9._12_4_ = fVar32;
      auVar10._4_4_ = fVar30;
      auVar10._0_4_ = fVar29;
      auVar10._8_4_ = fVar31;
      auVar10._12_4_ = fVar32;
      auVar37 = NEON_ext(auVar9,auVar10,8,1);
      fVar33 = *(float *)(lVar26 + 0x10) - fVar33;
      fVar34 = *(float *)(lVar26 + 0x14) - fVar34;
      fVar35 = *(float *)(lVar26 + 0x18) - fVar35;
      fVar36 = *(float *)(lVar26 + 0x1c) - fVar36;
      fVar33 = fVar33 * fVar33;
      fVar34 = fVar34 * fVar34;
      fVar35 = fVar35 * fVar35;
      fVar36 = fVar36 * fVar36;
      auVar21._4_4_ = fVar34;
      auVar21._0_4_ = fVar33;
      auVar21._8_4_ = fVar35;
      auVar21._12_4_ = fVar36;
      auVar22._4_4_ = fVar34;
      auVar22._0_4_ = fVar33;
      auVar22._8_4_ = fVar35;
      auVar22._12_4_ = fVar36;
      auVar41 = NEON_ext(auVar21,auVar22,8,1);
      if (SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30) <=
          SQRT(auVar41._0_4_ + fVar33 + auVar41._4_4_ + fVar34)) {
        iVar24 = 1;
        lVar25 = lVar27;
        pfVar28 = (float *)(lVar27 + 0x10);
      }
      else {
        *param_1 = lVar25;
        *param_2 = lVar26;
        iVar24 = 2;
        lVar25 = *param_3;
        pfVar28 = (float *)(*param_3 + 0x10);
      }
    }
  }
  else {
    if (fVar30 <= fVar29) {
      *param_1 = lVar27;
      *param_2 = lVar26;
      lVar25 = *param_3;
      uVar11 = *(undefined8 *)(lVar25 + 0x10);
      uVar23 = *(undefined8 *)(*(long *)*param_5 + 0x18);
      fVar35 = (float)uVar23;
      fVar36 = (float)((ulong)uVar23 >> 0x20);
      uVar23 = *(undefined8 *)(*(long *)*param_5 + 0x10);
      fVar33 = (float)uVar23;
      fVar34 = (float)((ulong)uVar23 >> 0x20);
      fVar29 = (float)uVar11 - fVar33;
      fVar30 = (float)((ulong)uVar11 >> 0x20) - fVar34;
      fVar31 = (float)*(undefined8 *)(lVar25 + 0x18) - fVar35;
      fVar32 = (float)((ulong)*(undefined8 *)(lVar25 + 0x18) >> 0x20) - fVar36;
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      auVar7._4_4_ = fVar30;
      auVar7._0_4_ = fVar29;
      auVar7._8_4_ = fVar31;
      auVar7._12_4_ = fVar32;
      auVar8._4_4_ = fVar30;
      auVar8._0_4_ = fVar29;
      auVar8._8_4_ = fVar31;
      auVar8._12_4_ = fVar32;
      auVar37 = NEON_ext(auVar7,auVar8,8,1);
      fVar33 = *(float *)(lVar26 + 0x10) - fVar33;
      fVar34 = *(float *)(lVar26 + 0x14) - fVar34;
      fVar35 = *(float *)(lVar26 + 0x18) - fVar35;
      fVar36 = *(float *)(lVar26 + 0x1c) - fVar36;
      fVar33 = fVar33 * fVar33;
      fVar34 = fVar34 * fVar34;
      fVar35 = fVar35 * fVar35;
      fVar36 = fVar36 * fVar36;
      auVar19._4_4_ = fVar34;
      auVar19._0_4_ = fVar33;
      auVar19._8_4_ = fVar35;
      auVar19._12_4_ = fVar36;
      auVar20._4_4_ = fVar34;
      auVar20._0_4_ = fVar33;
      auVar20._8_4_ = fVar35;
      auVar20._12_4_ = fVar36;
      auVar41 = NEON_ext(auVar19,auVar20,8,1);
      if (SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30) <=
          SQRT(auVar41._0_4_ + fVar33 + auVar41._4_4_ + fVar34)) {
        iVar24 = 1;
        pfVar28 = (float *)(lVar25 + 0x10);
        goto LAB_00f3c540;
      }
      iVar24 = 2;
      *param_2 = lVar25;
    }
    else {
      *param_1 = lVar25;
      iVar24 = 1;
    }
    *param_3 = lVar26;
    lVar25 = lVar26;
    pfVar28 = (float *)(lVar26 + 0x10);
  }
LAB_00f3c540:
  lVar26 = *param_4;
  uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x18);
  fVar35 = (float)uVar11;
  fVar36 = (float)((ulong)uVar11 >> 0x20);
  uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x10);
  fVar33 = (float)uVar11;
  fVar34 = (float)((ulong)uVar11 >> 0x20);
  fVar29 = (float)*(undefined8 *)(lVar26 + 0x10) - fVar33;
  fVar30 = (float)((ulong)*(undefined8 *)(lVar26 + 0x10) >> 0x20) - fVar34;
  fVar31 = (float)*(undefined8 *)(lVar26 + 0x18) - fVar35;
  fVar32 = (float)((ulong)*(undefined8 *)(lVar26 + 0x18) >> 0x20) - fVar36;
  fVar29 = fVar29 * fVar29;
  fVar30 = fVar30 * fVar30;
  fVar31 = fVar31 * fVar31;
  fVar32 = fVar32 * fVar32;
  auVar1._4_4_ = fVar30;
  auVar1._0_4_ = fVar29;
  auVar1._8_4_ = fVar31;
  auVar1._12_4_ = fVar32;
  auVar2._4_4_ = fVar30;
  auVar2._0_4_ = fVar29;
  auVar2._8_4_ = fVar31;
  auVar2._12_4_ = fVar32;
  auVar37 = NEON_ext(auVar1,auVar2,8,1);
  fVar33 = *pfVar28 - fVar33;
  fVar34 = pfVar28[1] - fVar34;
  fVar35 = pfVar28[2] - fVar35;
  fVar36 = pfVar28[3] - fVar36;
  fVar33 = fVar33 * fVar33;
  fVar34 = fVar34 * fVar34;
  fVar35 = fVar35 * fVar35;
  fVar36 = fVar36 * fVar36;
  auVar13._4_4_ = fVar34;
  auVar13._0_4_ = fVar33;
  auVar13._8_4_ = fVar35;
  auVar13._12_4_ = fVar36;
  auVar14._4_4_ = fVar34;
  auVar14._0_4_ = fVar33;
  auVar14._8_4_ = fVar35;
  auVar14._12_4_ = fVar36;
  auVar41 = NEON_ext(auVar13,auVar14,8,1);
  if (SQRT(auVar41._0_4_ + fVar33 + auVar41._4_4_ + fVar34) <
      SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30)) {
    *param_3 = lVar26;
    *param_4 = lVar25;
    lVar25 = *param_3;
    uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x18);
    fVar35 = (float)uVar11;
    fVar36 = (float)((ulong)uVar11 >> 0x20);
    uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x10);
    fVar33 = (float)uVar11;
    fVar34 = (float)((ulong)uVar11 >> 0x20);
    lVar26 = *param_2;
    fVar29 = (float)*(undefined8 *)(lVar25 + 0x10) - fVar33;
    fVar30 = (float)((ulong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) - fVar34;
    fVar31 = (float)*(undefined8 *)(lVar25 + 0x18) - fVar35;
    fVar32 = (float)((ulong)*(undefined8 *)(lVar25 + 0x18) >> 0x20) - fVar36;
    fVar29 = fVar29 * fVar29;
    fVar30 = fVar30 * fVar30;
    fVar31 = fVar31 * fVar31;
    fVar32 = fVar32 * fVar32;
    auVar3._4_4_ = fVar30;
    auVar3._0_4_ = fVar29;
    auVar3._8_4_ = fVar31;
    auVar3._12_4_ = fVar32;
    auVar4._4_4_ = fVar30;
    auVar4._0_4_ = fVar29;
    auVar4._8_4_ = fVar31;
    auVar4._12_4_ = fVar32;
    auVar37 = NEON_ext(auVar3,auVar4,8,1);
    fVar33 = *(float *)(lVar26 + 0x10) - fVar33;
    fVar34 = *(float *)(lVar26 + 0x14) - fVar34;
    fVar35 = *(float *)(lVar26 + 0x18) - fVar35;
    fVar36 = *(float *)(lVar26 + 0x1c) - fVar36;
    fVar33 = fVar33 * fVar33;
    fVar34 = fVar34 * fVar34;
    fVar35 = fVar35 * fVar35;
    fVar36 = fVar36 * fVar36;
    auVar15._4_4_ = fVar34;
    auVar15._0_4_ = fVar33;
    auVar15._8_4_ = fVar35;
    auVar15._12_4_ = fVar36;
    auVar16._4_4_ = fVar34;
    auVar16._0_4_ = fVar33;
    auVar16._8_4_ = fVar35;
    auVar16._12_4_ = fVar36;
    auVar41 = NEON_ext(auVar15,auVar16,8,1);
    if (SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30) <=
        SQRT(auVar41._0_4_ + fVar33 + auVar41._4_4_ + fVar34)) {
      return iVar24 + 1;
    }
    *param_2 = lVar25;
    *param_3 = lVar26;
    lVar25 = *param_2;
    uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x18);
    fVar35 = (float)uVar11;
    fVar36 = (float)((ulong)uVar11 >> 0x20);
    uVar11 = *(undefined8 *)(*(long *)*param_5 + 0x10);
    fVar33 = (float)uVar11;
    fVar34 = (float)((ulong)uVar11 >> 0x20);
    lVar26 = *param_1;
    fVar29 = (float)*(undefined8 *)(lVar25 + 0x10) - fVar33;
    fVar30 = (float)((ulong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) - fVar34;
    fVar31 = (float)*(undefined8 *)(lVar25 + 0x18) - fVar35;
    fVar32 = (float)((ulong)*(undefined8 *)(lVar25 + 0x18) >> 0x20) - fVar36;
    fVar29 = fVar29 * fVar29;
    fVar30 = fVar30 * fVar30;
    fVar31 = fVar31 * fVar31;
    fVar32 = fVar32 * fVar32;
    auVar5._4_4_ = fVar30;
    auVar5._0_4_ = fVar29;
    auVar5._8_4_ = fVar31;
    auVar5._12_4_ = fVar32;
    auVar6._4_4_ = fVar30;
    auVar6._0_4_ = fVar29;
    auVar6._8_4_ = fVar31;
    auVar6._12_4_ = fVar32;
    auVar37 = NEON_ext(auVar5,auVar6,8,1);
    fVar33 = *(float *)(lVar26 + 0x10) - fVar33;
    fVar34 = *(float *)(lVar26 + 0x14) - fVar34;
    fVar35 = *(float *)(lVar26 + 0x18) - fVar35;
    fVar36 = *(float *)(lVar26 + 0x1c) - fVar36;
    fVar33 = fVar33 * fVar33;
    fVar34 = fVar34 * fVar34;
    fVar35 = fVar35 * fVar35;
    fVar36 = fVar36 * fVar36;
    auVar17._4_4_ = fVar34;
    auVar17._0_4_ = fVar33;
    auVar17._8_4_ = fVar35;
    auVar17._12_4_ = fVar36;
    auVar18._4_4_ = fVar34;
    auVar18._0_4_ = fVar33;
    auVar18._8_4_ = fVar35;
    auVar18._12_4_ = fVar36;
    auVar41 = NEON_ext(auVar17,auVar18,8,1);
    if (SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30) <=
        SQRT(auVar41._0_4_ + fVar33 + auVar41._4_4_ + fVar34)) {
      return iVar24 + 2;
    }
    iVar24 = iVar24 + 3;
    *param_1 = lVar25;
    *param_2 = lVar26;
  }
  return iVar24;
}


