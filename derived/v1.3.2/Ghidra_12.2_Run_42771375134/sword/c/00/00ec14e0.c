/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec14e0; name: FUN_00ec14e0
 */


int FUN_00ec14e0(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

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
  undefined1 auVar23 [16];
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
  
  lVar27 = *param_2;
  uVar11 = ((undefined8 *)*param_5)[1];
  fVar35 = (float)uVar11;
  fVar36 = (float)((ulong)uVar11 >> 0x20);
  uVar11 = *(undefined8 *)*param_5;
  fVar33 = (float)uVar11;
  fVar34 = (float)((ulong)uVar11 >> 0x20);
  lVar26 = *param_1;
  uVar11 = *(undefined8 *)(lVar27 + 0xb0);
  lVar25 = *param_3;
  fVar29 = (float)uVar11 - fVar33;
  fVar30 = (float)((ulong)uVar11 >> 0x20) - fVar34;
  fVar31 = (float)*(undefined8 *)(lVar27 + 0xb8) - fVar35;
  fVar32 = (float)((ulong)*(undefined8 *)(lVar27 + 0xb8) >> 0x20) - fVar36;
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
  fVar31 = *(float *)(lVar26 + 0xb0) - fVar33;
  fVar32 = *(float *)(lVar26 + 0xb4) - fVar34;
  fVar39 = *(float *)(lVar26 + 0xb8) - fVar35;
  fVar40 = *(float *)(lVar26 + 0xbc) - fVar36;
  auVar38._0_4_ = fVar31 * fVar31;
  auVar38._4_4_ = fVar32 * fVar32;
  auVar38._8_4_ = fVar39 * fVar39;
  auVar38._12_4_ = fVar40 * fVar40;
  auVar41 = NEON_ext(auVar38,auVar38,8,1);
  pfVar28 = (float *)(lVar25 + 0xb0);
  fVar34 = *(float *)(lVar25 + 0xb4) - fVar34;
  fVar35 = *(float *)(lVar25 + 0xb8) - fVar35;
  fVar36 = *(float *)(lVar25 + 0xbc) - fVar36;
  fVar29 = auVar37._0_4_ + fVar29 + auVar37._4_4_ + fVar30;
  fVar30 = (*pfVar28 - fVar33) * (*pfVar28 - fVar33);
  fVar34 = fVar34 * fVar34;
  fVar35 = fVar35 * fVar35;
  fVar36 = fVar36 * fVar36;
  auVar12._4_4_ = fVar34;
  auVar12._0_4_ = fVar30;
  auVar12._8_4_ = fVar35;
  auVar12._12_4_ = fVar36;
  auVar13._4_4_ = fVar34;
  auVar13._0_4_ = fVar30;
  auVar13._8_4_ = fVar35;
  auVar13._12_4_ = fVar36;
  auVar37 = NEON_ext(auVar12,auVar13,8,1);
  fVar30 = auVar37._0_4_ + fVar30 + auVar37._4_4_ + fVar34;
  if (auVar41._0_4_ + auVar38._0_4_ + auVar41._4_4_ + auVar38._4_4_ <= fVar29) {
    if (fVar29 <= fVar30) {
      iVar24 = 0;
    }
    else {
      *param_2 = lVar25;
      *param_3 = lVar27;
      lVar25 = *param_2;
      uVar11 = ((undefined8 *)*param_5)[1];
      fVar31 = (float)uVar11;
      fVar32 = (float)((ulong)uVar11 >> 0x20);
      uVar11 = *(undefined8 *)*param_5;
      fVar29 = (float)uVar11;
      fVar30 = (float)((ulong)uVar11 >> 0x20);
      fVar33 = (float)*(undefined8 *)(lVar25 + 0xb0) - fVar29;
      fVar34 = (float)((ulong)*(undefined8 *)(lVar25 + 0xb0) >> 0x20) - fVar30;
      fVar35 = (float)*(undefined8 *)(lVar25 + 0xb8) - fVar31;
      fVar36 = (float)((ulong)*(undefined8 *)(lVar25 + 0xb8) >> 0x20) - fVar32;
      lVar26 = *param_1;
      fVar33 = fVar33 * fVar33;
      fVar34 = fVar34 * fVar34;
      fVar35 = fVar35 * fVar35;
      fVar36 = fVar36 * fVar36;
      auVar22._4_4_ = fVar34;
      auVar22._0_4_ = fVar33;
      auVar22._8_4_ = fVar35;
      auVar22._12_4_ = fVar36;
      auVar23._4_4_ = fVar34;
      auVar23._0_4_ = fVar33;
      auVar23._8_4_ = fVar35;
      auVar23._12_4_ = fVar36;
      auVar37 = NEON_ext(auVar22,auVar23,8,1);
      fVar29 = *(float *)(lVar26 + 0xb0) - fVar29;
      fVar30 = *(float *)(lVar26 + 0xb4) - fVar30;
      fVar31 = *(float *)(lVar26 + 0xb8) - fVar31;
      fVar32 = *(float *)(lVar26 + 0xbc) - fVar32;
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
      auVar41 = NEON_ext(auVar9,auVar10,8,1);
      if (auVar41._0_4_ + fVar29 + auVar41._4_4_ + fVar30 <=
          auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34) {
        iVar24 = 1;
        lVar25 = lVar27;
        pfVar28 = (float *)(lVar27 + 0xb0);
      }
      else {
        *param_1 = lVar25;
        *param_2 = lVar26;
        iVar24 = 2;
        lVar25 = *param_3;
        pfVar28 = (float *)(*param_3 + 0xb0);
      }
    }
  }
  else {
    if (fVar29 <= fVar30) {
      *param_1 = lVar27;
      *param_2 = lVar26;
      lVar25 = *param_3;
      uVar11 = ((undefined8 *)*param_5)[1];
      fVar31 = (float)uVar11;
      fVar32 = (float)((ulong)uVar11 >> 0x20);
      uVar11 = *(undefined8 *)*param_5;
      fVar29 = (float)uVar11;
      fVar30 = (float)((ulong)uVar11 >> 0x20);
      uVar11 = *(undefined8 *)(lVar25 + 0xb0);
      fVar33 = (float)uVar11 - fVar29;
      fVar34 = (float)((ulong)uVar11 >> 0x20) - fVar30;
      fVar35 = (float)*(undefined8 *)(lVar25 + 0xb8) - fVar31;
      fVar36 = (float)((ulong)*(undefined8 *)(lVar25 + 0xb8) >> 0x20) - fVar32;
      fVar33 = fVar33 * fVar33;
      fVar34 = fVar34 * fVar34;
      fVar35 = fVar35 * fVar35;
      fVar36 = fVar36 * fVar36;
      auVar20._4_4_ = fVar34;
      auVar20._0_4_ = fVar33;
      auVar20._8_4_ = fVar35;
      auVar20._12_4_ = fVar36;
      auVar21._4_4_ = fVar34;
      auVar21._0_4_ = fVar33;
      auVar21._8_4_ = fVar35;
      auVar21._12_4_ = fVar36;
      auVar37 = NEON_ext(auVar20,auVar21,8,1);
      fVar29 = *(float *)(lVar26 + 0xb0) - fVar29;
      fVar30 = *(float *)(lVar26 + 0xb4) - fVar30;
      fVar31 = *(float *)(lVar26 + 0xb8) - fVar31;
      fVar32 = *(float *)(lVar26 + 0xbc) - fVar32;
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
      auVar41 = NEON_ext(auVar7,auVar8,8,1);
      if (auVar41._0_4_ + fVar29 + auVar41._4_4_ + fVar30 <=
          auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34) {
        iVar24 = 1;
        pfVar28 = (float *)(lVar25 + 0xb0);
        goto LAB_00ec165c;
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
    pfVar28 = (float *)(lVar26 + 0xb0);
  }
LAB_00ec165c:
  lVar26 = *param_4;
  uVar11 = ((undefined8 *)*param_5)[1];
  fVar31 = (float)uVar11;
  fVar32 = (float)((ulong)uVar11 >> 0x20);
  uVar11 = *(undefined8 *)*param_5;
  fVar29 = (float)uVar11;
  fVar30 = (float)((ulong)uVar11 >> 0x20);
  fVar33 = (float)*(undefined8 *)(lVar26 + 0xb0) - fVar29;
  fVar34 = (float)((ulong)*(undefined8 *)(lVar26 + 0xb0) >> 0x20) - fVar30;
  fVar35 = (float)*(undefined8 *)(lVar26 + 0xb8) - fVar31;
  fVar36 = (float)((ulong)*(undefined8 *)(lVar26 + 0xb8) >> 0x20) - fVar32;
  fVar33 = fVar33 * fVar33;
  fVar34 = fVar34 * fVar34;
  fVar35 = fVar35 * fVar35;
  fVar36 = fVar36 * fVar36;
  auVar14._4_4_ = fVar34;
  auVar14._0_4_ = fVar33;
  auVar14._8_4_ = fVar35;
  auVar14._12_4_ = fVar36;
  auVar15._4_4_ = fVar34;
  auVar15._0_4_ = fVar33;
  auVar15._8_4_ = fVar35;
  auVar15._12_4_ = fVar36;
  auVar37 = NEON_ext(auVar14,auVar15,8,1);
  fVar29 = *pfVar28 - fVar29;
  fVar30 = pfVar28[1] - fVar30;
  fVar31 = pfVar28[2] - fVar31;
  fVar32 = pfVar28[3] - fVar32;
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
  auVar41 = NEON_ext(auVar1,auVar2,8,1);
  if (auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34 <
      auVar41._0_4_ + fVar29 + auVar41._4_4_ + fVar30) {
    *param_3 = lVar26;
    *param_4 = lVar25;
    lVar25 = *param_3;
    uVar11 = ((undefined8 *)*param_5)[1];
    fVar31 = (float)uVar11;
    fVar32 = (float)((ulong)uVar11 >> 0x20);
    uVar11 = *(undefined8 *)*param_5;
    fVar29 = (float)uVar11;
    fVar30 = (float)((ulong)uVar11 >> 0x20);
    fVar33 = (float)*(undefined8 *)(lVar25 + 0xb0) - fVar29;
    fVar34 = (float)((ulong)*(undefined8 *)(lVar25 + 0xb0) >> 0x20) - fVar30;
    fVar35 = (float)*(undefined8 *)(lVar25 + 0xb8) - fVar31;
    fVar36 = (float)((ulong)*(undefined8 *)(lVar25 + 0xb8) >> 0x20) - fVar32;
    lVar26 = *param_2;
    fVar33 = fVar33 * fVar33;
    fVar34 = fVar34 * fVar34;
    fVar35 = fVar35 * fVar35;
    fVar36 = fVar36 * fVar36;
    auVar16._4_4_ = fVar34;
    auVar16._0_4_ = fVar33;
    auVar16._8_4_ = fVar35;
    auVar16._12_4_ = fVar36;
    auVar17._4_4_ = fVar34;
    auVar17._0_4_ = fVar33;
    auVar17._8_4_ = fVar35;
    auVar17._12_4_ = fVar36;
    auVar37 = NEON_ext(auVar16,auVar17,8,1);
    fVar29 = *(float *)(lVar26 + 0xb0) - fVar29;
    fVar30 = *(float *)(lVar26 + 0xb4) - fVar30;
    fVar31 = *(float *)(lVar26 + 0xb8) - fVar31;
    fVar32 = *(float *)(lVar26 + 0xbc) - fVar32;
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
    auVar41 = NEON_ext(auVar3,auVar4,8,1);
    if (auVar41._0_4_ + fVar29 + auVar41._4_4_ + fVar30 <=
        auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34) {
      return iVar24 + 1;
    }
    *param_2 = lVar25;
    *param_3 = lVar26;
    lVar25 = *param_2;
    uVar11 = ((undefined8 *)*param_5)[1];
    fVar31 = (float)uVar11;
    fVar32 = (float)((ulong)uVar11 >> 0x20);
    uVar11 = *(undefined8 *)*param_5;
    fVar29 = (float)uVar11;
    fVar30 = (float)((ulong)uVar11 >> 0x20);
    fVar33 = (float)*(undefined8 *)(lVar25 + 0xb0) - fVar29;
    fVar34 = (float)((ulong)*(undefined8 *)(lVar25 + 0xb0) >> 0x20) - fVar30;
    fVar35 = (float)*(undefined8 *)(lVar25 + 0xb8) - fVar31;
    fVar36 = (float)((ulong)*(undefined8 *)(lVar25 + 0xb8) >> 0x20) - fVar32;
    lVar26 = *param_1;
    fVar33 = fVar33 * fVar33;
    fVar34 = fVar34 * fVar34;
    fVar35 = fVar35 * fVar35;
    fVar36 = fVar36 * fVar36;
    auVar18._4_4_ = fVar34;
    auVar18._0_4_ = fVar33;
    auVar18._8_4_ = fVar35;
    auVar18._12_4_ = fVar36;
    auVar19._4_4_ = fVar34;
    auVar19._0_4_ = fVar33;
    auVar19._8_4_ = fVar35;
    auVar19._12_4_ = fVar36;
    auVar37 = NEON_ext(auVar18,auVar19,8,1);
    fVar29 = *(float *)(lVar26 + 0xb0) - fVar29;
    fVar30 = *(float *)(lVar26 + 0xb4) - fVar30;
    fVar31 = *(float *)(lVar26 + 0xb8) - fVar31;
    fVar32 = *(float *)(lVar26 + 0xbc) - fVar32;
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
    auVar41 = NEON_ext(auVar5,auVar6,8,1);
    if (auVar41._0_4_ + fVar29 + auVar41._4_4_ + fVar30 <=
        auVar37._0_4_ + fVar33 + auVar37._4_4_ + fVar34) {
      return iVar24 + 2;
    }
    iVar24 = iVar24 + 3;
    *param_1 = lVar25;
    *param_2 = lVar26;
  }
  return iVar24;
}


