/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db8810; name: FUN_00db8810
 */


void FUN_00db8810(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
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
          if (cVar2 == '\0') goto LAB_00db8874;
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
LAB_00db8874:
  lVar4 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x108);
  do {
    if (*plVar8 != 0) {
      bVar3 = false;
      ClearExclusiveLocal();
      plVar9 = *(long **)(param_1 + 0x140);
      plVar10 = *(long **)(param_1 + 0x148);
      if (plVar10 != plVar9) goto LAB_00db88a8;
      goto LAB_00db8a80;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar9 = *(long **)(param_1 + 0x140);
  bVar3 = true;
  plVar10 = *(long **)(param_1 + 0x148);
  if (plVar9 == plVar10) {
LAB_00db8964:
    plVar5 = plVar9;
    if (plVar9 != plVar10) {
joined_r0x00db8974:
      plVar5 = plVar5 + 1;
      if (plVar5 != plVar10) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(*plVar5 + 8))();
        lVar4 = FUN_00706e40();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar4) goto joined_r0x00db8974;
        }
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          *plVar9 = 0;
        }
        lVar4 = *plVar5;
        *plVar5 = 0;
        *plVar9 = lVar4;
        plVar9 = plVar9 + 1;
        goto joined_r0x00db8974;
      }
    }
  }
  else {
    do {
      plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar9 + 8))();
      lVar4 = FUN_00706e40();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) goto LAB_00db8964;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar10);
    plVar9 = plVar10;
  }
  plVar10 = *(long **)(param_1 + 0x148);
  if (plVar9 != plVar10) {
    if ((long *)((long)plVar9 + ((long)plVar10 - (long)plVar9)) != plVar10) {
      lVar4 = (long)plVar10 - (long)plVar9 >> 3;
      plVar5 = plVar9;
      do {
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x18))();
          *plVar5 = 0;
        }
        lVar7 = plVar5[lVar4];
        plVar5[lVar4] = 0;
        plVar9 = plVar5 + 1;
        *plVar5 = lVar7;
        plVar5 = plVar9;
      } while (plVar10 + -lVar4 != plVar9);
      plVar10 = *(long **)(param_1 + 0x148);
    }
    if (plVar10 != plVar9) {
      do {
        plVar5 = plVar10 + -1;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x18))();
          plVar10[-1] = 0;
        }
        plVar10 = plVar5;
      } while (plVar9 != plVar5);
    }
    *(long **)(param_1 + 0x148) = plVar9;
  }
LAB_00db8a68:
  if (bVar3) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
  }
LAB_00db8a80:
  plVar8 = *(long **)(param_1 + 0x110);
  plVar9 = *(long **)(param_1 + 0x118);
  if (plVar8 == plVar9) {
LAB_00db8acc:
    plVar10 = plVar8;
    if (plVar8 != plVar9) {
joined_r0x00db8adc:
      plVar10 = plVar10 + 1;
      if (plVar10 != plVar9) {
        plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar10 + 8))();
        lVar4 = FUN_00706e40();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar4) goto joined_r0x00db8adc;
        }
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          *plVar8 = 0;
        }
        lVar4 = *plVar10;
        *plVar10 = 0;
        *plVar8 = lVar4;
        plVar8 = plVar8 + 1;
        goto joined_r0x00db8adc;
      }
    }
  }
  else {
    do {
      plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar8 + 8))();
      lVar4 = FUN_00706e40();
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)lVar4) goto LAB_00db8acc;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
    plVar8 = plVar9;
  }
  plVar9 = *(long **)(param_1 + 0x118);
  if (plVar8 != plVar9) {
    if ((long *)((long)plVar8 + ((long)plVar9 - (long)plVar8)) != plVar9) {
      lVar4 = (long)plVar9 - (long)plVar8 >> 3;
      plVar10 = plVar8;
      do {
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x18))();
          *plVar10 = 0;
        }
        lVar7 = plVar10[lVar4];
        plVar10[lVar4] = 0;
        plVar8 = plVar10 + 1;
        *plVar10 = lVar7;
        plVar10 = plVar8;
      } while (plVar9 + -lVar4 != plVar8);
      plVar9 = *(long **)(param_1 + 0x118);
    }
    if (plVar9 != plVar8) {
      do {
        plVar10 = plVar9 + -1;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x18))();
          plVar9[-1] = 0;
        }
        plVar9 = plVar10;
      } while (plVar8 != plVar10);
    }
    *(long **)(param_1 + 0x118) = plVar8;
  }
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
LAB_00db88a8:
  do {
    plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar9 + 8))();
    lVar4 = FUN_00706e40();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar4) {
        (**(code **)(*(long *)*plVar9 + 0x40))();
        *(undefined1 *)(param_1 + 0x181) = 1;
        break;
      }
    }
    plVar9 = plVar9 + 1;
  } while (plVar9 != plVar10);
  goto LAB_00db8a68;
}


