/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047d760; name: FUN_0047d760
 */


long * FUN_0047d760(long *param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    plVar3 = *(long **)(PTR_DAT_02713240 + 0x10);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar4 = plVar3;
    do {
      if (plVar4[2] == param_1[1]) {
        return plVar4;
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      uVar5 = (**(code **)(*plVar3 + 0x60))(plVar3);
      if ((uVar5 & 1) != 0) {
        return plVar3;
      }
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x160);
    iVar6 = iVar9;
    if (iVar9 == -1) {
      lVar8 = lVar7;
      do {
        lVar8 = *(long *)(lVar8 + 0x80);
        iVar6 = iVar9;
        if (lVar8 == 0) goto LAB_0047d7a4;
        iVar6 = *(int *)(lVar8 + 0x160);
      } while (iVar6 == -1);
      *(int *)(lVar7 + 0x160) = iVar6;
    }
LAB_0047d7a4:
    plVar3 = *(long **)(PTR_DAT_02713240 + 0x10);
    if (plVar3 != (long *)0x0) {
      uVar5 = param_1[1];
      if (*(int *)(PTR_DAT_02713250 + 0x10) + -1 < 0) {
        do {
          if ((int)plVar3[0xb] == iVar6) {
            iVar9 = (int)plVar3[6] + -1;
            if (-1 < iVar9) {
              iVar10 = 0;
              do {
                while( true ) {
                  iVar1 = iVar9 - iVar10;
                  if (iVar1 < 0) {
                    iVar1 = iVar1 + 1;
                  }
                  iVar1 = iVar10 + (iVar1 >> 1);
                  uVar11 = *(ulong *)(plVar3[5] + (long)iVar1 * 8);
                  if (uVar5 > uVar11 || uVar11 == uVar5) break;
                  iVar9 = iVar1 + -1;
                  if (iVar9 < iVar10) goto LAB_0047d924;
                }
                if (uVar5 <= uVar11) {
                  bVar2 = plVar3[5] + (long)iVar1 * 8 != 0;
                  goto joined_r0x0047d948;
                }
                iVar10 = iVar1 + 1;
              } while (iVar10 <= iVar9);
            }
LAB_0047d924:
            bVar2 = false;
joined_r0x0047d948:
            if (*(char *)((long)plVar3 + 0x126) == '\0') {
              if (bVar2 || (int)plVar3[6] == 0) {
                return plVar3;
              }
            }
            else if (bVar2) {
              return plVar3;
            }
          }
          plVar3 = (long *)plVar3[1];
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          if ((int)plVar3[0xb] == iVar6) {
            iVar9 = (int)plVar3[6] + -1;
            if (-1 < iVar9) {
              iVar10 = 0;
              do {
                while( true ) {
                  iVar1 = iVar9 - iVar10;
                  if (iVar1 < 0) {
                    iVar1 = iVar1 + 1;
                  }
                  iVar1 = iVar10 + (iVar1 >> 1);
                  uVar11 = *(ulong *)(plVar3[5] + (long)iVar1 * 8);
                  if (uVar5 > uVar11 || uVar11 == uVar5) break;
                  iVar9 = iVar1 + -1;
                  if (iVar9 < iVar10) goto LAB_0047d834;
                }
                if (uVar5 <= uVar11) {
                  bVar2 = plVar3[5] + (long)iVar1 * 8 != 0;
                  goto joined_r0x0047d850;
                }
                iVar10 = iVar1 + 1;
              } while (iVar10 <= iVar9);
            }
LAB_0047d834:
            bVar2 = false;
joined_r0x0047d850:
            if (*(char *)((long)plVar3 + 0x126) == '\0') {
              if (bVar2) {
                return plVar3;
              }
              if ((int)plVar3[6] == 0) {
                iVar9 = 0;
                iVar10 = *(int *)(PTR_DAT_02713250 + 0x10) + -1;
                while( true ) {
                  while( true ) {
                    iVar1 = iVar10 - iVar9;
                    if (iVar1 < 0) {
                      iVar1 = iVar1 + 1;
                    }
                    iVar1 = iVar9 + (iVar1 >> 1);
                    uVar11 = *(ulong *)(*(long *)(PTR_DAT_02713250 + 8) + (long)iVar1 * 8);
                    if (uVar5 > uVar11 || uVar11 == uVar5) break;
                    iVar10 = iVar1 + -1;
                    if (iVar10 < iVar9) {
                      return plVar3;
                    }
                  }
                  if (uVar5 <= uVar11) break;
                  iVar9 = iVar1 + 1;
                  if (iVar10 < iVar9) {
                    return plVar3;
                  }
                }
                if (*(long *)(PTR_DAT_02713250 + 8) + (long)iVar1 * 8 == 0) {
                  return plVar3;
                }
              }
            }
            else if (bVar2) {
              return plVar3;
            }
          }
          plVar3 = (long *)plVar3[1];
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  return (long *)0x0;
}


