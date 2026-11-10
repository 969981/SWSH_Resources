/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cc8e0; name: FUN_013cc8e0
 */


void FUN_013cc8e0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_38;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  lVar4 = FUN_0132d9a0();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  lVar9 = puVar8[2];
  lVar4 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar9 + 0x70);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 100));
        while (*plVar3 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_013cc978;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_013cc978:
  lVar4 = FUN_012d5dd0(lVar9,0x3f22e9684f19a6e6);
  if (lVar4 == lVar9 + 0x980) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 100));
    return;
  }
  pcVar7 = *(code **)(lVar4 + 0x18);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    (*pcVar7)(lVar4 + 0x30);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 100));
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_0132d9a0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        uVar5 = FUN_0132ffa0(puVar8 + -10,1);
        goto joined_r0x013ccba4;
      }
    }
  }
  uVar5 = FUN_0132ffa0(0,1);
joined_r0x013ccba4:
  if ((uVar5 & 1) == 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_0132d9a0();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    uVar6 = 0xf;
  }
  else {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      lVar4 = FUN_0132d9a0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar8 = puVar8 + -10;
          goto LAB_013cca58;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_013cca58:
    FUN_0132f7f0(&local_38,puVar8);
    uVar5 = FUN_01329840(local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if ((uVar5 & 1) == 0) {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar8)(puVar8);
        lVar4 = FUN_0132d9a0();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            puVar8 = puVar8 + -10;
            goto LAB_013ccb28;
          }
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_013ccb28:
      FUN_0132f7f0(&local_38,puVar8);
      uVar5 = FUN_01329820(local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      lVar4 = FUN_0132d9a0();
      for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
      }
      uVar6 = 4;
      if ((uVar5 & 1) == 0) {
        uVar6 = 5;
      }
    }
    else {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar3 = (long *)(**(code **)*puVar8)(puVar8);
      lVar4 = FUN_0132d9a0();
      for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
      }
      uVar6 = 6;
    }
  }
  *(undefined4 *)(puVar8 + 5) = uVar6;
  return;
}


