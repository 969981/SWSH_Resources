/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fa460; name: FUN_007fa460
 */


void FUN_007fa460(long *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  byte *__s2;
  long lVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar17 = param_1[1];
    bVar5 = uVar17 < 3;
    if (uVar17 < 2) goto LAB_007fa570;
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar17 = param_1[1];
    bVar5 = uVar17 <= param_2;
    if (uVar17 < param_2) goto LAB_007fa570;
  }
  if (bVar5) {
    return;
  }
  uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
  if (uVar17 < 3 || (uVar17 - 1 & uVar17) != 0) {
    uVar7 = std::__next_prime(uVar7);
    if (uVar7 <= param_2) {
      uVar7 = param_2;
    }
  }
  else {
    if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar7 <= param_2) {
      uVar7 = param_2;
    }
  }
  param_2 = uVar7;
  if (uVar17 <= param_2) {
    return;
  }
LAB_007fa570:
  if (param_2 == 0) {
    pvVar8 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(param_2 << 3);
    pvVar9 = (void *)*param_1;
    *param_1 = (long)pvVar8;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    uVar7 = param_2 - 1;
    uVar17 = param_2 & 3;
    param_1[1] = param_2;
    if (uVar7 < 3) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      do {
        lVar11 = lVar13 * 8;
        lVar13 = lVar13 + 4;
        *(undefined8 *)(*param_1 + lVar11) = 0;
        *(undefined8 *)(*param_1 + lVar11 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar11 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar11 + 0x18) = 0;
      } while (param_2 - uVar17 != lVar13);
    }
    if (uVar17 != 0) {
      lVar13 = lVar13 << 3;
      lVar11 = -uVar17;
      do {
        *(undefined8 *)(*param_1 + lVar13) = 0;
        lVar13 = lVar13 + 8;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0);
    }
    plVar19 = param_1 + 2;
    plVar18 = (long *)*plVar19;
    if (plVar18 != (long *)0x0) {
      uVar17 = plVar18[1];
      if ((uVar7 & param_2) == 0) {
        uVar17 = uVar17 & uVar7;
        *(long **)(*param_1 + uVar17 * 8) = plVar19;
        plVar19 = (long *)*plVar18;
      }
      else {
        if (param_2 <= uVar17) {
          uVar21 = 0;
          if (param_2 != 0) {
            uVar21 = uVar17 / param_2;
          }
          uVar17 = uVar17 - uVar21 * param_2;
        }
        *(long **)(*param_1 + uVar17 * 8) = plVar19;
        plVar19 = (long *)*plVar18;
      }
      if (plVar19 != (long *)0x0) {
        do {
          while (uVar21 = plVar19[1], (uVar7 & param_2) == 0) {
            uVar21 = uVar21 & uVar7;
            if (uVar21 == uVar17) goto LAB_007fa898;
LAB_007fa6c0:
            if (*(long *)(*param_1 + uVar21 * 8) == 0) {
              *(long **)(*param_1 + uVar21 * 8) = plVar18;
              plVar20 = (long *)*plVar19;
              plVar18 = plVar19;
              uVar17 = uVar21;
            }
            else {
              plVar12 = (long *)*plVar19;
              plVar20 = plVar19;
              if (plVar12 != (long *)0x0) {
                bVar3 = *(byte *)(plVar19 + 2);
                __n = (ulong)(bVar3 >> 1);
                if ((bVar3 & 1) != 0) {
                  __n = plVar19[3];
                }
                if ((bVar3 & 1) == 0) {
                  plVar10 = plVar19;
                  do {
                    plVar20 = plVar12;
                    bVar2 = *(byte *)(plVar20 + 2);
                    sVar1 = (ulong)(bVar2 >> 1);
                    if ((bVar2 & 1) != 0) {
                      sVar1 = plVar20[3];
                    }
                    if (__n != sVar1) {
LAB_007fa804:
                      plVar20 = plVar10;
                      break;
                    }
                    if (__n != 0) {
                      pcVar15 = (char *)plVar20[4];
                      if ((bVar2 & 1) == 0) {
                        pcVar15 = (char *)((long)plVar20 + 0x11);
                      }
                      lVar13 = -(ulong)(bVar3 >> 1);
                      pcVar16 = (char *)((long)plVar19 + 0x11);
                      do {
                        if (*pcVar16 != *pcVar15) goto LAB_007fa804;
                        pcVar16 = pcVar16 + 1;
                        pcVar15 = pcVar15 + 1;
                        lVar13 = lVar13 + 1;
                      } while (lVar13 != 0);
                    }
                    plVar10 = plVar20;
                    plVar12 = (long *)*plVar20;
                  } while ((long *)*plVar20 != (long *)0x0);
                }
                else {
                  pbVar14 = (byte *)(plVar12 + 2);
                  bVar5 = (*pbVar14 & 1) == 0;
                  sVar1 = (ulong)(*pbVar14 >> 1);
                  if (!bVar5) {
                    sVar1 = plVar12[3];
                  }
                  if (__n == 0) {
                    while( true ) {
                      plVar10 = plVar12;
                      if (sVar1 != 0) break;
                      plVar12 = (long *)*plVar10;
                      plVar20 = plVar10;
                      if (plVar12 == (long *)0x0) break;
                      sVar1 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
                      if ((*(byte *)(plVar12 + 2) & 1) != 0) {
                        sVar1 = plVar12[3];
                      }
                    }
                  }
                  else if (__n == sVar1) {
                    pvVar8 = (void *)plVar19[4];
                    do {
                      plVar10 = plVar12;
                      __s2 = (byte *)plVar10[4];
                      if (bVar5) {
                        __s2 = pbVar14 + 1;
                      }
                      iVar6 = memcmp(pvVar8,__s2,__n);
                      if (iVar6 != 0) break;
                      plVar12 = (long *)*plVar10;
                      plVar20 = plVar10;
                      if (plVar12 == (long *)0x0) break;
                      pbVar14 = (byte *)(plVar12 + 2);
                      bVar5 = (*pbVar14 & 1) == 0;
                      sVar1 = (ulong)(*pbVar14 >> 1);
                      if (!bVar5) {
                        sVar1 = plVar12[3];
                      }
                    } while (__n == sVar1);
                  }
                }
              }
              *plVar18 = *plVar20;
              *plVar20 = **(long **)(*param_1 + uVar21 * 8);
              **(undefined8 **)(*param_1 + uVar21 * 8) = plVar19;
              plVar20 = (long *)*plVar18;
            }
            plVar19 = plVar20;
            if (plVar19 == (long *)0x0) {
              return;
            }
          }
          if (param_2 <= uVar21) {
            uVar4 = 0;
            if (param_2 != 0) {
              uVar4 = uVar21 / param_2;
            }
            uVar21 = uVar21 - uVar4 * param_2;
          }
          if (uVar21 != uVar17) goto LAB_007fa6c0;
LAB_007fa898:
          plVar20 = (long *)*plVar19;
          plVar18 = plVar19;
          plVar19 = plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  return;
}


