/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ba350; name: FUN_004ba350
 */


undefined4 FUN_004ba350(long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_02712d20;
  local_68 = FUN_00498ed0(*(undefined8 *)PTR_DAT_02712d20,param_3,*(undefined4 *)(param_1 + 0x10));
  if ((int)local_68 == param_2) {
    uVar2 = 1;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x100);
    if (plVar4 == (long *)0x0) {
      param_2 = *(int *)(param_1 + 0xfc);
      plVar6 = (long *)0x0;
      plVar7 = (long *)0x0;
    }
    else {
      plVar6 = plVar4;
      do {
        if ((int)plVar6[1] == (int)local_68) {
          plVar6 = plVar6 + 2;
          goto LAB_004ba3e4;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      plVar6 = (long *)0x0;
LAB_004ba3e4:
      plVar7 = plVar4;
      do {
        if ((int)plVar7[1] == param_2) {
          plVar7 = plVar7 + 2;
          goto LAB_004ba428;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      param_2 = *(int *)(param_1 + 0xfc);
      do {
        if ((int)plVar4[1] == param_2) {
          plVar7 = plVar4 + 2;
          goto LAB_004ba428;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      plVar7 = (long *)0x0;
    }
LAB_004ba428:
    FUN_004ba5d0(param_1,plVar6,plVar7,param_3);
    FUN_004992b0(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x10),param_3);
    local_68 = 0;
    plVar4 = *(long **)(param_1 + 0x158);
    if (plVar4 == (long *)0x0) {
      uVar2 = 1;
    }
    else {
      iVar12 = 0;
      uVar2 = 1;
      iVar3 = 0;
      do {
        while (plVar4[4] == param_3) {
          if (iVar3 == param_2) {
            iVar12 = iVar12 + 1;
            local_68 = CONCAT44(iVar12,(undefined4)local_68);
          }
          else {
            iVar12 = 1;
            local_68 = CONCAT44(1,param_2);
          }
          if ((plVar7 != (long *)0x0) &&
             (uVar5 = (ulong)*(uint *)(plVar7 + 1), *(uint *)(plVar7 + 1) != 0)) {
            piVar11 = (int *)*plVar7;
            if (plVar6 != (long *)0x0) {
              piVar13 = piVar11;
LAB_004ba4a4:
              iVar3 = *piVar13;
              for (plVar8 = *(long **)(param_1 + 0x128); plVar8 != (long *)0x0;
                  plVar8 = (long *)*plVar8) {
                if (*(int *)(plVar8 + 1) == iVar3) {
                  if (((*(byte *)((long)plVar8 + 0x14) >> 4 & 1) != 0) &&
                     (*(uint *)(plVar6 + 1) != 0)) {
                    lVar10 = (ulong)*(uint *)(plVar6 + 1) << 2;
                    piVar9 = (int *)*plVar6;
                    goto LAB_004ba4e0;
                  }
                  break;
                }
              }
              goto LAB_004ba4f4;
            }
            do {
              for (plVar8 = *(long **)(param_1 + 0x128);
                  (plVar8 != (long *)0x0 && (*(int *)(plVar8 + 1) != *piVar11));
                  plVar8 = (long *)*plVar8) {
              }
              uVar2 = FUN_004ba750(param_1,*piVar11,plVar4);
              piVar11 = piVar11 + 1;
            } while (piVar11 != (int *)(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 4));
          }
LAB_004ba57c:
          plVar4 = (long *)*plVar4;
          iVar3 = param_2;
          if (plVar4 == (long *)0x0) goto LAB_004ba590;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
LAB_004ba590:
    FUN_00498f70(*(undefined8 *)PTR_DAT_02712d20,param_3,*(undefined4 *)(param_1 + 0x10),&local_68);
  }
  return uVar2;
  while (lVar10 = lVar10 + -4, piVar9 = piVar9 + 1, lVar10 != 0) {
LAB_004ba4e0:
    if (*piVar9 == iVar3) goto LAB_004ba50c;
  }
LAB_004ba4f4:
  uVar2 = FUN_004ba750(param_1,iVar3,plVar4);
  piVar11 = (int *)*plVar7;
  uVar5 = (ulong)*(uint *)(plVar7 + 1);
LAB_004ba50c:
  piVar13 = piVar13 + 1;
  if (piVar13 == piVar11 + uVar5) goto LAB_004ba57c;
  goto LAB_004ba4a4;
}


