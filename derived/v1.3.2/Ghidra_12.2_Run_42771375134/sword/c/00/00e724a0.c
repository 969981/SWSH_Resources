/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e724a0; name: FUN_00e724a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e724a0(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar13;
  bool bVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  float extraout_s0;
  float fVar19;
  float fVar20;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined8 uVar36;
  
  uVar15 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1f8))();
  uVar16 = FUN_015772a0(*(long *)(param_1 + 0x78) + 0x50);
  fVar12 = DAT_01d4c284;
  if ((uVar16 & 1) != 0) {
    uVar15 = FUN_00dbf8c0(*(undefined8 *)(param_1 + 0x78),PTR_DAT_0271fdd8);
    fVar12 = DAT_01d4c284;
  }
  if ((uVar15 & 1) == 0) {
    DAT_01d4c284 = fVar12;
    return;
  }
  bVar14 = *(char *)(param_1 + 0x9c) == '\0';
  if (*(float *)(param_1 + 0xe8) <= 0.0) {
    bVar14 = !bVar14;
  }
  fVar19 = -(fVar12 - *(float *)(param_1 + 0x28c));
  if (!bVar14) {
    fVar19 = *(float *)(param_1 + 0x28c);
  }
  DAT_01d4c284 = fVar12;
  FUN_00a92cd0(fVar19 * (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0),0,0
              );
  uVar13 = DAT_01cd5418;
  uVar25 = DAT_01cd5270;
  uVar22 = DAT_01cd50f8;
  uVar21 = DAT_01cd4f90;
  lVar18 = *(long *)(param_1 + 0x78);
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_4_ = extraout_var_00;
  auVar3._12_4_ = extraout_var_01;
  uVar30 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
  uVar2 = *(undefined8 *)(lVar18 + 0xa0);
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_4_ = extraout_var_00;
  auVar4._12_4_ = extraout_var_01;
  uVar24 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5120);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(lVar18 + 0xa8);
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x2a0);
  uVar34 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2a8) >> 0x20);
  fVar32 = (float)*(undefined8 *)*pauVar1;
  fVar33 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar9._12_4_ = uVar34;
  auVar9._0_12_ = *pauVar1;
  uVar21 = a64_TBL(ZEXT816(0),auVar9,uVar21);
  auVar5._4_4_ = extraout_var;
  auVar5._0_4_ = extraout_s0;
  auVar5._8_4_ = extraout_var_00;
  auVar5._12_4_ = extraout_var_01;
  uVar31 = a64_TBL(ZEXT816(0),auVar5,uVar13);
  auVar6._4_4_ = extraout_var;
  auVar6._0_4_ = extraout_s0;
  auVar6._8_4_ = extraout_var_00;
  auVar6._12_4_ = extraout_var_01;
  uVar29 = a64_TBL(ZEXT816(0),auVar6,uVar25);
  auVar10._12_4_ = uVar34;
  auVar10._0_12_ = *pauVar1;
  uVar36 = a64_TBL(ZEXT816(0),auVar10,uVar22);
  auVar11._12_4_ = uVar34;
  auVar11._0_12_ = *pauVar1;
  uVar25 = a64_TBL(ZEXT816(0),auVar11,uVar13);
  auVar7._4_4_ = extraout_var;
  auVar7._0_4_ = extraout_s0;
  auVar7._8_4_ = extraout_var_00;
  auVar7._12_4_ = extraout_var_01;
  uVar22 = a64_TBL(ZEXT816(0),auVar7,uVar22);
  fVar20 = (float)((ulong)uVar21 >> 0x20);
  fVar35 = (float)((ulong)uVar36 >> 0x20);
  auVar8._4_4_ = extraout_var;
  auVar8._0_4_ = extraout_s0;
  auVar8._8_4_ = extraout_s0;
  auVar8._12_4_ = extraout_var;
  uVar2 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50b0);
  fVar23 = (float)_DAT_01d4ae90;
  fVar26 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar27 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar28 = (float)((ulong)uVar25 >> 0x20);
  *(ulong *)(param_1 + 0x2b8) =
       CONCAT44((extraout_var_01 * fVar20 + fVar27 * fVar35 * (float)((ulong)uVar24 >> 0x20) +
                fVar27 * fVar33 * (float)((ulong)uVar2 >> 0x20)) -
                fVar28 * (float)((ulong)uVar29 >> 0x20),
                (extraout_var_00 * (float)uVar21 +
                 (float)_UNK_01d4ae98 * (float)uVar36 * (float)uVar24 +
                (float)_UNK_01d4ae98 * fVar32 * (float)uVar2) - (float)uVar25 * (float)uVar29);
  *(ulong *)(param_1 + 0x2b0) =
       CONCAT44((extraout_var * fVar20 + fVar26 * fVar33 * (float)((ulong)uVar30 >> 0x20) +
                fVar26 * fVar28 * (float)((ulong)uVar22 >> 0x20)) -
                fVar35 * (float)((ulong)uVar31 >> 0x20),
                (extraout_s0 * (float)uVar21 + fVar23 * fVar32 * (float)uVar30 +
                fVar23 * (float)uVar25 * (float)uVar22) - (float)uVar36 * (float)uVar31);
  uVar16 = FUN_015772a0(lVar18 + 0x50);
  plVar17 = *(long **)(param_1 + 0x78);
  if ((uVar16 & 1) == 0) {
    fVar19 = (float)(&DAT_01cd5390)[fVar12 < fVar19] - fVar19;
    fVar20 = fVar19 + DAT_01d4c6ec;
    if (fVar19 <= fVar12) {
      fVar20 = fVar19;
    }
    (**(code **)(*plVar17 + 0x180))(fVar20,plVar17,PTR_DAT_0271e880);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x1b0))(*(long **)(param_1 + 0x78),PTR_DAT_0271e878);
  }
  else {
    (**(code **)(*plVar17 + 0x180))(0x3f000000,plVar17,PTR_DAT_0271e870);
    (**(code **)(**(long **)(param_1 + 0x78) + 400))(*(long **)(param_1 + 0x78),PTR_DAT_0271e898,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 7;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}


