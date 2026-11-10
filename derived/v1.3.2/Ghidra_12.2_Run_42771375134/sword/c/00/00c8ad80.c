/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8ad80; name: FUN_00c8ad80
 */


void FUN_00c8ad80(long param_1,long *param_2)

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
          if (cVar2 == '\0') goto LAB_00c8ade4;
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
LAB_00c8ade4:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar9 = *(long **)(param_1 + 0x148);
  if (plVar7 != plVar9) {
    do {
      lVar4 = *plVar7;
      uVar5 = FUN_00a8cbe0(lVar4 + 8);
      if (((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0xc0) == *(long *)(*param_2 + 0x118)))
      goto LAB_00c8ae28;
      plVar7 = plVar7 + 1;
    } while (plVar9 != plVar7);
    plVar7 = plVar9;
LAB_00c8ae28:
    plVar9 = *(long **)(param_1 + 0x148);
  }
  if (plVar9 == plVar7) {
    plVar7 = *(long **)(param_1 + 0x110);
    plVar9 = *(long **)(param_1 + 0x118);
    if (plVar7 != plVar9) {
      do {
        lVar4 = *plVar7;
        uVar5 = FUN_00a8cbe0(lVar4 + 8);
        if (((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0xc0) == *(long *)(*param_2 + 0x118)))
        goto LAB_00c8af2c;
        plVar7 = plVar7 + 1;
      } while (plVar9 != plVar7);
      plVar7 = plVar9;
LAB_00c8af2c:
      plVar9 = *(long **)(param_1 + 0x118);
    }
    if (plVar9 == plVar7) goto LAB_00c8afdc;
    if (plVar7 + 1 == plVar9) {
LAB_00c8afb0:
      do {
        plVar8 = plVar9 + -1;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          plVar9[-1] = 0;
        }
        plVar9 = plVar8;
      } while (plVar7 != plVar8);
    }
    else {
      plVar8 = plVar7;
      do {
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          *plVar8 = 0;
        }
        plVar7 = plVar8 + 1;
        lVar4 = *plVar7;
        *plVar7 = 0;
        *plVar8 = lVar4;
        plVar8 = plVar7;
      } while (plVar9 + -1 != plVar7);
      plVar9 = *(long **)(param_1 + 0x118);
      if (plVar9 != plVar7) goto LAB_00c8afb0;
    }
    *(long **)(param_1 + 0x118) = plVar7;
    goto LAB_00c8afdc;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_1 + 0x108);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      (**(code **)(*(long *)*plVar7 + 0x40))();
      *(undefined1 *)(param_1 + 0x181) = 1;
      goto LAB_00c8afdc;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar6 = *(long **)(param_1 + 0x148);
  plVar8 = plVar7 + 1;
  if (plVar8 == plVar6) {
LAB_00c8aea4:
    do {
      plVar6 = plVar8 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
        plVar8[-1] = 0;
      }
      plVar8 = plVar6;
    } while (plVar7 != plVar6);
  }
  else {
    plVar8 = plVar7;
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x18))();
        *plVar8 = 0;
      }
      plVar7 = plVar8 + 1;
      lVar4 = *plVar7;
      *plVar7 = 0;
      *plVar8 = lVar4;
      plVar8 = plVar7;
    } while (plVar6 + -1 != plVar7);
    plVar8 = *(long **)(param_1 + 0x148);
    if (plVar8 != plVar7) goto LAB_00c8aea4;
  }
  *(long **)(param_1 + 0x148) = plVar7;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
LAB_00c8afdc:
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


