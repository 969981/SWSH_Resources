/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139a6e0; name: FUN_0139a6e0
 */


void FUN_0139a6e0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long local_70;
  long local_68;
  
  FUN_0139acc0(&local_68);
  uVar7 = FUN_012c8f90(0x12);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar8 = FUN_00ad95d0(&local_68,uVar7);
  *param_1 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_010257f0(lVar8,param_2 + 0x338);
  lVar11 = *(long *)(lVar8 + 0x170);
  lVar8 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar11 + 0x158);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x14c));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0139a7b4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0139a7b4:
  puVar13 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60);
  plVar9 = (long *)(**(code **)*puVar13)(puVar13);
  puVar5 = PTR_DAT_02715078;
  puVar4 = (undefined8 *)PTR_DAT_02715080;
  if (((*PTR_DAT_02715078 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), puVar4 = (undefined8 *)PTR_DAT_02715080,
     iVar6 != 0)) {
    uVar7 = FUN_00a87090();
    *(undefined8 *)PTR_DAT_02715080 = uVar7;
    __cxa_guard_release(PTR_DAT_02715078);
    puVar4 = (undefined8 *)PTR_DAT_02715080;
  }
  for (; plVar9 != puVar4; plVar9 = (long *)*plVar9) {
  }
  PTR_DAT_02715080 = (undefined *)puVar4;
  FUN_006d1640(lVar11,puVar13[0x24],0);
  lVar14 = *(long *)(*param_1 + 0x178);
  lVar8 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar14 + 0x158);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x14c));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0139a85c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0139a85c:
  puVar13 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60);
  plVar10 = (long *)(**(code **)*puVar13)(puVar13);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
    uVar7 = FUN_00a87090();
    *puVar4 = uVar7;
    __cxa_guard_release(PTR_DAT_02715078);
  }
  for (; plVar10 != puVar4; plVar10 = (long *)*plVar10) {
  }
  FUN_006d1640(lVar14,puVar13[0x25],0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x14c));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x14c));
  lVar11 = *param_1;
  lVar8 = FUN_0139ba40(&local_68,*(undefined8 *)(lVar11 + 8));
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_68 = lVar8;
  FUN_006d9640(lVar11,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar8 = FUN_0139bc20(&local_68,*(undefined8 *)(lVar11 + 8));
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_68 = lVar8;
  FUN_006d9640(lVar11,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  plVar12 = *(long **)(param_2 + 0x330);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(long *)(lVar11 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x60))();
      *(undefined8 *)(lVar11 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar11 = plVar12[0xb];
    if (*(long *)(lVar11 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x60))();
      *(undefined8 *)(lVar11 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = *(long **)(lVar8 + 400);
  *(long **)(lVar8 + 400) = plVar12;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x60) = 0;
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x60) = 0;
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  local_70 = *(long *)(param_2 + 0x460);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN_0139e290(lVar8,param_2 + 0x350,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


