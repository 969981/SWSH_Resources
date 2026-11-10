/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4e50; name: FUN_012b4e50
 */


undefined8 FUN_012b4e50(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar11 = *param_2;
  uVar13 = (long)param_1 - lVar11;
  if ((uVar13 & 3) == 0) {
    uVar10 = param_2[1];
    if (uVar10 < 5) {
      return 0;
    }
    uVar12 = uVar10 - 4;
    if (uVar12 < uVar13) {
      return 0;
    }
    uVar1 = (int)param_2[2] + 1;
    iVar6 = *param_1;
    *(uint *)(param_2 + 2) = uVar1;
    uVar2 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 3) = uVar2;
    if (uVar1 <= *(uint *)((long)param_2 + 0x14)) {
      uVar8 = uVar13 - (long)iVar6;
      if (uVar10 - 2 < uVar8) {
        return 0;
      }
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      if (*(uint *)((long)param_2 + 0x1c) < uVar2) {
        return 0;
      }
      uVar5 = *(ushort *)(lVar11 + uVar8);
      if ((uVar5 & 1) == 0) {
        if (uVar10 <= uVar5) {
          return 0;
        }
        if (uVar10 - uVar5 < uVar8) {
          return 0;
        }
        puVar9 = (ushort *)((long)param_1 - (long)*param_1);
        if (4 < *puVar9) {
          if ((ulong)puVar9[2] != 0) {
            uVar13 = uVar13 + puVar9[2];
            if ((uVar13 & 3) != 0) {
              return 0;
            }
            if (uVar12 < uVar13) {
              return 0;
            }
            uVar1 = *(uint *)(lVar11 + uVar13);
            if ((int)uVar1 < 0) {
              return 0;
            }
            if (uVar1 == 0) {
              return 0;
            }
            if (uVar10 - 1 < uVar13 + uVar1) {
              return 0;
            }
          }
          uVar13 = (ulong)puVar9[2];
          if (uVar13 != 0) {
            puVar3 = (uint *)((long)param_1 + uVar13);
            puVar4 = (uint *)((long)puVar3 + (ulong)*puVar3);
            if (puVar4 != (uint *)0x0) {
              uVar8 = (long)puVar4 - lVar11;
              if ((uVar8 & 3) != 0) {
                return 0;
              }
              if (uVar12 < uVar8) {
                return 0;
              }
              if (0x1ffffffe < *puVar4) {
                return 0;
              }
              uVar12 = (ulong)*puVar4 * 4 + 4;
              if (uVar10 <= uVar12) {
                return 0;
              }
              if (uVar10 - uVar12 < uVar8) {
                return 0;
              }
            }
            puVar4 = (uint *)((long)puVar3 + (ulong)*puVar3);
            if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
              lVar11 = 0;
              uVar10 = 0;
              lVar7 = *puVar3 + uVar13 + 4;
              do {
                uVar13 = FUN_012b5290((long)param_1 +
                                      lVar11 + (ulong)*(uint *)((long)param_1 + uVar10 * 4 + lVar7)
                                      + lVar7,param_2);
                if ((uVar13 & 1) == 0) {
                  return 0;
                }
                uVar10 = uVar10 + 1;
                lVar11 = lVar11 + 4;
              } while (uVar10 < *puVar4);
              puVar9 = (ushort *)((long)param_1 - (long)*param_1);
            }
          }
          if (6 < *puVar9) {
            if ((ulong)puVar9[3] != 0) {
              uVar13 = (long)param_1 + ((ulong)puVar9[3] - *param_2);
              if ((uVar13 & 3) != 0) {
                return 0;
              }
              uVar10 = param_2[1];
              if (uVar10 < 5) {
                return 0;
              }
              if (uVar10 - 4 < uVar13) {
                return 0;
              }
              uVar1 = *(uint *)(*param_2 + uVar13);
              if ((int)uVar1 < 0) {
                return 0;
              }
              if (uVar1 == 0) {
                return 0;
              }
              if (uVar10 - 1 < uVar13 + uVar1) {
                return 0;
              }
            }
            uVar13 = (ulong)puVar9[3];
            if (uVar13 != 0) {
              puVar3 = (uint *)((long)param_1 + uVar13);
              puVar4 = (uint *)((long)puVar3 + (ulong)*puVar3);
              if (puVar4 != (uint *)0x0) {
                uVar10 = (long)puVar4 - *param_2;
                if ((uVar10 & 3) != 0) {
                  return 0;
                }
                uVar12 = param_2[1];
                if (uVar12 < 5) {
                  return 0;
                }
                if (uVar12 - 4 < uVar10) {
                  return 0;
                }
                if (0x1ffffffe < *puVar4) {
                  return 0;
                }
                uVar8 = (ulong)*puVar4 * 4 + 4;
                if (uVar12 <= uVar8) {
                  return 0;
                }
                if (uVar12 - uVar8 < uVar10) {
                  return 0;
                }
              }
              puVar4 = (uint *)((long)puVar3 + (ulong)*puVar3);
              if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
                lVar11 = 0;
                uVar10 = 0;
                lVar7 = *puVar3 + uVar13 + 4;
                do {
                  uVar13 = FUN_012b5480((long)param_1 +
                                        lVar11 + (ulong)*(uint *)((long)param_1 + uVar10 * 4 + lVar7
                                                                 ) + lVar7,param_2);
                  if ((uVar13 & 1) == 0) {
                    return 0;
                  }
                  uVar10 = uVar10 + 1;
                  lVar11 = lVar11 + 4;
                } while (uVar10 < *puVar4);
                puVar9 = (ushort *)((long)param_1 - (long)*param_1);
              }
            }
            if (8 < *puVar9) {
              if ((ulong)puVar9[4] != 0) {
                uVar13 = (long)param_1 + ((ulong)puVar9[4] - *param_2);
                if ((uVar13 & 3) != 0) {
                  return 0;
                }
                uVar10 = param_2[1];
                if (uVar10 < 5) {
                  return 0;
                }
                if (uVar10 - 4 < uVar13) {
                  return 0;
                }
                uVar1 = *(uint *)(*param_2 + uVar13);
                if ((int)uVar1 < 0) {
                  return 0;
                }
                if (uVar1 == 0) {
                  return 0;
                }
                if (uVar10 - 1 < uVar13 + uVar1) {
                  return 0;
                }
              }
              uVar13 = (ulong)puVar9[4];
              if (uVar13 != 0) {
                puVar3 = (uint *)((long)param_1 + uVar13);
                puVar4 = (uint *)((long)puVar3 + (ulong)*puVar3);
                if (puVar4 != (uint *)0x0) {
                  uVar10 = (long)puVar4 - *param_2;
                  if ((uVar10 & 3) != 0) {
                    return 0;
                  }
                  uVar12 = param_2[1];
                  if (uVar12 < 5) {
                    return 0;
                  }
                  if (uVar12 - 4 < uVar10) {
                    return 0;
                  }
                  if (0x1ffffffe < *puVar4) {
                    return 0;
                  }
                  uVar8 = (ulong)*puVar4 * 4 + 4;
                  if (uVar12 <= uVar8) {
                    return 0;
                  }
                  if (uVar12 - uVar8 < uVar10) {
                    return 0;
                  }
                }
                puVar4 = (uint *)((long)puVar3 + (ulong)*puVar3);
                if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
                  lVar11 = 0;
                  uVar10 = 0;
                  lVar7 = *puVar3 + uVar13 + 4;
                  do {
                    uVar13 = FUN_012b5a90((long)param_1 +
                                          lVar11 + (ulong)*(uint *)((long)param_1 +
                                                                   uVar10 * 4 + lVar7) + lVar7,
                                          param_2);
                    if ((uVar13 & 1) == 0) {
                      return 0;
                    }
                    uVar10 = uVar10 + 1;
                    lVar11 = lVar11 + 4;
                  } while (uVar10 < *puVar4);
                }
              }
            }
          }
        }
        *(int *)(param_2 + 2) = (int)param_2[2] + -1;
        return 1;
      }
    }
  }
  return 0;
}


