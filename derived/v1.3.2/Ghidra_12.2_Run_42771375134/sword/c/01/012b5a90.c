/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b5a90; name: FUN_012b5a90
 */


undefined8 FUN_012b5a90(int *param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  
  lVar9 = *param_2;
  uVar11 = (long)param_1 - lVar9;
  if ((uVar11 & 3) == 0) {
    uVar8 = param_2[1];
    if (uVar8 < 5) {
      return 0;
    }
    uVar10 = uVar8 - 4;
    if (uVar10 < uVar11) {
      return 0;
    }
    uVar7 = (int)param_2[2] + 1;
    iVar5 = *param_1;
    *(uint *)(param_2 + 2) = uVar7;
    uVar1 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 3) = uVar1;
    if (uVar7 <= *(uint *)((long)param_2 + 0x14)) {
      uVar12 = uVar11 - (long)iVar5;
      if (uVar8 - 2 < uVar12) {
        return 0;
      }
      if ((uVar12 & 1) != 0) {
        return 0;
      }
      if (*(uint *)((long)param_2 + 0x1c) < uVar1) {
        return 0;
      }
      uVar4 = *(ushort *)(lVar9 + uVar12);
      if ((uVar4 & 1) == 0) {
        if (uVar8 <= uVar4) {
          return 0;
        }
        if (uVar8 - uVar4 < uVar12) {
          return 0;
        }
        puVar13 = (ushort *)((long)param_1 - (long)*param_1);
        if (4 < *puVar13) {
          if ((ulong)puVar13[2] != 0) {
            if (uVar8 < 9) {
              return 0;
            }
            if (uVar8 - 8 < uVar11 + puVar13[2]) {
              return 0;
            }
          }
          if (6 < *puVar13) {
            if ((ulong)puVar13[3] != 0) {
              uVar11 = uVar11 + puVar13[3];
              if ((uVar11 & 3) != 0) {
                return 0;
              }
              if (uVar10 < uVar11) {
                return 0;
              }
              uVar1 = *(uint *)(lVar9 + uVar11);
              if ((int)uVar1 < 0) {
                return 0;
              }
              if (uVar1 == 0) {
                return 0;
              }
              if (uVar8 - 1 < uVar11 + uVar1) {
                return 0;
              }
            }
            uVar11 = (ulong)puVar13[3];
            if (uVar11 != 0) {
              puVar2 = (uint *)((long)param_1 + uVar11);
              puVar3 = (uint *)((long)puVar2 + (ulong)*puVar2);
              if (puVar3 != (uint *)0x0) {
                uVar12 = (long)puVar3 - lVar9;
                if ((uVar12 & 3) != 0) {
                  return 0;
                }
                if (uVar10 < uVar12) {
                  return 0;
                }
                if (0x1ffffffe < *puVar3) {
                  return 0;
                }
                uVar10 = (ulong)*puVar3 * 4 + 4;
                if (uVar8 <= uVar10) {
                  return 0;
                }
                if (uVar8 - uVar10 < uVar12) {
                  return 0;
                }
              }
              puVar3 = (uint *)((long)puVar2 + (ulong)*puVar2);
              if ((puVar3 != (uint *)0x0) && (*puVar3 != 0)) {
                lVar9 = 0;
                uVar8 = 0;
                lVar6 = *puVar2 + uVar11 + 4;
                do {
                  uVar11 = FUN_012b5ca0((long)param_1 +
                                        lVar9 + (ulong)*(uint *)((long)param_1 + uVar8 * 4 + lVar6)
                                        + lVar6,param_2);
                  if ((uVar11 & 1) == 0) {
                    return 0;
                  }
                  uVar8 = uVar8 + 1;
                  lVar9 = lVar9 + 4;
                } while (uVar8 < *puVar3);
                uVar7 = *(uint *)(param_2 + 2);
              }
            }
          }
        }
        *(uint *)(param_2 + 2) = uVar7 - 1;
        return 1;
      }
    }
  }
  return 0;
}


