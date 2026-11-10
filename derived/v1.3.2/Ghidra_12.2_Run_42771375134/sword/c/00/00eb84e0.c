/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb84e0; name: FUN_00eb84e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb84e0(long param_1)

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
  undefined *puVar12;
  bool bVar13;
  ulong uVar14;
  float fVar15;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float extraout_var_02;
  float extraout_var_03;
  undefined4 extraout_var_04;
  float extraout_var_05;
  undefined4 extraout_var_06;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  
  uVar14 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1f8))();
  if ((uVar14 & 1) != 0) {
    if (*(float *)(param_1 + 0xe0) == 0.0) {
      bVar13 = *(char *)(param_1 + 0x9c) == '\0';
      if (*(float *)(param_1 + 0xe4) <= 0.0) {
        bVar13 = !bVar13;
      }
      fVar30 = *(float *)PTR_FloatPi_02715160;
      fVar31 = *(float *)PTR_FloatDegree180_027194f0;
      fVar15 = -(DAT_01d4c284 - *(float *)(param_1 + 0x284));
      if (!bVar13) {
        fVar15 = *(float *)(param_1 + 0x284);
      }
      FUN_00a92cd0(fVar15 * (fVar30 / fVar31),0,0);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa8);
      uVar20 = DAT_01cd4f90;
      *(undefined8 *)(param_1 + 0x290) = uVar2;
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x290);
      uVar17 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x298) >> 0x20);
      fVar15 = (float)*(undefined8 *)*pauVar1;
      fVar16 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar9._12_4_ = uVar17;
      auVar9._0_12_ = *pauVar1;
      uVar24 = a64_TBL(ZEXT816(0),auVar9,uVar20);
      auVar3._4_4_ = extraout_var;
      auVar3._0_4_ = extraout_s0;
      auVar3._8_4_ = extraout_var_03;
      auVar3._12_4_ = extraout_var_05;
      uVar20 = a64_TBL(ZEXT816(0),auVar3,uVar20);
      auVar10._12_4_ = uVar17;
      auVar10._0_12_ = *pauVar1;
      uVar27 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
      auVar11._12_4_ = uVar17;
      auVar11._0_12_ = *pauVar1;
      uVar29 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_4_ = extraout_var_03;
      auVar4._12_4_ = extraout_var_05;
      uVar33 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5120);
      fVar18 = (float)((ulong)uVar27 >> 0x20);
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      auVar5._4_4_ = extraout_var;
      auVar5._0_4_ = extraout_s0;
      auVar5._8_4_ = extraout_var_03;
      auVar5._12_4_ = extraout_var_05;
      uVar21 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
      auVar6._4_4_ = extraout_var;
      auVar6._0_4_ = extraout_s0;
      auVar6._8_4_ = extraout_var_03;
      auVar6._12_4_ = extraout_var_05;
      uVar26 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
      auVar7._4_4_ = extraout_var;
      auVar7._0_4_ = extraout_s0;
      auVar7._8_4_ = extraout_var_03;
      auVar7._12_4_ = extraout_var_05;
      uVar28 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5270);
      auVar8._4_4_ = extraout_var;
      auVar8._0_4_ = extraout_s0;
      auVar8._8_4_ = extraout_s0;
      auVar8._12_4_ = extraout_var;
      uVar2 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50b0);
      fVar32 = (float)((ulong)uVar29 >> 0x20);
      fVar19 = (float)_DAT_01d4ae90;
      fVar22 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar23 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      *(ulong *)(param_1 + 0x2a8) =
           CONCAT44((extraout_var_05 * fVar25 + fVar23 * fVar18 * (float)((ulong)uVar33 >> 0x20) +
                    fVar23 * fVar16 * (float)((ulong)uVar2 >> 0x20)) -
                    fVar32 * (float)((ulong)uVar28 >> 0x20),
                    (extraout_var_03 * (float)uVar24 +
                     (float)_UNK_01d4ae98 * (float)uVar27 * (float)uVar33 +
                    (float)_UNK_01d4ae98 * fVar15 * (float)uVar2) - (float)uVar29 * (float)uVar28);
      *(ulong *)(param_1 + 0x2a0) =
           CONCAT44((extraout_var * fVar25 + fVar22 * fVar16 * (float)((ulong)uVar20 >> 0x20) +
                    fVar22 * fVar32 * (float)((ulong)uVar21 >> 0x20)) -
                    fVar18 * (float)((ulong)uVar26 >> 0x20),
                    (extraout_s0 * (float)uVar24 + fVar19 * fVar15 * (float)uVar20 +
                    fVar19 * (float)uVar29 * (float)uVar21) - (float)uVar27 * (float)uVar26);
      FUN_007101c0(param_1 + 0x2a0);
      *(undefined4 *)(param_1 + 0xe0) = extraout_var_00;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa8);
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa0);
      *(undefined8 *)(param_1 + 0x298) = uVar2;
      FUN_00a92cd0(*(float *)(param_1 + 0xe0),0,0);
      puVar12 = PTR_FloatDegree180_027194f0;
      *(ulong *)(param_1 + 0x2a8) = CONCAT44(extraout_var_06,extraout_var_04);
      *(ulong *)(param_1 + 0x2a0) = CONCAT44(extraout_var_01,extraout_s0_00);
      fVar31 = *(float *)puVar12;
      fVar30 = *(float *)PTR_FloatPi_02715160;
    }
    FUN_00ac7ad0(param_1 + 0x290);
    fVar31 = (fVar31 / fVar30) * *(float *)(param_1 + 0xe0) - (fVar31 / fVar30) * extraout_var_02;
    fVar31 = (float)(&DAT_01cd5390)[DAT_01d4c284 < fVar31] - fVar31;
    fVar30 = fVar31 + DAT_01d4c6ec;
    if (fVar31 <= DAT_01d4c284) {
      fVar30 = fVar31;
    }
    (**(code **)(**(long **)(param_1 + 0x78) + 0x180))
              (fVar30,*(long **)(param_1 + 0x78),PTR_DAT_0271e880);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x1b0))(*(long **)(param_1 + 0x78),PTR_DAT_0271e878);
    *(undefined4 *)(param_1 + 0x60) = 7;
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  return;
}


