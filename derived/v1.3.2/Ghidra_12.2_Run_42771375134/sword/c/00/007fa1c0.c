/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fa1c0; name: FUN_007fa1c0
 */


void FUN_007fa1c0(long *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_2 == 0) {
    pvVar1 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar1 = operator_new(param_2 << 3);
  pvVar2 = (void *)*param_1;
  *param_1 = (long)pvVar1;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  uVar7 = param_2 - 1;
  uVar3 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar7 < 3) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar4 = lVar6 * 8;
      lVar6 = lVar6 + 4;
      *(undefined8 *)(*param_1 + lVar4) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
    } while (param_2 - uVar3 != lVar6);
  }
  if (uVar3 != 0) {
    lVar6 = lVar6 << 3;
    lVar4 = -uVar3;
    do {
      *(undefined8 *)(*param_1 + lVar6) = 0;
      lVar6 = lVar6 + 8;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
  }
  plVar8 = param_1 + 2;
  plVar5 = (long *)*plVar8;
  if (plVar5 != (long *)0x0) {
    uVar3 = plVar5[1];
    if ((uVar7 & param_2) == 0) {
      uVar3 = uVar3 & uVar7;
      *(long **)(*param_1 + uVar3 * 8) = plVar8;
      plVar8 = (long *)*plVar5;
    }
    else {
      if (param_2 <= uVar3) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar3 / param_2;
        }
        uVar3 = uVar3 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar3 * 8) = plVar8;
      plVar8 = (long *)*plVar5;
    }
    if (plVar8 != (long *)0x0) {
      if ((uVar7 & param_2) == 0) {
        do {
          while (uVar10 = plVar8[1] & uVar7, uVar10 != uVar3) {
            plVar9 = plVar8;
            if (*(long *)(*param_1 + uVar10 * 8) == 0) {
              *(long **)(*param_1 + uVar10 * 8) = plVar5;
              uVar3 = uVar10;
              plVar9 = (long *)*plVar8;
              plVar5 = plVar8;
            }
            else {
              do {
                plVar11 = plVar9;
                plVar9 = (long *)*plVar11;
                if ((plVar9 == (long *)0x0) || (plVar8[2] != plVar9[2])) break;
              } while ((int)plVar8[3] == (int)plVar9[3]);
              *plVar5 = (long)plVar9;
              *plVar11 = **(long **)(*param_1 + uVar10 * 8);
              **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
              plVar9 = (long *)*plVar5;
            }
            plVar8 = plVar9;
            if (plVar8 == (long *)0x0) {
              return;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar5 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          while( true ) {
            uVar7 = plVar8[1];
            if (param_2 <= uVar7) {
              uVar10 = 0;
              if (param_2 != 0) {
                uVar10 = uVar7 / param_2;
              }
              uVar7 = uVar7 - uVar10 * param_2;
            }
            if (uVar7 != uVar3) break;
            plVar9 = (long *)*plVar8;
joined_r0x007fa36c:
            plVar5 = plVar8;
            plVar8 = plVar9;
            if (plVar9 == (long *)0x0) {
              return;
            }
          }
          plVar9 = plVar8;
          if (*(long *)(*param_1 + uVar7 * 8) != 0) {
            do {
              plVar11 = plVar9;
              plVar9 = (long *)*plVar11;
              if ((plVar9 == (long *)0x0) || (plVar8[2] != plVar9[2])) break;
            } while ((int)plVar8[3] == (int)plVar9[3]);
            *plVar5 = (long)plVar9;
            *plVar11 = **(long **)(*param_1 + uVar7 * 8);
            **(undefined8 **)(*param_1 + uVar7 * 8) = plVar8;
            plVar9 = (long *)*plVar5;
            plVar8 = plVar5;
            goto joined_r0x007fa36c;
          }
          *(long **)(*param_1 + uVar7 * 8) = plVar5;
          plVar9 = (long *)*plVar8;
          plVar5 = plVar8;
          uVar3 = uVar7;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


