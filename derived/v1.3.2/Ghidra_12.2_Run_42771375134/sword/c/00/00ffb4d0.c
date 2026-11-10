/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffb4d0; name: FUN_00ffb4d0
 */


void FUN_00ffb4d0(long *param_1,long param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long local_80 [3];
  long local_68;
  
  lVar6 = *(long *)(param_2 + 8);
  lVar5 = 0;
  if (lVar6 != 0) {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if (*(int *)(lVar6 + 0x54) != 0) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar10 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar6 + 0x58);
          lVar5 = FUN_00ffb220();
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00ffb578;
            if (plVar11 == (long *)lVar5) break;
            plVar11 = (long *)*plVar11;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar5 = 0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              lVar5 = *(long *)(lVar6 + 0x60) + -0x50;
            }
            goto LAB_00ffb57c;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00ffb578;
        }
        ClearExclusiveLocal();
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00ffb578:
    lVar5 = 0;
LAB_00ffb57c:
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if (lVar5 != 0) {
      FUN_006cf0c0(local_80,lVar5 + 0x5c0);
      lVar6 = local_80[0];
      lVar9 = *param_3;
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (lVar6 == lVar9) {
        *param_1 = lVar5;
        return;
      }
    }
  }
  plVar8 = *(long **)(param_2 + 0x18);
  plVar11 = *(long **)(param_2 + 0x20);
  if (plVar8 != plVar11) {
    lVar6 = lVar5;
    if ((param_4 & 1) == 0) {
      do {
        lVar9 = *plVar8;
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar10 = *(int *)(lVar9 + 0x54);
          do {
            while( true ) {
              plVar7 = *(long **)(lVar9 + 0x58);
              lVar5 = FUN_00ffb220();
              while( true ) {
                if (plVar7 == (long *)0x0) goto joined_r0x00ffb794;
                if (plVar7 == (long *)lVar5) break;
                plVar7 = (long *)*plVar7;
              }
              iVar2 = *piVar1;
              if (iVar2 != iVar10) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar5 = 0;
                if (*(long *)(lVar9 + 0x60) != 0) {
                  lVar5 = *(long *)(lVar9 + 0x60) + -0x50;
                }
                goto joined_r0x00ffb718;
              }
              iVar10 = iVar2;
              if (iVar2 == 0) goto joined_r0x00ffb794;
            }
            ClearExclusiveLocal();
            iVar10 = iVar2;
          } while (iVar2 != 0);
        }
joined_r0x00ffb794:
        lVar5 = 0;
joined_r0x00ffb718:
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        if (lVar5 != 0) {
          FUN_006cf0c0(local_80,lVar5 + 0x5c0);
          lVar6 = local_80[0];
          lVar9 = *param_3;
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar6 == lVar9) goto LAB_00ffb814;
        }
        plVar8 = plVar8 + 1;
        lVar6 = lVar5;
      } while (plVar8 != plVar11);
    }
    else {
      do {
        lVar9 = *plVar8;
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar10 = *(int *)(lVar9 + 0x54);
          do {
            while( true ) {
              plVar7 = *(long **)(lVar9 + 0x58);
              lVar5 = FUN_00ffb220();
              while( true ) {
                if (plVar7 == (long *)0x0) goto joined_r0x00ffb650;
                if (plVar7 == (long *)lVar5) break;
                plVar7 = (long *)*plVar7;
              }
              iVar2 = *piVar1;
              if (iVar2 != iVar10) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar5 = 0;
                if (*(long *)(lVar9 + 0x60) != 0) {
                  lVar5 = *(long *)(lVar9 + 0x60) + -0x50;
                }
                goto joined_r0x00ffb6f4;
              }
              iVar10 = iVar2;
              if (iVar2 == 0) goto joined_r0x00ffb650;
            }
            ClearExclusiveLocal();
            iVar10 = iVar2;
          } while (iVar2 != 0);
        }
joined_r0x00ffb650:
        lVar5 = 0;
joined_r0x00ffb6f4:
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        if (lVar5 != 0) {
          FUN_006cf0c0(local_80,lVar5 + 0x5c0);
          lVar6 = local_80[0];
          lVar9 = *param_3;
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar6 == lVar9) {
LAB_00ffb814:
            *param_1 = lVar5;
            return;
          }
        }
        (**(code **)(**(long **)(lVar5 + 0x5a0) + 0x28))
                  (local_80,*(long **)(lVar5 + 0x5a0),param_3,1);
        if (local_80[0] != 0) {
          plVar8 = (long *)(local_80[0] + 0x48);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          *param_1 = local_80[0];
          (**(code **)(*plVar8 + 0x10))(plVar8);
          goto joined_r0x00ffb860;
        }
        plVar8 = plVar8 + 1;
        *param_1 = 0;
        lVar6 = lVar5;
      } while (plVar8 != plVar11);
    }
  }
  *param_1 = 0;
joined_r0x00ffb860:
  if (lVar5 == 0) {
    return;
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


