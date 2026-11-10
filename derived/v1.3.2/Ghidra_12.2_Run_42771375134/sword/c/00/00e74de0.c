/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e74de0; name: FUN_00e74de0
 */


/* WARNING: Removing unreachable block (ram,0x00e750c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e74de0(long *param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float extraout_s0;
  float fVar16;
  undefined4 extraout_var;
  float fVar17;
  float extraout_var_00;
  float fVar18;
  float extraout_var_01;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar19;
  undefined1 auVar20 [12];
  int iVar23;
  undefined1 auVar21 [16];
  int iVar24;
  int iVar25;
  undefined1 auVar22 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  lVar8 = param_1[0x11];
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar19 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        uVar6 = FUN_00e75e30(*(undefined8 *)(lVar8 + 0x58));
        if ((uVar6 & 1) == 0) goto LAB_00e75128;
        iVar23 = *piVar1;
        if (iVar23 != iVar19) break;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          if ((lVar8 != 0) && (lVar9 = param_1[0x11], lVar9 != 0)) {
            lVar7 = param_1[0xf];
            if (*(int *)(lVar9 + 0x54) != 0) {
              fVar12 = *(float *)(lVar7 + 0xb0) - *(float *)(param_1 + 0x14);
              fVar16 = *(float *)(lVar7 + 0xb4) - *(float *)((long)param_1 + 0xa4);
              fVar17 = *(float *)(lVar7 + 0xb8) - *(float *)(param_1 + 0x15);
              fVar18 = *(float *)(lVar7 + 0xbc) - *(float *)((long)param_1 + 0xac);
              piVar1 = (int *)(lVar9 + 0x54);
              auVar27._0_4_ = fVar12 * fVar12;
              auVar27._4_4_ = fVar16 * fVar16;
              auVar27._8_4_ = fVar17 * fVar17;
              auVar27._12_4_ = fVar18 * fVar18;
              auVar21 = NEON_ext(auVar27,auVar27,8,1);
              fVar12 = SQRT(auVar21._0_4_ + auVar27._0_4_ + auVar21._4_4_ + auVar27._4_4_);
              iVar19 = *(int *)(lVar9 + 0x54);
              goto LAB_00e74e98;
            }
          }
          goto LAB_00e75128;
        }
        iVar19 = iVar23;
        if (iVar23 == 0) goto LAB_00e75128;
      }
      ClearExclusiveLocal();
      iVar19 = iVar23;
    } while (iVar23 != 0);
  }
  goto LAB_00e75128;
LAB_00e74e98:
  uVar6 = FUN_00e75e30(*(undefined8 *)(lVar9 + 0x58));
  if ((uVar6 & 1) == 0) goto LAB_00e75128;
  iVar23 = *piVar1;
  if (iVar23 == iVar19) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar19 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar9 = *(long *)(lVar9 + 0x60);
      if (lVar9 != 0) {
        if (*(char *)((long)param_1 + 0x9c) != '\0') {
          fVar12 = -fVar12;
        }
        *(float *)(param_1 + 0x13) = *(float *)(param_1 + 0x13) + fVar12;
        uVar13 = FUN_00e75650(param_1);
        *(undefined4 *)(param_1 + 0x13) = uVar13;
        plVar10 = (long *)(lVar9 + -8);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        lVar9 = param_1[0x11];
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar19 = *(int *)(lVar9 + 0x54);
          goto LAB_00e74f30;
        }
      }
      goto LAB_00e75128;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar19 = iVar23;
  if (iVar23 == 0) goto LAB_00e75128;
  goto LAB_00e74e98;
LAB_00e74f30:
  do {
    uVar6 = FUN_00e75e30(*(undefined8 *)(lVar9 + 0x58));
    if ((uVar6 & 1) == 0) break;
    iVar23 = *piVar1;
    if (iVar23 != iVar19) {
      ClearExclusiveLocal();
      iVar19 = iVar23;
      if (iVar23 == 0) break;
      goto LAB_00e74f30;
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar19 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar9 = *(long *)(lVar9 + 0x60);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x358) != 0) {
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
          goto LAB_00e75004;
        }
        if (*(char *)((long)param_1 + 0x9c) == '\0') {
          bVar5 = *(float *)(lVar9 + 0x3e0) <= *(float *)(param_1 + 0x13);
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
LAB_00e74fb8:
          if (!bVar5) goto LAB_00e75004;
        }
        else {
          fVar12 = *(float *)(lVar9 + 0x3e0);
          bVar5 = false;
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
          if (0.0 < fVar12) goto LAB_00e74fb8;
        }
        FUN_0069c580(param_1[0x10],0);
        *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)((long)param_1 + 0x94);
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined1 *)((long)param_1 + 0x6a) = 0;
LAB_00e75004:
        (**(code **)(*param_1 + 0xa0))(param_1);
        lVar9 = param_1[0xf];
        *(undefined1 *)(lVar9 + 0xc0) = 1;
        *(float *)(lVar9 + 0xb8) = extraout_var_00;
        *(float *)(lVar9 + 0xbc) = extraout_var_01;
        *(float *)(lVar9 + 0xb0) = extraout_s0;
        *(undefined4 *)(lVar9 + 0xb4) = extraout_var;
        fVar12 = extraout_s0 - *(float *)(param_1 + 0x14);
        fVar16 = extraout_var_00 - *(float *)(param_1 + 0x15);
        fVar17 = extraout_var_01 - *(float *)((long)param_1 + 0xac);
        if ((DAT_01d4c708 < ABS(fVar12)) || (DAT_01d4c708 < ABS(fVar16))) {
          fVar26 = fVar12 * fVar12;
          auVar21._4_4_ = 0;
          auVar21._0_4_ = fVar26;
          auVar21._8_4_ = fVar16 * fVar16;
          auVar21._12_4_ = fVar17 * fVar17;
          auVar3._4_4_ = 0;
          auVar3._0_4_ = fVar26;
          auVar3._8_4_ = fVar16 * fVar16;
          auVar3._12_4_ = fVar17 * fVar17;
          auVar27 = NEON_ext(auVar21,auVar3,8,1);
          fVar26 = auVar27._0_4_ + fVar26;
          fVar18 = auVar27._4_4_ + 0.0;
          fVar11 = fVar26 + fVar18;
          fVar26 = fVar26 + fVar18;
          fVar18 = 0.0;
          if (fVar11 != 0.0) {
            auVar4._4_4_ = fVar26;
            auVar4._0_4_ = fVar11;
            auVar4._8_4_ = fVar11;
            auVar4._12_4_ = fVar26;
            auVar27 = NEON_frsqrte(auVar4,4);
            auVar28._0_4_ = auVar27._0_4_ * fVar11;
            auVar28._4_4_ = auVar27._4_4_ * fVar26;
            auVar28._8_4_ = auVar27._8_4_ * fVar11;
            auVar28._12_4_ = auVar27._12_4_ * fVar26;
            auVar21 = NEON_frsqrts(auVar27,auVar28,4);
            auVar14._0_4_ = auVar27._0_4_ * auVar21._0_4_;
            auVar14._4_4_ = auVar27._4_4_ * auVar21._4_4_;
            auVar14._8_4_ = auVar27._8_4_ * auVar21._8_4_;
            auVar14._12_4_ = auVar27._12_4_ * auVar21._12_4_;
            auVar29._0_4_ = fVar11 * auVar14._0_4_;
            auVar29._4_4_ = fVar26 * auVar14._4_4_;
            auVar29._8_4_ = fVar11 * auVar14._8_4_;
            auVar29._12_4_ = fVar26 * auVar14._12_4_;
            auVar27 = NEON_frsqrts(auVar14,auVar29,4);
            fVar12 = fVar12 * auVar14._0_4_ * auVar27._0_4_;
            fVar18 = auVar14._4_4_ * auVar27._4_4_ * 0.0;
            fVar16 = fVar16 * auVar14._8_4_ * auVar27._8_4_;
            fVar17 = fVar17 * auVar14._12_4_ * auVar27._12_4_;
            iVar19 = -(uint)(fVar11 == 0.0);
            iVar23 = -(uint)(fVar26 == 0.0);
            iVar24 = -(uint)(fVar11 == 0.0);
            iVar25 = -(uint)(fVar26 == 0.0);
            fVar11 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                     CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                              ~(byte)((uint)iVar19 >> 0x10),
                                              CONCAT11((byte)((uint)fVar12 >> 8) &
                                                       ~(byte)((uint)iVar19 >> 8),
                                                       SUB41(fVar12,0) & ~(byte)iVar19)));
            auVar20._0_8_ =
                 CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                          CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                   CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                            CONCAT14(SUB41(fVar18,0) & ~(byte)iVar23,fVar11))));
            auVar20[8] = SUB41(fVar16,0) & ~(byte)iVar24;
            auVar20[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar24 >> 8);
            auVar20[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
            auVar20[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
            auVar22[0xc] = SUB41(fVar17,0) & ~(byte)iVar25;
            auVar22._0_12_ = auVar20;
            auVar22[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar25 >> 8);
            auVar22[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
            auVar22[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
            auVar15._0_4_ = fVar11 * (float)_DAT_01d49dc0;
            auVar15._4_4_ =
                 (float)((ulong)auVar20._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
            auVar15._8_4_ = auVar20._8_4_ * (float)_UNK_01d49dc8;
            auVar15._12_4_ = auVar22._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
            NEON_ext(auVar15,auVar15,8,1);
            fVar12 = (float)FUN_01590400();
            fVar18 = -fVar12;
            if (0.0 <= fVar11) {
              fVar18 = fVar12;
            }
          }
          auVar27 = FUN_00a92cd0(fVar18,ZEXT816(0),0);
          lVar9 = param_1[0xf];
          *(undefined1 *)(lVar9 + 0xc0) = 1;
          *(long *)(lVar9 + 0xa8) = auVar27._8_8_;
          *(long *)(lVar9 + 0xa0) = auVar27._0_8_;
        }
        plVar10 = (long *)(lVar8 + -8);
                    /* WARNING: Could not recover jumptable at 0x00e75124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x18))(plVar10);
        return;
      }
      break;
    }
    iVar19 = iVar23;
  } while (iVar23 != 0);
LAB_00e75128:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


