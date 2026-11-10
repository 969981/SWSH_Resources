/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013eb6b0; name: FUN_013eb6b0
 */


void FUN_013eb6b0(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  long *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 *local_b0 [12];
  long local_48;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_013c77c0(param_1);
      lVar6 = lRam0000000000000358;
      goto joined_r0x013eb720;
    }
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    lVar6 = FUN_0132d9a0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar9 = puVar8 + -10;
        FUN_013c77c0(param_1);
        lVar6 = puVar8[0x61];
        if (lVar6 == 0) goto LAB_013eb734;
        goto LAB_013eb724;
      }
    }
  }
  FUN_013c77c0(param_1);
  lVar6 = lRam0000000000000358;
joined_r0x013eb720:
  puVar9 = (undefined8 *)0x0;
  lRam0000000000000358 = lVar6;
  if (lVar6 != 0) {
LAB_013eb724:
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
LAB_013eb734:
  local_150 = &LAB_013f0320;
  local_148 = FUN_013f03e0;
  local_140 = &LAB_013f0640;
  local_138 = &LAB_013f0650;
  local_d0 = (long *)PTR_LAB_02727708;
  local_c8 = (code *)PTR_FUN_02727710;
  local_c0 = PTR_LAB_02727718;
  local_b8 = PTR_LAB_02727720;
  alStack_130[0] = param_1;
  local_b0[0] = (undefined1 *)&local_150;
  FUN_01307150(&local_48,lVar6,&local_d0);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined *)0x0;
    local_b8 = (undefined *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(local_b0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar3)(alStack_130);
  }
  iVar4 = FUN_013c2950(*(undefined8 *)(param_1 + 0x98));
  if (iVar4 == 2) {
    lVar10 = puVar9[0xc];
    lVar7 = nn::os::GetCurrentThread();
    plVar5 = (long *)(lVar10 + 0x70);
    do {
      if (*plVar5 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 100));
          while (*plVar5 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_013eb89c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_013eb89c:
    local_b0[0] = (undefined1 *)CONCAT71(local_b0[0]._1_7_,1);
    local_d0 = (long *)PTR_LAB_027289b0;
    local_c8 = (code *)PTR_FUN_027289b8;
    local_c0 = PTR_LAB_027289c0;
    local_b8 = PTR_LAB_027289c8;
    FUN_012d5b10(lVar10,0xb562943c93a7ecfe,&local_d0,0);
    pcVar3 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined *)0x0;
      local_b8 = (undefined *)0x0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar3)(local_b0);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 100));
    FUN_013ebaa0(&local_d0,*(undefined8 *)(param_1 + 8));
    if (*(long *)(param_1 + 0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  else {
    iVar4 = FUN_013c2950(*(undefined8 *)(param_1 + 0x98));
    if (iVar4 == 7) {
      lVar10 = puVar9[0xc];
      lVar7 = nn::os::GetCurrentThread();
      plVar5 = (long *)(lVar10 + 0x70);
      do {
        if (*plVar5 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 100));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_013eb994;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_013eb994:
      local_d0 = (long *)PTR_LAB_02728010;
      local_c8 = (code *)PTR_FUN_02728018;
      local_c0 = PTR_LAB_02728020;
      local_b8 = PTR_LAB_02728028;
      FUN_012d5b10(lVar10,0x1e6024bab2bcdbec,&local_d0,0);
      pcVar3 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined *)0x0;
        local_b8 = (undefined *)0x0;
        local_d0 = (long *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar3)(local_b0);
      }
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 100));
      FUN_013ebc60(&local_d0,*(undefined8 *)(param_1 + 8));
      lVar7 = *(long *)(param_1 + 0x90);
    }
    else {
      FUN_013ebe20(&local_d0,*(undefined8 *)(param_1 + 8));
      lVar7 = *(long *)(param_1 + 0x90);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
  }
  *(long **)(param_1 + 0x90) = local_d0;
  (**(code **)(*local_d0 + 0x38))(local_d0,param_1);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


