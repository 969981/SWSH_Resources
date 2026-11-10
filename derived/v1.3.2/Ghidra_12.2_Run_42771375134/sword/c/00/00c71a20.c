/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c71a20; name: FUN_00c71a20
 */


void FUN_00c71a20(long *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long local_78;
  long local_70;
  long local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  long local_50;
  long local_48;
  
  if (((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) &&
     ((param_1[0x3a] == 0 || (*(int *)(param_1[0x3a] + 0x54) == 0)))) {
    lVar13 = *param_2;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar7 = param_1[0x3a];
    param_1[0x3a] = lVar13;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    puVar5 = PTR_DAT_02715078;
    lVar13 = *param_2;
    if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
      lVar7 = 0;
    }
    else {
      piVar1 = (int *)(lVar13 + 0x54);
      puVar10 = (undefined8 *)PTR_DAT_02715080;
      iVar11 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          puVar15 = *(undefined8 **)(lVar13 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar10 = (undefined8 *)PTR_DAT_02715080;
            if (iVar6 != 0) {
              uVar9 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar9;
              __cxa_guard_release(puVar5);
              puVar10 = (undefined8 *)PTR_DAT_02715080;
            }
          }
          lVar7 = 0;
          if (puVar15 == (undefined8 *)0x0) goto LAB_00c71b78;
          while (puVar15 != puVar10) {
            puVar15 = (undefined8 *)*puVar15;
            if (puVar15 == (undefined8 *)0x0) {
              lVar7 = 0;
              goto LAB_00c71b78;
            }
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar11) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar13 + 0x60) != 0) {
              lVar7 = *(long *)(lVar13 + 0x60) + -0x50;
            }
            goto LAB_00c71b78;
          }
          lVar7 = 0;
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c71b78;
        }
        ClearExclusiveLocal();
        lVar7 = 0;
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c71b78:
    lVar13 = FUN_00c751a0(lVar7,&local_78);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    puVar5 = PTR_DAT_02715078;
    if (lVar13 == 0) {
      lVar13 = *param_2;
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
        lVar7 = 0;
      }
      else {
        piVar1 = (int *)(lVar13 + 0x54);
        puVar10 = (undefined8 *)PTR_DAT_02715080;
        iVar11 = *(int *)(lVar13 + 0x54);
        do {
          puVar15 = *(undefined8 **)(lVar13 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar10 = (undefined8 *)PTR_DAT_02715080;
            if (iVar6 != 0) {
              uVar9 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar9;
              __cxa_guard_release(puVar5);
              puVar10 = (undefined8 *)PTR_DAT_02715080;
            }
          }
          lVar7 = 0;
          if (puVar15 == (undefined8 *)0x0) break;
          while (puVar15 != puVar10) {
            puVar15 = (undefined8 *)*puVar15;
            if (puVar15 == (undefined8 *)0x0) {
              lVar7 = 0;
              goto LAB_00c71c70;
            }
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar7 = 0;
              if (*(long *)(lVar13 + 0x60) != 0) {
                lVar7 = *(long *)(lVar13 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar7 = 0;
          iVar11 = iVar6;
        } while (iVar6 != 0);
      }
LAB_00c71c70:
      lVar13 = FUN_00c753e0(&local_78,*(undefined8 *)(lVar7 + 8));
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      local_78 = lVar13;
      FUN_006d9640(lVar7,&local_78);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
    }
    puVar5 = PTR_DAT_02715078;
    lVar7 = *param_2;
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
      lVar14 = 0;
    }
    else {
      piVar1 = (int *)(lVar7 + 0x54);
      puVar10 = (undefined8 *)PTR_DAT_02715080;
      iVar11 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          puVar15 = *(undefined8 **)(lVar7 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar10 = (undefined8 *)PTR_DAT_02715080;
            if (iVar6 != 0) {
              uVar9 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar9;
              __cxa_guard_release(puVar5);
              puVar10 = (undefined8 *)PTR_DAT_02715080;
            }
          }
          lVar14 = 0;
          if (puVar15 == (undefined8 *)0x0) goto LAB_00c71dac;
          while (puVar15 != puVar10) {
            puVar15 = (undefined8 *)*puVar15;
            if (puVar15 == (undefined8 *)0x0) {
              lVar14 = 0;
              goto LAB_00c71dac;
            }
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar11) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = 0;
            if (*(long *)(lVar7 + 0x60) != 0) {
              lVar14 = *(long *)(lVar7 + 0x60) + -0x50;
            }
            goto LAB_00c71dac;
          }
          lVar14 = 0;
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c71dac;
        }
        ClearExclusiveLocal();
        lVar14 = 0;
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c71dac:
    lVar7 = FUN_007959b0(lVar14,&local_78);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
    if (lVar7 != 0) {
      local_48 = *param_2;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      (**(code **)(*param_1 + 0xa8))(&local_50,param_1);
      FUN_00ad2020(&local_78,&local_50);
      FUN_01063d80(lVar13,&local_48,local_78,param_3);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      puVar5 = PTR_DAT_02715078;
      lVar13 = *param_2;
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
        lVar14 = 0;
      }
      else {
        piVar1 = (int *)(lVar13 + 0x54);
        puVar10 = (undefined8 *)PTR_DAT_02715080;
        iVar11 = *(int *)(lVar13 + 0x54);
        do {
          while( true ) {
            puVar15 = *(undefined8 **)(lVar13 + 0x58);
            if ((*puVar5 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(puVar5);
              puVar10 = (undefined8 *)PTR_DAT_02715080;
              if (iVar6 != 0) {
                uVar9 = FUN_00a87090();
                *(undefined8 *)PTR_DAT_02715080 = uVar9;
                __cxa_guard_release(puVar5);
                puVar10 = (undefined8 *)PTR_DAT_02715080;
              }
            }
            lVar14 = 0;
            if (puVar15 == (undefined8 *)0x0) goto LAB_00c71f44;
            while (puVar15 != puVar10) {
              puVar15 = (undefined8 *)*puVar15;
              if (puVar15 == (undefined8 *)0x0) {
                lVar14 = 0;
                goto LAB_00c71f44;
              }
            }
            iVar6 = *piVar1;
            if (iVar6 != iVar11) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar14 = 0;
              if (*(long *)(lVar13 + 0x60) != 0) {
                lVar14 = *(long *)(lVar13 + 0x60) + -0x50;
              }
              goto LAB_00c71f44;
            }
            lVar14 = 0;
            iVar11 = iVar6;
            if (iVar6 == 0) goto LAB_00c71f44;
          }
          ClearExclusiveLocal();
          lVar14 = 0;
          iVar11 = iVar6;
        } while (iVar6 != 0);
      }
LAB_00c71f44:
      lVar13 = FUN_00c754c0(lVar14,&local_78);
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
      }
      (**(code **)(*param_1 + 0xd8))(&local_50,param_1);
      if (local_50 != 0) {
        if ((lVar13 != 0) && (*(int *)(local_50 + 0x54) != 0)) {
          local_58 = 0x101;
          local_68 = 0;
          uStack_60 = 0;
          local_56 = 1;
          local_78 = 0;
          local_70 = 0;
          lVar12 = *param_2;
          pbVar4 = PTR_DAT_0271c1e8;
          puVar10 = (undefined8 *)PTR_DAT_0271c1f0;
          lVar14 = local_50;
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
            pbVar4 = PTR_DAT_0271c1e8;
            puVar10 = (undefined8 *)PTR_DAT_0271c1f0;
            lVar14 = local_50;
            if (local_78 != 0) {
              plVar8 = (long *)(local_78 + 0x48);
              local_78 = lVar12;
              (**(code **)(*plVar8 + 0x18))();
              lVar12 = local_78;
              pbVar4 = PTR_DAT_0271c1e8;
              puVar10 = (undefined8 *)PTR_DAT_0271c1f0;
              lVar14 = local_50;
            }
          }
          local_78 = lVar12;
          PTR_DAT_0271c1e8 = pbVar4;
          PTR_DAT_0271c1f0 = (undefined *)puVar10;
          local_70 = lVar7;
          local_68 = lVar13;
          local_50 = lVar14;
          if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
            piVar1 = (int *)(lVar14 + 0x54);
            iVar11 = *(int *)(lVar14 + 0x54);
            do {
              plVar8 = *(long **)(lVar14 + 0x58);
              if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
                uVar9 = FUN_00706e40();
                *puVar10 = uVar9;
                __cxa_guard_release(pbVar4);
              }
              while( true ) {
                if (plVar8 == (long *)0x0) goto LAB_00c7210c;
                if (plVar8 == puVar10) break;
                plVar8 = (long *)*plVar8;
              }
              iVar6 = *piVar1;
              if (iVar6 == iVar11) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar13 = *(long *)(lVar14 + 0x60);
                  if (lVar13 != 0) {
                    FUN_01061030(lVar13 + -0x50,&local_78);
                    (**(code **)(*(long *)(lVar13 + -8) + 0x18))((long *)(lVar13 + -8));
                    goto joined_r0x00c72104;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = iVar6;
            } while (iVar6 != 0);
          }
LAB_00c7210c:
          FUN_01061030(0,&local_78);
joined_r0x00c72104:
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
        }
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        }
      }
    }
  }
  return;
}


