/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00821f40; name: FUN_00821f40
 */


void FUN_00821f40(long *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar9 = param_1[1];
    bVar1 = uVar9 < 3;
    if (uVar9 < 2) goto LAB_00822050;
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar9 = param_1[1];
    bVar1 = uVar9 <= param_2;
    if (uVar9 < param_2) goto LAB_00822050;
  }
  if (bVar1) {
    return;
  }
  uVar2 = (ulong)((float)(ulong)param_1[5] / *(float *)(param_1 + 6));
  if (uVar9 < 3 || (uVar9 - 1 & uVar9) != 0) {
    uVar2 = std::__next_prime(uVar2);
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
  }
  else {
    if (1 < uVar2) {
      uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
    }
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
  }
  param_2 = uVar2;
  if (uVar9 <= param_2) {
    return;
  }
LAB_00822050:
  if (param_2 == 0) {
    pvVar4 = (void *)*param_1;
    *param_1 = 0;
    if ((pvVar4 != (void *)0x0) && (param_1[2] == 0)) {
      free(pvVar4);
    }
    param_1[1] = 0;
  }
  else {
    if (param_1[2] == 0) {
      pvVar5 = malloc(param_2 << 3);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)pvVar5;
    }
    else {
      lVar3 = FUN_0080efb0(param_1[2],0);
      pvVar4 = (void *)*param_1;
      *param_1 = lVar3;
    }
    if ((pvVar4 != (void *)0x0) && (param_1[2] == 0)) {
      free(pvVar4);
    }
    uVar2 = param_2 - 1;
    uVar9 = param_2 & 3;
    param_1[1] = param_2;
    if (uVar2 < 3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar8 = lVar3 * 8;
        lVar3 = lVar3 + 4;
        *(undefined8 *)(*param_1 + lVar8) = 0;
        *(undefined8 *)(*param_1 + lVar8 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar8 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar8 + 0x18) = 0;
      } while (param_2 - uVar9 != lVar3);
    }
    if (uVar9 != 0) {
      lVar3 = lVar3 << 3;
      lVar8 = -uVar9;
      do {
        *(undefined8 *)(*param_1 + lVar3) = 0;
        lVar3 = lVar3 + 8;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
    }
    plVar11 = param_1 + 3;
    plVar10 = (long *)*plVar11;
    if (plVar10 != (long *)0x0) {
      uVar9 = plVar10[1];
      if ((uVar2 & param_2) == 0) {
        uVar9 = uVar9 & uVar2;
        *(long **)(*param_1 + uVar9 * 8) = plVar11;
        plVar11 = (long *)*plVar10;
      }
      else {
        if (param_2 <= uVar9) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar6 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = plVar11;
        plVar11 = (long *)*plVar10;
      }
      if (plVar11 != (long *)0x0) {
        if ((uVar2 & param_2) == 0) {
          do {
            while (uVar6 = plVar11[1] & uVar2, uVar6 != uVar9) {
              if (*(long *)(*param_1 + uVar6 * 8) == 0) {
                *(long **)(*param_1 + uVar6 * 8) = plVar10;
                uVar9 = uVar6;
                plVar12 = (long *)*plVar11;
                plVar10 = plVar11;
              }
              else {
                plVar12 = plVar11;
                if (*plVar11 != 0) {
                  uVar7 = FUN_00822350(plVar11 + 2,*plVar11 + 0x10);
                  if ((uVar7 & 1) != 0) {
                    do {
                      plVar12 = (long *)*plVar12;
                      if (*plVar12 == 0) break;
                      uVar7 = FUN_00822350(plVar11 + 2,*plVar12 + 0x10);
                    } while ((uVar7 & 1) != 0);
                  }
                }
                *plVar10 = *plVar12;
                *plVar12 = **(long **)(*param_1 + uVar6 * 8);
                **(undefined8 **)(*param_1 + uVar6 * 8) = plVar11;
                plVar12 = (long *)*plVar10;
              }
              plVar11 = plVar12;
              if (plVar11 == (long *)0x0) {
                return;
              }
            }
            plVar12 = (long *)*plVar11;
            plVar10 = plVar11;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            while( true ) {
              uVar2 = plVar11[1];
              if (param_2 <= uVar2) {
                uVar6 = 0;
                if (param_2 != 0) {
                  uVar6 = uVar2 / param_2;
                }
                uVar2 = uVar2 - uVar6 * param_2;
              }
              if (uVar2 != uVar9) break;
              plVar12 = (long *)*plVar11;
joined_r0x00822248:
              plVar10 = plVar11;
              plVar11 = plVar12;
              if (plVar12 == (long *)0x0) {
                return;
              }
            }
            if (*(long *)(*param_1 + uVar2 * 8) != 0) {
              plVar12 = plVar11;
              if (*plVar11 != 0) {
                uVar6 = FUN_00822350(plVar11 + 2,*plVar11 + 0x10);
                if ((uVar6 & 1) != 0) {
                  do {
                    plVar12 = (long *)*plVar12;
                    if (*plVar12 == 0) break;
                    uVar6 = FUN_00822350(plVar11 + 2,*plVar12 + 0x10);
                  } while ((uVar6 & 1) != 0);
                }
              }
              *plVar10 = *plVar12;
              *plVar12 = **(long **)(*param_1 + uVar2 * 8);
              **(undefined8 **)(*param_1 + uVar2 * 8) = plVar11;
              plVar12 = (long *)*plVar10;
              plVar11 = plVar10;
              goto joined_r0x00822248;
            }
            *(long **)(*param_1 + uVar2 * 8) = plVar10;
            plVar12 = (long *)*plVar11;
            plVar10 = plVar11;
            uVar9 = uVar2;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  return;
}


