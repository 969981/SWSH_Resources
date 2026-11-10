/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f16c90; name: FUN_00f16c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f16c90(long param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  float fVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  float fVar27;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar53;
  float fVar54;
  undefined1 auVar52 [16];
  undefined8 uVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar67;
  float fVar68;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar18 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  plVar19 = plRam00000000000001f0;
  for (plVar12 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plRam00000000000001f0 = plVar19,
      plVar12 != plVar18; plVar12 = plVar12 + 1) {
    lVar14 = *plVar12;
    uVar11 = FUN_015b5320(lVar14 + 0x50);
    if (((uVar11 & 1) != 0) &&
       (uVar11 = (**(code **)(*(long *)*plVar12 + 0x88))(), (uVar11 & 1) == 0)) {
      plVar12 = *(long **)(lVar14 + 0x1e8);
      plVar19 = *(long **)(lVar14 + 0x1f0);
      if (plVar12 != plVar19) goto LAB_00f16d0c;
      goto LAB_00f16d28;
    }
    plVar19 = plRam00000000000001f0;
  }
  lVar14 = 0;
  plVar12 = _DAT_000001e8;
  if (_DAT_000001e8 != plVar19) {
LAB_00f16d0c:
    do {
      plVar18 = plVar12 + 1;
      lVar15 = *plVar12;
      uVar11 = FUN_00f17a30(lVar15 + 0x50);
      if ((uVar11 & 1) != 0) goto LAB_00f16d34;
      plVar12 = plVar18;
    } while (plVar19 != plVar18);
  }
LAB_00f16d28:
  lVar15 = 0;
LAB_00f16d34:
  uVar17 = *(undefined8 *)PTR_DAT_027194e8;
  if (*(int *)(param_1 + 0xf4) < 0x1e) {
    iVar32 = *(int *)(param_1 + 0xf4) + 1;
    *(int *)(param_1 + 0xf4) = iVar32;
    if (iVar32 == 0x1e) {
      (**(code **)(**(long **)(param_1 + 0xf8) + 0x58))(*(long **)(param_1 + 0xf8),2);
      FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&DAT_02a5f728);
      FUN_00db42e0(lVar14,&DAT_02a5f6e8,1);
    }
    plVar12 = *(long **)(param_1 + 0x98);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x1b0))(plVar12,&DAT_02a5f688);
      plVar12 = *(long **)(param_1 + 0xa0);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x1b0))(plVar12,&DAT_02a5f688);
        plVar12 = *(long **)(param_1 + 0xa8);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x1b0))(plVar12,&DAT_02a5f688);
        }
      }
    }
  }
  uVar13 = 1;
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
    break;
  case 1:
    goto switchD_00f16e14_caseD_1;
  case 2:
    goto switchD_00f16e14_caseD_2;
  case 3:
    goto switchD_00f16e14_caseD_3;
  case 4:
    goto switchD_00f16e14_caseD_4;
  case 5:
    goto switchD_00f16e14_caseD_5;
  case 6:
    goto switchD_00f16e14_caseD_6;
  case 7:
    uVar16 = *(uint *)(param_1 + 0xf0);
    if ((int)uVar16 < 0x3c) goto LAB_00f17324;
    goto LAB_00f1734c;
  case 8:
    goto switchD_00f16e14_caseD_8;
  default:
    goto switchD_00f16e14_default;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x68) = 1;
switchD_00f16e14_caseD_1:
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x60) == 4)) {
    *(undefined4 *)(param_1 + 0x68) = 2;
switchD_00f16e14_caseD_2:
    if ((0x1d < *(int *)(param_1 + 0xf4)) &&
       (uVar11 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x60))(*(long **)(param_1 + 0xf8),2),
       (uVar11 & 1) != 0)) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
switchD_00f16e14_caseD_3:
      (**(code **)(**(long **)(param_1 + 0xf8) + 0x58))(*(long **)(param_1 + 0xf8),3);
      local_60 = 0;
      uStack_58 = 0;
      uStack_68 = _UNK_01d4b6c8;
      local_70 = _DAT_01d4b6c0;
      FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,0,&local_60,&local_70,0xf,0,1);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
switchD_00f16e14_caseD_4:
      uVar11 = FUN_00d93fb0(*(undefined8 *)PTR_DAT_02710868,0);
      if ((uVar11 & 1) != 0) {
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
switchD_00f16e14_caseD_5:
        if (*(char *)(param_1 + 0xe1) != '\0') {
          FUN_00dfd500(uVar17);
        }
        if (lVar15 != 0) {
          *(undefined1 *)(lVar15 + 0x69) = 1;
        }
        FUN_00e68380(*(undefined8 *)(param_1 + 0x90));
        fVar10 = DAT_01d4c444;
        fVar27 = DAT_01d4c05c;
        fVar21 = (float)((ulong)DAT_01cd5070 >> 0x20);
        fVar20 = (float)DAT_01cd5070 + fVar21;
        fVar21 = (float)DAT_01cd5070 + fVar21;
        uVar23 = SUB41(fVar21,0);
        uVar24 = (undefined1)((uint)fVar21 >> 8);
        uVar25 = (undefined1)((uint)fVar21 >> 0x10);
        uVar26 = (undefined1)((uint)fVar21 >> 0x18);
        auVar28[4] = uVar23;
        auVar28._0_4_ = fVar20;
        auVar28[5] = uVar24;
        auVar28[6] = uVar25;
        auVar28[7] = uVar26;
        auVar28[8] = SUB41(fVar20,0);
        auVar28[9] = (char)((uint)fVar20 >> 8);
        auVar28[10] = (char)((uint)fVar20 >> 0x10);
        auVar28[0xb] = (char)((uint)fVar20 >> 0x18);
        auVar28[0xc] = uVar23;
        auVar28[0xd] = uVar24;
        auVar28[0xe] = uVar25;
        auVar28[0xf] = uVar26;
        auVar38 = NEON_frsqrte(auVar28,4);
        auVar66._0_4_ = auVar38._0_4_ * fVar20;
        auVar66._4_4_ = auVar38._4_4_ * fVar21;
        auVar66._8_4_ = auVar38._8_4_ * fVar20;
        uVar1 = (undefined2)(CONCAT15(uVar24,CONCAT14(uVar23,fVar20)) >> 0x20);
        auVar66._12_4_ = auVar38._12_4_ * (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar1));
        auVar28 = NEON_frsqrts(auVar38,auVar66,4);
        auVar29._0_4_ = auVar38._0_4_ * auVar28._0_4_;
        auVar29._4_4_ = auVar38._4_4_ * auVar28._4_4_;
        auVar29._8_4_ = auVar38._8_4_ * auVar28._8_4_;
        auVar29._12_4_ = auVar38._12_4_ * auVar28._12_4_;
        auVar38._0_4_ = fVar20 * auVar29._0_4_;
        auVar38._4_4_ = fVar21 * auVar29._4_4_;
        auVar38._8_4_ = fVar20 * auVar29._8_4_;
        auVar38._12_4_ = (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar1)) * auVar29._12_4_;
        iVar32 = -(uint)(fVar20 == 0.0);
        iVar33 = -(uint)(fVar21 == 0.0);
        iVar34 = -(uint)(fVar20 == 0.0);
        auVar28 = NEON_frsqrts(auVar29,auVar38,4);
        fVar21 = auVar29._0_4_ * auVar28._0_4_ * (float)_DAT_01d4ae50;
        fVar20 = auVar29._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_01d4ae50 >> 0x20);
        fVar31 = auVar29._8_4_ * auVar28._8_4_ * (float)_UNK_01d4ae58;
        fVar22 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                 CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                          ~(byte)((uint)iVar32 >> 0x10),
                                          CONCAT11((byte)((uint)fVar21 >> 8) &
                                                   ~(byte)((uint)iVar32 >> 8),
                                                   SUB41(fVar21,0) & ~(byte)iVar32)));
        auVar47._0_8_ =
             CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                      CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                               CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                        CONCAT14(SUB41(fVar20,0) & ~(byte)iVar33,fVar22))));
        auVar47[8] = SUB41(fVar31,0) & ~(byte)iVar34;
        auVar47[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar34 >> 8);
        auVar47[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
        auVar47[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
        fVar20 = *(float *)PTR_Float2Pi_02715150;
        fVar31 = DAT_01d4c538 -
                 fVar20 * (float)(int)(*(float *)PTR_Float1Divided2Pi_02715148 * DAT_01d4c538 + -0.5
                                      );
        fVar21 = *(float *)PTR_FloatPiDivided2_02715158;
        if (fVar31 <= fVar21) {
          if (fVar31 < -fVar21) {
            fVar35 = -*(float *)PTR_FloatPi_02715160;
            goto LAB_00f16fe4;
          }
          fVar35 = 1.0;
        }
        else {
          fVar35 = *(float *)PTR_FloatPi_02715160;
LAB_00f16fe4:
          fVar31 = fVar35 - fVar31;
          fVar35 = -1.0;
        }
        fVar56 = fVar31 * fVar31;
        fVar39 = *(float *)(PTR_SinCoefficients_02715168 + 0x10);
        fVar46 = *(float *)PTR_SinCoefficients_02715168;
        fVar45 = *(float *)(PTR_SinCoefficients_02715168 + 4);
        fVar43 = *(float *)PTR_CosCoefficients_02715170;
        fVar42 = *(float *)(PTR_CosCoefficients_02715170 + 4);
        fVar44 = *(float *)(PTR_SinCoefficients_02715168 + 8);
        fVar41 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
        fVar40 = *(float *)(PTR_CosCoefficients_02715170 + 8);
        fVar37 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
        fVar36 = *(float *)(PTR_CosCoefficients_02715170 + 0x10);
        fVar31 = fVar31 * (fVar56 * (fVar56 * (fVar41 + fVar56 * (fVar56 * (fVar45 - fVar46 * fVar56
                                                                           ) - fVar44)) - fVar39) +
                          1.0);
        auVar48._0_4_ = fVar22 * fVar31;
        auVar48._4_4_ = (float)((ulong)auVar47._0_8_ >> 0x20) * fVar31;
        auVar48._8_4_ = auVar47._8_4_ * fVar31;
        fVar60 = (float)_UNK_01d4b578;
        fVar61 = (float)((ulong)_UNK_01d4b578 >> 0x20);
        fVar59 = (float)_DAT_01d4b570;
        uVar11 = (ulong)_DAT_01d4b570 >> 0x20;
        auVar48._12_4_ =
             fVar35 * (fVar56 * (fVar56 * (fVar37 + fVar56 * (fVar56 * (fVar42 - fVar56 * fVar43) -
                                                             fVar40)) - fVar36) + 1.0);
        auVar3._8_4_ = fVar60;
        auVar3._0_8_ = _DAT_01d4b570;
        auVar3._12_4_ = fVar61;
        uVar64 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
        auVar4._8_4_ = fVar60;
        auVar4._0_8_ = _DAT_01d4b570;
        auVar4._12_4_ = fVar61;
        uVar50 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5120);
        uVar51 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd4f90);
        uVar55 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd50f8);
        auVar5._8_4_ = fVar60;
        auVar5._0_8_ = _DAT_01d4b570;
        auVar5._12_4_ = fVar61;
        uVar67 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
        auVar6._8_4_ = fVar60;
        auVar6._0_8_ = _DAT_01d4b570;
        auVar6._12_4_ = fVar61;
        uVar63 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
        uVar57 = a64_TBL(ZEXT816(0),auVar48,DAT_01cd5418);
        lVar15 = *(long *)(param_1 + 0x90);
        auVar7._8_4_ = fVar60;
        auVar7._0_8_ = _DAT_01d4b570;
        auVar7._12_4_ = fVar61;
        uVar13 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5270);
        fVar62 = (float)((ulong)uVar55 >> 0x20);
        fVar56 = (float)((ulong)uVar51 >> 0x20);
        fVar22 = (float)((ulong)DAT_01cd52f0 >> 0x20);
        fVar58 = (float)((ulong)uVar57 >> 0x20);
        fVar31 = (float)DAT_01cd52f0 + fVar22;
        fVar22 = (float)DAT_01cd52f0 + fVar22;
        fVar35 = (float)_DAT_01d4ae90;
        fVar53 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
        fVar54 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
        fVar68 = *(float *)PTR_Float1Divided2Pi_02715148 * DAT_01d4c05c;
        auVar8._4_4_ = fVar22;
        auVar8._0_4_ = fVar31;
        auVar8._8_4_ = fVar31;
        auVar8._12_4_ = fVar22;
        auVar28 = NEON_frsqrte(auVar8,4);
        auVar65._0_4_ = auVar28._0_4_ * fVar31;
        auVar65._4_4_ = auVar28._4_4_ * fVar22;
        auVar65._8_4_ = auVar28._8_4_ * fVar31;
        auVar65._12_4_ = auVar28._12_4_ * fVar22;
        iVar32 = -(uint)(fVar31 == 0.0);
        iVar33 = -(uint)(fVar22 == 0.0);
        iVar34 = -(uint)(fVar31 == 0.0);
        *(float *)(lVar15 + 0xa8) =
             ((float)uVar51 * fVar60 + (float)_UNK_01d4ae98 * (float)uVar50 * (float)uVar55 +
             (float)_UNK_01d4ae98 * auVar48._0_4_ * 0.0) - (float)uVar57 * (float)uVar13;
        *(float *)(lVar15 + 0xac) =
             (fVar56 * fVar61 + fVar54 * (float)((ulong)uVar50 >> 0x20) * fVar62 +
             fVar54 * auVar48._4_4_ * 0.0) - fVar58 * (float)((ulong)uVar13 >> 0x20);
        *(float *)(lVar15 + 0xa0) =
             ((float)uVar51 * fVar59 + fVar35 * (float)uVar64 * auVar48._0_4_ +
             fVar35 * (float)uVar67 * (float)uVar57) - (float)uVar55 * (float)uVar63;
        *(float *)(lVar15 + 0xa4) =
             (fVar56 * (float)uVar11 + fVar53 * (float)((ulong)uVar64 >> 0x20) * auVar48._4_4_ +
             fVar53 * (float)((ulong)uVar67 >> 0x20) * fVar58) -
             fVar62 * (float)((ulong)uVar63 >> 0x20);
        auVar66 = NEON_frsqrts(auVar28,auVar65,4);
        *(undefined1 *)(lVar15 + 0xc0) = 1;
        auVar52._0_4_ = auVar28._0_4_ * auVar66._0_4_;
        auVar52._4_4_ = auVar28._4_4_ * auVar66._4_4_;
        auVar52._8_4_ = auVar28._8_4_ * auVar66._8_4_;
        auVar52._12_4_ = auVar28._12_4_ * auVar66._12_4_;
        auVar49._0_4_ = fVar31 * auVar52._0_4_;
        auVar49._4_4_ = fVar22 * auVar52._4_4_;
        auVar49._8_4_ = fVar31 * auVar52._8_4_;
        auVar49._12_4_ = fVar22 * auVar52._12_4_;
        auVar28 = NEON_frsqrts(auVar52,auVar49,4);
        uVar2 = *(undefined4 *)(param_1 + 0xd0);
        uVar9 = *(undefined4 *)(param_1 + 0xd4);
        fVar31 = *(float *)(param_1 + 0xd8);
        fVar22 = auVar52._0_4_ * auVar28._0_4_ * (float)_DAT_01d4b580;
        fVar35 = auVar52._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_01d4b580 >> 0x20);
        fVar56 = auVar52._8_4_ * auVar28._8_4_ * (float)_UNK_01d4b588;
        fVar27 = fVar27 - fVar20 * (float)(int)(fVar68 + 0.5);
        *(undefined1 *)(lVar14 + 0xc0) = 1;
        *(ulong *)(lVar14 + 0xb8) = (ulong)(uint)(fVar31 + fVar10);
        *(undefined4 *)(lVar14 + 0xb0) = uVar2;
        *(undefined4 *)(lVar14 + 0xb4) = uVar9;
        if (fVar27 <= fVar21) {
          if (fVar27 < -fVar21) {
            fVar21 = -*(float *)PTR_FloatPi_02715160;
            uVar23 = SUB41(fVar21,0);
            uVar24 = (undefined1)((uint)fVar21 >> 8);
            uVar25 = (undefined1)((uint)fVar21 >> 0x10);
            uVar26 = (undefined1)((uint)fVar21 >> 0x18);
            goto LAB_00f17200;
          }
          uVar23 = 0x3f;
        }
        else {
          uVar2 = *(undefined4 *)PTR_FloatPi_02715160;
          uVar23 = (undefined1)uVar2;
          uVar24 = (undefined1)((uint)uVar2 >> 8);
          uVar25 = (undefined1)((uint)uVar2 >> 0x10);
          uVar26 = (undefined1)((uint)uVar2 >> 0x18);
LAB_00f17200:
          fVar27 = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23))) - fVar27;
          uVar23 = 0xbf;
        }
        fVar21 = fVar27 * fVar27;
        fVar27 = fVar27 * (fVar21 * (fVar21 * (fVar41 + fVar21 * (fVar21 * (fVar45 - fVar46 * fVar21
                                                                           ) - fVar44)) - fVar39) +
                          1.0);
        auVar30._0_8_ =
             CONCAT44((float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                                      CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                               ~(byte)((uint)iVar33 >> 0x10),
                                               CONCAT11((byte)((uint)fVar35 >> 8) &
                                                        ~(byte)((uint)iVar33 >> 8),
                                                        SUB41(fVar35,0) & ~(byte)iVar33))) * fVar27,
                      (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                      CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                               ~(byte)((uint)iVar32 >> 0x10),
                                               CONCAT11((byte)((uint)fVar22 >> 8) &
                                                        ~(byte)((uint)iVar32 >> 8),
                                                        SUB41(fVar22,0) & ~(byte)iVar32))) * fVar27)
        ;
        auVar30._8_4_ =
             (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                             CONCAT12((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                      CONCAT11((byte)((uint)fVar56 >> 8) &
                                               ~(byte)((uint)iVar34 >> 8),
                                               SUB41(fVar56,0) & ~(byte)iVar34))) * fVar27;
        auVar30._12_4_ =
             (float)CONCAT13(uVar23,0x800000) *
             (fVar21 * (fVar21 * (fVar37 + fVar21 * (fVar21 * (fVar42 - fVar43 * fVar21) - fVar40))
                       - fVar36) + 1.0);
        *(undefined1 *)(lVar14 + 0xc0) = 1;
        *(long *)(lVar14 + 0xa8) = auVar30._8_8_;
        *(undefined8 *)(lVar14 + 0xa0) = auVar30._0_8_;
        (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))();
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
switchD_00f16e14_caseD_6:
        uVar16 = *(uint *)(param_1 + 0xf0);
        if ((int)uVar16 < 4) {
LAB_00f17324:
          *(uint *)(param_1 + 0xf0) = uVar16 + 1;
        }
        else {
          uVar11 = (**(code **)(**(long **)(param_1 + 0xf8) + 0x28))();
          if ((uVar11 & 1) != 0) {
            if (*(char *)(param_1 + 0xe1) != '\0') {
              FUN_00dfdf50((char)DAT_01d4c1d4,uVar17,1,3);
            }
            FUN_00d939e0(*(undefined8 *)PTR_DAT_02710868,0,0,0xf);
            uVar16 = 0x3c;
            if (*(char *)(param_1 + 0xe1) != '\0') {
              uVar16 = 0;
            }
            *(uint *)(param_1 + 0xf0) = uVar16;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            if (uVar16 < 0x3c) goto LAB_00f17324;
LAB_00f1734c:
            uVar11 = FUN_00d93fb0(*(undefined8 *)PTR_DAT_02710868,0);
            if ((uVar11 & 1) != 0) {
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
              return 1;
            }
          }
        }
      }
    }
  }
switchD_00f16e14_default:
  uVar13 = 0;
switchD_00f16e14_caseD_8:
  return uVar13;
}


