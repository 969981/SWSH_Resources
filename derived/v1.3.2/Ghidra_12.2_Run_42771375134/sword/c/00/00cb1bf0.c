/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb1bf0; name: FUN_00cb1bf0
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000070 : 0x00cb2008 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00cb1bf0(long *param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long local_68;
  
  *param_1 = 0;
  lVar8 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_2 + 0x15a0);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1594));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00cb1c78;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00cb1c78:
  puVar5 = PTR_DAT_0271c2b8;
  puVar4 = PTR_DAT_0271c2b0;
  plVar13 = (long *)(*(long *)(param_2 + 0x15b0) + 8);
  plVar17 = (long *)*plVar13;
  if (plVar13 != plVar17) {
    do {
      plVar13 = *(long **)(plVar17[2] + 0x78);
      if (plVar13 != (long *)0x0) {
        (**(code **)(plVar13[9] + 0x10))();
      }
      (**(code **)(*plVar13 + 0x10))(&local_68,plVar13);
      lVar8 = local_68;
      local_68 = 0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
      }
      piVar1 = (int *)(lVar8 + 0x54);
      iVar14 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar8 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar10 = FUN_00c72b60();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          for (; plVar13 != (long *)puVar5; plVar13 = (long *)*plVar13) {
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar14) break;
          ClearExclusiveLocal();
          iVar14 = iVar7;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar14 = iVar7;
      } while (cVar3 != '\0');
      lVar16 = *(long *)(lVar8 + 0x60);
      lVar12 = 0;
      if (lVar16 != 0) {
        lVar12 = lVar16 + -0x50;
      }
      if (*(int *)(lVar12 + 0x60) == param_3) {
        if ((lVar8 == 0) || (iVar14 = *piVar1, *piVar1 == 0)) {
LAB_00cb1f60:
          lVar18 = 0;
          iVar14 = _DAT_00000070;
joined_r0x00cb1f70:
          if (iVar14 != param_4) goto LAB_00cb1f74;
LAB_00cb1f44:
          bVar6 = true;
        }
        else {
          do {
            while( true ) {
              puVar15 = *(undefined8 **)(lVar8 + 0x58);
              if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                uVar10 = FUN_00c72b60();
                *(undefined8 *)puVar5 = uVar10;
                __cxa_guard_release(puVar4);
              }
              if (puVar15 == (undefined8 *)0x0) goto LAB_00cb1f34;
              while (puVar15 != (undefined8 *)puVar5) {
                puVar15 = (undefined8 *)*puVar15;
                if (puVar15 == (undefined8 *)0x0) goto LAB_00cb1f60;
              }
              iVar7 = *piVar1;
              if (iVar7 == iVar14) break;
              ClearExclusiveLocal();
              iVar14 = iVar7;
              if (iVar7 == 0) goto LAB_00cb1f34;
            }
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar18 = 0;
              if (*(long *)(lVar8 + 0x60) != 0) {
                lVar18 = *(long *)(lVar8 + 0x60) + -0x50;
              }
              iVar14 = *(int *)(lVar18 + 0x70);
              goto joined_r0x00cb1f70;
            }
            iVar14 = iVar7;
          } while (iVar7 != 0);
LAB_00cb1f34:
          lVar18 = 0;
          if (_DAT_00000070 == param_4) goto LAB_00cb1f44;
LAB_00cb1f74:
          if (lVar8 == 0) {
LAB_00cb2008:
            lVar19 = 0;
            iVar14 = _DAT_00000070;
joined_r0x00cb1d80:
            if (iVar14 == 1) goto LAB_00cb2014;
LAB_00cb1cb0:
            if (lVar8 == 0) {
LAB_00cb1db0:
              bVar6 = _DAT_00000070 == 0xc;
            }
            else {
              iVar14 = *piVar1;
              do {
                while( true ) {
                  if (iVar14 == 0) goto LAB_00cb1db0;
                  plVar13 = *(long **)(lVar8 + 0x58);
                  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                    uVar10 = FUN_00c72b60();
                    *(undefined8 *)puVar5 = uVar10;
                    __cxa_guard_release(puVar4);
                  }
                  while( true ) {
                    if (plVar13 == (long *)0x0) goto LAB_00cb1db0;
                    if (plVar13 == (long *)puVar5) break;
                    plVar13 = (long *)*plVar13;
                  }
                  iVar7 = *piVar1;
                  if (iVar7 == iVar14) break;
                  ClearExclusiveLocal();
                  iVar14 = iVar7;
                }
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar14 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                iVar14 = iVar7;
              } while (cVar3 != '\0');
              lVar9 = *(long *)(lVar8 + 0x60);
              if (lVar9 == 0) goto LAB_00cb1db0;
              bVar6 = *(int *)(lVar9 + 0x20) == 0xc;
              (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            }
          }
          else {
            iVar14 = *piVar1;
            if (*piVar1 != 0) {
              do {
                while( true ) {
                  puVar15 = *(undefined8 **)(lVar8 + 0x58);
                  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                    uVar10 = FUN_00c72b60();
                    *(undefined8 *)puVar5 = uVar10;
                    __cxa_guard_release(puVar4);
                  }
                  while( true ) {
                    if (puVar15 == (undefined8 *)0x0) goto LAB_00cb2008;
                    if (puVar15 == (undefined8 *)puVar5) break;
                    puVar15 = (undefined8 *)*puVar15;
                  }
                  iVar7 = *piVar1;
                  if (iVar7 != iVar14) break;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar14 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar19 = 0;
                    if (*(long *)(lVar8 + 0x60) != 0) {
                      lVar19 = *(long *)(lVar8 + 0x60) + -0x50;
                    }
                    iVar14 = *(int *)(lVar19 + 0x70);
                    goto joined_r0x00cb1d80;
                  }
                  iVar14 = iVar7;
                  if (iVar7 == 0) goto LAB_00cb2008;
                }
                ClearExclusiveLocal();
                iVar14 = iVar7;
              } while (iVar7 != 0);
              goto LAB_00cb2008;
            }
            lVar19 = 0;
            if (_DAT_00000070 != 1) goto LAB_00cb1cb0;
LAB_00cb2014:
            bVar6 = true;
          }
          if (lVar19 != 0) {
            (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
          }
        }
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
        }
      }
      else {
        bVar6 = false;
      }
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      if (bVar6) {
        if (lVar8 == 0) {
          local_68 = 0;
        }
        else {
          plVar13 = (long *)(lVar8 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_00cb6ef0(&local_68,lVar8);
        }
        uVar11 = FUN_00cb8f70(local_68,param_5);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        if (lVar8 != 0) {
          plVar13 = (long *)(lVar8 + 0x48);
          (**(code **)(*plVar13 + 0x18))(plVar13);
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        if ((uVar11 & 1) != 0) {
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          lVar12 = *param_1;
          *param_1 = lVar8;
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
          }
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
          }
          break;
        }
      }
      plVar17 = (long *)*plVar17;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
    } while ((long *)(*(long *)(param_2 + 0x15b0) + 8) != plVar17);
  }
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1594));
  return;
}


