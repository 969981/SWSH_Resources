/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00777b30; name: FUN_00777b30
 */


void FUN_00777b30(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar13 = param_1[1];
    bVar4 = uVar13 < 3;
    if (uVar13 < 2) goto LAB_00777c40;
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar13 = param_1[1];
    bVar4 = uVar13 <= param_2;
    if (uVar13 < param_2) goto LAB_00777c40;
  }
  if (bVar4) {
    return;
  }
  uVar5 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
  if (uVar13 < 3 || (uVar13 - 1 & uVar13) != 0) {
    uVar5 = std::__next_prime(uVar5);
    if (uVar5 <= param_2) {
      uVar5 = param_2;
    }
  }
  else {
    if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar5 <= param_2) {
      uVar5 = param_2;
    }
  }
  param_2 = uVar5;
  if (uVar13 <= param_2) {
    return;
  }
LAB_00777c40:
  if (param_2 == 0) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar6,param_1[1] << 3,8);
    }
    param_1[1] = 0;
    return;
  }
  lVar6 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar7 = *param_1;
  *param_1 = lVar6;
  if (lVar7 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar7,param_1[1] << 3,8);
  }
  uVar5 = param_2 - 1;
  uVar13 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar5 < 3) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar7 = lVar6 * 8;
      lVar6 = lVar6 + 4;
      *(undefined8 *)(*param_1 + lVar7) = 0;
      *(undefined8 *)(*param_1 + lVar7 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar7 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar7 + 0x18) = 0;
    } while (param_2 - uVar13 != lVar6);
  }
  if (uVar13 != 0) {
    lVar6 = lVar6 << 3;
    lVar7 = -uVar13;
    do {
      *(undefined8 *)(*param_1 + lVar6) = 0;
      lVar6 = lVar6 + 8;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0);
  }
  plVar9 = param_1 + 5;
  plVar8 = (long *)*plVar9;
  if (plVar8 != (long *)0x0) {
    uVar13 = plVar8[1];
    if ((uVar5 & param_2) == 0) {
      uVar13 = uVar13 & uVar5;
      *(long **)(*param_1 + uVar13 * 8) = plVar9;
      plVar9 = (long *)*plVar8;
      plVar3 = (long *)PTR_DAT_02710920;
    }
    else {
      if (param_2 <= uVar13) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar13 / param_2;
        }
        uVar13 = uVar13 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar13 * 8) = plVar9;
      plVar9 = (long *)*plVar8;
      plVar3 = (long *)PTR_DAT_02710920;
    }
    PTR_DAT_02710920 = (undefined *)plVar3;
    if (plVar9 != (long *)0x0) {
      if ((uVar5 & param_2) == 0) {
        do {
          while (uVar11 = plVar9[1] & uVar5, uVar11 != uVar13) {
            plVar10 = plVar9;
            if (*(long *)(*param_1 + uVar11 * 8) == 0) {
              *(long **)(*param_1 + uVar11 * 8) = plVar8;
              uVar13 = uVar11;
              plVar10 = (long *)*plVar9;
              plVar8 = plVar9;
            }
            else {
              do {
                plVar12 = plVar10;
                plVar10 = (long *)*plVar12;
                if (plVar10 == (long *)0x0) break;
                plVar1 = plVar3;
                if (plVar9[2] != 0) {
                  plVar1 = (long *)(plVar9[2] + 0x58);
                }
                plVar2 = plVar3;
                if (plVar10[2] != 0) {
                  plVar2 = (long *)(plVar10[2] + 0x58);
                }
              } while (*plVar1 == *plVar2);
              *plVar8 = (long)plVar10;
              *plVar12 = **(long **)(*param_1 + uVar11 * 8);
              **(undefined8 **)(*param_1 + uVar11 * 8) = plVar9;
              plVar10 = (long *)*plVar8;
            }
            plVar9 = plVar10;
            if (plVar9 == (long *)0x0) {
              return;
            }
          }
          plVar10 = (long *)*plVar9;
          plVar8 = plVar9;
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          while( true ) {
            uVar5 = plVar9[1];
            if (param_2 <= uVar5) {
              uVar11 = 0;
              if (param_2 != 0) {
                uVar11 = uVar5 / param_2;
              }
              uVar5 = uVar5 - uVar11 * param_2;
            }
            if (uVar5 != uVar13) break;
            plVar10 = (long *)*plVar9;
joined_r0x00777e50:
            plVar8 = plVar9;
            plVar9 = plVar10;
            if (plVar10 == (long *)0x0) {
              return;
            }
          }
          plVar10 = plVar9;
          if (*(long *)(*param_1 + uVar5 * 8) != 0) {
            do {
              plVar12 = plVar10;
              plVar10 = (long *)*plVar12;
              if (plVar10 == (long *)0x0) break;
              plVar1 = plVar3;
              if (plVar9[2] != 0) {
                plVar1 = (long *)(plVar9[2] + 0x58);
              }
              plVar2 = plVar3;
              if (plVar10[2] != 0) {
                plVar2 = (long *)(plVar10[2] + 0x58);
              }
            } while (*plVar1 == *plVar2);
            *plVar8 = (long)plVar10;
            *plVar12 = **(long **)(*param_1 + uVar5 * 8);
            **(undefined8 **)(*param_1 + uVar5 * 8) = plVar9;
            plVar10 = (long *)*plVar8;
            plVar9 = plVar8;
            goto joined_r0x00777e50;
          }
          *(long **)(*param_1 + uVar5 * 8) = plVar8;
          plVar10 = (long *)*plVar9;
          plVar8 = plVar9;
          uVar13 = uVar5;
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


