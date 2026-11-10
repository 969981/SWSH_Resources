/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca8d60; name: FUN_00ca8d60
 */


void FUN_00ca8d60(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  puVar6 = PTR_DAT_0271c2b8;
  puVar5 = PTR_DAT_0271c2b0;
  switch(param_2) {
  case 2:
    plVar11 = (long *)(param_1 + 0x1698);
    do {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        piVar1 = (int *)(lVar12 + 0x54);
        if (*piVar1 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar10);
          local_58 = lVar12;
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar10);
          iVar2 = *(int *)(lVar12 + 0x54);
joined_r0x00ca8ecc:
          do {
            if (iVar2 == 0) {
LAB_00ca8f60:
              lVar13 = 0;
              goto LAB_00ca8f64;
            }
            plVar9 = *(long **)(lVar12 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar8 = FUN_00c72b60();
              *(undefined8 *)puVar6 = uVar8;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar9 == (long *)0x0) goto LAB_00ca8f60;
              if (plVar9 == (long *)puVar6) break;
              plVar9 = (long *)*plVar9;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar2) {
              ClearExclusiveLocal();
              iVar2 = iVar7;
              goto joined_r0x00ca8ecc;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar2 = iVar7;
          } while (cVar3 != '\0');
          lVar13 = 0;
          if (*(long *)(lVar12 + 0x60) != 0) {
            lVar13 = *(long *)(lVar12 + 0x60) + -0x50;
          }
LAB_00ca8f64:
          FUN_00ca9590(param_1,0,&local_58,*(undefined4 *)(lVar13 + 0x70));
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          if (local_58 == 0) {
            lVar12 = 0;
          }
          else {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            lVar12 = 0;
            local_58 = 0;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != (long *)(param_1 + 0x1858));
    uVar8 = *(undefined8 *)(param_1 + 0x15d0);
    break;
  case 3:
    plVar11 = (long *)(param_1 + 0x1858);
    do {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        piVar1 = (int *)(lVar12 + 0x54);
        if (*piVar1 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar10);
          local_60 = lVar12;
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar10);
          iVar2 = *(int *)(lVar12 + 0x54);
joined_r0x00ca905c:
          do {
            if (iVar2 == 0) {
LAB_00ca90f0:
              lVar13 = 0;
              goto LAB_00ca90f4;
            }
            plVar9 = *(long **)(lVar12 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar8 = FUN_00c72b60();
              *(undefined8 *)puVar6 = uVar8;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar9 == (long *)0x0) goto LAB_00ca90f0;
              if (plVar9 == (long *)puVar6) break;
              plVar9 = (long *)*plVar9;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar2) {
              ClearExclusiveLocal();
              iVar2 = iVar7;
              goto joined_r0x00ca905c;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar2 = iVar7;
          } while (cVar3 != '\0');
          lVar13 = 0;
          if (*(long *)(lVar12 + 0x60) != 0) {
            lVar13 = *(long *)(lVar12 + 0x60) + -0x50;
          }
LAB_00ca90f4:
          FUN_00ca9590(param_1,0,&local_60,*(undefined4 *)(lVar13 + 0x70));
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          if (local_60 == 0) {
            lVar12 = 0;
          }
          else {
            (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
            lVar12 = 0;
            local_60 = 0;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != (long *)(param_1 + 0x18d8));
    uVar8 = *(undefined8 *)(param_1 + 0x15f0);
    break;
  case 4:
    plVar11 = (long *)(param_1 + 0x18d8);
    do {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        piVar1 = (int *)(lVar12 + 0x54);
        if (*piVar1 != 0) {
          lVar13 = *plVar11;
          *plVar11 = 0;
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
          }
          local_68 = lVar12;
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar10);
          iVar2 = *(int *)(lVar12 + 0x54);
          while (iVar7 = iVar2, iVar2 != 0) {
            while( true ) {
              plVar9 = *(long **)(lVar12 + 0x58);
              lVar13 = FUN_00c72e20();
              while( true ) {
                if (plVar9 == (long *)0x0) goto LAB_00ca9238;
                if (plVar9 == (long *)lVar13) break;
                plVar9 = (long *)*plVar9;
              }
              iVar2 = *piVar1;
              if (iVar2 != iVar7) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar13 = 0;
                if (*(long *)(lVar12 + 0x60) != 0) {
                  lVar13 = *(long *)(lVar12 + 0x60) + -0x50;
                }
                goto LAB_00ca923c;
              }
              iVar7 = iVar2;
              if (iVar2 == 0) goto LAB_00ca9238;
            }
            ClearExclusiveLocal();
          }
LAB_00ca9238:
          lVar13 = 0;
LAB_00ca923c:
          FUN_00ca9ed0(param_1,&local_68,*(undefined4 *)(lVar13 + 0x60));
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          (**(code **)(*plVar10 + 0x18))(plVar10);
          local_68 = 0;
          *(undefined4 *)(plVar11 + 1) = 0;
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != (long *)(param_1 + 0x1a98));
    uVar8 = *(undefined8 *)(param_1 + 0x1610);
    goto LAB_00ca93bc;
  case 5:
    plVar11 = (long *)(param_1 + 0x1a98);
    do {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        piVar1 = (int *)(lVar12 + 0x54);
        if (*piVar1 != 0) {
          lVar13 = *plVar11;
          *plVar11 = 0;
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
          }
          local_70 = lVar12;
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar10);
          iVar2 = *(int *)(lVar12 + 0x54);
          while (iVar7 = iVar2, iVar2 != 0) {
            while( true ) {
              plVar9 = *(long **)(lVar12 + 0x58);
              lVar13 = FUN_00c72e20();
              while( true ) {
                if (plVar9 == (long *)0x0) goto LAB_00ca935c;
                if (plVar9 == (long *)lVar13) break;
                plVar9 = (long *)*plVar9;
              }
              iVar2 = *piVar1;
              if (iVar2 != iVar7) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar13 = 0;
                if (*(long *)(lVar12 + 0x60) != 0) {
                  lVar13 = *(long *)(lVar12 + 0x60) + -0x50;
                }
                goto LAB_00ca9360;
              }
              iVar7 = iVar2;
              if (iVar2 == 0) goto LAB_00ca935c;
            }
            ClearExclusiveLocal();
          }
LAB_00ca935c:
          lVar13 = 0;
LAB_00ca9360:
          FUN_00ca9ed0(param_1,&local_70,*(undefined4 *)(lVar13 + 0x60));
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          (**(code **)(*plVar10 + 0x18))(plVar10);
          local_70 = 0;
          *(undefined4 *)(plVar11 + 1) = 0;
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != (long *)(param_1 + 0x1b08));
    uVar8 = *(undefined8 *)(param_1 + 0x1630);
LAB_00ca93bc:
    FUN_00caa0b0(param_1,uVar8);
    return;
  case 6:
    plVar11 = (long *)(param_1 + 0x1b08);
    do {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        piVar1 = (int *)(lVar12 + 0x54);
        if (*piVar1 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar10);
          local_78 = lVar12;
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar10);
          iVar2 = *(int *)(lVar12 + 0x54);
joined_r0x00ca9450:
          do {
            if (iVar2 == 0) {
LAB_00ca94e4:
              lVar13 = 0;
              goto LAB_00ca94e8;
            }
            plVar9 = *(long **)(lVar12 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar8 = FUN_00c72b60();
              *(undefined8 *)puVar6 = uVar8;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar9 == (long *)0x0) goto LAB_00ca94e4;
              if (plVar9 == (long *)puVar6) break;
              plVar9 = (long *)*plVar9;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar2) {
              ClearExclusiveLocal();
              iVar2 = iVar7;
              goto joined_r0x00ca9450;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar2 = iVar7;
          } while (cVar3 != '\0');
          lVar13 = 0;
          if (*(long *)(lVar12 + 0x60) != 0) {
            lVar13 = *(long *)(lVar12 + 0x60) + -0x50;
          }
LAB_00ca94e8:
          FUN_00ca9590(param_1,0,&local_78,*(undefined4 *)(lVar13 + 0x70));
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
          }
          if (local_78 == 0) {
            lVar12 = 0;
          }
          else {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            lVar12 = 0;
            local_78 = 0;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != (long *)(param_1 + 0x1b48));
    uVar8 = *(undefined8 *)(param_1 + 0x1650);
    break;
  case 7:
    uVar8 = *(undefined8 *)(param_1 + 0x1670);
    break;
  default:
    return;
  }
  FUN_00ca9c30(param_1,uVar8);
  return;
}


