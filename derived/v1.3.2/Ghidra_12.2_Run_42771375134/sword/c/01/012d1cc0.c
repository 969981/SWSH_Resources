/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d1cc0; name: FUN_012d1cc0
 */


long FUN_012d1cc0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012d1d2c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012d1d2c:
  puVar7 = PTR_DAT_027278c8;
  puVar6 = PTR_DAT_027278c0;
  plVar14 = *(long **)(param_1 + 0x140);
  plVar3 = *(long **)(param_1 + 0x148);
  plVar10 = plVar3;
  if (plVar14 != plVar3) {
    do {
      lVar9 = *plVar14;
      puVar13 = (undefined8 *)(lVar9 + 8);
      plVar10 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar11 = FUN_00d3ff90();
        *(undefined8 *)puVar7 = uVar11;
        __cxa_guard_release(puVar6);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar7) {
          lVar2 = *param_2;
          lVar12 = *(long *)param_2[1];
          *(long *)param_2[1] = lVar12 + 1;
          *(long *)(lVar2 + lVar12 * 8) = lVar9 + -0x48;
          break;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar3);
    plVar10 = *(long **)(param_1 + 0x148);
    plVar14 = plVar3;
  }
  puVar7 = PTR_DAT_027278c8;
  puVar6 = PTR_DAT_027278c0;
  if (plVar10 == plVar14) {
    plVar14 = *(long **)(param_1 + 0x110);
    plVar3 = *(long **)(param_1 + 0x118);
    plVar10 = plVar3;
    if (plVar14 != plVar3) {
      do {
        lVar9 = *plVar14;
        puVar13 = (undefined8 *)(lVar9 + 8);
        plVar10 = (long *)(**(code **)*puVar13)(puVar13);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar11 = FUN_00d3ff90();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar7) {
            lVar2 = *param_2;
            lVar12 = *(long *)param_2[1];
            *(long *)param_2[1] = lVar12 + 1;
            *(long *)(lVar2 + lVar12 * 8) = lVar9 + -0x48;
            break;
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
      plVar10 = *(long **)(param_1 + 0x118);
      plVar14 = plVar3;
    }
    if (plVar10 == plVar14) {
      lVar9 = 0;
      goto LAB_012d1ecc;
    }
  }
  lVar9 = 0;
  if (*plVar14 != 0) {
    lVar9 = *plVar14 + -0x48;
  }
LAB_012d1ecc:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar9;
}


