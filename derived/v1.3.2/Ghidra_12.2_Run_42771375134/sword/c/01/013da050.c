/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013da050; name: FUN_013da050
 */


void FUN_013da050(long param_1,byte param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long local_108;
  long local_100;
  byte local_f4 [4];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  byte *apbStack_d0 [14];
  
  local_f4[0] = param_2 & 1;
  lVar18 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  lVar19 = *(long *)PTR_DAT_027194e0;
  puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar10 = (long *)(**(code **)*puVar17)(puVar17);
  lVar11 = FUN_0132d9a0();
  for (; plVar10 != (long *)lVar11; plVar10 = (long *)*plVar10) {
  }
  plVar10 = (long *)puVar17[0x60];
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[0xb];
    if (*(long *)(lVar11 + 0x58) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x60))();
      *(undefined8 *)(lVar11 + 0x58) = uVar12;
    }
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_010672e0(&local_100,lVar18,0);
  FUN_010672e0(&local_108,lVar18,1);
  plVar13 = (long *)FUN_01052410(local_100);
  (**(code **)(*plVar13 + 0x70))(plVar13,local_f4[0] == 0,0);
  FUN_01052f20(local_100,local_f4[0] == 0);
  FUN_01052d20(local_100,local_f4[0] == 0);
  FUN_01053890(local_100,local_f4[0] == 0);
  plVar13 = (long *)FUN_01052410(local_108);
  (**(code **)(*plVar13 + 0x70))(plVar13,local_f4[0] == 0,0);
  FUN_01052f20(local_108,local_f4[0] == 0);
  FUN_01052d20(local_108,local_f4[0] == 0);
  FUN_01053890(local_108,local_f4[0] == 0);
  FUN_00e80990(local_f4[0] == 0);
  if (*(long *)(lVar19 + 0x108) != 0) {
    puVar17 = *(undefined8 **)(lVar19 + 0x100);
    lVar11 = *(long *)(lVar19 + 0x108) << 3;
    do {
      uVar14 = (**(code **)(*(long *)*puVar17 + 0x40))();
      if ((uVar14 & 1) == 0) {
        local_e0 = &LAB_013df4b0;
        local_d8 = &LAB_013df4c0;
        local_f0 = &LAB_013df460;
        local_e8 = FUN_013df4a0;
        apbStack_d0[0] = local_f4;
        FUN_00dcd4a0(*puVar17,&local_f0);
        pcVar8 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined1 *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar8)(apbStack_d0);
        }
      }
      puVar7 = PTR_DAT_027195c0;
      puVar6 = PTR_DAT_027195b8;
      puVar17 = puVar17 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
    if (*(long *)(lVar19 + 0x108) != 0) {
      plVar13 = *(long **)(lVar19 + 0x100);
      plVar2 = plVar13 + *(long *)(lVar19 + 0x108);
      do {
        while (uVar14 = (**(code **)(*(long *)*plVar13 + 0x40))(), (uVar14 & 1) == 0) {
          lVar11 = *plVar13;
          plVar15 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))
                                      ((undefined8 *)(lVar11 + 0x50));
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            uVar12 = FUN_00a8c480();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
            if (plVar15 != (long *)0x0) goto LAB_013da43c;
            break;
          }
          while( true ) {
            if (plVar15 == (long *)0x0) goto LAB_013da44c;
LAB_013da43c:
            if (plVar15 == (long *)puVar7) break;
            plVar15 = (long *)*plVar15;
          }
          lVar19 = nn::os::GetCurrentThread();
          plVar15 = (long *)(lVar11 + 0xf0);
          do {
            if (*plVar15 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xe4));
                while (*plVar15 == 0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar5) {
                    *plVar15 = lVar19;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_013da314;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar19;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_013da314:
          plVar16 = *(long **)(lVar11 + 0x140);
          plVar3 = *(long **)(lVar11 + 0x148);
          if (plVar16 == plVar3) {
LAB_013da368:
            plVar3 = *(long **)(lVar11 + 0x118);
            for (plVar16 = *(long **)(lVar11 + 0x110); plVar16 != plVar3; plVar16 = plVar16 + 1) {
              lVar19 = *plVar16;
              uVar14 = FUN_00a8cbe0(lVar19 + 8);
              if ((uVar14 & 1) != 0) {
                local_f0 = (undefined1 *)0x0;
                FUN_007273c0(lVar19 + -0x48,local_f4[0] == 0,&local_f0);
              }
            }
          }
          else {
            do {
              lVar19 = *plVar16;
              uVar14 = FUN_00a8cbe0(lVar19 + 8);
              if ((uVar14 & 1) != 0) {
                local_f0 = (undefined1 *)0x0;
                FUN_007273c0(lVar19 + -0x48,local_f4[0] == 0,&local_f0);
              }
              plVar16 = plVar16 + 1;
            } while (plVar3 != plVar16);
            if (*(long **)(lVar11 + 0x148) == plVar3) goto LAB_013da368;
          }
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xe4));
          plVar13 = plVar13 + 1;
          if (plVar13 == plVar2) goto LAB_013da458;
        }
LAB_013da44c:
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar2);
    }
  }
LAB_013da458:
  if (local_f4[0] == 0) {
    FUN_0106ad60(*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0xd0),*(undefined4 *)(param_1 + 0x578))
    ;
  }
  else {
    FUN_0106ad60(*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0xd0),2);
  }
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
    local_108 = 0;
  }
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    local_100 = 0;
  }
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[0xb];
    piVar1 = (int *)(lVar11 + 0x54);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x60) = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  return;
}


