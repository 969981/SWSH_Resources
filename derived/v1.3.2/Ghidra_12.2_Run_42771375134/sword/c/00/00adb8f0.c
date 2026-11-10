/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adb8f0; name: FUN_00adb8f0
 */


void FUN_00adb8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x6f0) == 0) goto LAB_00adbd04;
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
          if (cVar2 == '\0') goto LAB_00adb970;
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
LAB_00adb970:
  puVar5 = PTR_DAT_027150b0;
  puVar4 = PTR_DAT_027150a8;
  plVar14 = *(long **)(param_1 + 0x140);
  plVar12 = *(long **)(param_1 + 0x148);
  if (plVar14 == plVar12) {
LAB_00adbb2c:
    puVar5 = PTR_DAT_027150b0;
    puVar4 = PTR_DAT_027150a8;
    plVar14 = *(long **)(param_1 + 0x110);
    plVar12 = *(long **)(param_1 + 0x118);
    if (plVar14 != plVar12) {
      do {
        lVar7 = *plVar14;
        puVar13 = (undefined8 *)(lVar7 + 8);
        plVar8 = (long *)(**(code **)*puVar13)(puVar13);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00706e40();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            lVar10 = *(long *)(*(long *)(param_1 + 0x6f0) + 0x58);
            if (lVar10 != 0) {
              plVar8 = (long *)(lVar10 + 0x48);
              (**(code **)(*plVar8 + 0x10))(plVar8);
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            }
            if (lVar7 == lVar10) goto LAB_00adbc48;
            break;
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar12);
      plVar14 = plVar12;
LAB_00adbc48:
      plVar12 = *(long **)(param_1 + 0x118);
      if (plVar12 != plVar14) {
        if (plVar14 + 1 == plVar12) {
LAB_00adbca8:
          do {
            plVar8 = plVar12 + -1;
            if ((long *)*plVar8 != (long *)0x0) {
              (**(code **)(*(long *)*plVar8 + 0x18))();
              plVar12[-1] = 0;
            }
            plVar12 = plVar8;
          } while (plVar14 != plVar8);
        }
        else {
          plVar8 = plVar14;
          do {
            if ((long *)*plVar8 != (long *)0x0) {
              (**(code **)(*(long *)*plVar8 + 0x18))();
              *plVar8 = 0;
            }
            plVar14 = plVar8 + 1;
            lVar7 = *plVar14;
            *plVar14 = 0;
            *plVar8 = lVar7;
            plVar8 = plVar14;
          } while (plVar12 + -1 != plVar14);
          plVar12 = *(long **)(param_1 + 0x118);
          if (plVar12 != plVar14) goto LAB_00adbca8;
        }
        *(long **)(param_1 + 0x118) = plVar14;
      }
    }
  }
  else {
    do {
      lVar7 = *plVar14;
      puVar13 = (undefined8 *)(lVar7 + 8);
      plVar8 = (long *)(**(code **)*puVar13)(puVar13);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar9 = FUN_00706e40();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar5) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          lVar10 = *(long *)(*(long *)(param_1 + 0x6f0) + 0x58);
          if (lVar10 != 0) {
            plVar8 = (long *)(lVar10 + 0x48);
            (**(code **)(*plVar8 + 0x10))(plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
          }
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          }
          if (lVar7 == lVar10) goto LAB_00adba6c;
          break;
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar12);
    plVar14 = plVar12;
LAB_00adba6c:
    if (*(long **)(param_1 + 0x148) == plVar14) goto LAB_00adbb2c;
    lVar7 = nn::os::GetCurrentThread();
    plVar12 = (long *)(param_1 + 0x108);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        (**(code **)(*(long *)*plVar14 + 0x40))();
        *(undefined1 *)(param_1 + 0x181) = 1;
        goto LAB_00adbcd4;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar11 = *(long **)(param_1 + 0x148);
    plVar8 = plVar14 + 1;
    if (plVar8 == plVar11) {
LAB_00adbae8:
      do {
        plVar11 = plVar8 + -1;
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 0x18))();
          plVar8[-1] = 0;
        }
        plVar8 = plVar11;
      } while (plVar14 != plVar11);
    }
    else {
      plVar8 = plVar14;
      do {
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          *plVar8 = 0;
        }
        plVar14 = plVar8 + 1;
        lVar7 = *plVar14;
        *plVar14 = 0;
        *plVar8 = lVar7;
        plVar8 = plVar14;
      } while (plVar11 + -1 != plVar14);
      plVar8 = *(long **)(param_1 + 0x148);
      if (plVar8 != plVar14) goto LAB_00adbae8;
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
  }
LAB_00adbcd4:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  lVar7 = *(long *)(param_1 + 0x6f0);
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
LAB_00adbd04:
  local_70 = *(undefined8 *)(param_1 + 0x5d0);
  lVar7 = FUN_00adc750(&local_68,*(undefined8 *)(param_1 + 8),&local_70);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_68 = lVar7;
  FUN_006d9640(param_1,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(param_1 + 0x6f0);
  *(long *)(param_1 + 0x6f0) = lVar7;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    lVar7 = *(long *)(param_1 + 0x6f0);
  }
  FUN_0069ae40(lVar7,param_2,param_3,1);
  return;
}


