/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb7c10; name: FUN_00fb7c10
 */


void FUN_00fb7c10(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00fb7c80;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00fb7c80:
  lVar7 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0x108);
  do {
    puVar5 = PTR_DAT_027164f0;
    puVar4 = PTR_DAT_027164e8;
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      plVar12 = *(long **)(param_1 + 0x140);
      plVar13 = *(long **)(param_1 + 0x148);
      goto joined_r0x00fb7cac;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar9 = (long *)FUN_00fb7f00(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148),
                                param_2);
  plVar13 = *(long **)(param_1 + 0x148);
  if (plVar9 != plVar13) {
    if ((long *)((long)plVar9 + ((long)plVar13 - (long)plVar9)) != plVar13) {
      lVar7 = (long)plVar13 - (long)plVar9 >> 3;
      plVar11 = plVar9;
      do {
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 0x18))();
          *plVar11 = 0;
        }
        lVar10 = plVar11[lVar7];
        plVar11[lVar7] = 0;
        plVar9 = plVar11 + 1;
        *plVar11 = lVar10;
        plVar11 = plVar9;
      } while (plVar13 + -lVar7 != plVar9);
      plVar13 = *(long **)(param_1 + 0x148);
    }
    if (plVar13 != plVar9) {
      do {
        plVar11 = plVar13 + -1;
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 0x18))();
          plVar13[-1] = 0;
        }
        plVar13 = plVar11;
      } while (plVar9 != plVar11);
    }
    *(long **)(param_1 + 0x148) = plVar9;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
  goto LAB_00fb7e28;
joined_r0x00fb7cac:
  if (plVar13 != plVar12) {
    plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar8 = FUN_00727dd0();
      *(undefined8 *)puVar5 = uVar8;
      __cxa_guard_release(puVar4);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar5) {
        (**(code **)(*(long *)*plVar12 + 0x40))();
        *(undefined1 *)(param_1 + 0x181) = 1;
        plVar12 = plVar12 + 1;
        goto joined_r0x00fb7cac;
      }
    }
    plVar12 = plVar12 + 1;
    goto joined_r0x00fb7cac;
  }
LAB_00fb7e28:
  plVar13 = (long *)FUN_00fb7f00(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                                 param_2);
  plVar12 = *(long **)(param_1 + 0x118);
  if (plVar13 != plVar12) {
    if ((long *)((long)plVar13 + ((long)plVar12 - (long)plVar13)) != plVar12) {
      lVar7 = (long)plVar12 - (long)plVar13 >> 3;
      plVar9 = plVar13;
      do {
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          *plVar9 = 0;
        }
        lVar10 = plVar9[lVar7];
        plVar9[lVar7] = 0;
        plVar13 = plVar9 + 1;
        *plVar9 = lVar10;
        plVar9 = plVar13;
      } while (plVar12 + -lVar7 != plVar13);
      plVar12 = *(long **)(param_1 + 0x118);
    }
    if (plVar12 != plVar13) {
      do {
        plVar9 = plVar12 + -1;
        if ((long *)*plVar9 != (long *)0x0) {
          (**(code **)(*(long *)*plVar9 + 0x18))();
          plVar12[-1] = 0;
        }
        plVar12 = plVar9;
      } while (plVar13 != plVar9);
    }
    *(long **)(param_1 + 0x118) = plVar13;
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


