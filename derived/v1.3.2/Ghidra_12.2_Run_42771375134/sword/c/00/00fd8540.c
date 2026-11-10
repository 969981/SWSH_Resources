/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd8540; name: FUN_00fd8540
 */


void FUN_00fd8540(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 0x54) != 0)) &&
     (uVar5 = FUN_00fd99c0(*(undefined8 *)(param_1 + 0x38)), (uVar5 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 0x54) != 0)) &&
     (uVar5 = FUN_00fd99c0(*(undefined8 *)(param_1 + 0x48)), (uVar5 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 0x54) != 0)) &&
     (uVar5 = FUN_00fd99c0(*(undefined8 *)(param_1 + 0x58)), (uVar5 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  if (((*(long *)(param_1 + 0x60) != 0) && (*(int *)(*(long *)(param_1 + 0x60) + 0x54) != 0)) &&
     (uVar5 = FUN_00fd99c0(*(undefined8 *)(param_1 + 0x68)), (uVar5 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar6 + 0x58);
        lVar7 = FUN_00fd8f80();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00fd8728;
          if (plVar9 == (long *)lVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x28);
            fVar10 = (float)*(undefined8 *)(lVar6 + 0x60) + *(float *)(lVar6 + 0x3c0);
            fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20) +
                     *(float *)(lVar6 + 0x3c4);
            fVar12 = (float)*(undefined8 *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x3c8);
            fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0x78) >> 0x20) +
                     *(float *)(lVar7 + 0x4c) * fVar10 + *(float *)(lVar7 + 0x5c) * fVar11 +
                     *(float *)(lVar7 + 0x6c) * fVar12;
            auVar17._4_4_ = fVar13;
            auVar17._0_4_ = fVar13;
            auVar17._8_4_ = fVar13;
            auVar17._12_4_ = fVar13;
            auVar21 = NEON_frecpe(auVar17,4);
            auVar19 = NEON_frecps(auVar21,auVar17,4);
            auVar20._0_4_ = auVar21._0_4_ * auVar19._0_4_;
            auVar20._4_4_ = auVar21._4_4_ * auVar19._4_4_;
            auVar20._8_4_ = auVar21._8_4_ * auVar19._8_4_;
            auVar20._12_4_ = auVar21._12_4_ * auVar19._12_4_;
            auVar17 = NEON_frecps(auVar20,auVar17,4);
            fVar10 = ((float)*(undefined8 *)(lVar7 + 0x70) +
                     *(float *)(lVar7 + 0x40) * fVar10 + *(float *)(lVar7 + 0x50) * fVar11 +
                     *(float *)(lVar7 + 0x60) * fVar12) * auVar20._0_4_ * auVar17._0_4_;
            FUN_00fd9950(DAT_01d4c030 *
                         (float)CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                         (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                         CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar10 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab50 >> 8),
                                                           SUB41(fVar10,0) & (byte)DAT_01d4ab50))),
                         *(undefined8 *)(param_1 + 0x38));
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
          }
          goto LAB_00fd8728;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00fd8728;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00fd8728:
  lVar6 = *(long *)(param_1 + 0x40);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar6 + 0x58);
        lVar7 = FUN_00fd8f80();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00fd8818;
          if (plVar9 == (long *)lVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x28);
            fVar10 = (float)*(undefined8 *)(lVar6 + 0x60) + *(float *)(lVar6 + 0x3c0);
            fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20) +
                     *(float *)(lVar6 + 0x3c4);
            fVar12 = (float)*(undefined8 *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x3c8);
            fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0x78) >> 0x20) +
                     *(float *)(lVar7 + 0x4c) * fVar10 + *(float *)(lVar7 + 0x5c) * fVar11 +
                     *(float *)(lVar7 + 0x6c) * fVar12;
            auVar21._4_4_ = fVar13;
            auVar21._0_4_ = fVar13;
            auVar21._8_4_ = fVar13;
            auVar21._12_4_ = fVar13;
            auVar17 = NEON_frecpe(auVar21,4);
            auVar20 = NEON_frecps(auVar17,auVar21,4);
            auVar19._0_4_ = auVar17._0_4_ * auVar20._0_4_;
            auVar19._4_4_ = auVar17._4_4_ * auVar20._4_4_;
            auVar19._8_4_ = auVar17._8_4_ * auVar20._8_4_;
            auVar19._12_4_ = auVar17._12_4_ * auVar20._12_4_;
            auVar17 = NEON_frecps(auVar19,auVar21,4);
            fVar10 = ((float)*(undefined8 *)(lVar7 + 0x70) +
                     *(float *)(lVar7 + 0x40) * fVar10 + *(float *)(lVar7 + 0x50) * fVar11 +
                     *(float *)(lVar7 + 0x60) * fVar12) * auVar19._0_4_ * auVar17._0_4_;
            FUN_00fd9950(DAT_01d4c030 *
                         (float)CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                         (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                         CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar10 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab50 >> 8),
                                                           SUB41(fVar10,0) & (byte)DAT_01d4ab50))),
                         *(undefined8 *)(param_1 + 0x48));
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
          }
          goto LAB_00fd8818;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00fd8818;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00fd8818:
  lVar6 = *(long *)(param_1 + 0x50);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar6 + 0x58);
        lVar7 = FUN_00fd8f80();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00fd8908;
          if (plVar9 == (long *)lVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            lVar7 = *(long *)(param_1 + 0x28);
            fVar10 = (float)*(undefined8 *)(lVar6 + 0x60) + *(float *)(lVar6 + 0x3c0);
            fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20) +
                     *(float *)(lVar6 + 0x3c4);
            fVar12 = (float)*(undefined8 *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x3c8);
            fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0x78) >> 0x20) +
                     *(float *)(lVar7 + 0x4c) * fVar10 + *(float *)(lVar7 + 0x5c) * fVar11 +
                     *(float *)(lVar7 + 0x6c) * fVar12;
            auVar14._4_4_ = fVar13;
            auVar14._0_4_ = fVar13;
            auVar14._8_4_ = fVar13;
            auVar14._12_4_ = fVar13;
            auVar17 = NEON_frecpe(auVar14,4);
            auVar21 = NEON_frecps(auVar17,auVar14,4);
            auVar16._0_4_ = auVar17._0_4_ * auVar21._0_4_;
            auVar16._4_4_ = auVar17._4_4_ * auVar21._4_4_;
            auVar16._8_4_ = auVar17._8_4_ * auVar21._8_4_;
            auVar16._12_4_ = auVar17._12_4_ * auVar21._12_4_;
            auVar17 = NEON_frecps(auVar16,auVar14,4);
            fVar10 = ((float)*(undefined8 *)(lVar7 + 0x70) +
                     *(float *)(lVar7 + 0x40) * fVar10 + *(float *)(lVar7 + 0x50) * fVar11 +
                     *(float *)(lVar7 + 0x60) * fVar12) * auVar16._0_4_ * auVar17._0_4_;
            FUN_00fd9950(DAT_01d4c030 *
                         (float)CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                         (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                         CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar10 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab50 >> 8),
                                                           SUB41(fVar10,0) & (byte)DAT_01d4ab50))),
                         *(undefined8 *)(param_1 + 0x58));
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
          }
          goto LAB_00fd8908;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00fd8908;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00fd8908:
  lVar6 = *(long *)(param_1 + 0x60);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar6 + 0x58);
        lVar7 = FUN_00fd8f80();
        while( true ) {
          if (plVar9 == (long *)0x0) {
            return;
          }
          if (plVar9 == (long *)lVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 == 0) {
            return;
          }
          lVar7 = *(long *)(param_1 + 0x28);
          fVar10 = (float)*(undefined8 *)(lVar6 + 0x60) + *(float *)(lVar6 + 0x3c0);
          fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x60) >> 0x20) + *(float *)(lVar6 + 0x3c4)
          ;
          fVar12 = (float)*(undefined8 *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x3c8);
          fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0x78) >> 0x20) +
                   *(float *)(lVar7 + 0x4c) * fVar10 + *(float *)(lVar7 + 0x5c) * fVar11 +
                   *(float *)(lVar7 + 0x6c) * fVar12;
          auVar15._4_4_ = fVar13;
          auVar15._0_4_ = fVar13;
          auVar15._8_4_ = fVar13;
          auVar15._12_4_ = fVar13;
          auVar17 = NEON_frecpe(auVar15,4);
          auVar21 = NEON_frecps(auVar17,auVar15,4);
          auVar18._0_4_ = auVar17._0_4_ * auVar21._0_4_;
          auVar18._4_4_ = auVar17._4_4_ * auVar21._4_4_;
          auVar18._8_4_ = auVar17._8_4_ * auVar21._8_4_;
          auVar18._12_4_ = auVar17._12_4_ * auVar21._12_4_;
          auVar17 = NEON_frecps(auVar18,auVar15,4);
          fVar10 = ((float)*(undefined8 *)(lVar7 + 0x70) +
                   *(float *)(lVar7 + 0x40) * fVar10 + *(float *)(lVar7 + 0x50) * fVar11 +
                   *(float *)(lVar7 + 0x60) * fVar12) * auVar18._0_4_ * auVar17._0_4_;
          FUN_00fd9950(DAT_01d4c030 *
                       (float)CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                       (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                       CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                                CONCAT11((byte)((uint)fVar10 >> 8) &
                                                         (byte)((ulong)DAT_01d4ab50 >> 8),
                                                         SUB41(fVar10,0) & (byte)DAT_01d4ab50))),
                       *(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00fd8a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
          return;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) {
          return;
        }
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


