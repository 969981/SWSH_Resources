/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a855e0; name: FUN_00a855e0
 */


void FUN_00a855e0(long param_1,byte param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  int local_e8;
  byte local_e4 [4];
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  byte *local_c0;
  int *piStack_b8;
  
  local_e4[0] = param_2 & 1;
  lVar14 = *(long *)(param_1 + 0x5c0);
  local_e8 = param_3;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x108) != 0)) {
    puVar15 = *(undefined8 **)(lVar14 + 0x100);
    lVar14 = *(long *)(lVar14 + 0x108) << 3;
    do {
      uVar10 = (**(code **)(*(long *)*puVar15 + 0x40))();
      if ((uVar10 & 1) == 0) {
        local_e0 = &LAB_00a8f4a0;
        local_d8 = FUN_00a8f540;
        local_d0 = &LAB_00a8f550;
        puStack_c8 = &LAB_00a8f560;
        local_c0 = local_e4;
        piStack_b8 = &local_e8;
        FUN_00dcd4a0(*puVar15,&local_e0);
        pcVar8 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined1 *)0x0;
          puStack_c8 = (undefined1 *)0x0;
          local_e0 = (undefined1 *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar8)(&local_c0);
        }
      }
      puVar15 = puVar15 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  puVar7 = PTR_DAT_027195c0;
  puVar6 = PTR_DAT_027195b8;
  lVar14 = *(long *)(param_1 + 0x5b8);
  if (lVar14 != 0) {
    plVar1 = *(long **)(lVar14 + 0xb8);
    for (plVar17 = *(long **)(lVar14 + 0xb0); plVar17 != plVar1; plVar17 = plVar17 + 1) {
      while (uVar10 = (**(code **)(*(long *)*plVar17 + 0x88))(), (uVar10 & 1) == 0) {
        lVar14 = *plVar17;
        plVar13 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x50))((undefined8 *)(lVar14 + 0x50))
        ;
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar12 = FUN_00a8c480();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
          if (plVar13 != (long *)0x0) goto LAB_00a858f0;
          break;
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00a85900;
LAB_00a858f0:
          if (plVar13 == (long *)puVar7) break;
          plVar13 = (long *)*plVar13;
        }
        lVar11 = nn::os::GetCurrentThread();
        plVar13 = (long *)(lVar14 + 0xf0);
        do {
          if (*plVar13 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xe4));
              while (*plVar13 == 0) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar4) {
                  *plVar13 = lVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_00a8571c;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_00a8571c:
        plVar16 = *(long **)(lVar14 + 0x140);
        plVar2 = *(long **)(lVar14 + 0x148);
        if (plVar16 == plVar2) {
LAB_00a8578c:
          if (*(long **)(lVar14 + 0x148) == plVar16) {
LAB_00a85798:
            plVar2 = *(long **)(lVar14 + 0x118);
            for (plVar16 = *(long **)(lVar14 + 0x110); plVar16 != plVar2; plVar16 = plVar16 + 1) {
              lVar11 = *plVar16;
              uVar10 = FUN_00a8cbe0(lVar11 + 8);
              if ((uVar10 & 1) != 0) {
                lVar11 = lVar11 + -0x48;
                if (local_e8 == 0) {
                  local_e0 = (undefined1 *)0x9;
                  bVar5 = local_e4[0];
                }
                else {
                  if (local_e8 == 1) {
                    bVar5 = local_e4[0] != 0;
                  }
                  else {
                    local_e0 = (undefined1 *)0x9;
                    FUN_00727490(lVar11,local_e4[0] != 0,&local_e0);
                    bVar5 = local_e4[0];
                  }
                  local_e0 = (undefined1 *)0x11;
                }
                FUN_00727490(lVar11,bVar5,&local_e0);
                break;
              }
            }
          }
        }
        else {
          lVar11 = *plVar16;
          uVar10 = FUN_00a8cbe0(lVar11 + 8);
          if ((uVar10 & 1) == 0) {
            do {
              plVar16 = plVar16 + 1;
              if (plVar2 == plVar16) {
                plVar16 = plVar2;
                goto LAB_00a8578c;
              }
              lVar11 = *plVar16;
              uVar10 = FUN_00a8cbe0(lVar11 + 8);
            } while ((uVar10 & 1) == 0);
          }
          if (local_e8 == 0) {
            local_e0 = (undefined1 *)0x9;
            bVar5 = local_e4[0];
          }
          else {
            if (local_e8 == 1) {
              bVar5 = local_e4[0] != 0;
            }
            else {
              local_e0 = (undefined1 *)0x9;
              FUN_00727490(lVar11 + -0x48,local_e4[0] != 0,&local_e0);
              bVar5 = local_e4[0];
            }
            local_e0 = (undefined1 *)0x11;
          }
          FUN_00727490(lVar11 + -0x48,bVar5,&local_e0);
          if (*(long **)(lVar14 + 0x148) == plVar16) goto LAB_00a85798;
        }
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xe4));
        plVar17 = plVar17 + 1;
        if (plVar17 == plVar1) {
          return;
        }
      }
LAB_00a85900:
    }
  }
  return;
}


