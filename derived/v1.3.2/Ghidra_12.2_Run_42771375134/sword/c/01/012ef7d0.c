/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ef7d0; name: FUN_012ef7d0
 */


undefined8 FUN_012ef7d0(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long local_60;
  long local_58 [3];
  long local_38;
  
  lVar7 = FUN_012f11b0();
  if (lVar7 == 0) {
    return 0;
  }
  uVar8 = FUN_0130fe50();
  if ((uVar8 & 1) != 0) {
    if ((param_5 == 0) && (iVar5 = FUN_012e7700(lVar7), iVar5 == 5)) {
      FUN_012e7710(lVar7);
    }
    if ((*(int *)(param_1 + 0x94) != 4) && (uVar8 = FUN_012e8410(lVar7), (uVar8 & 1) == 0)) {
      lVar13 = *(long *)(param_1 + 1000);
      if ((((lVar13 != 0) &&
           ((((lVar9 = FUN_013092c0(lVar13), lVar9 != param_3 &&
              (lVar13 = *(long *)(param_1 + 0x3f0), lVar13 != 0)) &&
             (lVar9 = FUN_013092c0(lVar13), lVar9 != param_3)) &&
            ((lVar13 = *(long *)(param_1 + 0x3f8), lVar13 != 0 &&
             (lVar9 = FUN_013092c0(lVar13), lVar9 != param_3)))))) &&
          (lVar13 = *(long *)(param_1 + 0x400), lVar13 != 0)) &&
         (lVar9 = FUN_013092c0(lVar13), lVar9 != param_3)) {
        lVar13 = 0;
      }
      puVar4 = PTR_DAT_02715078;
      if (param_3 == 0) {
        uVar8 = FUN_012e49d0(lVar7);
        if ((uVar8 & 1) != 0) {
          FUN_012e7920(lVar7);
        }
      }
      else {
        if (lVar13 == 0) {
          return 0;
        }
        lVar9 = *(long *)(lVar13 + 0x68);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
          piVar1 = (int *)(lVar9 + 0x54);
          puVar11 = PTR_DAT_02715080;
          iVar5 = *(int *)(lVar9 + 0x54);
          do {
            plVar12 = *(long **)(lVar9 + 0x58);
            if ((*puVar4 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(puVar4);
              puVar11 = PTR_DAT_02715080;
              if (iVar6 != 0) {
                uVar10 = FUN_00a87090();
                *(undefined8 *)PTR_DAT_02715080 = uVar10;
                __cxa_guard_release(puVar4);
                puVar11 = PTR_DAT_02715080;
              }
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_012ef994;
              if (plVar12 == (long *)puVar11) break;
              plVar12 = (long *)*plVar12;
            }
            iVar6 = *piVar1;
            if (iVar6 == iVar5) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                local_38 = 0;
                if (*(long *)(lVar9 + 0x60) != 0) {
                  local_38 = *(long *)(lVar9 + 0x60) + -0x50;
                }
                goto LAB_012ef998;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar5 = iVar6;
          } while (iVar6 != 0);
        }
LAB_012ef994:
        local_38 = 0;
LAB_012ef998:
        uVar8 = FUN_012e7640(lVar7,&local_38);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        if (((uVar8 & 1) == 0) &&
           ((uVar8 = FUN_012e9410(lVar7), (uVar8 & 1) == 0 ||
            (uVar8 = FUN_0130a720(lVar13), (uVar8 & 1) == 0)))) {
          uVar8 = FUN_0130a720(lVar13);
          if ((param_4 == 3) && ((uVar8 & 1) != 0)) {
            local_58[1] = 0x37be5030d519b6d2;
            local_58[2] = 0;
            FUN_0130fad0(lVar7,local_58 + 1,0);
          }
          else {
            uVar8 = FUN_0130a720(lVar13);
            puVar11 = PTR_DAT_02715080;
            puVar4 = PTR_DAT_02715078;
            lVar13 = *(long *)(lVar13 + 0x68);
            if ((param_4 == 4) && ((uVar8 & 1) != 0)) {
              if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
                piVar1 = (int *)(lVar13 + 0x54);
                iVar5 = *(int *)(lVar13 + 0x54);
                do {
                  plVar12 = *(long **)(lVar13 + 0x58);
                  if ((*puVar4 & 1) == 0) {
                    iVar6 = __cxa_guard_acquire(puVar4);
                    puVar11 = PTR_DAT_02715080;
                    if (iVar6 != 0) {
                      uVar10 = FUN_00a87090();
                      *(undefined8 *)PTR_DAT_02715080 = uVar10;
                      __cxa_guard_release(puVar4);
                      puVar11 = PTR_DAT_02715080;
                    }
                  }
                  while( true ) {
                    if (plVar12 == (long *)0x0) goto LAB_012efb0c;
                    if (plVar12 == (long *)puVar11) break;
                    plVar12 = (long *)*plVar12;
                  }
                  iVar6 = *piVar1;
                  if (iVar6 == iVar5) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar5 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') {
                      local_58[0] = 0;
                      if (*(long *)(lVar13 + 0x60) != 0) {
                        local_58[0] = *(long *)(lVar13 + 0x60) + -0x50;
                      }
                      goto LAB_012efb10;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar5 = iVar6;
                } while (iVar6 != 0);
              }
LAB_012efb0c:
              local_58[0] = 0;
LAB_012efb10:
              FUN_012e8d30(lVar7,local_58);
              if (local_58[0] != 0) {
                (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
                local_58[0] = 0;
              }
              lVar7 = *(long *)(param_1 + 0x3a0);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3a8);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3b0);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3b8);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3c0);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3c8);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3d0);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3d8);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
              lVar7 = *(long *)(param_1 + 0x3e0);
              if ((lVar7 != 0) && (uVar8 = FUN_0130fe50(lVar7), (uVar8 & 1) != 0)) {
                FUN_012e8e50(lVar7);
              }
            }
            else {
              if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
                piVar1 = (int *)(lVar13 + 0x54);
                iVar5 = *(int *)(lVar13 + 0x54);
                do {
                  plVar12 = *(long **)(lVar13 + 0x58);
                  if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
                    uVar10 = FUN_00a87090();
                    *(undefined8 *)puVar11 = uVar10;
                    __cxa_guard_release(puVar4);
                  }
                  while( true ) {
                    if (plVar12 == (long *)0x0) goto LAB_012efcdc;
                    if (plVar12 == (long *)puVar11) break;
                    plVar12 = (long *)*plVar12;
                  }
                  iVar6 = *piVar1;
                  if (iVar6 == iVar5) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar5 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') {
                      local_60 = 0;
                      if (*(long *)(lVar13 + 0x60) != 0) {
                        local_60 = *(long *)(lVar13 + 0x60) + -0x50;
                      }
                      goto LAB_012efce0;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar5 = iVar6;
                } while (iVar6 != 0);
              }
LAB_012efcdc:
              local_60 = 0;
LAB_012efce0:
              FUN_012e71f0(lVar7,&local_60);
              if (local_60 != 0) {
                (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
              }
            }
          }
        }
      }
      return 1;
    }
  }
  return 0;
}


