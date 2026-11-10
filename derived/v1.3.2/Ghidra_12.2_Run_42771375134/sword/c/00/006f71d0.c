/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f71d0; name: FUN_006f71d0
 */


void FUN_006f71d0(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined8 *local_c0;
  long lStack_b8;
  undefined8 local_b0;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0xf8);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xec));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_006f723c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_006f723c:
  iVar3 = 0;
  if (*(int *)(param_1 + 0xe0) < 2) {
    iVar3 = *(int *)(param_1 + 0xe0) + 1;
  }
  lVar7 = param_1 + (long)iVar3 * 0x30;
  *(int *)(param_1 + 0xe0) = iVar3;
  plVar14 = (long *)(lVar7 + 0x50);
  plVar15 = (long *)(lVar7 + 0x58);
  if (*plVar14 != *plVar15) {
    local_c0 = (undefined8 *)
               (**(code **)(**(long **)(param_1 + 8) + 0x10))
                         (*(long **)(param_1 + 8),*plVar15 - *plVar14,8);
    puVar9 = (undefined8 *)*plVar14;
    puVar8 = (undefined8 *)*plVar15;
    if (puVar8 != puVar9) {
      uVar13 = (long)puVar8 + (-8 - (long)puVar9);
      uVar1 = ((uint)(uVar13 >> 3) & 0x1fffffff) + 1;
      puVar12 = local_c0;
      if ((uVar1 & 3) != 0) {
        lVar7 = -((ulong)uVar1 & 3);
        puVar10 = puVar9;
        puVar11 = local_c0;
        do {
          puVar9 = puVar10 + 1;
          lVar7 = lVar7 + 1;
          puVar12 = puVar11 + 1;
          *puVar11 = *puVar10;
          puVar10 = puVar9;
          puVar11 = puVar12;
        } while (lVar7 != 0);
      }
      if (0x17 < uVar13) {
        do {
          *puVar12 = *puVar9;
          puVar12[1] = puVar9[1];
          puVar12[2] = puVar9[2];
          puVar10 = puVar9 + 3;
          puVar9 = puVar9 + 4;
          puVar12[3] = *puVar10;
          puVar12 = puVar12 + 4;
        } while (puVar9 != puVar8);
      }
      puVar8 = (undefined8 *)*plVar15;
      puVar9 = (undefined8 *)*plVar14;
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_027153d8 + 0x50);
    uVar17 = *(undefined8 *)(param_1 + 8);
    lVar16 = (long)puVar8 - (long)puVar9 >> 3;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x330));
    local_e0 = &LAB_006f8100;
    local_d8 = FUN_006f81b0;
    local_d0 = &LAB_006f81c0;
    local_c8 = FUN_006f81e0;
    puVar9 = *(undefined8 **)(lVar7 + 0x308);
    lStack_b8 = lVar16;
    local_b0 = uVar17;
    if (puVar9 < *(undefined8 **)(lVar7 + 0x310)) {
      uVar17 = *(undefined8 *)(lVar7 + 0x318);
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar17;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      if (local_c8 != (code *)0x0) {
        (*local_c8)(&local_c0,puVar9 + 4);
        pcVar6 = local_d8;
        puVar9[3] = local_c8;
        *puVar9 = local_e0;
        puVar9[1] = local_d8;
        puVar9[2] = local_d0;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          local_e0 = (undefined1 *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar6)(&local_c0);
        }
      }
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      *(long *)(lVar7 + 0x308) = *(long *)(lVar7 + 0x308) + 0x80;
      pcVar6 = local_d8;
    }
    else {
      FUN_006f7e50(lVar7 + 0x300,&local_e0);
      pcVar6 = local_d8;
    }
    local_d8 = pcVar6;
    if (pcVar6 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar6)(&local_c0);
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar7 + 0x350));
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x330));
    *plVar15 = *plVar14;
  }
  *(int *)PTR_DAT_02715500 = 1 - *(int *)PTR_DAT_02715500;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xec));
  return;
}


