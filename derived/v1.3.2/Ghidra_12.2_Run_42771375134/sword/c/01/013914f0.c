/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013914f0; name: FUN_013914f0
 */


void FUN_013914f0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  int iVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x420) != 0) && (*(long *)(param_1 + 0x468) != 0)) {
    uVar13 = FUN_01392f90(*(long *)(param_1 + 0x468),auStack_38);
    lVar14 = FUN_0137a500(*(undefined8 *)(param_1 + 0x420),auStack_28);
    uVar15 = FUN_012dc470();
    if ((uVar15 & 1) == 0) {
      fVar23 = 0.0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x68);
      piVar1 = (int *)(lVar17 + 0x54);
      puVar19 = (undefined8 *)PTR_DAT_02715080;
      pbVar20 = PTR_DAT_02715078;
      iVar21 = *(int *)(lVar17 + 0x54);
      do {
        while( true ) {
          puVar22 = *(undefined8 **)(lVar17 + 0x58);
          if ((*pbVar20 & 1) != 0) goto LAB_013915ec;
          iVar12 = __cxa_guard_acquire(PTR_DAT_02715078);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          pbVar20 = PTR_DAT_02715078;
          if (iVar12 == 0) goto LAB_013915ec;
          uVar16 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar16;
          __cxa_guard_release(PTR_DAT_02715078);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          pbVar20 = PTR_DAT_02715078;
          if (puVar22 != (undefined8 *)PTR_DAT_02715080) {
            do {
              puVar22 = (undefined8 *)*puVar22;
LAB_013915ec:
            } while (puVar22 != puVar19);
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar21) break;
          ClearExclusiveLocal();
          iVar21 = iVar12;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        iVar21 = iVar12;
      } while (cVar2 != '\0');
      lVar18 = *(long *)(lVar17 + 0x60);
      lVar17 = 0;
      if (lVar18 != 0) {
        lVar17 = lVar18 + -0x50;
      }
      fVar23 = (float)*(undefined8 *)(lVar17 + 0xb0) - *(float *)(lVar14 + 0xb0);
      fVar24 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb0) >> 0x20) - *(float *)(lVar14 + 0xb4);
      fVar25 = (float)*(undefined8 *)(lVar17 + 0xb8) - *(float *)(lVar14 + 0xb8);
      fVar26 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb8) >> 0x20) - *(float *)(lVar14 + 0xbc);
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      auVar27._4_4_ = fVar24;
      auVar27._0_4_ = fVar23;
      auVar27._8_4_ = fVar25;
      auVar27._12_4_ = fVar26;
      auVar4._4_4_ = fVar24;
      auVar4._0_4_ = fVar23;
      auVar4._8_4_ = fVar25;
      auVar4._12_4_ = fVar26;
      auVar27 = NEON_ext(auVar27,auVar4,8,1);
      fVar23 = SQRT(auVar27._0_4_ + fVar23 + auVar27._4_4_ + fVar24);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
      }
    }
    FUN_0137ca00(fVar23,uVar13);
  }
  if ((*(long *)(param_1 + 0x428) != 0) && (*(long *)(param_1 + 0x468) != 0)) {
    uVar13 = FUN_01392f90(*(long *)(param_1 + 0x468),auStack_38);
    lVar14 = FUN_0137a500(*(undefined8 *)(param_1 + 0x428),auStack_28);
    uVar15 = FUN_012dc470();
    if ((uVar15 & 1) == 0) {
      fVar23 = 0.0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x68);
      piVar1 = (int *)(lVar17 + 0x54);
      puVar19 = (undefined8 *)PTR_DAT_02715080;
      pbVar20 = PTR_DAT_02715078;
      iVar21 = *(int *)(lVar17 + 0x54);
      do {
        while( true ) {
          puVar22 = *(undefined8 **)(lVar17 + 0x58);
          if ((*pbVar20 & 1) != 0) goto LAB_01391750;
          iVar12 = __cxa_guard_acquire(PTR_DAT_02715078);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          pbVar20 = PTR_DAT_02715078;
          if (iVar12 == 0) goto LAB_01391750;
          uVar16 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar16;
          __cxa_guard_release(PTR_DAT_02715078);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          pbVar20 = PTR_DAT_02715078;
          if (puVar22 != (undefined8 *)PTR_DAT_02715080) {
            do {
              puVar22 = (undefined8 *)*puVar22;
LAB_01391750:
            } while (puVar22 != puVar19);
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar21) break;
          ClearExclusiveLocal();
          iVar21 = iVar12;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        iVar21 = iVar12;
      } while (cVar2 != '\0');
      lVar18 = *(long *)(lVar17 + 0x60);
      lVar17 = 0;
      if (lVar18 != 0) {
        lVar17 = lVar18 + -0x50;
      }
      fVar23 = (float)*(undefined8 *)(lVar17 + 0xb0) - *(float *)(lVar14 + 0xb0);
      fVar24 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb0) >> 0x20) - *(float *)(lVar14 + 0xb4);
      fVar25 = (float)*(undefined8 *)(lVar17 + 0xb8) - *(float *)(lVar14 + 0xb8);
      fVar26 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb8) >> 0x20) - *(float *)(lVar14 + 0xbc);
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      auVar5._4_4_ = fVar24;
      auVar5._0_4_ = fVar23;
      auVar5._8_4_ = fVar25;
      auVar5._12_4_ = fVar26;
      auVar6._4_4_ = fVar24;
      auVar6._0_4_ = fVar23;
      auVar6._8_4_ = fVar25;
      auVar6._12_4_ = fVar26;
      auVar27 = NEON_ext(auVar5,auVar6,8,1);
      fVar23 = SQRT(auVar27._0_4_ + fVar23 + auVar27._4_4_ + fVar24);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
      }
    }
    FUN_0137ca00(fVar23,uVar13);
  }
  if ((*(long *)(param_1 + 0x430) != 0) && (*(long *)(param_1 + 0x468) != 0)) {
    uVar13 = FUN_01392f90(*(long *)(param_1 + 0x468),auStack_38);
    lVar14 = FUN_0137a500(*(undefined8 *)(param_1 + 0x430),auStack_28);
    uVar15 = FUN_012dc470();
    if ((uVar15 & 1) == 0) {
      fVar23 = 0.0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x68);
      piVar1 = (int *)(lVar17 + 0x54);
      puVar19 = (undefined8 *)PTR_DAT_02715080;
      pbVar20 = PTR_DAT_02715078;
      iVar21 = *(int *)(lVar17 + 0x54);
      do {
        while( true ) {
          puVar22 = *(undefined8 **)(lVar17 + 0x58);
          if ((*pbVar20 & 1) != 0) goto LAB_013918b4;
          iVar12 = __cxa_guard_acquire(PTR_DAT_02715078);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          pbVar20 = PTR_DAT_02715078;
          if (iVar12 == 0) goto LAB_013918b4;
          uVar16 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar16;
          __cxa_guard_release(PTR_DAT_02715078);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          pbVar20 = PTR_DAT_02715078;
          if (puVar22 != (undefined8 *)PTR_DAT_02715080) {
            do {
              puVar22 = (undefined8 *)*puVar22;
LAB_013918b4:
            } while (puVar22 != puVar19);
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar21) break;
          ClearExclusiveLocal();
          iVar21 = iVar12;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        iVar21 = iVar12;
      } while (cVar2 != '\0');
      lVar18 = *(long *)(lVar17 + 0x60);
      lVar17 = 0;
      if (lVar18 != 0) {
        lVar17 = lVar18 + -0x50;
      }
      fVar23 = (float)*(undefined8 *)(lVar17 + 0xb0) - *(float *)(lVar14 + 0xb0);
      fVar24 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb0) >> 0x20) - *(float *)(lVar14 + 0xb4);
      fVar25 = (float)*(undefined8 *)(lVar17 + 0xb8) - *(float *)(lVar14 + 0xb8);
      fVar26 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb8) >> 0x20) - *(float *)(lVar14 + 0xbc);
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      auVar7._4_4_ = fVar24;
      auVar7._0_4_ = fVar23;
      auVar7._8_4_ = fVar25;
      auVar7._12_4_ = fVar26;
      auVar8._4_4_ = fVar24;
      auVar8._0_4_ = fVar23;
      auVar8._8_4_ = fVar25;
      auVar8._12_4_ = fVar26;
      auVar27 = NEON_ext(auVar7,auVar8,8,1);
      fVar23 = SQRT(auVar27._0_4_ + fVar23 + auVar27._4_4_ + fVar24);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
      }
    }
    FUN_0137ca00(fVar23,uVar13);
  }
  if ((*(long *)(param_1 + 0x438) != 0) && (*(long *)(param_1 + 0x468) != 0)) {
    uVar13 = FUN_01392f90(*(long *)(param_1 + 0x468),auStack_38);
    lVar14 = FUN_0137a500(*(undefined8 *)(param_1 + 0x438),auStack_28);
    uVar15 = FUN_012dc470();
    puVar11 = PTR_DAT_02715078;
    if ((uVar15 & 1) == 0) {
      fVar23 = 0.0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x68);
      piVar1 = (int *)(lVar17 + 0x54);
      puVar19 = (undefined8 *)PTR_DAT_02715080;
      iVar21 = *(int *)(lVar17 + 0x54);
      do {
        while( true ) {
          puVar22 = *(undefined8 **)(lVar17 + 0x58);
          if ((*puVar11 & 1) != 0) goto LAB_01391a00;
          iVar12 = __cxa_guard_acquire(puVar11);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          if (iVar12 == 0) goto LAB_01391a00;
          uVar16 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar16;
          __cxa_guard_release(puVar11);
          puVar19 = (undefined8 *)PTR_DAT_02715080;
          if (puVar22 != (undefined8 *)PTR_DAT_02715080) {
            do {
              puVar22 = (undefined8 *)*puVar22;
LAB_01391a00:
            } while (puVar22 != puVar19);
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar21) break;
          ClearExclusiveLocal();
          iVar21 = iVar12;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        iVar21 = iVar12;
      } while (cVar2 != '\0');
      lVar18 = *(long *)(lVar17 + 0x60);
      lVar17 = 0;
      if (lVar18 != 0) {
        lVar17 = lVar18 + -0x50;
      }
      fVar23 = (float)*(undefined8 *)(lVar17 + 0xb0) - *(float *)(lVar14 + 0xb0);
      fVar24 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb0) >> 0x20) - *(float *)(lVar14 + 0xb4);
      fVar25 = (float)*(undefined8 *)(lVar17 + 0xb8) - *(float *)(lVar14 + 0xb8);
      fVar26 = (float)((ulong)*(undefined8 *)(lVar17 + 0xb8) >> 0x20) - *(float *)(lVar14 + 0xbc);
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      auVar9._4_4_ = fVar24;
      auVar9._0_4_ = fVar23;
      auVar9._8_4_ = fVar25;
      auVar9._12_4_ = fVar26;
      auVar10._4_4_ = fVar24;
      auVar10._0_4_ = fVar23;
      auVar10._8_4_ = fVar25;
      auVar10._12_4_ = fVar26;
      auVar27 = NEON_ext(auVar9,auVar10,8,1);
      fVar23 = SQRT(auVar27._0_4_ + fVar23 + auVar27._4_4_ + fVar24);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
      }
    }
    FUN_0137ca00(fVar23,uVar13);
  }
  return;
}


