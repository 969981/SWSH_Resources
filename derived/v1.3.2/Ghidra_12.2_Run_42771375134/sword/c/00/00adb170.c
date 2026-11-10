/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adb170; name: FUN_00adb170
 */


void FUN_00adb170(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  FUN_00ac8dd0();
  if (*(long *)(param_1 + 0x6f0) != 0) {
    lVar6 = nn::os::GetCurrentThread();
    plVar14 = (long *)(param_1 + 0xf0);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
          while (*plVar14 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar2) {
              *plVar14 = lVar6;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00adb1ec;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00adb1ec:
    puVar4 = PTR_DAT_027150b0;
    puVar3 = PTR_DAT_027150a8;
    plVar13 = *(long **)(param_1 + 0x140);
    plVar11 = *(long **)(param_1 + 0x148);
    if (plVar13 == plVar11) {
LAB_00adb3a8:
      puVar4 = PTR_DAT_027150b0;
      puVar3 = PTR_DAT_027150a8;
      plVar13 = *(long **)(param_1 + 0x110);
      plVar11 = *(long **)(param_1 + 0x118);
      if (plVar13 != plVar11) {
        do {
          lVar6 = *plVar13;
          puVar12 = (undefined8 *)(lVar6 + 8);
          plVar7 = (long *)(**(code **)*puVar12)(puVar12);
          if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
            uVar8 = FUN_00706e40();
            *(undefined8 *)puVar4 = uVar8;
            __cxa_guard_release(puVar3);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar4) {
              lVar6 = *(long *)(lVar6 + 0x10);
              if (lVar6 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
              }
              lVar15 = *(long *)(*(long *)(param_1 + 0x6f0) + 0x58);
              if (lVar15 != 0) {
                plVar7 = (long *)(lVar15 + 0x48);
                (**(code **)(*plVar7 + 0x10))(plVar7);
                (**(code **)(*plVar7 + 0x18))(plVar7);
              }
              if (lVar6 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
              }
              if (lVar6 == lVar15) goto LAB_00adb4c4;
              break;
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar11);
        plVar13 = plVar11;
LAB_00adb4c4:
        plVar11 = *(long **)(param_1 + 0x118);
        if (plVar11 != plVar13) {
          if (plVar13 + 1 == plVar11) {
LAB_00adb524:
            do {
              plVar7 = plVar11 + -1;
              if ((long *)*plVar7 != (long *)0x0) {
                (**(code **)(*(long *)*plVar7 + 0x18))();
                plVar11[-1] = 0;
              }
              plVar11 = plVar7;
            } while (plVar13 != plVar7);
          }
          else {
            plVar7 = plVar13;
            do {
              if ((long *)*plVar7 != (long *)0x0) {
                (**(code **)(*(long *)*plVar7 + 0x18))();
                *plVar7 = 0;
              }
              plVar13 = plVar7 + 1;
              lVar6 = *plVar13;
              *plVar13 = 0;
              *plVar7 = lVar6;
              plVar7 = plVar13;
            } while (plVar11 + -1 != plVar13);
            plVar11 = *(long **)(param_1 + 0x118);
            if (plVar11 != plVar13) goto LAB_00adb524;
          }
          *(long **)(param_1 + 0x118) = plVar13;
        }
      }
    }
    else {
      do {
        lVar6 = *plVar13;
        puVar12 = (undefined8 *)(lVar6 + 8);
        plVar7 = (long *)(**(code **)*puVar12)(puVar12);
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          uVar8 = FUN_00706e40();
          *(undefined8 *)puVar4 = uVar8;
          __cxa_guard_release(puVar3);
        }
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar4) {
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
            }
            lVar15 = *(long *)(*(long *)(param_1 + 0x6f0) + 0x58);
            if (lVar15 != 0) {
              plVar7 = (long *)(lVar15 + 0x48);
              (**(code **)(*plVar7 + 0x10))(plVar7);
              (**(code **)(*plVar7 + 0x18))(plVar7);
            }
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
            }
            if (lVar6 == lVar15) goto LAB_00adb2e8;
            break;
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar11);
      plVar13 = plVar11;
LAB_00adb2e8:
      if (*(long **)(param_1 + 0x148) == plVar13) goto LAB_00adb3a8;
      lVar6 = nn::os::GetCurrentThread();
      plVar11 = (long *)(param_1 + 0x108);
      do {
        if (*plVar11 != 0) {
          ClearExclusiveLocal();
          (**(code **)(*(long *)*plVar13 + 0x40))();
          *(undefined1 *)(param_1 + 0x181) = 1;
          goto LAB_00adb550;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar10 = *(long **)(param_1 + 0x148);
      plVar7 = plVar13 + 1;
      if (plVar7 == plVar10) {
LAB_00adb364:
        do {
          plVar10 = plVar7 + -1;
          if ((long *)*plVar10 != (long *)0x0) {
            (**(code **)(*(long *)*plVar10 + 0x18))();
            plVar7[-1] = 0;
          }
          plVar7 = plVar10;
        } while (plVar13 != plVar10);
      }
      else {
        plVar7 = plVar13;
        do {
          if ((long *)*plVar7 != (long *)0x0) {
            (**(code **)(*(long *)*plVar7 + 0x18))();
            *plVar7 = 0;
          }
          plVar13 = plVar7 + 1;
          lVar6 = *plVar13;
          *plVar13 = 0;
          *plVar7 = lVar6;
          plVar7 = plVar13;
        } while (plVar10 + -1 != plVar13);
        plVar7 = *(long **)(param_1 + 0x148);
        if (plVar7 != plVar13) goto LAB_00adb364;
      }
      *(long **)(param_1 + 0x148) = plVar13;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
    }
LAB_00adb550:
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
    lVar6 = *(long *)(param_1 + 0x6f0);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  plVar14 = (long *)(param_1 + 0xf0);
  lVar6 = nn::os::GetCurrentThread();
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar14 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar2) {
            *plVar14 = lVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00adb5c0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = lVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00adb5c0:
  plVar13 = *(long **)(param_1 + 0x140);
  plVar11 = *(long **)(param_1 + 0x148);
  if (plVar13 != plVar11) {
    do {
      lVar6 = *plVar13;
      uVar9 = FUN_00a8cbe0(lVar6 + 8);
      if ((uVar9 & 1) != 0) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar15 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x58);
        if (lVar15 != 0) {
          plVar7 = (long *)(lVar15 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        }
        if (lVar6 == lVar15) goto LAB_00adb654;
      }
      plVar13 = plVar13 + 1;
    } while (plVar11 != plVar13);
    plVar13 = plVar11;
LAB_00adb654:
    if (*(long **)(param_1 + 0x148) != plVar13) {
      lVar6 = nn::os::GetCurrentThread();
      plVar11 = (long *)(param_1 + 0x108);
      do {
        if (*plVar11 != 0) {
          ClearExclusiveLocal();
          (**(code **)(*(long *)*plVar13 + 0x40))();
          *(undefined1 *)(param_1 + 0x181) = 1;
          goto LAB_00adb854;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = lVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar10 = *(long **)(param_1 + 0x148);
      plVar7 = plVar13 + 1;
      if (plVar7 == plVar10) {
LAB_00adb6d0:
        do {
          plVar10 = plVar7 + -1;
          if ((long *)*plVar10 != (long *)0x0) {
            (**(code **)(*(long *)*plVar10 + 0x18))();
            plVar7[-1] = 0;
          }
          plVar7 = plVar10;
        } while (plVar13 != plVar10);
      }
      else {
        plVar7 = plVar13;
        do {
          if ((long *)*plVar7 != (long *)0x0) {
            (**(code **)(*(long *)*plVar7 + 0x18))();
            *plVar7 = 0;
          }
          plVar13 = plVar7 + 1;
          lVar6 = *plVar13;
          *plVar13 = 0;
          *plVar7 = lVar6;
          plVar7 = plVar13;
        } while (plVar10 + -1 != plVar13);
        plVar7 = *(long **)(param_1 + 0x148);
        if (plVar7 != plVar13) goto LAB_00adb6d0;
      }
      *(long **)(param_1 + 0x148) = plVar13;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar2) {
          *plVar11 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
      goto LAB_00adb854;
    }
  }
  plVar13 = *(long **)(param_1 + 0x110);
  plVar11 = *(long **)(param_1 + 0x118);
  if (plVar13 == plVar11) goto LAB_00adb854;
  do {
    lVar6 = *plVar13;
    uVar9 = FUN_00a8cbe0(lVar6 + 8);
    if ((uVar9 & 1) != 0) {
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x58);
      if (lVar15 != 0) {
        plVar7 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      }
      if (lVar6 == lVar15) goto LAB_00adb7a8;
    }
    plVar13 = plVar13 + 1;
  } while (plVar11 != plVar13);
  plVar13 = plVar11;
LAB_00adb7a8:
  plVar11 = *(long **)(param_1 + 0x118);
  if (plVar11 == plVar13) goto LAB_00adb854;
  if (plVar13 + 1 == plVar11) {
LAB_00adb808:
    do {
      plVar7 = plVar11 + -1;
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x18))();
        plVar11[-1] = 0;
      }
      plVar11 = plVar7;
    } while (plVar13 != plVar7);
  }
  else {
    plVar7 = plVar13;
    do {
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x18))();
        *plVar7 = 0;
      }
      plVar13 = plVar7 + 1;
      lVar6 = *plVar13;
      *plVar13 = 0;
      *plVar7 = lVar6;
      plVar7 = plVar13;
    } while (plVar11 + -1 != plVar13);
    plVar11 = *(long **)(param_1 + 0x118);
    if (plVar11 != plVar13) goto LAB_00adb808;
  }
  *(long **)(param_1 + 0x118) = plVar13;
LAB_00adb854:
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  lVar6 = *(long *)(param_1 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x700) = 0;
  return;
}


