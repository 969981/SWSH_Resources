/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc4a40; name: FUN_00dc4a40
 */


void FUN_00dc4a40(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
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
          if (cVar2 == '\0') goto LAB_00dc4aa8;
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
LAB_00dc4aa8:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar10 = *(long **)(param_1 + 0x148);
  if (plVar7 != plVar10) {
    do {
      lVar8 = *plVar7;
      puVar9 = (undefined8 *)(lVar8 + 8);
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      lVar4 = FUN_012c5350();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) {
          if (*(long *)*param_2 == lVar8 + -0x48) goto LAB_00dc4b0c;
          break;
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar10);
    plVar7 = plVar10;
LAB_00dc4b0c:
    plVar10 = *(long **)(param_1 + 0x148);
  }
  if (plVar10 == plVar7) {
    plVar7 = *(long **)(param_1 + 0x110);
    plVar10 = *(long **)(param_1 + 0x118);
    if (plVar7 != plVar10) {
      do {
        lVar8 = *plVar7;
        puVar9 = (undefined8 *)(lVar8 + 8);
        plVar5 = (long *)(**(code **)*puVar9)(puVar9);
        lVar4 = FUN_012c5350();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar4) {
            if (*(long *)*param_2 == lVar8 + -0x48) goto LAB_00dc4c30;
            break;
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar10);
      plVar7 = plVar10;
LAB_00dc4c30:
      plVar10 = *(long **)(param_1 + 0x118);
    }
    if (plVar10 == plVar7) goto LAB_00dc4ce0;
    if (plVar7 + 1 == plVar10) {
LAB_00dc4cb4:
      do {
        plVar5 = plVar10 + -1;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x18))();
          plVar10[-1] = 0;
        }
        plVar10 = plVar5;
      } while (plVar7 != plVar5);
    }
    else {
      plVar5 = plVar7;
      do {
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x18))();
          *plVar5 = 0;
        }
        plVar7 = plVar5 + 1;
        lVar4 = *plVar7;
        *plVar7 = 0;
        *plVar5 = lVar4;
        plVar5 = plVar7;
      } while (plVar10 + -1 != plVar7);
      plVar10 = *(long **)(param_1 + 0x118);
      if (plVar10 != plVar7) goto LAB_00dc4cb4;
    }
    *(long **)(param_1 + 0x118) = plVar7;
    goto LAB_00dc4ce0;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x108);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      (**(code **)(*(long *)*plVar7 + 0x40))();
      *(undefined1 *)(param_1 + 0x181) = 1;
      goto LAB_00dc4ce0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar6 = *(long **)(param_1 + 0x148);
  plVar5 = plVar7 + 1;
  if (plVar5 == plVar6) {
LAB_00dc4b88:
    do {
      plVar6 = plVar5 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
        plVar5[-1] = 0;
      }
      plVar5 = plVar6;
    } while (plVar7 != plVar6);
  }
  else {
    plVar5 = plVar7;
    do {
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x18))();
        *plVar5 = 0;
      }
      plVar7 = plVar5 + 1;
      lVar4 = *plVar7;
      *plVar7 = 0;
      *plVar5 = lVar4;
      plVar5 = plVar7;
    } while (plVar6 + -1 != plVar7);
    plVar5 = *(long **)(param_1 + 0x148);
    if (plVar5 != plVar7) goto LAB_00dc4b88;
  }
  *(long **)(param_1 + 0x148) = plVar7;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
LAB_00dc4ce0:
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


