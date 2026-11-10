/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00819640; name: FUN_00819640
 */


void FUN_00819640(long *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar12 = param_1[1];
    bVar1 = uVar12 < 3;
    if (uVar12 < 2) goto LAB_00819750;
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar12 = param_1[1];
    bVar1 = uVar12 <= param_2;
    if (uVar12 < param_2) goto LAB_00819750;
  }
  if (bVar1) {
    return;
  }
  uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
  if (uVar12 < 3 || (uVar12 - 1 & uVar12) != 0) {
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
  if (uVar12 <= param_2) {
    return;
  }
LAB_00819750:
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar3 = operator_new(param_2 << 3);
  pvVar4 = (void *)*param_1;
  *param_1 = (long)pvVar3;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  uVar2 = param_2 - 1;
  uVar12 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar2 < 3) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar5 = lVar7 * 8;
      lVar7 = lVar7 + 4;
      *(undefined8 *)(*param_1 + lVar5) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
    } while (param_2 - uVar12 != lVar7);
  }
  if (uVar12 != 0) {
    lVar7 = lVar7 << 3;
    lVar5 = -uVar12;
    do {
      *(undefined8 *)(*param_1 + lVar7) = 0;
      lVar7 = lVar7 + 8;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
  }
  plVar8 = param_1 + 2;
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    uVar12 = plVar6[1];
    if ((uVar2 & param_2) == 0) {
      uVar12 = uVar12 & uVar2;
      *(long **)(*param_1 + uVar12 * 8) = plVar8;
      plVar8 = (long *)*plVar6;
    }
    else {
      if (param_2 <= uVar12) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar12 / param_2;
        }
        uVar12 = uVar12 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar12 * 8) = plVar8;
      plVar8 = (long *)*plVar6;
    }
    if (plVar8 != (long *)0x0) {
      if ((uVar2 & param_2) == 0) {
        do {
          while (uVar10 = plVar8[1] & uVar2, uVar10 != uVar12) {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar10 * 8) == 0) {
              *(long **)(*param_1 + uVar10 * 8) = plVar6;
              uVar12 = uVar10;
              plVar9 = (long *)*plVar8;
              plVar6 = plVar8;
            }
            else {
              do {
                plVar11 = plVar9;
                plVar9 = (long *)*plVar11;
                if (plVar9 == (long *)0x0) break;
              } while (plVar8[2] == plVar9[2]);
              *plVar6 = (long)plVar9;
              *plVar11 = **(long **)(*param_1 + uVar10 * 8);
              **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
              plVar9 = (long *)*plVar6;
            }
            plVar8 = plVar9;
            if (plVar8 == (long *)0x0) {
              return;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar6 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          while( true ) {
            uVar2 = plVar8[1];
            if (param_2 <= uVar2) {
              uVar10 = 0;
              if (param_2 != 0) {
                uVar10 = uVar2 / param_2;
              }
              uVar2 = uVar2 - uVar10 * param_2;
            }
            if (uVar2 != uVar12) break;
            plVar9 = (long *)*plVar8;
joined_r0x008198ec:
            plVar6 = plVar8;
            plVar8 = plVar9;
            if (plVar9 == (long *)0x0) {
              return;
            }
          }
          plVar9 = plVar8;
          if (*(long *)(*param_1 + uVar2 * 8) != 0) {
            do {
              plVar11 = plVar9;
              plVar9 = (long *)*plVar11;
              if (plVar9 == (long *)0x0) break;
            } while (plVar8[2] == plVar9[2]);
            *plVar6 = (long)plVar9;
            *plVar11 = **(long **)(*param_1 + uVar2 * 8);
            **(undefined8 **)(*param_1 + uVar2 * 8) = plVar8;
            plVar9 = (long *)*plVar6;
            plVar8 = plVar6;
            goto joined_r0x008198ec;
          }
          *(long **)(*param_1 + uVar2 * 8) = plVar6;
          plVar9 = (long *)*plVar8;
          plVar6 = plVar8;
          uVar12 = uVar2;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


