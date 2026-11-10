/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498110; name: FUN_00498110
 */


void FUN_00498110(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uint)param_2 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar3 * uVar1) * 8)
        ; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] == param_2) {
        lVar10 = plVar5[2];
        if (lVar10 == 0) {
          return;
        }
        lVar4 = FUN_00498330(lVar10);
        if (lVar4 == 0) {
          return;
        }
        if (param_4 == 2) {
          FUN_0045ae00(lVar4,param_3);
          FUN_004c5bc0(0);
          iVar2 = *(int *)(lVar10 + 0x40);
          goto joined_r0x004982d8;
        }
        if (param_4 == 1) {
          uVar6 = (ulong)*(uint *)(param_3 + 0x10);
          if (*(uint *)(param_3 + 0x10) != 0) {
            plVar7 = *(long **)(param_3 + 8);
            plVar5 = plVar7;
LAB_00498258:
            do {
              uVar1 = *(uint *)(param_1 + 0x38);
              if (uVar1 != 0) {
                uVar3 = 0;
                uVar8 = (uint)*plVar5;
                if (uVar1 != 0) {
                  uVar3 = uVar8 / uVar1;
                }
                for (plVar9 = *(long **)(*(long *)(param_1 + 0x30) +
                                        (ulong)(uVar8 - uVar3 * uVar1) * 8); plVar9 != (long *)0x0;
                    plVar9 = (long *)*plVar9) {
                  if (plVar9[1] == *plVar5) {
                    FUN_0045b180(plVar9[2]);
                    plVar7 = *(long **)(param_3 + 8);
                    uVar6 = (ulong)*(uint *)(param_3 + 0x10);
                    plVar5 = plVar5 + 1;
                    if (plVar5 == plVar7 + uVar6) goto LAB_004982c0;
                    goto LAB_00498258;
                  }
                }
              }
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar7 + uVar6);
          }
LAB_004982c0:
          FUN_0045ac00(lVar4,param_3);
LAB_004982cc:
          FUN_004c5bc0(0);
          iVar2 = *(int *)(lVar10 + 0x40);
        }
        else {
          if (param_4 != 0) goto LAB_004982cc;
          uVar6 = (ulong)*(uint *)(param_3 + 0x10);
          if (*(uint *)(param_3 + 0x10) != 0) {
            plVar7 = *(long **)(param_3 + 8);
            plVar5 = plVar7;
LAB_004981a0:
            do {
              uVar1 = *(uint *)(param_1 + 0x38);
              if (uVar1 != 0) {
                uVar3 = 0;
                uVar8 = (uint)*plVar5;
                if (uVar1 != 0) {
                  uVar3 = uVar8 / uVar1;
                }
                for (plVar9 = *(long **)(*(long *)(param_1 + 0x30) +
                                        (ulong)(uVar8 - uVar3 * uVar1) * 8); plVar9 != (long *)0x0;
                    plVar9 = (long *)*plVar9) {
                  if (plVar9[1] == *plVar5) {
                    FUN_0045b180(plVar9[2]);
                    plVar7 = *(long **)(param_3 + 8);
                    uVar6 = (ulong)*(uint *)(param_3 + 0x10);
                    plVar5 = plVar5 + 1;
                    if (plVar5 == plVar7 + uVar6) goto LAB_00498208;
                    goto LAB_004981a0;
                  }
                }
              }
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar7 + uVar6);
          }
LAB_00498208:
          FUN_0045abb0(lVar4,param_3);
          FUN_004c5bc0(0);
          iVar2 = *(int *)(lVar10 + 0x40);
        }
joined_r0x004982d8:
        if (iVar2 == 0) {
          return;
        }
        lVar10 = **(long **)(lVar10 + 0x38);
        if (lVar10 == 0) {
          return;
        }
        *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
        FUN_00498470(lVar10 + 0x20,lVar4 + 0xa0);
        return;
      }
    }
  }
  return;
}


