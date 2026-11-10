/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142b3d0; name: FUN_0142b3d0
 */


void FUN_0142b3d0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  
  uVar8 = FUN_00ffa3b0(*(undefined8 *)(param_1 + 0x80));
  if ((uVar8 & 1) == 0) {
    return;
  }
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x80),0,1);
  *(undefined4 *)(param_1 + 0x78) = 2;
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar9 = (long *)(**(code **)*puVar11)(puVar11);
  lVar10 = FUN_01410b60();
  for (; plVar9 != (long *)lVar10; plVar9 = (long *)*plVar9) {
  }
  *(undefined1 *)((long)puVar11 + 0x2c) = 0;
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar9 = (long *)(**(code **)*puVar11)(puVar11);
  lVar10 = FUN_01410b60();
  for (; plVar9 != (long *)lVar10; plVar9 = (long *)*plVar9) {
  }
  lVar12 = puVar11[2];
  lVar10 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar12 + 0x70);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 100));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar10;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0142b4d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar10;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0142b4d0:
  puVar6 = PTR_LAB_02729088;
  puVar5 = PTR_LAB_02729080;
  puVar4 = PTR_FUN_02729078;
  puVar3 = PTR_LAB_02729070;
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  local_e0 = PTR_LAB_02729070;
  local_d8 = (code *)PTR_FUN_02729078;
  local_d0 = PTR_LAB_02729080;
  local_c8 = PTR_LAB_02729088;
  FUN_012d5b10(lVar12,0x235cabb6df3dbe20,&local_e0,0);
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar7)(&local_c0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 100));
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar11 == (undefined8 *)0x0) goto LAB_0142b590;
    plVar9 = (long *)(**(code **)*puVar11)(puVar11);
    lVar10 = FUN_01410b60();
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)lVar10) {
        puVar11 = puVar11 + -10;
        goto LAB_0142b590;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_0142b590:
  uVar8 = FUN_0142c660(*(undefined8 *)(param_1 + 0x80));
  lVar12 = puVar11[0xc];
  lVar10 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar12 + 0x70);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 100));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar10;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0142b5e8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar10;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0142b5e8:
  local_e0 = PTR_LAB_02729208;
  local_d8 = (code *)PTR_FUN_02729210;
  local_d0 = PTR_LAB_02729218;
  local_c8 = PTR_LAB_02729220;
  local_c0 = uVar8;
  FUN_012d5b10(lVar12,0xdaef13b63d78cbff,&local_e0,0);
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar7)(&local_c0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 100));
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar9 = (long *)(**(code **)*puVar11)(puVar11);
  lVar10 = FUN_01410b60();
  for (; plVar9 != (long *)lVar10; plVar9 = (long *)*plVar9) {
  }
  lVar12 = puVar11[2];
  lVar10 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar12 + 0x70);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 100));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar10;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0142b6e8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar10;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0142b6e8:
  local_c0 = local_c0 & 0xffffffff00000000;
  local_e0 = puVar3;
  local_d8 = (code *)puVar4;
  local_d0 = puVar5;
  local_c8 = puVar6;
  FUN_012d5b10(lVar12,0x9768a06fda32b367,&local_e0,0);
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar7)(&local_c0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 100));
  return;
}


