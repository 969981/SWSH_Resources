/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013784c0; name: FUN_013784c0
 */


void FUN_013784c0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_58;
  undefined8 local_48;
  
  lVar4 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0137852c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0137852c:
  local_58 = param_2;
  lVar4 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_1 + 0x108);
  do {
    if (*plVar9 != 0) {
      bVar3 = false;
      ClearExclusiveLocal();
      puVar8 = *(undefined8 **)(param_1 + 0x140);
      puVar10 = *(undefined8 **)(param_1 + 0x148);
      if (puVar10 != puVar8) goto LAB_01378564;
      goto LAB_013786e8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar7 = *(long **)(param_1 + 0x140);
  bVar3 = true;
  plVar12 = *(long **)(param_1 + 0x148);
  local_48 = local_58;
  if ((plVar7 != plVar12) && (uVar5 = FUN_01378870(&local_48,plVar7), (uVar5 & 1) == 0)) {
    do {
      plVar7 = plVar7 + 1;
      if (plVar12 == plVar7) {
        plVar11 = *(long **)(param_1 + 0x148);
        if (plVar12 != plVar11) goto LAB_01378650;
        goto LAB_013786d0;
      }
      uVar5 = FUN_01378870(&local_48,plVar7);
    } while ((uVar5 & 1) == 0);
  }
  plVar11 = plVar7;
  if (plVar7 != plVar12) {
    while (plVar11 = plVar11 + 1, plVar11 != plVar12) {
      uVar5 = FUN_01378870(&local_48,plVar11);
      if ((uVar5 & 1) == 0) {
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          *plVar7 = 0;
        }
        lVar4 = *plVar11;
        *plVar11 = 0;
        *plVar7 = lVar4;
        plVar7 = plVar7 + 1;
      }
    }
  }
  plVar11 = *(long **)(param_1 + 0x148);
  plVar12 = plVar7;
  if (plVar7 != plVar11) {
LAB_01378650:
    if ((long *)((long)plVar12 + ((long)plVar11 - (long)plVar12)) != plVar11) {
      lVar4 = (long)plVar11 - (long)plVar12 >> 3;
      plVar7 = plVar12;
      do {
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          *plVar7 = 0;
        }
        lVar6 = plVar7[lVar4];
        plVar7[lVar4] = 0;
        plVar12 = plVar7 + 1;
        *plVar7 = lVar6;
        plVar7 = plVar12;
      } while (plVar11 + -lVar4 != plVar12);
      plVar11 = *(long **)(param_1 + 0x148);
    }
    if (plVar11 != plVar12) {
      do {
        plVar7 = plVar11 + -1;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          plVar11[-1] = 0;
        }
        plVar11 = plVar7;
      } while (plVar12 != plVar7);
    }
    *(long **)(param_1 + 0x148) = plVar12;
  }
LAB_013786d0:
  if (bVar3) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
  }
LAB_013786e8:
  plVar9 = *(long **)(param_1 + 0x110);
  plVar7 = *(long **)(param_1 + 0x118);
  local_48 = local_58;
  if ((plVar9 != plVar7) && (uVar5 = FUN_01378870(&local_48,plVar9), (uVar5 & 1) == 0)) {
    do {
      plVar9 = plVar9 + 1;
      if (plVar7 == plVar9) {
        plVar12 = *(long **)(param_1 + 0x118);
        if (plVar7 != plVar12) goto LAB_01378790;
        goto LAB_01378810;
      }
      uVar5 = FUN_01378870(&local_48,plVar9);
    } while ((uVar5 & 1) == 0);
  }
  plVar12 = plVar9;
  if (plVar9 != plVar7) {
    while (plVar12 = plVar12 + 1, plVar12 != plVar7) {
      uVar5 = FUN_01378870(&local_48,plVar12);
      if ((uVar5 & 1) == 0) {
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          *plVar9 = 0;
        }
        lVar4 = *plVar12;
        *plVar12 = 0;
        *plVar9 = lVar4;
        plVar9 = plVar9 + 1;
      }
    }
  }
  plVar12 = *(long **)(param_1 + 0x118);
  plVar7 = plVar9;
  if (plVar9 != plVar12) {
LAB_01378790:
    if ((long *)((long)plVar7 + ((long)plVar12 - (long)plVar7)) != plVar12) {
      lVar4 = (long)plVar12 - (long)plVar7 >> 3;
      plVar9 = plVar7;
      do {
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          *plVar9 = 0;
        }
        lVar6 = plVar9[lVar4];
        plVar9[lVar4] = 0;
        plVar7 = plVar9 + 1;
        *plVar9 = lVar6;
        plVar9 = plVar7;
      } while (plVar12 + -lVar4 != plVar7);
      plVar12 = *(long **)(param_1 + 0x118);
    }
    if (plVar12 != plVar7) {
      do {
        plVar9 = plVar12 + -1;
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          plVar12[-1] = 0;
        }
        plVar12 = plVar9;
      } while (plVar7 != plVar9);
    }
    *(long **)(param_1 + 0x118) = plVar7;
  }
LAB_01378810:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
LAB_01378564:
  do {
    uVar5 = FUN_01378870(&local_58,puVar8);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*(long *)*puVar8 + 0x40))();
      *(undefined1 *)(param_1 + 0x181) = 1;
    }
    puVar8 = puVar8 + 1;
  } while (puVar10 != puVar8);
  goto LAB_013786d0;
}


