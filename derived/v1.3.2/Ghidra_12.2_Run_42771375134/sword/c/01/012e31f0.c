/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e31f0; name: FUN_012e31f0
 */


long FUN_012e31f0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02715078), iVar4 != 0)) {
      uVar8 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar8;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_02715080) {
        puVar9 = puVar9 + -10;
        goto LAB_012e3258;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_012e3258:
  lVar6 = nn::os::GetCurrentThread();
  plVar5 = puVar9 + 0x1e;
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)puVar9 + 0xe4));
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_012e32a0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_012e32a0:
  plVar10 = (long *)puVar9[0x28];
  plVar1 = (long *)puVar9[0x29];
  if (plVar1 == plVar10) {
LAB_012e32e8:
    plVar10 = (long *)puVar9[0x22];
    plVar1 = (long *)puVar9[0x23];
    if (plVar1 == plVar10) {
      lVar6 = 0;
      goto LAB_012e3370;
    }
    do {
      lVar6 = *plVar10;
      uVar7 = FUN_012ecd20(lVar6 + 8);
      if (((uVar7 & 1) != 0) && (lVar6 = FUN_01313050(lVar6 + -0x48), lVar6 == param_2)) {
        if ((long *)puVar9[0x23] == plVar10) goto LAB_012e339c;
        goto LAB_012e3360;
      }
      plVar10 = plVar10 + 1;
    } while (plVar1 != plVar10);
    plVar10 = plVar1;
    if ((long *)puVar9[0x23] == plVar1) {
LAB_012e339c:
      lVar6 = 0;
      goto LAB_012e3370;
    }
  }
  else {
    do {
      lVar6 = *plVar10;
      uVar7 = FUN_012ecd20(lVar6 + 8);
      if (((uVar7 & 1) != 0) && (lVar6 = FUN_01313050(lVar6 + -0x48), lVar6 == param_2)) {
        if ((long *)puVar9[0x29] == plVar10) goto LAB_012e32e8;
        goto LAB_012e3360;
      }
      plVar10 = plVar10 + 1;
    } while (plVar1 != plVar10);
    plVar10 = plVar1;
    if ((long *)puVar9[0x29] == plVar1) goto LAB_012e32e8;
  }
LAB_012e3360:
  lVar6 = 0;
  if (*plVar10 != 0) {
    lVar6 = *plVar10 + -0x48;
  }
LAB_012e3370:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)puVar9 + 0xe4));
  return lVar6;
}


