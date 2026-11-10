/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adca50; name: FUN_00adca50
 */


void FUN_00adca50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long local_60;
  long local_58;
  
  FUN_00ac8dd0();
  FUN_00794740(*(undefined8 *)(param_1 + 0x4b8));
  lVar8 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00adcac4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00adcac4:
  puVar5 = PTR_DAT_027164f0;
  puVar4 = PTR_DAT_027164e8;
  plVar14 = *(long **)(param_1 + 0x140);
  plVar12 = *(long **)(param_1 + 0x148);
  if (plVar14 != plVar12) {
    do {
      lVar8 = *plVar14;
      puVar13 = (undefined8 *)(lVar8 + 8);
      plVar9 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar10 = FUN_00727dd0();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar5) {
          plVar9 = (long *)(lVar8 + -0x48);
          (**(code **)(*plVar9 + 0x10))(&local_58,plVar9);
          (**(code **)(**(long **)(param_1 + 0x4b8) + 0x10))(&local_60);
          lVar6 = local_58;
          lVar8 = local_60;
          if (local_60 != 0) {
            (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
          }
          local_60 = 0;
          if (local_58 != 0) {
            local_60 = 0;
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          if (lVar6 == lVar8) goto LAB_00adcbcc;
          break;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar12);
    plVar14 = plVar12;
LAB_00adcbcc:
    if (*(long **)(param_1 + 0x148) != plVar14) {
      lVar8 = nn::os::GetCurrentThread();
      plVar12 = (long *)(param_1 + 0x108);
      do {
        if (*plVar12 != 0) {
          ClearExclusiveLocal();
          (**(code **)(*(long *)*plVar14 + 0x40))();
          *(undefined1 *)(param_1 + 0x181) = 1;
          goto LAB_00adce40;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = *(long **)(param_1 + 0x148);
      plVar9 = plVar14 + 1;
      if (plVar9 == plVar11) {
LAB_00adcc48:
        do {
          plVar11 = plVar9 + -1;
          if ((long *)*plVar11 != (long *)0x0) {
            (**(code **)(*(long *)*plVar11 + 0x18))();
            plVar9[-1] = 0;
          }
          plVar9 = plVar11;
        } while (plVar14 != plVar11);
      }
      else {
        plVar9 = plVar14;
        do {
          if ((long *)*plVar9 != (long *)0x0) {
            (**(code **)(*(long *)*plVar9 + 0x18))();
            *plVar9 = 0;
          }
          plVar14 = plVar9 + 1;
          lVar8 = *plVar14;
          *plVar14 = 0;
          *plVar9 = lVar8;
          plVar9 = plVar14;
        } while (plVar11 + -1 != plVar14);
        plVar9 = *(long **)(param_1 + 0x148);
        if (plVar9 != plVar14) goto LAB_00adcc48;
      }
      *(long **)(param_1 + 0x148) = plVar14;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
      goto LAB_00adce40;
    }
  }
  puVar5 = PTR_DAT_027164f0;
  puVar4 = PTR_DAT_027164e8;
  plVar14 = *(long **)(param_1 + 0x110);
  plVar12 = *(long **)(param_1 + 0x118);
  if (plVar14 == plVar12) goto LAB_00adce40;
  do {
    lVar8 = *plVar14;
    puVar13 = (undefined8 *)(lVar8 + 8);
    plVar9 = (long *)(**(code **)*puVar13)(puVar13);
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
      uVar10 = FUN_00727dd0();
      *(undefined8 *)puVar5 = uVar10;
      __cxa_guard_release(puVar4);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar5) {
        plVar9 = (long *)(lVar8 + -0x48);
        (**(code **)(*plVar9 + 0x10))(&local_58,plVar9);
        (**(code **)(**(long **)(param_1 + 0x4b8) + 0x10))(&local_60);
        lVar6 = local_58;
        lVar8 = local_60;
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        }
        local_60 = 0;
        if (local_58 != 0) {
          local_60 = 0;
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar6 == lVar8) goto LAB_00adcd94;
        break;
      }
    }
    plVar14 = plVar14 + 1;
  } while (plVar14 != plVar12);
  plVar14 = plVar12;
LAB_00adcd94:
  plVar12 = *(long **)(param_1 + 0x118);
  if (plVar12 == plVar14) goto LAB_00adce40;
  if (plVar14 + 1 == plVar12) {
LAB_00adcdf4:
    do {
      plVar9 = plVar12 + -1;
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 0x18))();
        plVar12[-1] = 0;
      }
      plVar12 = plVar9;
    } while (plVar14 != plVar9);
  }
  else {
    plVar9 = plVar14;
    do {
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 0x18))();
        *plVar9 = 0;
      }
      plVar14 = plVar9 + 1;
      lVar8 = *plVar14;
      *plVar14 = 0;
      *plVar9 = lVar8;
      plVar9 = plVar14;
    } while (plVar12 + -1 != plVar14);
    plVar12 = *(long **)(param_1 + 0x118);
    if (plVar12 != plVar14) goto LAB_00adcdf4;
  }
  *(long **)(param_1 + 0x118) = plVar14;
LAB_00adce40:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  lVar8 = *(long *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  return;
}


