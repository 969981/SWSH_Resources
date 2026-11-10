/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f9c70; name: FUN_007f9c70
 */


void FUN_007f9c70(long *param_1,ulong param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  if (param_2 == 0) {
    pvVar2 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(param_2 << 3);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar9 = param_2 - 1;
    uVar4 = param_2 & 3;
    param_1[1] = param_2;
    if (uVar9 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar5 = lVar6 * 8;
        lVar6 = lVar6 + 4;
        *(undefined8 *)(*param_1 + lVar5) = 0;
        *(undefined8 *)(*param_1 + lVar5 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar5 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
      } while (param_2 - uVar4 != lVar6);
    }
    if (uVar4 != 0) {
      lVar6 = lVar6 << 3;
      lVar5 = -uVar4;
      do {
        *(undefined8 *)(*param_1 + lVar6) = 0;
        lVar6 = lVar6 + 8;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    plVar10 = param_1 + 2;
    plVar8 = (long *)*plVar10;
    if (plVar8 != (long *)0x0) {
      uVar4 = plVar8[1];
      if ((uVar9 & param_2) == 0) {
        uVar4 = uVar4 & uVar9;
        *(long **)(*param_1 + uVar4 * 8) = plVar10;
        plVar10 = (long *)*plVar8;
      }
      else {
        if (param_2 <= uVar4) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar4 / param_2;
          }
          uVar4 = uVar4 - uVar7 * param_2;
        }
        *(long **)(*param_1 + uVar4 * 8) = plVar10;
        plVar10 = (long *)*plVar8;
      }
      if (plVar10 != (long *)0x0) {
        if ((uVar9 & param_2) == 0) {
          do {
            while (uVar7 = plVar10[1] & uVar9, uVar7 != uVar4) {
              plVar11 = plVar10;
              if (*(long *)(*param_1 + uVar7 * 8) == 0) {
                *(long **)(*param_1 + uVar7 * 8) = plVar8;
                uVar4 = uVar7;
                plVar11 = (long *)*plVar10;
                plVar8 = plVar10;
              }
              else {
                do {
                  plVar12 = plVar11;
                  plVar11 = (long *)*plVar12;
                  if ((plVar11 == (long *)0x0) || (plVar10[2] != plVar11[2])) break;
                  iVar1 = strcmp((char *)plVar10[3],(char *)plVar11[3]);
                } while (iVar1 == 0);
                *plVar8 = (long)plVar11;
                *plVar12 = **(long **)(*param_1 + uVar7 * 8);
                **(undefined8 **)(*param_1 + uVar7 * 8) = plVar10;
                plVar11 = (long *)*plVar8;
              }
              plVar10 = plVar11;
              if (plVar10 == (long *)0x0) {
                return;
              }
            }
            plVar11 = (long *)*plVar10;
            plVar8 = plVar10;
            plVar10 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            while( true ) {
              uVar9 = plVar10[1];
              if (param_2 <= uVar9) {
                uVar7 = 0;
                if (param_2 != 0) {
                  uVar7 = uVar9 / param_2;
                }
                uVar9 = uVar9 - uVar7 * param_2;
              }
              if (uVar9 != uVar4) break;
              plVar11 = (long *)*plVar10;
joined_r0x007f9e20:
              plVar8 = plVar10;
              plVar10 = plVar11;
              if (plVar11 == (long *)0x0) {
                return;
              }
            }
            plVar11 = plVar10;
            if (*(long *)(*param_1 + uVar9 * 8) != 0) {
              do {
                plVar12 = plVar11;
                plVar11 = (long *)*plVar12;
                if ((plVar11 == (long *)0x0) || (plVar10[2] != plVar11[2])) break;
                iVar1 = strcmp((char *)plVar10[3],(char *)plVar11[3]);
              } while (iVar1 == 0);
              *plVar8 = (long)plVar11;
              *plVar12 = **(long **)(*param_1 + uVar9 * 8);
              **(undefined8 **)(*param_1 + uVar9 * 8) = plVar10;
              plVar11 = (long *)*plVar8;
              plVar10 = plVar8;
              goto joined_r0x007f9e20;
            }
            *(long **)(*param_1 + uVar9 * 8) = plVar8;
            plVar11 = (long *)*plVar10;
            plVar8 = plVar10;
            uVar4 = uVar9;
            plVar10 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
  return;
}


