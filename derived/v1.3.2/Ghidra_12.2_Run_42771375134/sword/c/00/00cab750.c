/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cab750; name: FUN_00cab750
 */


void FUN_00cab750(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  long local_58;
  
  FUN_00cabbe0();
  lVar8 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0x15a0);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1594));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00cab7c8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00cab7c8:
  puVar6 = PTR_DAT_0271c2b8;
  puVar5 = PTR_DAT_0271c2b0;
  plVar11 = (long *)(*(long *)(param_1 + 0x15b0) + 8);
  plVar17 = (long *)*plVar11;
  if (plVar11 != plVar17) {
    do {
      plVar11 = *(long **)(plVar17[2] + 0x78);
      if (plVar11 != (long *)0x0) {
        (**(code **)(plVar11[9] + 0x10))();
      }
      (**(code **)(*plVar11 + 0x10))(&local_58,plVar11);
      lVar8 = local_58;
      local_58 = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
      }
      if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
        plVar11 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar8 + 0x54);
        iVar16 = *(int *)(lVar8 + 0x54);
        do {
          while( true ) {
            puVar14 = *(undefined8 **)(lVar8 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar10 = FUN_00c72b60();
              *(undefined8 *)puVar6 = uVar10;
              __cxa_guard_release(puVar5);
            }
            plVar11 = (long *)0x0;
            if (puVar14 == (undefined8 *)0x0) goto LAB_00cab918;
            while (puVar14 != (undefined8 *)puVar6) {
              puVar14 = (undefined8 *)*puVar14;
              if (puVar14 == (undefined8 *)0x0) {
                plVar11 = (long *)0x0;
                goto LAB_00cab918;
              }
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar16) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar8 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
              }
              goto LAB_00cab918;
            }
            plVar11 = (long *)0x0;
            iVar16 = iVar7;
            if (iVar7 == 0) goto LAB_00cab918;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar16 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00cab918:
      (**(code **)(*plVar11 + 0x38))(plVar11);
      if (plVar11 != (long *)0x0) {
        (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
      }
      if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
        plVar11 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar8 + 0x54);
        iVar16 = *(int *)(lVar8 + 0x54);
        do {
          while( true ) {
            puVar14 = *(undefined8 **)(lVar8 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar10 = FUN_00c72b60();
              *(undefined8 *)puVar6 = uVar10;
              __cxa_guard_release(puVar5);
            }
            plVar11 = (long *)0x0;
            if (puVar14 == (undefined8 *)0x0) goto LAB_00cab9d4;
            while (puVar14 != (undefined8 *)puVar6) {
              puVar14 = (undefined8 *)*puVar14;
              if (puVar14 == (undefined8 *)0x0) {
                plVar11 = (long *)0x0;
                goto LAB_00cab9d4;
              }
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar16) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar8 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
              }
              goto LAB_00cab9d4;
            }
            plVar11 = (long *)0x0;
            iVar16 = iVar7;
            if (iVar7 == 0) goto LAB_00cab9d4;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar16 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00cab9d4:
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11);
      if ((uVar9 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
          plVar15 = (long *)0x0;
        }
        else {
          piVar1 = (int *)(lVar8 + 0x54);
          iVar16 = *(int *)(lVar8 + 0x54);
          do {
            while( true ) {
              puVar14 = *(undefined8 **)(lVar8 + 0x58);
              if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
                uVar10 = FUN_00c72b60();
                *(undefined8 *)puVar6 = uVar10;
                __cxa_guard_release(puVar5);
              }
              plVar15 = (long *)0x0;
              if (puVar14 == (undefined8 *)0x0) goto LAB_00caba98;
              while (puVar14 != (undefined8 *)puVar6) {
                puVar14 = (undefined8 *)*puVar14;
                if (puVar14 == (undefined8 *)0x0) {
                  plVar15 = (long *)0x0;
                  goto LAB_00caba98;
                }
              }
              iVar7 = *piVar1;
              if (iVar7 != iVar16) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar16 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                plVar15 = (long *)0x0;
                if (*(long *)(lVar8 + 0x60) != 0) {
                  plVar15 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
                }
                goto LAB_00caba98;
              }
              plVar15 = (long *)0x0;
              iVar16 = iVar7;
              if (iVar7 == 0) goto LAB_00caba98;
            }
            ClearExclusiveLocal();
            plVar15 = (long *)0x0;
            iVar16 = iVar7;
          } while (iVar7 != 0);
        }
LAB_00caba98:
        uVar9 = (**(code **)(*plVar15 + 0x78))(plVar15);
        uVar9 = uVar9 & 0xffffffff;
        if (plVar15 != (long *)0x0) {
          (**(code **)(plVar15[9] + 0x18))(plVar15 + 9);
        }
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
      }
      if ((uVar9 & 1) == 0) {
        plVar11 = (long *)*plVar17;
      }
      else {
        plVar11 = (long *)*plVar17;
        plVar15 = (long *)plVar17[1];
        lVar13 = *plVar17;
        plVar12 = *(long **)(param_1 + 0x15b0);
        *plVar15 = lVar13;
        *(long **)(lVar13 + 8) = plVar15;
        *plVar12 = *plVar12 + -1;
        *plVar17 = 0;
        plVar17[1] = 0;
        if (plVar17[2] != 0) {
          (**(code **)(*(long *)(plVar17[2] + 0x48) + 0x18))();
          plVar17[2] = 0;
        }
      }
      plVar17 = plVar11;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
    } while ((long *)(*(long *)(param_1 + 0x15b0) + 8) != plVar17);
  }
  FUN_00cac700(*(undefined8 *)(param_1 + 0x1610));
  FUN_00cac700(*(undefined8 *)(param_1 + 0x1630));
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1594));
  FUN_00cac9a0(param_1,param_1 + 0x1698,0x1c);
  FUN_00cac9a0(param_1,param_1 + 0x1858,8);
  FUN_00cacbc0(param_1,param_1 + 0x18d8,0x1c);
  FUN_00cacbc0(param_1,param_1 + 0x1a98,7);
  return;
}


