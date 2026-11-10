/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c83f10; name: FUN_00c83f10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c83f10(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long local_70;
  long local_68;
  
  *param_1 = (long)(PTR_DAT_0271c3f0 + 0x10);
  if (((param_1[1] != 0) && (*(int *)(param_1[1] + 0x54) != 0)) &&
     (iVar8 = *(int *)((long)param_1 + 0x14), 0 < iVar8)) {
    uVar12 = 0;
    do {
      if (*(ulong *)(param_1[7] + 0x48) <= uVar12) {
LAB_00c84228:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar15 = *(long *)(*(long *)(param_1[7] + 0x40) + uVar12 * 0x20);
      uVar9 = (ulong)*(uint *)(lVar15 + 8);
      if (0 < (int)*(uint *)(lVar15 + 8)) {
        uVar16 = 0;
        do {
          iVar8 = (int)uVar9;
          lVar10 = *(long *)(lVar15 + 0x10);
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
            iVar8 = *(int *)(lVar15 + 8);
          }
          lVar14 = lVar10;
          if ((long)uVar16 < (long)iVar8) {
            if (*(ulong *)(*(long *)(lVar15 + 0x38) + 0x48) <= uVar16) goto LAB_00c84228;
            lVar14 = *(long *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x40) + uVar16 * 0x28 + 0x10);
            if (lVar14 != 0) {
              (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
            }
            if (lVar10 != 0) {
              (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
            }
          }
          if (lVar14 != 0) {
            piVar1 = (int *)(lVar14 + 0x54);
            if (*piVar1 != 0) {
              if (param_1[1] == 0) {
                local_70 = 0;
              }
              else {
                FUN_00c62ba0(&local_70);
              }
              lVar10 = local_70;
              plVar6 = (long *)(lVar14 + 0x48);
              (**(code **)(*plVar6 + 0x10))(plVar6);
              iVar8 = *(int *)(lVar14 + 0x54);
              if (*(int *)(lVar14 + 0x54) == 0) {
                lVar5 = 0;
                uVar11 = _DAT_00000070;
              }
              else {
                do {
                  while( true ) {
                    plVar13 = *(long **)(lVar14 + 0x58);
                    lVar5 = FUN_00c79910();
                    while( true ) {
                      if (plVar13 == (long *)0x0) goto LAB_00c840c8;
                      if (plVar13 == (long *)lVar5) break;
                      plVar13 = (long *)*plVar13;
                    }
                    iVar2 = *piVar1;
                    if (iVar2 != iVar8) break;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar8 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') {
                      lVar5 = 0;
                      if (*(long *)(lVar14 + 0x60) != 0) {
                        lVar5 = *(long *)(lVar14 + 0x60) + -0x50;
                      }
                      goto LAB_00c840cc;
                    }
                    iVar8 = iVar2;
                    if (iVar2 == 0) goto LAB_00c840c8;
                  }
                  ClearExclusiveLocal();
                  iVar8 = iVar2;
                } while (iVar2 != 0);
LAB_00c840c8:
                lVar5 = 0;
LAB_00c840cc:
                uVar11 = *(undefined4 *)(lVar5 + 0x70);
              }
              local_68 = lVar14;
              (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))(plVar6);
              FUN_00ca9590(lVar10,0,&local_68,uVar11);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
              if (lVar5 != 0) {
                (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
              }
              (**(code **)(*plVar6 + 0x18))(plVar6);
              if (local_70 != 0) {
                (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
                local_70 = 0;
              }
            }
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
          }
          uVar9 = (ulong)*(int *)(lVar15 + 8);
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)uVar9);
        iVar8 = *(int *)((long)param_1 + 0x14);
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)iVar8);
  }
  lVar15 = param_1[7];
  param_1[7] = 0;
  if (lVar15 != 0) {
    FUN_00c84480(param_1 + 8);
  }
  lVar15 = param_1[3];
  param_1[3] = 0;
  if (lVar15 == 0) goto LAB_00c841f0;
  plVar6 = *(long **)(lVar15 + 0x30);
  if ((long *)(lVar15 + 0x10) == plVar6) {
    pcVar7 = *(code **)(*plVar6 + 0x20);
LAB_00c841d4:
    (*pcVar7)();
  }
  else if (plVar6 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar6 + 0x28);
    goto LAB_00c841d4;
  }
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar15,param_1[5],param_1[6]);
LAB_00c841f0:
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


