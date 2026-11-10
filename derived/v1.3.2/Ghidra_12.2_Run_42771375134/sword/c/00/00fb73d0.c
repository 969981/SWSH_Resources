/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb73d0; name: FUN_00fb73d0
 */


void FUN_00fb73d0(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  
  lVar11 = *(long *)(param_1 + (long)param_2 * 0x110 + 0x2178);
  if (lVar11 == 0) {
    return;
  }
  if (*(char *)(lVar11 + 0x170) == '\0') {
    return;
  }
  lVar11 = param_1 + (long)param_2 * 4;
  if (*(int *)(lVar11 + 0x25b0) != 1) {
    return;
  }
  lVar13 = *(long *)(param_1 + (long)param_2 * 8 + 0x25c0);
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar13 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xe4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00fb7470;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00fb7470:
  puVar6 = PTR_DAT_027164f0;
  puVar5 = PTR_DAT_027164e8;
  plVar14 = *(long **)(lVar13 + 0x140);
  plVar2 = *(long **)(lVar13 + 0x148);
  if (plVar14 != plVar2) {
    do {
      lVar8 = *plVar14;
      puVar12 = (undefined8 *)(lVar8 + 8);
      plVar9 = (long *)(**(code **)*puVar12)(puVar12);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar10 = FUN_00727dd0();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar6) {
          FUN_00794700(lVar8 + -0x48);
          break;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar2);
    if (*(long **)(lVar13 + 0x148) != plVar2) goto LAB_00fb75cc;
  }
  puVar6 = PTR_DAT_027164f0;
  puVar5 = PTR_DAT_027164e8;
  plVar14 = *(long **)(lVar13 + 0x110);
  plVar2 = *(long **)(lVar13 + 0x118);
joined_r0x00fb752c:
  if (plVar14 != plVar2) {
    lVar8 = *plVar14;
    puVar12 = (undefined8 *)(lVar8 + 8);
    plVar9 = (long *)(**(code **)*puVar12)(puVar12);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar10 = FUN_00727dd0();
      *(undefined8 *)puVar6 = uVar10;
      __cxa_guard_release(puVar5);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar6) {
        FUN_00794700(lVar8 + -0x48);
        plVar14 = plVar14 + 1;
        goto joined_r0x00fb752c;
      }
    }
    plVar14 = plVar14 + 1;
    goto joined_r0x00fb752c;
  }
LAB_00fb75cc:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xe4));
  *(undefined4 *)(lVar11 + 0x25b0) = 2;
  return;
}


