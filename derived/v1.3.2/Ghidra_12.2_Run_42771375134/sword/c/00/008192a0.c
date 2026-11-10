/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008192a0; name: FUN_008192a0
 */


void FUN_008192a0(long *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar9 = param_1[1];
    bVar1 = uVar9 < 3;
    if (uVar9 < 2) goto LAB_008193b0;
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar9 = param_1[1];
    bVar1 = uVar9 <= param_2;
    if (uVar9 < param_2) goto LAB_008193b0;
  }
  if (bVar1) {
    return;
  }
  uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
  if (uVar9 < 3 || (uVar9 - 1 & uVar9) != 0) {
    uVar3 = std::__next_prime(uVar3);
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
  }
  else {
    if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
  }
  param_2 = uVar3;
  if (uVar9 <= param_2) {
    return;
  }
LAB_008193b0:
  if (param_2 == 0) {
    pvVar4 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = operator_new(param_2 << 3);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)pvVar4;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    uVar3 = param_2 - 1;
    uVar9 = param_2 & 3;
    param_1[1] = param_2;
    if (uVar3 < 3) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = lVar7 * 8;
        lVar7 = lVar7 + 4;
        *(undefined8 *)(*param_1 + lVar6) = 0;
        *(undefined8 *)(*param_1 + lVar6 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar6 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar6 + 0x18) = 0;
      } while (param_2 - uVar9 != lVar7);
    }
    if (uVar9 != 0) {
      lVar7 = lVar7 << 3;
      lVar6 = -uVar9;
      do {
        *(undefined8 *)(*param_1 + lVar7) = 0;
        lVar7 = lVar7 + 8;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0);
    }
    plVar11 = param_1 + 2;
    plVar10 = (long *)*plVar11;
    if (plVar10 != (long *)0x0) {
      uVar9 = plVar10[1];
      if ((uVar3 & param_2) == 0) {
        uVar9 = uVar9 & uVar3;
        *(long **)(*param_1 + uVar9 * 8) = plVar11;
        plVar11 = (long *)*plVar10;
      }
      else {
        if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = plVar11;
        plVar11 = (long *)*plVar10;
      }
      if (plVar11 != (long *)0x0) {
        if ((uVar3 & param_2) == 0) {
          do {
            while (uVar8 = plVar11[1] & uVar3, uVar8 != uVar9) {
              plVar12 = plVar11;
              if (*(long *)(*param_1 + uVar8 * 8) == 0) {
                *(long **)(*param_1 + uVar8 * 8) = plVar10;
                uVar9 = uVar8;
                plVar12 = (long *)*plVar11;
                plVar10 = plVar11;
              }
              else {
                do {
                  plVar13 = plVar12;
                  plVar12 = (long *)*plVar13;
                  if (plVar12 == (long *)0x0) break;
                  iVar2 = strcmp((char *)plVar11[2],(char *)plVar12[2]);
                } while (iVar2 == 0);
                *plVar10 = (long)plVar12;
                *plVar13 = **(long **)(*param_1 + uVar8 * 8);
                **(undefined8 **)(*param_1 + uVar8 * 8) = plVar11;
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
              uVar3 = plVar11[1];
              if (param_2 <= uVar3) {
                uVar8 = 0;
                if (param_2 != 0) {
                  uVar8 = uVar3 / param_2;
                }
                uVar3 = uVar3 - uVar8 * param_2;
              }
              if (uVar3 != uVar9) break;
              plVar12 = (long *)*plVar11;
joined_r0x00819550:
              plVar10 = plVar11;
              plVar11 = plVar12;
              if (plVar12 == (long *)0x0) {
                return;
              }
            }
            plVar12 = plVar11;
            if (*(long *)(*param_1 + uVar3 * 8) != 0) {
              do {
                plVar13 = plVar12;
                plVar12 = (long *)*plVar13;
                if (plVar12 == (long *)0x0) break;
                iVar2 = strcmp((char *)plVar11[2],(char *)plVar12[2]);
              } while (iVar2 == 0);
              *plVar10 = (long)plVar12;
              *plVar13 = **(long **)(*param_1 + uVar3 * 8);
              **(undefined8 **)(*param_1 + uVar3 * 8) = plVar11;
              plVar12 = (long *)*plVar10;
              plVar11 = plVar10;
              goto joined_r0x00819550;
            }
            *(long **)(*param_1 + uVar3 * 8) = plVar10;
            plVar12 = (long *)*plVar11;
            plVar10 = plVar11;
            uVar9 = uVar3;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  return;
}


