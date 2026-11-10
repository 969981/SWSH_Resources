/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130f6c0; name: FUN_0130f6c0
 */


bool FUN_0130f6c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar7 = (long *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
      uVar10 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar10;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_02715080) {
        puVar12 = puVar12 + -10;
        goto LAB_0130f72c;
      }
    }
  }
  puVar12 = (undefined8 *)0x0;
LAB_0130f72c:
  lVar8 = nn::os::GetCurrentThread();
  plVar7 = puVar12 + 0x1e;
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)puVar12 + 0xe4));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0130f774;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0130f774:
  puVar5 = PTR_DAT_027278c8;
  puVar4 = PTR_DAT_027278c0;
  plVar14 = (long *)puVar12[0x28];
  plVar1 = (long *)puVar12[0x29];
  if (plVar1 == plVar14) {
LAB_0130f828:
    puVar5 = PTR_DAT_027278c8;
    puVar4 = PTR_DAT_027278c0;
    plVar14 = (long *)puVar12[0x22];
    plVar1 = (long *)puVar12[0x23];
    if (plVar1 == plVar14) {
      lVar8 = 0;
      goto LAB_0130f900;
    }
    do {
      lVar8 = *plVar14;
      puVar13 = (undefined8 *)(lVar8 + 8);
      plVar9 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar10 = FUN_00d3ff90();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar5) {
          uVar11 = FUN_012def10(lVar8 + -0x48);
          if ((uVar11 & 1) == 0) {
            if ((long *)puVar12[0x23] != plVar14) goto LAB_0130f8f0;
            goto LAB_0130f944;
          }
          break;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar1);
    plVar14 = plVar1;
    if ((long *)puVar12[0x23] == plVar1) {
LAB_0130f944:
      lVar8 = 0;
      goto LAB_0130f900;
    }
  }
  else {
    do {
      lVar8 = *plVar14;
      puVar13 = (undefined8 *)(lVar8 + 8);
      plVar9 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar10 = FUN_00d3ff90();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar5) {
          uVar11 = FUN_012def10(lVar8 + -0x48);
          if ((uVar11 & 1) == 0) {
            if ((long *)puVar12[0x29] == plVar14) goto LAB_0130f828;
            goto LAB_0130f8f0;
          }
          break;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar1);
    plVar14 = plVar1;
    if ((long *)puVar12[0x29] == plVar1) goto LAB_0130f828;
  }
LAB_0130f8f0:
  lVar8 = 0;
  if (*plVar14 != 0) {
    lVar8 = *plVar14 + -0x48;
  }
LAB_0130f900:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)puVar12 + 0xe4));
  return lVar8 == 0;
}


