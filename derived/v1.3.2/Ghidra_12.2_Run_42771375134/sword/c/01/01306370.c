/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01306370; name: FUN_01306370
 */


void FUN_01306370(long param_1,long *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *local_68;
  
  if (*param_2 == 0) {
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xe8);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_013063e8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_013063e8:
  plVar3 = *(long **)(param_1 + 0xf8);
  for (plVar8 = *(long **)(param_1 + 0xf0); plVar8 != plVar3; plVar8 = plVar8 + 1) {
    lVar7 = *plVar8;
    if ((lVar7 == *param_2) && (*plVar8 = 0, lVar7 != 0)) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0xdc);
  nn::os::SignalLightEvent(pLVar2);
  plVar8 = (long *)FUN_01308970(&local_68,*(undefined8 *)(param_1 + 8));
  if (plVar8 != (long *)0x0) {
    (**(code **)(plVar8[9] + 0x10))();
  }
  lVar13 = *param_2;
  lVar7 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar13 + 0xf0);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xe4));
        while (*plVar3 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_013064ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_013064ac:
  plVar10 = *(long **)(lVar13 + 0x140);
  plVar4 = *(long **)(lVar13 + 0x148);
  if (plVar10 != plVar4) {
    if (plVar8 == (long *)0x0) {
      do {
        lVar11 = *plVar10;
        puVar12 = (undefined8 *)(lVar11 + 8);
        plVar9 = (long *)(**(code **)*puVar12)(puVar12);
        lVar7 = FUN_00d3ff90();
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)lVar7) {
            local_68 = (long *)0x0;
            plVar9 = (long *)(lVar11 + -0x48);
            (**(code **)(*plVar9 + 0x70))(plVar9,&local_68);
            if (local_68 != (long *)0x0) {
              (**(code **)(local_68[9] + 0x18))();
              local_68 = (long *)0x0;
            }
            FUN_012dc480(plVar9,0);
            break;
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar4);
    }
    else {
      do {
        lVar11 = *plVar10;
        puVar12 = (undefined8 *)(lVar11 + 8);
        plVar9 = (long *)(**(code **)*puVar12)(puVar12);
        lVar7 = FUN_00d3ff90();
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)lVar7) {
            local_68 = plVar8;
            (**(code **)(plVar8[9] + 0x10))(plVar8 + 9);
            plVar9 = (long *)(lVar11 + -0x48);
            (**(code **)(*plVar9 + 0x70))(plVar9,&local_68);
            if (local_68 != (long *)0x0) {
              (**(code **)(local_68[9] + 0x18))();
              local_68 = (long *)0x0;
            }
            FUN_012dc480(plVar9,0);
            break;
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar4);
    }
    if (*(long **)(lVar13 + 0x148) != plVar4) goto LAB_01306730;
  }
  plVar10 = *(long **)(lVar13 + 0x110);
  plVar4 = *(long **)(lVar13 + 0x118);
  if (plVar10 != plVar4) {
    if (plVar8 == (long *)0x0) {
      do {
        lVar11 = *plVar10;
        puVar12 = (undefined8 *)(lVar11 + 8);
        plVar9 = (long *)(**(code **)*puVar12)(puVar12);
        lVar7 = FUN_00d3ff90();
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)lVar7) {
            local_68 = (long *)0x0;
            plVar9 = (long *)(lVar11 + -0x48);
            (**(code **)(*plVar9 + 0x70))(plVar9,&local_68);
            if (local_68 != (long *)0x0) {
              (**(code **)(local_68[9] + 0x18))();
              local_68 = (long *)0x0;
            }
            FUN_012dc480(plVar9,0);
            break;
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar4);
    }
    else {
      do {
        lVar11 = *plVar10;
        puVar12 = (undefined8 *)(lVar11 + 8);
        plVar9 = (long *)(**(code **)*puVar12)(puVar12);
        lVar7 = FUN_00d3ff90();
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)lVar7) {
            local_68 = plVar8;
            (**(code **)(plVar8[9] + 0x10))(plVar8 + 9);
            plVar9 = (long *)(lVar11 + -0x48);
            (**(code **)(*plVar9 + 0x70))(plVar9,&local_68);
            if (local_68 != (long *)0x0) {
              (**(code **)(local_68[9] + 0x18))();
              local_68 = (long *)0x0;
            }
            FUN_012dc480(plVar9,0);
            break;
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar4);
    }
  }
LAB_01306730:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xe4));
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0130677c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0130677c:
  plVar3 = *(long **)(param_1 + 0x120);
  do {
    if (plVar3 == *(long **)(param_1 + 0x128)) {
LAB_01306830:
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      nn::os::SignalLightEvent(pLVar2);
      if (plVar8 != (long *)0x0) {
        (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
      }
      return;
    }
    if ((*plVar3 == 0) || (*(int *)(*plVar3 + 0x54) == 0)) {
      (**(code **)(*plVar8 + 0x10))(&local_68,plVar8);
      plVar10 = local_68;
      local_68 = (long *)0x0;
      lVar7 = *param_2;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      *plVar3 = (long)plVar10;
      if (plVar3[1] != 0) {
        (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
        plVar3[1] = 0;
      }
      plVar3[1] = lVar7;
      if (local_68 != (long *)0x0) {
        (**(code **)(local_68[9] + 0x18))();
        local_68 = (long *)0x0;
      }
      goto LAB_01306830;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}


