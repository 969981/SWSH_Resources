/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e77b80; name: FUN_00e77b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e77b80(float param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  long local_58;
  long local_48;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar12 = (long *)*puVar1;
    if ((plVar12 != (long *)0x0 && plVar12[0x34] == *param_2) &&
       (uVar9 = (**(code **)(*plVar12 + 0x88))(plVar12), (uVar9 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar11 = plVar12 + 9;
  (**(code **)(*plVar11 + 0x10))(plVar11);
  param_1 = param_1 * 0.5;
  fVar14 = (float)((ulong)DAT_01cd52f0 >> 0x20);
  fVar13 = (float)DAT_01cd52f0 + fVar14;
  fVar14 = (float)DAT_01cd52f0 + fVar14;
  uVar15 = SUB41(fVar14,0);
  uVar16 = (undefined1)((uint)fVar14 >> 8);
  uVar17 = (undefined1)((uint)fVar14 >> 0x10);
  uVar18 = (undefined1)((uint)fVar14 >> 0x18);
  fVar23 = 0.5;
  if (param_1 < 0.0) {
    fVar23 = -0.5;
  }
  auVar20[4] = uVar15;
  auVar20._0_4_ = fVar13;
  auVar20[5] = uVar16;
  auVar20[6] = uVar17;
  auVar20[7] = uVar18;
  auVar20[8] = SUB41(fVar13,0);
  auVar20[9] = (char)((uint)fVar13 >> 8);
  auVar20[10] = (char)((uint)fVar13 >> 0x10);
  auVar20[0xb] = (char)((uint)fVar13 >> 0x18);
  auVar20[0xc] = uVar15;
  auVar20[0xd] = uVar16;
  auVar20[0xe] = uVar17;
  auVar20[0xf] = uVar18;
  auVar24 = NEON_frsqrte(auVar20,4);
  auVar19._0_4_ = auVar24._0_4_ * fVar13;
  auVar19._4_4_ = auVar24._4_4_ * fVar14;
  auVar19._8_4_ = auVar24._8_4_ * fVar13;
  uVar4 = (undefined2)(CONCAT15(uVar16,CONCAT14(uVar15,fVar13)) >> 0x20);
  auVar19._12_4_ = auVar24._12_4_ * (float)CONCAT13(uVar18,CONCAT12(uVar17,uVar4));
  auVar20 = NEON_frsqrts(auVar24,auVar19,4);
  auVar21._0_4_ = auVar24._0_4_ * auVar20._0_4_;
  auVar21._4_4_ = auVar24._4_4_ * auVar20._4_4_;
  auVar21._8_4_ = auVar24._8_4_ * auVar20._8_4_;
  auVar21._12_4_ = auVar24._12_4_ * auVar20._12_4_;
  auVar24._0_4_ = fVar13 * auVar21._0_4_;
  auVar24._4_4_ = fVar14 * auVar21._4_4_;
  auVar24._8_4_ = fVar13 * auVar21._8_4_;
  auVar24._12_4_ = (float)CONCAT13(uVar18,CONCAT12(uVar17,uVar4)) * auVar21._12_4_;
  iVar5 = -(uint)(fVar13 == 0.0);
  iVar6 = -(uint)(fVar14 == 0.0);
  iVar7 = -(uint)(fVar13 == 0.0);
  auVar20 = NEON_frsqrts(auVar21,auVar24,4);
  fVar14 = auVar21._0_4_ * auVar20._0_4_ * (float)_DAT_01d4b580;
  fVar13 = auVar21._4_4_ * auVar20._4_4_ * (float)((ulong)_DAT_01d4b580 >> 0x20);
  fVar22 = auVar21._8_4_ * auVar20._8_4_ * (float)_UNK_01d4b588;
  param_1 = param_1 - *(float *)PTR_Float2Pi_02715150 *
                      (float)(int)(fVar23 + param_1 * *(float *)PTR_Float1Divided2Pi_02715148);
  if (param_1 <= *(float *)PTR_FloatPiDivided2_02715158) {
    if (-*(float *)PTR_FloatPiDivided2_02715158 <= param_1) {
      fVar23 = 1.0;
      goto LAB_00e77cec;
    }
    fVar23 = -*(float *)PTR_FloatPi_02715160;
  }
  else {
    fVar23 = *(float *)PTR_FloatPi_02715160;
  }
  param_1 = fVar23 - param_1;
  fVar23 = -1.0;
LAB_00e77cec:
  fVar25 = param_1 * param_1;
  plVar3 = (long *)plVar12[0x3e];
  param_1 = param_1 * (fVar25 * (fVar25 * (*(float *)(PTR_SinCoefficients_02715168 + 0xc) +
                                          fVar25 * (fVar25 * (*(float *)(
                                                  PTR_SinCoefficients_02715168 + 4) -
                                                  *(float *)PTR_SinCoefficients_02715168 * fVar25) -
                                                  *(float *)(PTR_SinCoefficients_02715168 + 8))) -
                                *(float *)(PTR_SinCoefficients_02715168 + 0x10)) + 1.0);
  fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar6))) * param_1;
  fVar23 = fVar23 * (fVar25 * (fVar25 * (*(float *)(PTR_CosCoefficients_02715170 + 0xc) +
                                        fVar25 * (fVar25 * (*(float *)(PTR_CosCoefficients_02715170
                                                                      + 4) -
                                                           fVar25 * *(float *)
                                                  PTR_CosCoefficients_02715170) -
                                                 *(float *)(PTR_CosCoefficients_02715170 + 8))) -
                              *(float *)(PTR_CosCoefficients_02715170 + 0x10)) + 1.0);
  *(undefined1 *)(plVar12 + 0x18) = 1;
  plVar12[0x15] =
       CONCAT17((char)((uint)fVar23 >> 0x18),
                CONCAT16((char)((uint)fVar23 >> 0x10),
                         CONCAT15((char)((uint)fVar23 >> 8),
                                  CONCAT14(SUB41(fVar23,0),
                                           (float)CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                           ~(byte)((uint)iVar7 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                    ~(byte)((uint)iVar7 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar22 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar7 >>
                                                                                    8),
                                                                             SUB41(fVar22,0) &
                                                                             ~(byte)iVar7))) *
                                           param_1))));
  plVar12[0x14] =
       CONCAT17((char)((uint)fVar13 >> 0x18),
                CONCAT16((char)((uint)fVar13 >> 0x10),
                         CONCAT15((char)((uint)fVar13 >> 8),
                                  CONCAT14(SUB41(fVar13,0),
                                           (float)CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                           ~(byte)((uint)iVar5 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                                    ~(byte)((uint)iVar5 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar14 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar5 >>
                                                                                    8),
                                                                             SUB41(fVar14,0) &
                                                                             ~(byte)iVar5))) *
                                           param_1))));
  plVar8 = (long *)plVar12[0x3d];
  do {
    if (plVar8 == plVar3) goto joined_r0x00e77db0;
    lVar10 = *plVar8;
    uVar9 = FUN_00df2e00(lVar10 + 0x50);
    plVar8 = plVar8 + 1;
  } while ((uVar9 & 1) == 0);
  FUN_00df0870(lVar10);
joined_r0x00e77db0:
  if ((param_3 & 1) != 0) {
    (**(code **)(*plVar12 + 0x10))(&local_58,plVar12);
    lVar10 = local_58;
    local_58 = 0;
    local_48 = lVar10;
    FUN_00e77910(&local_48);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      local_48 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  (**(code **)(*plVar11 + 0x18))(plVar11);
  return 1;
}


