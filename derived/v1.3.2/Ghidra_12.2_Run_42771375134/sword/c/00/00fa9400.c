/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa9400; name: FUN_00fa9400
 */


long FUN_00fa9400(long param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  
  puVar4 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  uVar6 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar6);
  uVar8 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar8);
  uVar12 = *puVar2;
  if (uVar12 != 0) {
    puVar2 = puVar2 + (ulong)uVar12 + 1;
    param_3 = param_3 & 0xffff;
    lVar5 = (long)puVar4 + uVar8 + uVar6 + (ulong)*puVar4 + 0xc;
    if (param_4 == 0) {
      do {
        uVar6 = (ulong)*(uint *)(lVar5 + -8);
        lVar7 = lVar5 + uVar6;
        lVar10 = uVar6 - (long)*(int *)(lVar7 + -8);
        lVar9 = lVar5 + lVar10;
        uVar3 = *(ushort *)(lVar9 + -8);
        if (uVar3 < 7) {
          if (param_2 == 0) goto LAB_00fa9548;
        }
        else {
          iVar11 = 0;
          if ((ulong)*(ushort *)(lVar9 + -2) != 0) {
            iVar11 = *(int *)(lVar5 + uVar6 + *(ushort *)(lVar9 + -2) + -8);
          }
          if (iVar11 == param_2) {
LAB_00fa9548:
            if (uVar3 < 5) {
              if (param_3 == 0) goto LAB_00fa956c;
            }
            else {
              uVar12 = 0;
              if ((ulong)*(ushort *)(lVar9 + -4) != 0) {
                uVar12 = *(uint *)(lVar5 + uVar6 + *(ushort *)(lVar9 + -4) + -8);
              }
              if (uVar12 == param_3) {
LAB_00fa956c:
                if (uVar3 < 9) {
                  return 0;
                }
                uVar8 = (ulong)*(ushort *)(lVar5 + lVar10);
                if ((uVar8 == 0) || (*(int *)(lVar5 + uVar6 + uVar8 + -8) != 2)) goto LAB_00fa9680;
              }
            }
          }
        }
        puVar4 = (uint *)(lVar5 + -4);
        lVar5 = lVar5 + 4;
      } while (puVar4 < puVar2);
    }
    else if (param_4 == 1) {
      do {
        uVar6 = (ulong)*(uint *)(lVar5 + -8);
        lVar7 = lVar5 + uVar6;
        lVar10 = uVar6 - (long)*(int *)(lVar7 + -8);
        lVar9 = lVar5 + lVar10;
        uVar3 = *(ushort *)(lVar9 + -8);
        if (uVar3 < 7) {
          if (param_2 == 0) goto LAB_00fa9490;
        }
        else {
          iVar11 = 0;
          if ((ulong)*(ushort *)(lVar9 + -2) != 0) {
            iVar11 = *(int *)(lVar5 + uVar6 + *(ushort *)(lVar9 + -2) + -8);
          }
          if (iVar11 == param_2) {
LAB_00fa9490:
            if (uVar3 < 5) {
              if (param_3 == 0) goto LAB_00fa94b4;
            }
            else {
              uVar12 = 0;
              if ((ulong)*(ushort *)(lVar9 + -4) != 0) {
                uVar12 = *(uint *)(lVar5 + uVar6 + *(ushort *)(lVar9 + -4) + -8);
              }
              if (uVar12 == param_3) {
LAB_00fa94b4:
                if (uVar3 < 9) {
                  return 0;
                }
                uVar8 = (ulong)*(ushort *)(lVar5 + lVar10);
                if ((uVar8 == 0) || (*(int *)(lVar5 + uVar6 + uVar8 + -8) != 1)) goto LAB_00fa9680;
              }
            }
          }
        }
        puVar4 = (uint *)(lVar5 + -4);
        lVar5 = lVar5 + 4;
      } while (puVar4 < puVar2);
    }
    else {
      do {
        uVar6 = (ulong)*(uint *)(lVar5 + -8);
        lVar7 = lVar5 + uVar6;
        lVar10 = uVar6 - (long)*(int *)(lVar7 + -8);
        lVar9 = lVar5 + lVar10;
        uVar3 = *(ushort *)(lVar9 + -8);
        if (uVar3 < 7) {
          if (param_2 == 0) goto LAB_00fa9600;
        }
        else {
          iVar11 = 0;
          if ((ulong)*(ushort *)(lVar9 + -2) != 0) {
            iVar11 = *(int *)(lVar5 + uVar6 + *(ushort *)(lVar9 + -2) + -8);
          }
          if (iVar11 == param_2) {
LAB_00fa9600:
            if (uVar3 < 5) {
              if (param_3 == 0) goto LAB_00fa9624;
            }
            else {
              uVar12 = 0;
              if ((ulong)*(ushort *)(lVar9 + -4) != 0) {
                uVar12 = *(uint *)(lVar5 + uVar6 + *(ushort *)(lVar9 + -4) + -8);
              }
              if (uVar12 == param_3) {
LAB_00fa9624:
                if (param_4 != 2) {
LAB_00fa9680:
                  if (uVar3 < 0xb) {
                    return 0;
                  }
                  if ((ulong)*(ushort *)(lVar9 + 2) == 0) {
                    return 0;
                  }
                  puVar2 = (uint *)(lVar7 + -8 + (ulong)*(ushort *)(lVar9 + 2));
                  return (long)puVar2 + (ulong)*puVar2;
                }
                if (uVar3 < 9) {
                  return 0;
                }
                uVar8 = (ulong)*(ushort *)(lVar5 + lVar10);
                if ((uVar8 == 0) || (*(int *)(lVar5 + uVar6 + uVar8 + -8) == 0)) goto LAB_00fa9680;
              }
            }
          }
        }
        puVar4 = (uint *)(lVar5 + -4);
        lVar5 = lVar5 + 4;
      } while (puVar4 < puVar2);
    }
  }
  return 0;
}


