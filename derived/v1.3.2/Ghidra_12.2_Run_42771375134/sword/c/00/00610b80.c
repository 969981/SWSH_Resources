/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00610b80; name: FUN_00610b80
 */


void FUN_00610b80(uint param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  
  if (param_4 != 0) {
    iVar2 = -param_6;
    uVar4 = 0x80;
    if (param_6 != 2) {
      uVar4 = 0x100;
    }
    uVar5 = 0x100;
    if (param_6 != 2) {
      uVar5 = 0x80;
    }
    lVar6 = (long)param_5;
    do {
      uVar7 = *(uint *)(param_3 + 0x1c);
      if ((uVar7 >> 4 & 1) == 0) {
        cVar1 = *(char *)(param_3 + 0x20);
        iVar10 = (int)cVar1;
        lVar8 = *(long *)(param_3 + 0x30);
        if ((cVar1 == param_6) || (cVar1 == iVar2)) {
LAB_00610be0:
          if (iVar10 != 0) {
            if (iVar10 == param_6) {
              if (param_1 != 0) {
                lVar11 = 0;
                do {
                  piVar12 = *(int **)(param_2 + lVar11 * 8);
                  if (lVar8 - *piVar12 < lVar6 && -(lVar8 - *piVar12) < lVar6) {
                    uVar7 = uVar7 | 0x210;
                    goto LAB_00610cec;
                  }
                  lVar11 = lVar11 + 1;
                } while ((uint)lVar11 < param_1);
              }
            }
            else if ((iVar10 == iVar2) && (param_1 != 0)) {
              lVar11 = 0;
LAB_00610c70:
              piVar12 = *(int **)(param_2 + lVar11 * 8);
              lVar3 = (lVar8 - *piVar12) - (long)piVar12[1];
              if (lVar6 <= lVar3 || lVar6 <= -lVar3) goto code_r0x00610c90;
              uVar7 = uVar7 | 0x410;
LAB_00610cec:
              *(uint *)(param_3 + 0x1c) = uVar7;
              *(int **)(param_3 + 0x28) = piVar12;
            }
            goto joined_r0x00610d74;
          }
        }
        else {
          cVar1 = *(char *)(param_3 + 0x21);
          iVar10 = (int)cVar1;
          if ((cVar1 == param_6) || (cVar1 == iVar2)) goto LAB_00610be0;
        }
        if ((uVar7 >> 6 & 1) != 0) {
          if ((uVar7 & uVar4) == 0) {
            if (((uVar7 & uVar5) != 0) && (param_1 != 0)) {
              lVar11 = 0;
LAB_00610cb0:
              piVar12 = *(int **)(param_2 + lVar11 * 8);
              lVar3 = (lVar8 - *piVar12) - (long)piVar12[1];
              if (lVar6 <= lVar3 || lVar6 <= -lVar3) goto code_r0x00610cd0;
              uVar7 = uVar7 | 0x410;
              *(int **)(param_3 + 0x28) = piVar12;
LAB_00610d18:
              *(uint *)(param_3 + 0x1c) = uVar7;
            }
          }
          else {
            if (param_1 == 0) goto joined_r0x00610d74;
            lVar11 = 0;
            do {
              piVar12 = *(int **)(param_2 + lVar11 * 8);
              lVar3 = lVar8 - *piVar12;
              if (lVar3 < lVar6 && -lVar3 < lVar6) {
                *(int **)(param_3 + 0x28) = piVar12;
                uVar7 = uVar7 | 0x210;
                goto LAB_00610d18;
              }
              lVar11 = lVar11 + 1;
            } while ((uint)lVar11 < param_1);
          }
LAB_00610d1c:
          if ((*(long *)(param_3 + 0x28) == 0) && (param_1 != 0)) {
            uVar9 = 0;
            do {
              piVar12 = *(int **)(param_2 + uVar9 * 8);
              if ((*piVar12 <= lVar8) && (lVar8 <= (long)piVar12[1] + (long)*piVar12)) {
                *(int **)(param_3 + 0x28) = piVar12;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < param_1);
          }
        }
      }
joined_r0x00610d74:
      param_3 = param_3 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
code_r0x00610c90:
  lVar11 = lVar11 + 1;
  if (param_1 <= (uint)lVar11) goto joined_r0x00610d74;
  goto LAB_00610c70;
code_r0x00610cd0:
  lVar11 = lVar11 + 1;
  if (param_1 <= (uint)lVar11) goto LAB_00610d1c;
  goto LAB_00610cb0;
}


