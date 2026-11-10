/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7ae50; name: FUN_00c7ae50
 */


void FUN_00c7ae50(long param_1)

{
  long *plVar1;
  int *piVar2;
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
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c7aebc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c7aebc:
  puVar6 = PTR_DAT_0271c220;
  puVar5 = PTR_DAT_0271c218;
  plVar11 = (long *)(*(long *)(param_1 + 0x28) + 8);
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
        piVar2 = (int *)(lVar8 + 0x54);
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
            if (puVar14 == (undefined8 *)0x0) goto LAB_00c7b00c;
            while (puVar14 != (undefined8 *)puVar6) {
              puVar14 = (undefined8 *)*puVar14;
              if (puVar14 == (undefined8 *)0x0) {
                plVar11 = (long *)0x0;
                goto LAB_00c7b00c;
              }
            }
            iVar7 = *piVar2;
            if (iVar7 != iVar16) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar8 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
              }
              goto LAB_00c7b00c;
            }
            plVar11 = (long *)0x0;
            iVar16 = iVar7;
            if (iVar7 == 0) goto LAB_00c7b00c;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar16 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00c7b00c:
      (**(code **)(*plVar11 + 0x38))(plVar11);
      if (plVar11 != (long *)0x0) {
        (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
      }
      if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
        plVar11 = (long *)0x0;
      }
      else {
        piVar2 = (int *)(lVar8 + 0x54);
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
            if (puVar14 == (undefined8 *)0x0) goto LAB_00c7b0c8;
            while (puVar14 != (undefined8 *)puVar6) {
              puVar14 = (undefined8 *)*puVar14;
              if (puVar14 == (undefined8 *)0x0) {
                plVar11 = (long *)0x0;
                goto LAB_00c7b0c8;
              }
            }
            iVar7 = *piVar2;
            if (iVar7 != iVar16) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar8 + 0x60) != 0) {
                plVar11 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
              }
              goto LAB_00c7b0c8;
            }
            plVar11 = (long *)0x0;
            iVar16 = iVar7;
            if (iVar7 == 0) goto LAB_00c7b0c8;
          }
          ClearExclusiveLocal();
          plVar11 = (long *)0x0;
          iVar16 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00c7b0c8:
      uVar9 = (**(code **)(*plVar11 + 0x70))(plVar11);
      if ((uVar9 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
          plVar15 = (long *)0x0;
        }
        else {
          piVar2 = (int *)(lVar8 + 0x54);
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
              if (puVar14 == (undefined8 *)0x0) goto LAB_00c7b18c;
              while (puVar14 != (undefined8 *)puVar6) {
                puVar14 = (undefined8 *)*puVar14;
                if (puVar14 == (undefined8 *)0x0) {
                  plVar15 = (long *)0x0;
                  goto LAB_00c7b18c;
                }
              }
              iVar7 = *piVar2;
              if (iVar7 != iVar16) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar16 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                plVar15 = (long *)0x0;
                if (*(long *)(lVar8 + 0x60) != 0) {
                  plVar15 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
                }
                goto LAB_00c7b18c;
              }
              plVar15 = (long *)0x0;
              iVar16 = iVar7;
              if (iVar7 == 0) goto LAB_00c7b18c;
            }
            ClearExclusiveLocal();
            plVar15 = (long *)0x0;
            iVar16 = iVar7;
          } while (iVar7 != 0);
        }
LAB_00c7b18c:
        uVar9 = (**(code **)(*plVar15 + 0x90))(plVar15);
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
        plVar12 = *(long **)(param_1 + 0x28);
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
    } while ((long *)(*(long *)(param_1 + 0x28) + 8) != plVar17);
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


