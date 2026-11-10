/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01377f20; name: FUN_01377f20
 */


long FUN_01377f20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01377f8c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01377f8c:
  puVar9 = PTR_DAT_02728a80;
  puVar8 = PTR_DAT_02728a78;
  puVar7 = PTR_DAT_02728a70;
  puVar6 = PTR_DAT_02728a68;
  puVar5 = PTR_DAT_0271df38;
  puVar4 = PTR_DAT_0271df30;
  plVar15 = *(long **)(param_1 + 0x140);
  plVar14 = *(long **)(param_1 + 0x148);
  if (plVar14 == plVar15) {
LAB_013780cc:
    plVar14 = plVar15;
    if (*(long **)(param_1 + 0x148) == plVar14) {
LAB_0137808c:
      puVar9 = PTR_DAT_02728a80;
      puVar8 = PTR_DAT_02728a78;
      puVar7 = PTR_DAT_02728a70;
      puVar6 = PTR_DAT_02728a68;
      puVar5 = PTR_DAT_0271df38;
      puVar4 = PTR_DAT_0271df30;
      plVar15 = *(long **)(param_1 + 0x110);
      plVar14 = *(long **)(param_1 + 0x118);
      if (plVar14 == plVar15) {
LAB_01378198:
        plVar14 = plVar15;
      }
      else {
        do {
          plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
                uVar13 = FUN_00706e40();
                *(undefined8 *)puVar5 = uVar13;
                __cxa_guard_release(puVar4);
              }
              *(undefined **)puVar8 = puVar5;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar9 = puVar8;
            __cxa_guard_release(puVar6);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar9) goto LAB_01378198;
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar14);
      }
      if (*(long **)(param_1 + 0x118) == plVar14) {
        lVar11 = 0;
        goto LAB_013781b8;
      }
    }
  }
  else {
    do {
      plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar13 = FUN_00706e40();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar8 = puVar5;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar9 = puVar8;
        __cxa_guard_release(puVar6);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)puVar9) goto LAB_013780cc;
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar14);
    if (*(long **)(param_1 + 0x148) == plVar14) goto LAB_0137808c;
  }
  lVar11 = 0;
  if (*plVar14 != 0) {
    lVar11 = *plVar14 + -0x48;
  }
LAB_013781b8:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar11;
}


