/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca9590; name: FUN_00ca9590
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ca9590(long param_1,ulong param_2,long *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long local_58;
  
  puVar5 = PTR_DAT_0271c2b0;
  lVar14 = *param_3;
  iVar6 = _DAT_00000070;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    puVar10 = PTR_DAT_0271c2b8;
    iVar7 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        plVar16 = *(long **)(lVar14 + 0x58);
        if ((*puVar5 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar5);
          puVar10 = PTR_DAT_0271c2b8;
          if (iVar6 != 0) {
            uVar9 = FUN_00c72b60();
            *(undefined8 *)PTR_DAT_0271c2b8 = uVar9;
            __cxa_guard_release(puVar5);
            puVar10 = PTR_DAT_0271c2b8;
          }
        }
        while( true ) {
          iVar6 = _DAT_00000070;
          if (plVar16 == (long *)0x0) goto joined_r0x00ca96a0;
          if (plVar16 == (long *)puVar10) break;
          plVar16 = (long *)*plVar16;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar7) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar6 = _DAT_00000070;
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            iVar6 = *(int *)(lVar14 + 0x20);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
          }
          goto joined_r0x00ca96a0;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto joined_r0x00ca96a0;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
joined_r0x00ca96a0:
  if (iVar6 - 1U < 7) {
                    /* WARNING: Could not recover jumptable at 0x00ca96cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0215d884 + *(int *)(&DAT_0215d884 + (ulong)(iVar6 - 1U) * 4)))();
    return;
  }
  lVar14 = *param_3;
  iVar6 = _DAT_00000070;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))((long *)(lVar14 + 0x48));
    puVar5 = PTR_DAT_0271c2b0;
    iVar6 = _DAT_00000070;
    if (*(int *)(lVar14 + 0x54) != 0) {
      piVar1 = (int *)(lVar14 + 0x54);
      puVar10 = PTR_DAT_0271c2b8;
      iVar7 = *(int *)(lVar14 + 0x54);
      do {
        while( true ) {
          plVar16 = *(long **)(lVar14 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar10 = PTR_DAT_0271c2b8;
            if (iVar6 != 0) {
              uVar9 = FUN_00c72b60();
              *(undefined8 *)PTR_DAT_0271c2b8 = uVar9;
              __cxa_guard_release(puVar5);
              puVar10 = PTR_DAT_0271c2b8;
            }
          }
          while( true ) {
            iVar6 = _DAT_00000070;
            if (plVar16 == (long *)0x0) goto joined_r0x00ca98b4;
            if (plVar16 == (long *)puVar10) break;
            plVar16 = (long *)*plVar16;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar7) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          iVar6 = _DAT_00000070;
          if (cVar3 == '\0') {
            lVar8 = *(long *)(lVar14 + 0x60);
            if (lVar8 != 0) {
              iVar6 = *(int *)(lVar8 + 0x20);
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
            }
            goto joined_r0x00ca98b4;
          }
          iVar7 = iVar2;
          if (iVar2 == 0) goto joined_r0x00ca98b4;
        }
        ClearExclusiveLocal();
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
  }
joined_r0x00ca98b4:
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  puVar10 = PTR_DAT_0271c2b8;
  puVar5 = PTR_DAT_0271c2b0;
  if (((iVar6 == param_4) && (*param_3 != 0)) && (*(int *)(*param_3 + 0x54) != 0)) {
    lVar14 = *param_3;
    if ((param_2 & 1) == 0) {
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0x54) == 0)) {
        plVar16 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar14 + 0x54);
        iVar6 = *(int *)(lVar14 + 0x54);
        do {
          puVar13 = *(undefined8 **)(lVar14 + 0x58);
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar9 = FUN_00c72b60();
            *(undefined8 *)puVar10 = uVar9;
            __cxa_guard_release(puVar5);
          }
          plVar16 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) break;
          while (puVar13 != (undefined8 *)puVar10) {
            puVar13 = (undefined8 *)*puVar13;
            if (puVar13 == (undefined8 *)0x0) {
              plVar16 = (long *)0x0;
              goto LAB_00ca9a70;
            }
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar6) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar16 = (long *)0x0;
              if (*(long *)(lVar14 + 0x60) != 0) {
                plVar16 = (long *)(*(long *)(lVar14 + 0x60) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar16 = (long *)0x0;
          iVar6 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00ca9a70:
      (**(code **)(*plVar16 + 0x68))(plVar16);
      if (plVar16 != (long *)0x0) {
        (**(code **)(plVar16[9] + 0x18))(plVar16 + 9);
      }
      lVar14 = nn::os::GetCurrentThread();
      plVar16 = (long *)(param_1 + 0x15a0);
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1594));
            while (*plVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar4) {
                *plVar16 = lVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00ca9ae4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00ca9ae4:
      plVar11 = (long *)(*(long *)(param_1 + 0x15b0) + 8);
      plVar15 = (long *)*plVar11;
      if (plVar11 != plVar15) {
        do {
          plVar11 = *(long **)(plVar15[2] + 0x78);
          if (plVar11 != (long *)0x0) {
            (**(code **)(plVar11[9] + 0x10))();
          }
          (**(code **)(*plVar11 + 0x10))(&local_58,plVar11);
          lVar14 = local_58;
          local_58 = 0;
          if (plVar11 != (long *)0x0) {
            (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
          }
          if (*param_3 == lVar14) {
            lVar8 = *plVar15;
            plVar11 = (long *)plVar15[1];
            plVar12 = *(long **)(param_1 + 0x15b0);
            *plVar11 = lVar8;
            *(long **)(lVar8 + 8) = plVar11;
            *plVar12 = *plVar12 + -1;
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
        } while ((long *)(*(long *)(param_1 + 0x15b0) + 8) != plVar15);
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1594));
    }
    else {
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0x54) == 0)) {
        plVar16 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar14 + 0x54);
        iVar6 = *(int *)(lVar14 + 0x54);
        do {
          puVar13 = *(undefined8 **)(lVar14 + 0x58);
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar9 = FUN_00c72b60();
            *(undefined8 *)puVar10 = uVar9;
            __cxa_guard_release(puVar5);
          }
          plVar16 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) break;
          while (puVar13 != (undefined8 *)puVar10) {
            puVar13 = (undefined8 *)*puVar13;
            if (puVar13 == (undefined8 *)0x0) {
              plVar16 = (long *)0x0;
              goto LAB_00ca9a30;
            }
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar6) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar16 = (long *)0x0;
              if (*(long *)(lVar14 + 0x60) != 0) {
                plVar16 = (long *)(*(long *)(lVar14 + 0x60) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar16 = (long *)0x0;
          iVar6 = iVar7;
        } while (iVar7 != 0);
      }
LAB_00ca9a30:
      (**(code **)(*plVar16 + 0x60))(plVar16);
      if (plVar16 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ca9a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(plVar16[9] + 0x18))(plVar16 + 9);
        return;
      }
    }
  }
  return;
}


