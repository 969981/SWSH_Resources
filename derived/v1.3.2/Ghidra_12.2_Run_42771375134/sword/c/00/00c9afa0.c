/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9afa0; name: FUN_00c9afa0
 */


void FUN_00c9afa0(long *param_1,long param_2,long param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long local_68;
  
  uVar5 = (ulong)*(uint *)(param_3 + 8);
  if (0 < (int)*(uint *)(param_3 + 8)) {
    uVar10 = 0;
    do {
      iVar6 = (int)uVar5;
      lVar9 = *(long *)(param_3 + 0x10);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        iVar6 = *(int *)(param_3 + 8);
      }
      lVar7 = lVar9;
      if ((long)uVar10 < (long)iVar6) {
        if (*(ulong *)(*(long *)(param_3 + 0x38) + 0x48) <= uVar10) goto LAB_00c9b354;
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x38) + 0x40) + uVar10 * 0x28 + 0x10);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        }
      }
      *param_1 = lVar7;
      if (lVar7 != 0) {
        lVar9 = *param_1;
        if (*(int *)(lVar7 + 0x54) != 0) {
          if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
            piVar1 = (int *)(lVar9 + 0x54);
            iVar6 = *(int *)(lVar9 + 0x54);
            do {
              while( true ) {
                plVar8 = *(long **)(lVar9 + 0x58);
                lVar7 = FUN_00c9e3f0();
                while( true ) {
                  if (plVar8 == (long *)0x0) goto LAB_00c9b100;
                  if (plVar8 == (long *)lVar7) break;
                  plVar8 = (long *)*plVar8;
                }
                iVar2 = *piVar1;
                if (iVar2 != iVar6) break;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar6 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar7 = *(long *)(lVar9 + 0x60);
                  if (lVar7 != 0) {
                    uVar5 = FUN_00ca0030(lVar7 + -0x50,param_2 + 0xb0);
                    (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
                    if ((uVar5 & 1) == 0) goto LAB_00c9b114;
                    goto LAB_00c9b1a4;
                  }
                  goto LAB_00c9b100;
                }
                iVar6 = iVar2;
                if (iVar2 == 0) goto LAB_00c9b100;
              }
              ClearExclusiveLocal();
              iVar6 = iVar2;
            } while (iVar2 != 0);
          }
LAB_00c9b100:
          uVar5 = FUN_00ca0030(0,param_2 + 0xb0);
          if ((uVar5 & 1) != 0) {
LAB_00c9b1a4:
            if (*(int *)(param_3 + 8) <= (int)uVar10) {
              return;
            }
            if ((uVar10 & 0xffffffff) < *(ulong *)(*(long *)(param_3 + 0x38) + 0x48)) {
              lVar9 = *(long *)(*(long *)(param_3 + 0x38) + 0x40) + (uVar10 & 0xffffffff) * 0x28;
              iVar6 = 1;
              if (-1 < *(int *)(lVar9 + 0x1c)) {
                iVar6 = *(int *)(lVar9 + 0x1c) + 1;
              }
              *(int *)(lVar9 + 0x1c) = iVar6;
              *(undefined4 *)(lVar9 + 0x20) = 0;
              return;
            }
LAB_00c9b354:
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        if (lVar9 != 0) {
LAB_00c9b114:
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          *param_1 = 0;
        }
      }
      uVar5 = (ulong)*(int *)(param_3 + 8);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)uVar5);
  }
  if ((param_5 & 1) == 0) {
    lVar9 = *(long *)(param_2 + 0x70);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar6 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c9b1ec;
          iVar2 = *piVar1;
          if (iVar2 != iVar6) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar7 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00c9b1f0;
          }
          iVar6 = iVar2;
          if (iVar2 == 0) goto LAB_00c9b1ec;
        }
        ClearExclusiveLocal();
        iVar6 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c9b1ec:
    lVar7 = 0;
LAB_00c9b1f0:
    FUN_00c9dde0(&local_68,lVar7,param_4,1,param_2 + 0xb0);
    lVar9 = local_68;
    local_68 = 0;
    *param_1 = lVar9;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x54) != 0) {
        return;
      }
      if (*param_1 != 0) {
        (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
        *param_1 = 0;
      }
    }
    lVar9 = *(long *)(param_2 + 0x70);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar6 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c9b2a4;
          iVar2 = *piVar1;
          if (iVar2 != iVar6) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar7 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00c9b2a8;
          }
          iVar6 = iVar2;
          if (iVar2 == 0) goto LAB_00c9b2a4;
        }
        ClearExclusiveLocal();
        iVar6 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c9b2a4:
    lVar7 = 0;
LAB_00c9b2a8:
    FUN_00c9dde0(&local_68,lVar7,param_4,9,param_2 + 0xb0);
    lVar9 = local_68;
    local_68 = 0;
    *param_1 = lVar9;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x54) != 0) {
        return;
      }
      if (*param_1 != 0) {
        (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
        *param_1 = 0;
      }
    }
  }
  *param_1 = 0;
  return;
}


