/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e88bc0; name: FUN_00e88bc0
 */


void FUN_00e88bc0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long local_50;
  long local_48;
  
  plVar18 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar18 + 0x10))(&local_50,plVar18);
  local_48 = local_50;
  local_50 = 0;
  uVar14 = FUN_00e7cb20(&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  fVar4 = *(float *)(param_1 + 0x80);
  uVar26 = (undefined1)((uint)fVar4 >> 8);
  uVar27 = (undefined1)((uint)fVar4 >> 0x10);
  uVar28 = (undefined1)((uint)fVar4 >> 0x18);
  uVar24 = SUB41(fVar4,0);
  if ((uVar14 & 1) == 0) {
    fVar29 = *(float *)PTR_DAT_0271ecc8;
    uVar25 = SUB41(fVar29,0);
    if (fVar4 < fVar29) {
      uVar26 = (undefined1)((uint)fVar29 >> 8);
      uVar27 = (undefined1)((uint)fVar29 >> 0x10);
      uVar28 = (undefined1)((uint)fVar29 >> 0x18);
      *(float *)(param_1 + 0x80) = fVar29;
      uVar24 = uVar25;
    }
    fVar4 = *(float *)PTR_DAT_0271ecc0;
    if ((float)CONCAT13(uVar28,CONCAT12(uVar27,CONCAT11(uVar26,uVar24))) != fVar4 &&
        fVar4 <= (float)CONCAT13(uVar28,CONCAT12(uVar27,CONCAT11(uVar26,uVar24)))) {
      *(float *)(param_1 + 0x80) = fVar4;
      uVar24 = SUB41(fVar4,0);
    }
    pcVar17 = *(code **)(*plVar18 + 0x180);
    if (*(float *)(param_1 + 0xb0) <= 0.0) goto LAB_00e88ca8;
  }
  else {
    pcVar17 = *(code **)(*plVar18 + 0x180);
LAB_00e88ca8:
    uVar25 = uVar24;
  }
  (*pcVar17)(uVar25,plVar18,PTR_DAT_0271e870);
  if (*(float *)(param_1 + 0xa8) <= 0.0) {
    if ((*(long *)(param_1 + 0xc0) == 0) || (*(int *)(*(long *)(param_1 + 0xc0) + 0x54) == 0))
    goto LAB_00e88e88;
    lVar19 = *(long *)(param_1 + 0xc0);
    if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
      piVar1 = (int *)(lVar19 + 0x54);
      iVar20 = *(int *)(lVar19 + 0x54);
      do {
        while( true ) {
          plVar21 = *(long **)(lVar19 + 0x58);
          lVar15 = FUN_00c781c0();
          while( true ) {
            if (plVar21 == (long *)0x0) goto LAB_00e88e7c;
            if (plVar21 == (long *)lVar15) break;
            plVar21 = (long *)*plVar21;
          }
          iVar10 = *piVar1;
          if (iVar10 != iVar20) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar19 = *(long *)(lVar19 + 0x60);
            if (lVar19 != 0) {
              uVar16 = 1;
              goto LAB_00e88e64;
            }
            goto LAB_00e88e7c;
          }
          iVar20 = iVar10;
          if (iVar10 == 0) goto LAB_00e88e7c;
        }
        ClearExclusiveLocal();
        iVar20 = iVar10;
      } while (iVar10 != 0);
    }
LAB_00e88e7c:
    uVar16 = 1;
  }
  else {
    fVar29 = (float)*(undefined8 *)(param_1 + 0x90) - (float)plVar18[0x16];
    fVar30 = (float)*(undefined8 *)(param_1 + 0x98) - (float)plVar18[0x17];
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) -
             (float)((ulong)plVar18[0x17] >> 0x20);
    fVar23 = fVar29 * fVar29;
    fVar4 = fVar30 * fVar30;
    uVar24 = (undefined1)((uint)fVar4 >> 8);
    uVar26 = (undefined1)((uint)fVar4 >> 0x10);
    uVar27 = (undefined1)((uint)fVar4 >> 0x18);
    fVar12 = fVar31 * fVar31;
    uVar28 = (undefined1)((uint)fVar12 >> 8);
    uVar25 = (undefined1)((uint)fVar12 >> 0x10);
    uVar32 = (undefined1)((uint)fVar12 >> 0x18);
    auVar37._4_4_ = 0;
    auVar37._0_4_ = fVar23;
    auVar37[8] = SUB41(fVar4,0);
    auVar37[9] = uVar24;
    auVar37[10] = uVar26;
    auVar37[0xb] = uVar27;
    auVar37[0xc] = SUB41(fVar12,0);
    auVar37[0xd] = uVar28;
    auVar37[0xe] = uVar25;
    auVar37[0xf] = uVar32;
    auVar7._4_4_ = 0;
    auVar7._0_4_ = fVar23;
    auVar7[8] = SUB41(fVar4,0);
    auVar7[9] = uVar24;
    auVar7[10] = uVar26;
    auVar7[0xb] = uVar27;
    auVar7[0xc] = SUB41(fVar12,0);
    auVar7[0xd] = uVar28;
    auVar7[0xe] = uVar25;
    auVar7[0xf] = uVar32;
    auVar34 = NEON_ext(auVar37,auVar7,8,1);
    fVar23 = auVar34._0_4_ + fVar23;
    fVar4 = auVar34._4_4_ + 0.0;
    fVar22 = fVar23 + fVar4;
    fVar23 = fVar23 + fVar4;
    uVar24 = SUB41(fVar23,0);
    uVar26 = (undefined1)((uint)fVar23 >> 8);
    uVar27 = (undefined1)((uint)fVar23 >> 0x10);
    uVar28 = (undefined1)((uint)fVar23 >> 0x18);
    auVar8[4] = uVar24;
    auVar8._0_4_ = fVar22;
    auVar8[5] = uVar26;
    auVar8[6] = uVar27;
    auVar8[7] = uVar28;
    auVar8[8] = SUB41(fVar22,0);
    auVar8[9] = (char)((uint)fVar22 >> 8);
    auVar8[10] = (char)((uint)fVar22 >> 0x10);
    auVar8[0xb] = (char)((uint)fVar22 >> 0x18);
    auVar8[0xc] = uVar24;
    auVar8[0xd] = uVar26;
    auVar8[0xe] = uVar27;
    auVar8[0xf] = uVar28;
    auVar34 = NEON_frsqrte(auVar8,4);
    auVar36._0_4_ = auVar34._0_4_ * fVar22;
    auVar36._4_4_ = auVar34._4_4_ * fVar23;
    auVar36._8_4_ = auVar34._8_4_ * fVar22;
    uVar9 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar24,fVar22)) >> 0x20);
    auVar36._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar9));
    auVar37 = NEON_frsqrts(auVar34,auVar36,4);
    iVar20 = (int)(SQRT(fVar22) / *(float *)(param_1 + 0xa8)) + 1;
    fVar4 = auVar34._0_4_ * auVar37._0_4_;
    fVar12 = auVar34._4_4_ * auVar37._4_4_;
    fVar5 = auVar34._8_4_ * auVar37._8_4_;
    fVar6 = auVar34._12_4_ * auVar37._12_4_;
    *(int *)(param_1 + 0x100) = iVar20;
    auVar35._0_4_ = fVar22 * fVar4;
    auVar35._4_4_ = fVar23 * fVar12;
    auVar35._8_4_ = fVar22 * fVar5;
    auVar35._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar9)) * fVar6;
    fVar33 = SQRT(fVar22) / (float)iVar20;
    auVar34[4] = SUB41(fVar12,0);
    auVar34._0_4_ = fVar4;
    auVar34[5] = (char)((uint)fVar12 >> 8);
    auVar34[6] = (char)((uint)fVar12 >> 0x10);
    auVar34[7] = (char)((uint)fVar12 >> 0x18);
    auVar34[8] = SUB41(fVar5,0);
    auVar34[9] = (char)((uint)fVar5 >> 8);
    auVar34[10] = (char)((uint)fVar5 >> 0x10);
    auVar34[0xb] = (char)((uint)fVar5 >> 0x18);
    auVar34[0xc] = SUB41(fVar6,0);
    auVar34[0xd] = (char)((uint)fVar6 >> 8);
    auVar34[0xe] = (char)((uint)fVar6 >> 0x10);
    auVar34[0xf] = (char)((uint)fVar6 >> 0x18);
    auVar34 = NEON_frsqrts(auVar34,auVar35,4);
    iVar20 = -(uint)(fVar22 == 0.0);
    iVar10 = -(uint)(fVar23 == 0.0);
    iVar11 = -(uint)(fVar22 == 0.0);
    iVar13 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar27,uVar9)) == 0.0);
    fVar29 = fVar29 * fVar4 * auVar34._0_4_;
    fVar4 = fVar12 * auVar34._4_4_ * 0.0;
    fVar30 = fVar30 * fVar5 * auVar34._8_4_;
    fVar31 = fVar31 * fVar6 * auVar34._12_4_;
    fVar4 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                            CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                                     CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                              SUB41(fVar4,0) & ~(byte)iVar10))) * fVar33;
    fVar12 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                             CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                      CONCAT11((byte)((uint)fVar31 >> 8) &
                                               ~(byte)((uint)iVar13 >> 8),
                                               SUB41(fVar31,0) & ~(byte)iVar13))) * fVar33;
    *(ulong *)(param_1 + 0xf8) =
         CONCAT17((char)((uint)fVar12 >> 0x18),
                  CONCAT16((char)((uint)fVar12 >> 0x10),
                           CONCAT15((char)((uint)fVar12 >> 8),
                                    CONCAT14(SUB41(fVar12,0),
                                             (float)CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                             ~(byte)((uint)iVar11 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                                      ~(byte)((uint)iVar11 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar30
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar11
                                                                                      >> 8),
                                                                               SUB41(fVar30,0) &
                                                                               ~(byte)iVar11))) *
                                             fVar33))));
    *(ulong *)(param_1 + 0xf0) =
         CONCAT17((char)((uint)fVar4 >> 0x18),
                  CONCAT16((char)((uint)fVar4 >> 0x10),
                           CONCAT15((char)((uint)fVar4 >> 8),
                                    CONCAT14(SUB41(fVar4,0),
                                             (float)CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                                             ~(byte)((uint)iVar20 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                                      ~(byte)((uint)iVar20 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar29
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar20
                                                                                      >> 8),
                                                                               SUB41(fVar29,0) &
                                                                               ~(byte)iVar20))) *
                                             fVar33))));
    if ((*(long *)(param_1 + 0xc0) == 0) || (*(int *)(*(long *)(param_1 + 0xc0) + 0x54) == 0))
    goto LAB_00e88e88;
    lVar19 = *(long *)(param_1 + 0xc0);
    if ((lVar19 != 0) && (*(int *)(lVar19 + 0x54) != 0)) {
      piVar1 = (int *)(lVar19 + 0x54);
      iVar20 = *(int *)(lVar19 + 0x54);
      do {
        while( true ) {
          plVar21 = *(long **)(lVar19 + 0x58);
          lVar15 = FUN_00c781c0();
          while( true ) {
            if (plVar21 == (long *)0x0) goto LAB_00e88e48;
            if (plVar21 == (long *)lVar15) break;
            plVar21 = (long *)*plVar21;
          }
          iVar10 = *piVar1;
          if (iVar10 != iVar20) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar19 = *(long *)(lVar19 + 0x60);
            if (lVar19 != 0) {
              uVar16 = 0;
LAB_00e88e64:
              FUN_0069c580(lVar19 + -0x50,uVar16);
              (**(code **)(*(long *)(lVar19 + -8) + 0x18))((long *)(lVar19 + -8));
              goto LAB_00e88e88;
            }
            goto LAB_00e88e48;
          }
          iVar20 = iVar10;
          if (iVar10 == 0) goto LAB_00e88e48;
        }
        ClearExclusiveLocal();
        iVar20 = iVar10;
      } while (iVar10 != 0);
    }
LAB_00e88e48:
    uVar16 = 0;
  }
  FUN_0069c580(0,uVar16);
LAB_00e88e88:
  *(long *)(param_1 + 0x118) = plVar18[0x17];
  *(long *)(param_1 + 0x110) = plVar18[0x16];
  return;
}


