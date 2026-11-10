/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a13f0; name: FUN_013a13f0
 */


/* WARNING: Removing unreachable block (ram,0x013a1b90) */

void FUN_013a13f0(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar13 = *param_2;
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar13 + 0x58);
    if (*(long *)(lVar14 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x60))();
      *(undefined8 *)(lVar14 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar14 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x830);
  *(long *)(param_1 + 0x830) = lVar13;
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    piVar1 = (int *)(lVar13 + 0x54);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  local_80 = 0x35d9c9b3a8fe2c46;
  local_78 = "bin/demo/res/sd8014/camera/sd8014_spise_cam_02.gfbcama";
  local_70 = 0x36;
  uStack_68 = 0xc49f7f8cdadf82af;
  local_60 = "bin/demo/res/sd8014/camera/sd8014_spise_cam_01.gfbcama";
  uStack_58 = 0x36;
  FUN_014bb440(&local_b0,&local_80);
  puVar5 = PTR_DAT_02710788;
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,&local_b0,0,*(undefined8 *)(param_1 + 8),
               0);
  if (*(long *)(param_1 + 0x618) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x618) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x618) = 0;
  }
  lVar13 = local_48;
  *(long *)(param_1 + 0x618) = local_48;
  if (local_48 != 0) {
    plVar8 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((*(long *)(param_1 + 0x620) != 0) || (*(long *)(param_1 + 0x6a0) != 0)) {
      FUN_006e1e70(lVar13,param_1 + 0x610,1);
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if ((local_98 != 0) && (local_b0 != 0)) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_b0 = 0;
  uStack_a8 = 0xcbf29ce484222645;
  local_a0 = &DAT_01d38550;
  local_98 = 0;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  FUN_014bb440(&local_b0,&uStack_68);
  FUN_006dccd0(&local_48,*(undefined8 *)puVar5,1,&local_b0,0,*(undefined8 *)(param_1 + 8),0);
  if (*(long *)(param_1 + 0x728) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x728) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x728) = 0;
  }
  *(long *)(param_1 + 0x728) = local_48;
  if (local_48 != 0) {
    plVar8 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((*(long *)(param_1 + 0x730) != 0) || (*(long *)(param_1 + 0x7b0) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x720,1);
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if ((local_98 != 0) && (local_b0 != 0)) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_b0 = 0;
  uStack_a8 = 0xcbf29ce484222645;
  local_a0 = &DAT_01d38550;
  local_98 = 0;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  plVar8 = *(long **)(param_1 + 8);
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar8;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  lVar14 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0x10);
  if (lVar14 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_0070c3a0(lVar14,0);
  *(long **)(lVar14 + 8) = plVar8;
  *(long *)(lVar14 + 0x10) = lVar14;
  *(undefined8 *)(lVar14 + 0x18) = 0x1b0;
  *(undefined8 *)(lVar14 + 0x20) = 0x10;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  if (lVar14 != 0) {
    lVar13 = *(long *)(lVar14 + 0x58);
    if (*(long *)(lVar13 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x60))();
      *(undefined8 *)(lVar13 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x838);
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    piVar1 = (int *)(lVar13 + 0x54);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x838) = 0;
  }
  *(long *)(param_1 + 0x838) = lVar14;
  lVar13 = FUN_00a997b0(&local_b0,*(undefined8 *)(lVar14 + 8));
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  local_b0 = lVar13;
  FUN_006d9640(lVar14,&local_b0);
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(param_1 + 0x840);
  *(long *)(param_1 + 0x840) = lVar13;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  }
  FUN_010257f0(*(undefined8 *)(param_1 + 0x838),param_1 + 0x80);
  lVar14 = *(long *)(*(long *)(param_1 + 0x838) + 0x170);
  lVar13 = nn::os::GetCurrentThread();
  plVar8 = (long *)(lVar14 + 0x158);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x14c));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013a1868;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013a1868:
  puVar5 = PTR_DAT_02715078;
  lVar13 = *(long *)(param_1 + 0x68);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
    lVar15 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0x54);
    puVar9 = (undefined8 *)PTR_DAT_02715080;
    iVar10 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        puVar16 = *(undefined8 **)(lVar13 + 0x58);
        if ((*puVar5 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar5);
          puVar9 = (undefined8 *)PTR_DAT_02715080;
          if (iVar6 != 0) {
            uVar7 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar7;
            __cxa_guard_release(puVar5);
            puVar9 = (undefined8 *)PTR_DAT_02715080;
          }
        }
        lVar15 = 0;
        if (puVar16 == (undefined8 *)0x0) goto LAB_013a1938;
        while (puVar16 != puVar9) {
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 == (undefined8 *)0x0) {
            lVar15 = 0;
            goto LAB_013a1938;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            lVar15 = *(long *)(lVar13 + 0x60) + -0x50;
          }
          goto LAB_013a1938;
        }
        lVar15 = 0;
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_013a1938;
      }
      ClearExclusiveLocal();
      lVar15 = 0;
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_013a1938:
  FUN_006d1640(lVar14,*(undefined8 *)(lVar15 + 0x170),0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x838) + 0x178);
  lVar13 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar15 + 0x158);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x14c));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013a19ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013a19ac:
  puVar5 = PTR_DAT_02715078;
  lVar13 = *(long *)(param_1 + 0x68);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
LAB_013a1a98:
    lVar17 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0x54);
    puVar11 = PTR_DAT_02715080;
    iVar10 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar13 + 0x58);
        if ((*puVar5 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar5);
          puVar11 = PTR_DAT_02715080;
          if (iVar6 != 0) {
            uVar7 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar7;
            __cxa_guard_release(puVar5);
            puVar11 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_013a1a98;
          if (plVar12 == (long *)puVar11) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar17 = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            lVar17 = *(long *)(lVar13 + 0x60) + -0x50;
          }
          goto LAB_013a1a9c;
        }
        lVar17 = 0;
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_013a1a9c;
      }
      ClearExclusiveLocal();
      lVar17 = 0;
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_013a1a9c:
  FUN_006d1640(lVar15,*(undefined8 *)(lVar17 + 0x178),0);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x14c));
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x14c));
  lVar14 = *(long *)(*(long *)(param_1 + 0x830) + 0x170);
  lVar13 = nn::os::GetCurrentThread();
  plVar8 = (long *)(lVar14 + 0x158);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x14c));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013a1b38;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013a1b38:
  FUN_006d1640(lVar14,*(undefined8 *)(*(long *)(param_1 + 0x838) + 0x170),0);
  lVar15 = *(long *)(*(long *)(param_1 + 0x830) + 0x178);
  lVar13 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar15 + 0x158);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x14c));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013a1bb0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013a1bb0:
  FUN_006d1640(lVar15,*(undefined8 *)(*(long *)(param_1 + 0x838) + 0x178),0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x14c));
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x14c));
  return;
}


