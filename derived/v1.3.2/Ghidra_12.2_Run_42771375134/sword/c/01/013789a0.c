/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013789a0; name: FUN_013789a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013789a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
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
          if (cVar2 == '\0') goto LAB_01378a04;
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
LAB_01378a04:
  lVar4 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0x108);
  while (*plVar6 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto code_r0x01378a1c;
  }
  bVar3 = false;
  ClearExclusiveLocal();
  plVar7 = *(long **)(param_1 + 0x140);
  plVar9 = *(long **)(param_1 + 0x148);
  if (plVar9 == plVar7) goto LAB_01378bd4;
  do {
    lVar4 = FUN_01378d40(*plVar7 + 8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)*plVar7 + 0x40))();
      *(undefined1 *)(param_1 + 0x181) = 1;
    }
    plVar7 = plVar7 + 1;
  } while (plVar9 != plVar7);
  goto LAB_01378bbc;
code_r0x01378a1c:
  plVar7 = *(long **)(param_1 + 0x140);
  bVar3 = true;
  plVar9 = *(long **)(param_1 + 0x148);
  if (plVar7 != plVar9) {
    lVar4 = FUN_01378d40(*plVar7 + 8);
    while (lVar4 == 0) {
      plVar7 = plVar7 + 1;
      if (plVar9 == plVar7) {
        plVar8 = plVar9;
        goto LAB_01378b30;
      }
      lVar4 = FUN_01378d40(*plVar7 + 8);
    }
  }
  plVar8 = plVar7;
  plVar10 = plVar7;
  if (plVar7 != plVar9) {
    while (plVar10 = plVar10 + 1, plVar8 = plVar7, plVar10 != plVar9) {
      while (lVar4 = FUN_01378d40(*plVar10 + 8), lVar4 == 0) {
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          *plVar7 = 0;
        }
        lVar4 = *plVar10;
        *plVar10 = 0;
        plVar8 = plVar7 + 1;
        *plVar7 = lVar4;
        plVar10 = plVar10 + 1;
        plVar7 = plVar8;
        if (plVar9 == plVar10) goto LAB_01378b30;
      }
    }
  }
LAB_01378b30:
  plVar7 = *(long **)(param_1 + 0x148);
  if (plVar8 != plVar7) {
    if ((long *)((long)plVar8 + ((long)plVar7 - (long)plVar8)) != plVar7) {
      lVar4 = (long)plVar7 - (long)plVar8 >> 3;
      plVar9 = plVar8;
      do {
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          *plVar9 = 0;
        }
        lVar5 = plVar9[lVar4];
        plVar9[lVar4] = 0;
        plVar8 = plVar9 + 1;
        *plVar9 = lVar5;
        plVar9 = plVar8;
      } while (plVar7 + -lVar4 != plVar8);
      plVar7 = *(long **)(param_1 + 0x148);
    }
    if (plVar7 != plVar8) {
      do {
        plVar9 = plVar7 + -1;
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          plVar7[-1] = 0;
        }
        plVar7 = plVar9;
      } while (plVar8 != plVar9);
    }
    *(long **)(param_1 + 0x148) = plVar8;
  }
LAB_01378bbc:
  if (bVar3) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
  }
LAB_01378bd4:
  plVar6 = *(long **)(param_1 + 0x110);
  plVar7 = *(long **)(param_1 + 0x118);
  if (plVar6 != plVar7) {
    lVar4 = FUN_01378d40(*plVar6 + 8);
    while (lVar4 == 0) {
      plVar6 = plVar6 + 1;
      if (plVar7 == plVar6) {
        plVar9 = plVar7;
        goto LAB_01378c88;
      }
      lVar4 = FUN_01378d40(*plVar6 + 8);
    }
  }
  plVar9 = plVar6;
  plVar8 = plVar6;
  if (plVar6 != plVar7) {
    while (plVar8 = plVar8 + 1, plVar9 = plVar6, plVar8 != plVar7) {
      while (lVar4 = FUN_01378d40(*plVar8 + 8), lVar4 == 0) {
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x18))();
          *plVar6 = 0;
        }
        lVar4 = *plVar8;
        *plVar8 = 0;
        plVar9 = plVar6 + 1;
        *plVar6 = lVar4;
        plVar8 = plVar8 + 1;
        plVar6 = plVar9;
        if (plVar7 == plVar8) goto LAB_01378c88;
      }
    }
  }
LAB_01378c88:
  plVar6 = *(long **)(param_1 + 0x118);
  if (plVar9 != plVar6) {
    if ((long *)((long)plVar9 + ((long)plVar6 - (long)plVar9)) != plVar6) {
      lVar4 = (long)plVar6 - (long)plVar9 >> 3;
      plVar7 = plVar9;
      do {
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          *plVar7 = 0;
        }
        lVar5 = plVar7[lVar4];
        plVar7[lVar4] = 0;
        plVar9 = plVar7 + 1;
        *plVar7 = lVar5;
        plVar7 = plVar9;
      } while (plVar6 + -lVar4 != plVar9);
      plVar6 = *(long **)(param_1 + 0x118);
    }
    if (plVar6 != plVar9) {
      do {
        plVar7 = plVar6 + -1;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          plVar6[-1] = 0;
        }
        plVar6 = plVar7;
      } while (plVar9 != plVar7);
    }
    *(long **)(param_1 + 0x118) = plVar9;
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
}


