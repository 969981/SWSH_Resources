/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cac700; name: FUN_00cac700
 */


void FUN_00cac700(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  
  if ((param_1 != 0) && (uVar6 = (ulong)*(uint *)(param_1 + 8), 0 < (int)*(uint *)(param_1 + 8))) {
    uVar10 = 0;
    do {
      iVar5 = (int)uVar6;
      lVar8 = *(long *)(param_1 + 0x10);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        iVar5 = *(int *)(param_1 + 8);
      }
      lVar7 = lVar8;
      if ((long)uVar10 < (long)iVar5) {
        if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x40) + uVar10 * 0x28 + 0x10);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
      }
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x88) == 2) &&
           (uVar6 = FUN_008d42a0(lVar7 + 0x98,0), (uVar6 & 1) != 0)) {
          lVar8 = *(long *)(lVar7 + 0x68);
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
            piVar1 = (int *)(lVar8 + 0x54);
            if (*piVar1 != 0) {
              iVar5 = *piVar1;
              while (iVar11 = iVar5, iVar5 != 0) {
                while( true ) {
                  uVar6 = FUN_00cb50a0(*(undefined8 *)(lVar8 + 0x58));
                  if ((uVar6 & 1) == 0) goto LAB_00cac868;
                  iVar5 = *piVar1;
                  if (iVar5 != iVar11) break;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') {
                    lVar13 = *(long *)(lVar8 + 0x60);
                    if (lVar13 == 0) goto LAB_00cac868;
                    *(undefined1 *)(lVar13 + 0x40) = 1;
                    (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
                    lVar13 = *(long *)(lVar7 + 0x70);
                    goto joined_r0x00cac860;
                  }
                  iVar11 = iVar5;
                  if (iVar5 == 0) goto LAB_00cac868;
                }
                ClearExclusiveLocal();
              }
LAB_00cac868:
              DAT_00000090 = 1;
            }
          }
          lVar13 = *(long *)(lVar7 + 0x70);
joined_r0x00cac860:
          if (lVar13 == 0) {
            *(undefined4 *)(lVar7 + 0x88) = 0;
          }
          else {
            plVar9 = (long *)(lVar13 + 0x48);
            (**(code **)(*plVar9 + 0x10))(plVar9);
            piVar1 = (int *)(lVar13 + 0x54);
            if (*piVar1 != 0) {
              iVar5 = *piVar1;
              while (iVar11 = iVar5, iVar5 != 0) {
                while( true ) {
                  plVar12 = *(long **)(lVar13 + 0x58);
                  lVar4 = FUN_00ca0490();
                  while( true ) {
                    if (plVar12 == (long *)0x0) goto LAB_00cac928;
                    if (plVar12 == (long *)lVar4) break;
                    plVar12 = (long *)*plVar12;
                  }
                  iVar5 = *piVar1;
                  if (iVar5 != iVar11) break;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') {
                    lVar13 = *(long *)(lVar13 + 0x60);
                    if (lVar13 == 0) goto LAB_00cac928;
                    *(undefined1 *)(lVar13 + 0x40) = 1;
                    (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
                    goto LAB_00cac938;
                  }
                  iVar11 = iVar5;
                  if (iVar5 == 0) goto LAB_00cac928;
                }
                ClearExclusiveLocal();
              }
LAB_00cac928:
              DAT_00000090 = 1;
            }
LAB_00cac938:
            *(undefined4 *)(lVar7 + 0x88) = 0;
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
          }
        }
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      uVar6 = (ulong)*(int *)(param_1 + 8);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)uVar6);
  }
  return;
}


