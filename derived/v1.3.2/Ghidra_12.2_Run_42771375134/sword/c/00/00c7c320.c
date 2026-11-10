/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7c320; name: FUN_00c7c320
 */


void FUN_00c7c320(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long local_48;
  
  puVar5 = PTR_DAT_0271c218;
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) {
    lVar14 = *param_2;
    if ((lVar14 == 0) || (*(int *)(lVar14 + 0x54) == 0)) {
      plVar13 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar14 + 0x54);
      puVar8 = (undefined8 *)PTR_DAT_0271c220;
      iVar11 = *(int *)(lVar14 + 0x54);
      do {
        while( true ) {
          puVar12 = *(undefined8 **)(lVar14 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar8 = (undefined8 *)PTR_DAT_0271c220;
            if (iVar6 != 0) {
              uVar7 = FUN_00c72b60();
              *(undefined8 *)PTR_DAT_0271c220 = uVar7;
              __cxa_guard_release(puVar5);
              puVar8 = (undefined8 *)PTR_DAT_0271c220;
            }
          }
          plVar13 = (long *)0x0;
          if (puVar12 == (undefined8 *)0x0) goto LAB_00c7c424;
          while (puVar12 != puVar8) {
            puVar12 = (undefined8 *)*puVar12;
            if (puVar12 == (undefined8 *)0x0) {
              plVar13 = (long *)0x0;
              goto LAB_00c7c424;
            }
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar11) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar13 = (long *)0x0;
            if (*(long *)(lVar14 + 0x60) != 0) {
              plVar13 = (long *)(*(long *)(lVar14 + 0x60) + -0x50);
            }
            goto LAB_00c7c424;
          }
          plVar13 = (long *)0x0;
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c7c424;
        }
        ClearExclusiveLocal();
        plVar13 = (long *)0x0;
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c7c424:
    (**(code **)(*plVar13 + 0x68))(plVar13);
    if (plVar13 != (long *)0x0) {
      (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
    }
    lVar14 = nn::os::GetCurrentThread();
    plVar13 = (long *)(param_1 + 0x78);
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00c7c490;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00c7c490:
    plVar9 = (long *)(*(long *)(param_1 + 0x28) + 8);
    plVar15 = (long *)*plVar9;
    if (plVar9 != plVar15) {
      do {
        plVar9 = *(long **)(plVar15[2] + 0x78);
        if (plVar9 != (long *)0x0) {
          (**(code **)(plVar9[9] + 0x10))();
        }
        (**(code **)(*plVar9 + 0x10))(&local_48,plVar9);
        lVar14 = local_48;
        local_48 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(plVar9[9] + 0x18))(plVar9 + 9);
        }
        if (*param_2 == lVar14) {
          lVar2 = *plVar15;
          plVar9 = (long *)plVar15[1];
          plVar10 = *(long **)(param_1 + 0x28);
          *plVar9 = lVar2;
          *(long **)(lVar2 + 8) = plVar9;
          *plVar10 = *plVar10 + -1;
          *plVar15 = 0;
          plVar15[1] = 0;
          if (plVar15[2] != 0) {
            (**(code **)(*(long *)(plVar15[2] + 0x48) + 0x18))();
            plVar15[2] = 0;
          }
          if (lVar14 != 0) {
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
          }
          break;
        }
        plVar15 = (long *)*plVar15;
        if (lVar14 != 0) {
          (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
        }
      } while ((long *)(*(long *)(param_1 + 0x28) + 8) != plVar15);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  }
  return;
}


