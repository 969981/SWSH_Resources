/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0010e4d0; name: FUN_0010e4d0
 */


void FUN_0010e4d0(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  
  if (param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar4,param_1[1] << 3,8);
    }
    param_1[1] = 0;
    return;
  }
  lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar6 = *param_1;
  *param_1 = lVar4;
  if (lVar6 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar6,param_1[1] << 3,8);
  }
  uVar11 = param_2 - 1;
  uVar7 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar11 < 3) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar6 = lVar4 * 8;
      lVar4 = lVar4 + 4;
      *(undefined8 *)(*param_1 + lVar6) = 0;
      *(undefined8 *)(*param_1 + lVar6 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar6 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar6 + 0x18) = 0;
    } while (param_2 - uVar7 != lVar4);
  }
  if (uVar7 != 0) {
    lVar4 = lVar4 << 3;
    lVar6 = -uVar7;
    do {
      *(undefined8 *)(*param_1 + lVar4) = 0;
      lVar4 = lVar4 + 8;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  plVar9 = param_1 + 5;
  plVar8 = (long *)*plVar9;
  if (plVar8 != (long *)0x0) {
    uVar7 = plVar8[1];
    if ((uVar11 & param_2) == 0) {
      uVar7 = uVar7 & uVar11;
      *(long **)(*param_1 + uVar7 * 8) = plVar9;
      plVar9 = (long *)*plVar8;
      plVar3 = (long *)PTR_DAT_02710920;
    }
    else {
      if (param_2 <= uVar7) {
        uVar12 = 0;
        if (param_2 != 0) {
          uVar12 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar12 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = plVar9;
      plVar9 = (long *)*plVar8;
      plVar3 = (long *)PTR_DAT_02710920;
    }
    PTR_DAT_02710920 = (undefined *)plVar3;
    if (plVar9 != (long *)0x0) {
      if ((uVar11 & param_2) == 0) {
        do {
          while (uVar12 = plVar9[1] & uVar11, uVar12 != uVar7) {
            if (*(long *)(*param_1 + uVar12 * 8) == 0) {
              *(long **)(*param_1 + uVar12 * 8) = plVar8;
              uVar7 = uVar12;
              plVar10 = (long *)*plVar9;
              plVar8 = plVar9;
            }
            else {
              plVar10 = (long *)*plVar9;
              plVar13 = plVar9;
              if ((plVar10 != (long *)0x0) && ((int)plVar9[7] == (int)plVar10[7])) {
                plVar1 = plVar9 + 2;
                if (plVar9[5] != 0) {
                  plVar1 = plVar9 + 3;
                }
                do {
                  plVar5 = plVar10;
                  plVar10 = plVar5 + 2;
                  if (plVar5[5] != 0) {
                    plVar10 = plVar5 + 3;
                  }
                  if ((plVar5[5] != 0 && plVar9[5] != 0) && *plVar1 == *plVar10) {
                    lVar6 = plVar9[2];
                    lVar4 = plVar5[2];
                    plVar10 = plVar3;
                    if (lVar6 != 0) {
                      plVar10 = (long *)(lVar6 + 0x58);
                    }
                    plVar2 = plVar3;
                    if (lVar4 != 0) {
                      plVar2 = (long *)(lVar4 + 0x58);
                    }
                    if (*plVar10 != *plVar2) break;
                  }
                  else if (*plVar1 != *plVar10) break;
                  plVar10 = (long *)*plVar5;
                  plVar13 = plVar5;
                  if ((plVar10 == (long *)0x0) || ((int)plVar9[7] != (int)plVar10[7])) break;
                } while( true );
              }
              *plVar8 = *plVar13;
              *plVar13 = **(long **)(*param_1 + uVar12 * 8);
              **(undefined8 **)(*param_1 + uVar12 * 8) = plVar9;
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
            uVar11 = plVar9[1];
            if (param_2 <= uVar11) {
              uVar12 = 0;
              if (param_2 != 0) {
                uVar12 = uVar11 / param_2;
              }
              uVar11 = uVar11 - uVar12 * param_2;
            }
            if (uVar11 != uVar7) break;
            plVar10 = (long *)*plVar9;
joined_r0x0010e77c:
            plVar8 = plVar9;
            plVar9 = plVar10;
            if (plVar10 == (long *)0x0) {
              return;
            }
          }
          if (*(long *)(*param_1 + uVar11 * 8) != 0) {
            plVar10 = (long *)*plVar9;
            plVar13 = plVar9;
            if ((plVar10 != (long *)0x0) && ((int)plVar9[7] == (int)plVar10[7])) {
              plVar1 = plVar9 + 2;
              if (plVar9[5] != 0) {
                plVar1 = plVar9 + 3;
              }
              do {
                plVar5 = plVar10;
                plVar10 = plVar5 + 2;
                if (plVar5[5] != 0) {
                  plVar10 = plVar5 + 3;
                }
                if ((plVar5[5] != 0 && plVar9[5] != 0) && *plVar1 == *plVar10) {
                  lVar6 = plVar9[2];
                  lVar4 = plVar5[2];
                  plVar10 = plVar3;
                  if (lVar6 != 0) {
                    plVar10 = (long *)(lVar6 + 0x58);
                  }
                  plVar2 = plVar3;
                  if (lVar4 != 0) {
                    plVar2 = (long *)(lVar4 + 0x58);
                  }
                  if (*plVar10 != *plVar2) break;
                }
                else if (*plVar1 != *plVar10) break;
                plVar10 = (long *)*plVar5;
                plVar13 = plVar5;
                if ((plVar10 == (long *)0x0) || ((int)plVar9[7] != (int)plVar10[7])) break;
              } while( true );
            }
            *plVar8 = *plVar13;
            *plVar13 = **(long **)(*param_1 + uVar11 * 8);
            **(undefined8 **)(*param_1 + uVar11 * 8) = plVar9;
            plVar10 = (long *)*plVar8;
            plVar9 = plVar8;
            goto joined_r0x0010e77c;
          }
          *(long **)(*param_1 + uVar11 * 8) = plVar8;
          plVar10 = (long *)*plVar9;
          plVar8 = plVar9;
          uVar7 = uVar11;
          plVar9 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


