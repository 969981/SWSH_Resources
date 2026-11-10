/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01315470; name: FUN_01315470
 */


/* WARNING: Removing unreachable block (ram,0x013154e0) */

void FUN_01315470(long param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  ulong *puVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  
  lVar20 = *(long *)(param_1 + 0x78);
  if (lVar20 != 0) {
    lVar10 = nn::os::GetCurrentThread();
    plVar21 = (long *)(lVar20 + 0x4e0);
    do {
      if (*plVar21 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x4d4));
          while (*plVar21 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar5) {
              *plVar21 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01315500;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01315500:
    cVar4 = *(char *)(lVar20 + 0x4c8);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *plVar21 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x4d4));
    if (cVar4 != '\0') {
      return;
    }
  }
  if ((((((*(char *)(param_1 + 1000) != '\0') || (uVar11 = FUN_0130fe50(param_2), (uVar11 & 1) == 0)
         ) || (uVar11 = FUN_0130fe50(param_3), (uVar11 & 1) == 0)) ||
       ((uVar11 = FUN_01310200(param_2), (uVar11 & 1) != 0 ||
        (uVar11 = FUN_01310200(param_3), (uVar11 & 1) != 0)))) ||
      ((iVar8 = FUN_012e7700(param_2), iVar8 != 0 ||
       ((iVar8 = FUN_012e7700(param_3), iVar8 != 0 ||
        (uVar11 = FUN_012e49d0(param_2), (uVar11 & 1) != 0)))))) ||
     ((uVar11 = FUN_012e49d0(param_3), (uVar11 & 1) != 0 ||
      ((((uVar11 = FUN_012e4910(param_2), (uVar11 & 1) != 0 ||
         (uVar11 = FUN_012e8c10(param_2), (uVar11 & 1) != 0)) ||
        (uVar11 = FUN_012e4910(param_3), (uVar11 & 1) != 0)) ||
       ((uVar11 = FUN_012e8c10(param_3), (uVar11 & 1) != 0 ||
        (uVar11 = FUN_012e8ad0(param_2), (uVar11 & 1) != 0)))))))) {
LAB_01315784:
    return;
  }
  uVar11 = FUN_012e8ad0(param_3);
  puVar14 = PTR_DAT_02715080;
  puVar7 = PTR_DAT_02715078;
  if ((uVar11 & 1) != 0) goto LAB_01315784;
  lVar20 = *(long *)(param_2 + 0x68);
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0x54) == 0)) {
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(lVar20 + 0x54);
    iVar8 = *(int *)(lVar20 + 0x54);
    do {
      puVar19 = *(undefined8 **)(lVar20 + 0x58);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        uVar12 = FUN_00a87090();
        *(undefined8 *)puVar14 = uVar12;
        __cxa_guard_release(puVar7);
      }
      lVar10 = 0;
      if (puVar19 == (undefined8 *)0x0) break;
      while (puVar19 != (undefined8 *)puVar14) {
        puVar19 = (undefined8 *)*puVar19;
        if (puVar19 == (undefined8 *)0x0) {
          lVar10 = 0;
          goto LAB_0131566c;
        }
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar10 = 0;
          if (*(long *)(lVar20 + 0x60) != 0) {
            lVar10 = *(long *)(lVar20 + 0x60) + -0x50;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      lVar10 = 0;
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_0131566c:
  puVar14 = PTR_DAT_02715080;
  puVar7 = PTR_DAT_02715078;
  lVar20 = *(long *)(param_3 + 0x68);
  piVar1 = (int *)(lVar20 + 0x54);
  iVar8 = *(int *)(lVar20 + 0x54);
  do {
    while( true ) {
      plVar21 = *(long **)(lVar20 + 0x58);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        uVar12 = FUN_00a87090();
        *(undefined8 *)puVar14 = uVar12;
        __cxa_guard_release(puVar7);
      }
      for (; plVar21 != (long *)puVar14; plVar21 = (long *)*plVar21) {
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) break;
      ClearExclusiveLocal();
      iVar8 = iVar9;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar8 = iVar9;
  } while (cVar4 != '\0');
  lVar13 = *(long *)(lVar20 + 0x60);
  lVar20 = 0;
  if (lVar13 != 0) {
    lVar20 = lVar13 + -0x50;
  }
  fVar22 = (float)*(undefined8 *)(lVar10 + 0xb0) - *(float *)(lVar20 + 0xb0);
  fVar23 = (float)((ulong)*(undefined8 *)(lVar10 + 0xb0) >> 0x20) - *(float *)(lVar20 + 0xb4);
  fVar24 = (float)*(undefined8 *)(lVar10 + 0xb8) - *(float *)(lVar20 + 0xb8);
  fVar25 = (float)((ulong)*(undefined8 *)(lVar10 + 0xb8) >> 0x20) - *(float *)(lVar20 + 0xbc);
  fVar22 = fVar22 * fVar22;
  fVar23 = fVar23 * fVar23;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  auVar26._4_4_ = fVar23;
  auVar26._0_4_ = fVar22;
  auVar26._8_4_ = fVar24;
  auVar26._12_4_ = fVar25;
  auVar6._4_4_ = fVar23;
  auVar6._0_4_ = fVar22;
  auVar6._8_4_ = fVar24;
  auVar6._12_4_ = fVar25;
  auVar26 = NEON_ext(auVar26,auVar6,8,1);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  if (DAT_01d4bdec < auVar26._0_4_ + fVar22 + auVar26._4_4_ + fVar23) {
    return;
  }
  uVar11 = FUN_013159f0(param_1,param_2,param_3);
  FUN_01315da0(param_1,param_2,param_3);
  if ((uVar11 & 1) != 0) {
    return;
  }
  puVar19 = (undefined8 *)FUN_012e3520(param_2);
  iVar9 = FUN_012b67d0(*puVar19);
  puVar19 = (undefined8 *)FUN_012e3520(param_3);
  iVar8 = FUN_012b67d0(*puVar19);
  puVar7 = PTR_DAT_02710848;
  iVar8 = iVar8 + iVar9;
  if (iVar8 < 0x1fe) {
    if (299 < iVar8) {
      puVar14 = &UNK_0216c0b0;
      goto LAB_01315818;
    }
    if (99 < iVar8) {
      puVar14 = &UNK_0216c0b8;
      goto LAB_01315818;
    }
    if (0 < iVar8) {
      puVar14 = &UNK_0216c0c0;
      goto LAB_01315818;
    }
    if (-1 < iVar8) {
      puVar14 = &UNK_0216c0c8;
      goto LAB_01315818;
    }
    iVar8 = 0;
  }
  else {
    puVar14 = &UNK_0216c0a8;
LAB_01315818:
    iVar8 = *(int *)(puVar14 + 4);
  }
  puVar15 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar11 = *puVar15;
  uVar17 = puVar15[1];
  do {
    uVar18 = uVar11 ^ uVar17;
    iVar16 = (int)uVar17;
    iVar9 = (int)uVar11;
    uVar17 = uVar18 >> 0x1b | uVar18 << 0x25;
    uVar11 = uVar18 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar18 << 0x10;
    uVar2 = iVar9 + iVar16 & 0x7f;
  } while (99 < uVar2);
  *puVar15 = uVar11;
  puVar15[1] = uVar17;
  if ((int)uVar2 < iVar8) {
    FUN_01314400(param_1,param_2,param_3,0);
    return;
  }
  puVar19 = (undefined8 *)FUN_012e3520(param_2);
  iVar9 = FUN_012b67d0(*puVar19);
  puVar19 = (undefined8 *)FUN_012e3520(param_3);
  iVar8 = FUN_012b67d0(*puVar19);
  iVar8 = iVar8 + iVar9;
  if (iVar8 < 0x1fe) {
    if (iVar8 < 300) {
      if (iVar8 < 0x32) {
        if (iVar8 < 1) {
          if (iVar8 < 0) {
            iVar8 = 0;
            goto LAB_01315904;
          }
          puVar14 = &UNK_0216c0f0;
        }
        else {
          puVar14 = &UNK_0216c0e8;
        }
      }
      else {
        puVar14 = &UNK_0216c0e0;
      }
    }
    else {
      puVar14 = &UNK_0216c0d8;
    }
  }
  else {
    puVar14 = &UNK_0216c0d0;
  }
  iVar8 = *(int *)(puVar14 + 4);
LAB_01315904:
  puVar15 = *(ulong **)(*(long *)puVar7 + 0x98);
  uVar11 = *puVar15;
  uVar17 = puVar15[1];
  do {
    uVar18 = uVar11 ^ uVar17;
    iVar16 = (int)uVar17;
    iVar9 = (int)uVar11;
    uVar17 = uVar18 >> 0x1b | uVar18 << 0x25;
    uVar11 = uVar18 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar18 << 0x10;
    uVar2 = iVar9 + iVar16 & 0x7f;
  } while (99 < uVar2);
  *puVar15 = uVar11;
  puVar15[1] = uVar17;
  if ((int)uVar2 < iVar8) {
    uVar12 = FUN_012dcaa0(param_2);
    FUN_01314950(param_1,param_2,param_3,uVar12);
    return;
  }
  FUN_012e8af0(param_2);
  FUN_012e8af0(param_3);
  return;
}


