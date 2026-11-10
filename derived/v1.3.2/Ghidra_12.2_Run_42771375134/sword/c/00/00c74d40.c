/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c74d40; name: FUN_00c74d40
 */


void FUN_00c74d40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
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
          if (cVar2 == '\0') goto LAB_00c74da0;
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
LAB_00c74da0:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar8 = *(long **)(param_1 + 0x148);
  if ((plVar7 != plVar8) && (uVar5 = FUN_00c74fd0(*plVar7 + 8), (uVar5 & 1) == 0)) {
    do {
      plVar7 = plVar7 + 1;
      if (plVar8 == plVar7) {
        if (*(long **)(param_1 + 0x148) == plVar8) goto LAB_00c74ecc;
        goto LAB_00c74de8;
      }
      uVar5 = FUN_00c74fd0(*plVar7 + 8);
    } while ((uVar5 & 1) == 0);
  }
  plVar8 = plVar7;
  if (*(long **)(param_1 + 0x148) == plVar7) {
LAB_00c74ecc:
    plVar7 = *(long **)(param_1 + 0x110);
    plVar8 = *(long **)(param_1 + 0x118);
    if (plVar7 == plVar8) {
LAB_00c74f1c:
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 == plVar7) goto LAB_00c74fa8;
    }
    else {
      uVar5 = FUN_00c74fd0(*plVar7 + 8);
      if ((uVar5 & 1) != 0) goto LAB_00c74f1c;
      do {
        plVar7 = plVar7 + 1;
        if (plVar8 == plVar7) {
          plVar7 = plVar8;
          goto LAB_00c74f1c;
        }
        uVar5 = FUN_00c74fd0(*plVar7 + 8);
      } while ((uVar5 & 1) == 0);
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 == plVar7) goto LAB_00c74fa8;
    }
    if (plVar7 + 1 == plVar8) {
LAB_00c74f7c:
      do {
        plVar9 = plVar8 + -1;
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          plVar8[-1] = 0;
        }
        plVar8 = plVar9;
      } while (plVar7 != plVar9);
    }
    else {
      plVar9 = plVar7;
      do {
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          *plVar9 = 0;
        }
        plVar7 = plVar9 + 1;
        lVar4 = *plVar7;
        *plVar7 = 0;
        *plVar9 = lVar4;
        plVar9 = plVar7;
      } while (plVar8 + -1 != plVar7);
      plVar8 = *(long **)(param_1 + 0x118);
      if (plVar8 != plVar7) goto LAB_00c74f7c;
    }
    *(long **)(param_1 + 0x118) = plVar7;
    goto LAB_00c74fa8;
  }
LAB_00c74de8:
  lVar4 = nn::os::GetCurrentThread();
  plVar7 = (long *)(param_1 + 0x108);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      (**(code **)(*(long *)*plVar8 + 0x40))();
      *(undefined1 *)(param_1 + 0x181) = 1;
      goto LAB_00c74fa8;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar6 = *(long **)(param_1 + 0x148);
  plVar9 = plVar8 + 1;
  if (plVar9 == plVar6) {
LAB_00c74e58:
    do {
      plVar6 = plVar9 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
        plVar9[-1] = 0;
      }
      plVar9 = plVar6;
    } while (plVar8 != plVar6);
  }
  else {
    plVar9 = plVar8;
    do {
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 0x18))();
        *plVar9 = 0;
      }
      plVar8 = plVar9 + 1;
      lVar4 = *plVar8;
      *plVar8 = 0;
      *plVar9 = lVar4;
      plVar9 = plVar8;
    } while (plVar6 + -1 != plVar8);
    plVar9 = *(long **)(param_1 + 0x148);
    if (plVar9 != plVar8) goto LAB_00c74e58;
  }
  *(long **)(param_1 + 0x148) = plVar8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
LAB_00c74fa8:
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


