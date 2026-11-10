/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3c690; name: FUN_00f3c690
 */


void FUN_00f3c690(long *param_1,long *param_2,undefined8 *param_3)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  lVar19 = param_1[1];
  uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x18);
  fVar31 = (float)uVar18;
  fVar32 = (float)((ulong)uVar18 >> 0x20);
  uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x10);
  fVar29 = (float)uVar18;
  fVar30 = (float)((ulong)uVar18 >> 0x20);
  lVar21 = *param_1;
  fVar25 = (float)*(undefined8 *)(lVar19 + 0x10) - fVar29;
  fVar26 = (float)((ulong)*(undefined8 *)(lVar19 + 0x10) >> 0x20) - fVar30;
  fVar27 = (float)*(undefined8 *)(lVar19 + 0x18) - fVar31;
  fVar28 = (float)((ulong)*(undefined8 *)(lVar19 + 0x18) >> 0x20) - fVar32;
  lVar23 = param_1[2];
  fVar25 = fVar25 * fVar25;
  fVar26 = fVar26 * fVar26;
  fVar27 = fVar27 * fVar27;
  fVar28 = fVar28 * fVar28;
  auVar33._4_4_ = fVar26;
  auVar33._0_4_ = fVar25;
  auVar33._8_4_ = fVar27;
  auVar33._12_4_ = fVar28;
  auVar37._4_4_ = fVar26;
  auVar37._0_4_ = fVar25;
  auVar37._8_4_ = fVar27;
  auVar37._12_4_ = fVar28;
  auVar33 = NEON_ext(auVar33,auVar37,8,1);
  fVar27 = *(float *)(lVar21 + 0x10) - fVar29;
  fVar28 = *(float *)(lVar21 + 0x14) - fVar30;
  fVar35 = *(float *)(lVar21 + 0x18) - fVar31;
  fVar36 = *(float *)(lVar21 + 0x1c) - fVar32;
  auVar34._0_4_ = fVar27 * fVar27;
  auVar34._4_4_ = fVar28 * fVar28;
  auVar34._8_4_ = fVar35 * fVar35;
  auVar34._12_4_ = fVar36 * fVar36;
  auVar37 = NEON_ext(auVar34,auVar34,8,1);
  fVar29 = *(float *)(lVar23 + 0x10) - fVar29;
  fVar30 = *(float *)(lVar23 + 0x14) - fVar30;
  fVar31 = *(float *)(lVar23 + 0x18) - fVar31;
  fVar32 = *(float *)(lVar23 + 0x1c) - fVar32;
  fVar29 = fVar29 * fVar29;
  fVar30 = fVar30 * fVar30;
  fVar31 = fVar31 * fVar31;
  fVar32 = fVar32 * fVar32;
  auVar38._4_4_ = fVar30;
  auVar38._0_4_ = fVar29;
  auVar38._8_4_ = fVar31;
  auVar38._12_4_ = fVar32;
  auVar9._4_4_ = fVar30;
  auVar9._0_4_ = fVar29;
  auVar9._8_4_ = fVar31;
  auVar9._12_4_ = fVar32;
  auVar38 = NEON_ext(auVar38,auVar9,8,1);
  fVar25 = SQRT(auVar33._0_4_ + fVar25 + auVar33._4_4_ + fVar26);
  fVar26 = SQRT(auVar38._0_4_ + fVar29 + auVar38._4_4_ + fVar30);
  lVar24 = lVar23;
  if (fVar25 <= SQRT(auVar37._0_4_ + auVar34._0_4_ + auVar37._4_4_ + auVar34._4_4_)) {
    if (fVar25 < fVar26) {
      param_1[1] = lVar23;
      param_1[2] = lVar19;
      uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x18);
      fVar31 = (float)uVar18;
      fVar32 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x10);
      fVar29 = (float)uVar18;
      fVar30 = (float)((ulong)uVar18 >> 0x20);
      fVar25 = (float)*(undefined8 *)(lVar23 + 0x10) - fVar29;
      fVar26 = (float)((ulong)*(undefined8 *)(lVar23 + 0x10) >> 0x20) - fVar30;
      fVar27 = (float)*(undefined8 *)(lVar23 + 0x18) - fVar31;
      fVar28 = (float)((ulong)*(undefined8 *)(lVar23 + 0x18) >> 0x20) - fVar32;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      fVar27 = fVar27 * fVar27;
      fVar28 = fVar28 * fVar28;
      auVar7._4_4_ = fVar26;
      auVar7._0_4_ = fVar25;
      auVar7._8_4_ = fVar27;
      auVar7._12_4_ = fVar28;
      auVar8._4_4_ = fVar26;
      auVar8._0_4_ = fVar25;
      auVar8._8_4_ = fVar27;
      auVar8._12_4_ = fVar28;
      auVar33 = NEON_ext(auVar7,auVar8,8,1);
      fVar29 = *(float *)(lVar21 + 0x10) - fVar29;
      fVar30 = *(float *)(lVar21 + 0x14) - fVar30;
      fVar31 = *(float *)(lVar21 + 0x18) - fVar31;
      fVar32 = *(float *)(lVar21 + 0x1c) - fVar32;
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      auVar16._4_4_ = fVar30;
      auVar16._0_4_ = fVar29;
      auVar16._8_4_ = fVar31;
      auVar16._12_4_ = fVar32;
      auVar17._4_4_ = fVar30;
      auVar17._0_4_ = fVar29;
      auVar17._8_4_ = fVar31;
      auVar17._12_4_ = fVar32;
      auVar37 = NEON_ext(auVar16,auVar17,8,1);
      lVar24 = lVar19;
      if (SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30) <
          SQRT(auVar33._0_4_ + fVar25 + auVar33._4_4_ + fVar26)) {
        *param_1 = lVar23;
        param_1[1] = lVar21;
      }
    }
  }
  else {
    if (fVar26 <= fVar25) {
      *param_1 = lVar19;
      param_1[1] = lVar21;
      uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x18);
      fVar31 = (float)uVar18;
      fVar32 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x10);
      fVar29 = (float)uVar18;
      fVar30 = (float)((ulong)uVar18 >> 0x20);
      fVar25 = (float)*(undefined8 *)(lVar23 + 0x10) - fVar29;
      fVar26 = (float)((ulong)*(undefined8 *)(lVar23 + 0x10) >> 0x20) - fVar30;
      fVar27 = (float)*(undefined8 *)(lVar23 + 0x18) - fVar31;
      fVar28 = (float)((ulong)*(undefined8 *)(lVar23 + 0x18) >> 0x20) - fVar32;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      fVar27 = fVar27 * fVar27;
      fVar28 = fVar28 * fVar28;
      auVar5._4_4_ = fVar26;
      auVar5._0_4_ = fVar25;
      auVar5._8_4_ = fVar27;
      auVar5._12_4_ = fVar28;
      auVar6._4_4_ = fVar26;
      auVar6._0_4_ = fVar25;
      auVar6._8_4_ = fVar27;
      auVar6._12_4_ = fVar28;
      auVar33 = NEON_ext(auVar5,auVar6,8,1);
      fVar29 = *(float *)(lVar21 + 0x10) - fVar29;
      fVar30 = *(float *)(lVar21 + 0x14) - fVar30;
      fVar31 = *(float *)(lVar21 + 0x18) - fVar31;
      fVar32 = *(float *)(lVar21 + 0x1c) - fVar32;
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      auVar14._4_4_ = fVar30;
      auVar14._0_4_ = fVar29;
      auVar14._8_4_ = fVar31;
      auVar14._12_4_ = fVar32;
      auVar15._4_4_ = fVar30;
      auVar15._0_4_ = fVar29;
      auVar15._8_4_ = fVar31;
      auVar15._12_4_ = fVar32;
      auVar37 = NEON_ext(auVar14,auVar15,8,1);
      if (SQRT(auVar33._0_4_ + fVar25 + auVar33._4_4_ + fVar26) <=
          SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30)) goto joined_r0x00f3c818;
      param_1[1] = lVar23;
    }
    else {
      *param_1 = lVar23;
    }
    param_1[2] = lVar21;
    lVar24 = lVar21;
  }
joined_r0x00f3c818:
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar19 = 0;
  plVar22 = param_1 + 3;
  do {
    lVar21 = *plVar22;
    uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x18);
    fVar31 = (float)uVar18;
    fVar32 = (float)((ulong)uVar18 >> 0x20);
    uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x10);
    fVar29 = (float)uVar18;
    fVar30 = (float)((ulong)uVar18 >> 0x20);
    fVar25 = (float)*(undefined8 *)(lVar21 + 0x10) - fVar29;
    fVar26 = (float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20) - fVar30;
    fVar27 = (float)*(undefined8 *)(lVar21 + 0x18) - fVar31;
    fVar28 = (float)((ulong)*(undefined8 *)(lVar21 + 0x18) >> 0x20) - fVar32;
    fVar25 = fVar25 * fVar25;
    fVar26 = fVar26 * fVar26;
    fVar27 = fVar27 * fVar27;
    fVar28 = fVar28 * fVar28;
    auVar1._4_4_ = fVar26;
    auVar1._0_4_ = fVar25;
    auVar1._8_4_ = fVar27;
    auVar1._12_4_ = fVar28;
    auVar2._4_4_ = fVar26;
    auVar2._0_4_ = fVar25;
    auVar2._8_4_ = fVar27;
    auVar2._12_4_ = fVar28;
    auVar33 = NEON_ext(auVar1,auVar2,8,1);
    fVar29 = *(float *)(lVar24 + 0x10) - fVar29;
    fVar30 = *(float *)(lVar24 + 0x14) - fVar30;
    fVar31 = *(float *)(lVar24 + 0x18) - fVar31;
    fVar32 = *(float *)(lVar24 + 0x1c) - fVar32;
    fVar29 = fVar29 * fVar29;
    fVar30 = fVar30 * fVar30;
    fVar31 = fVar31 * fVar31;
    fVar32 = fVar32 * fVar32;
    auVar10._4_4_ = fVar30;
    auVar10._0_4_ = fVar29;
    auVar10._8_4_ = fVar31;
    auVar10._12_4_ = fVar32;
    auVar11._4_4_ = fVar30;
    auVar11._0_4_ = fVar29;
    auVar11._8_4_ = fVar31;
    auVar11._12_4_ = fVar32;
    auVar37 = NEON_ext(auVar10,auVar11,8,1);
    if (SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30) <
        SQRT(auVar33._0_4_ + fVar25 + auVar33._4_4_ + fVar26)) {
      lVar24 = lVar19;
      do {
        lVar23 = lVar24;
        *(undefined8 *)((long)param_1 + lVar23 + 0x18) =
             *(undefined8 *)((long)param_1 + lVar23 + 0x10);
        if (lVar23 == -0x10) {
          plVar20 = param_1;
          goto LAB_00f3c90c;
        }
        lVar24 = *(long *)((long)param_1 + lVar23 + 8);
        uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x18);
        fVar31 = (float)uVar18;
        fVar32 = (float)((ulong)uVar18 >> 0x20);
        uVar18 = *(undefined8 *)(*(long *)*param_3 + 0x10);
        fVar29 = (float)uVar18;
        fVar30 = (float)((ulong)uVar18 >> 0x20);
        fVar25 = (float)*(undefined8 *)(lVar21 + 0x10) - fVar29;
        fVar26 = (float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20) - fVar30;
        fVar27 = (float)*(undefined8 *)(lVar21 + 0x18) - fVar31;
        fVar28 = (float)((ulong)*(undefined8 *)(lVar21 + 0x18) >> 0x20) - fVar32;
        fVar25 = fVar25 * fVar25;
        fVar26 = fVar26 * fVar26;
        fVar27 = fVar27 * fVar27;
        fVar28 = fVar28 * fVar28;
        auVar3._4_4_ = fVar26;
        auVar3._0_4_ = fVar25;
        auVar3._8_4_ = fVar27;
        auVar3._12_4_ = fVar28;
        auVar4._4_4_ = fVar26;
        auVar4._0_4_ = fVar25;
        auVar4._8_4_ = fVar27;
        auVar4._12_4_ = fVar28;
        auVar33 = NEON_ext(auVar3,auVar4,8,1);
        fVar29 = *(float *)(lVar24 + 0x10) - fVar29;
        fVar30 = *(float *)(lVar24 + 0x14) - fVar30;
        fVar31 = *(float *)(lVar24 + 0x18) - fVar31;
        fVar32 = *(float *)(lVar24 + 0x1c) - fVar32;
        fVar29 = fVar29 * fVar29;
        fVar30 = fVar30 * fVar30;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        auVar12._4_4_ = fVar30;
        auVar12._0_4_ = fVar29;
        auVar12._8_4_ = fVar31;
        auVar12._12_4_ = fVar32;
        auVar13._4_4_ = fVar30;
        auVar13._0_4_ = fVar29;
        auVar13._8_4_ = fVar31;
        auVar13._12_4_ = fVar32;
        auVar37 = NEON_ext(auVar12,auVar13,8,1);
        lVar24 = lVar23 + -8;
      } while (SQRT(auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30) <
               SQRT(auVar33._0_4_ + fVar25 + auVar33._4_4_ + fVar26));
      plVar20 = (long *)((long)param_1 + lVar23 + 0x10);
LAB_00f3c90c:
      *plVar20 = lVar21;
    }
    if (plVar22 + 1 == param_2) {
      return;
    }
    lVar24 = *plVar22;
    lVar19 = lVar19 + 8;
    plVar22 = plVar22 + 1;
  } while( true );
}


