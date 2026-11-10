/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040e550; name: FUN_0040e550
 */


undefined4
FUN_0040e550(long param_1,uint param_2,undefined4 param_3,int *param_4,uint param_5,uint *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  
  piVar8 = *(int **)(param_1 + 0xe8);
  uVar6 = *(uint *)(param_1 + 0xf0);
  piVar1 = piVar8 + (ulong)uVar6 * 4;
  iVar2 = piVar8[1];
  if ((uint)(piVar1[-3] - iVar2) < param_2) {
LAB_0040e838:
    return 2;
  }
  switch(param_3) {
  case 0:
    *param_4 = 0;
    *param_6 = param_2;
    return 1;
  case 1:
    lVar10 = FUN_0040a140(param_1);
    param_2 = (param_5 & 1) + param_2;
    iVar12 = *(int *)(*(long *)(param_1 + 0xe8) + 4);
    iVar2 = *(int *)(lVar10 + 0xc);
    uVar6 = *(uint *)(lVar10 + 0x10);
    iVar3 = *(int *)(*(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10 + -0xc);
    *param_6 = uVar6;
    uVar11 = iVar3 - iVar12;
    if (iVar2 == 0) {
      uVar6 = param_2 + 1;
LAB_0040e7d8:
      *param_6 = uVar6;
    }
    else if (uVar6 < param_2) {
      do {
        uVar6 = uVar6 + iVar2;
      } while (uVar6 < param_2);
      goto LAB_0040e7d8;
    }
    bVar4 = uVar11 <= uVar6;
    bVar5 = uVar6 == uVar11;
    goto LAB_0040e7e0;
  case 2:
    lVar10 = FUN_0040a140(param_1);
    param_2 = (param_5 & 1) + param_2;
    iVar3 = *(int *)(*(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10 + -0xc);
    iVar2 = *(int *)(*(long *)(param_1 + 0xe8) + 4);
    iVar12 = *(int *)(lVar10 + 8);
    *param_6 = 0;
    uVar6 = iVar3 - iVar2;
    if (iVar12 == 0) {
LAB_0040e7b8:
      uVar11 = param_2 + 1;
    }
    else {
      if (param_2 == 0) {
LAB_0040e7c8:
        bVar4 = uVar6 == 0;
        bVar5 = uVar6 == 0;
        goto LAB_0040e7e0;
      }
      uVar11 = 0;
      do {
        uVar11 = uVar11 + iVar12;
      } while (uVar11 < param_2);
    }
    break;
  case 3:
    lVar10 = FUN_0040a140(param_1);
    param_2 = (param_5 & 1) + param_2;
    iVar3 = *(int *)(*(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10 + -0xc);
    iVar2 = *(int *)(*(long *)(param_1 + 0xe8) + 4);
    iVar12 = *(int *)(lVar10 + 4);
    *param_6 = 0;
    uVar6 = iVar3 - iVar2;
    if (iVar12 == 0) goto LAB_0040e7b8;
    if (param_2 == 0) goto LAB_0040e7c8;
    uVar11 = 0;
    do {
      uVar11 = uVar11 + iVar12;
    } while (uVar11 < param_2);
    break;
  case 4:
    piVar9 = piVar8 + 4;
    if ((param_5 & 1) == 0) {
      piVar9 = piVar8;
    }
    if (piVar9 != piVar1) {
      iVar12 = *param_4;
      if (iVar12 == 0) {
        do {
          if (iVar2 + param_2 <= (uint)piVar9[1]) {
            iVar12 = *piVar9;
            goto LAB_0040e81c;
          }
          piVar9 = piVar9 + 4;
        } while (piVar1 != piVar9);
      }
      else {
        do {
          if ((iVar2 + param_2 <= (uint)piVar9[1]) && (*piVar9 == iVar12)) goto LAB_0040e81c;
          piVar9 = piVar9 + 4;
        } while (piVar1 != piVar9);
      }
    }
    *param_4 = piVar1[-4];
    lVar10 = *(long *)(param_1 + 0xe8);
    piVar9 = (int *)(lVar10 + (ulong)*(uint *)(param_1 + 0xf0) * 0x10 + -0x10);
    goto LAB_0040e824;
  case 5:
    if (uVar6 == 2) {
      return 2;
    }
    iVar12 = *param_4;
    if (iVar12 == 0) {
      uVar13 = 1;
      while ((uint)piVar8[uVar13 * 4 + 1] <= iVar2 + param_2) {
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar11;
        if (uVar6 - 2 < uVar11) {
          return 2;
        }
      }
      iVar12 = piVar8[uVar13 * 4];
    }
    else {
      uVar13 = 1;
      while (((uint)piVar8[uVar13 * 4 + 1] <= iVar2 + param_2 || (piVar8[uVar13 * 4] != iVar12))) {
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar11;
        if (uVar6 - 2 < uVar11) {
          return 2;
        }
      }
    }
    *param_4 = iVar12;
    uVar6 = *(int *)(*(long *)(param_1 + 0xe8) + uVar13 * 0x10 + 4) -
            *(int *)(*(long *)(param_1 + 0xe8) + 4);
    goto LAB_0040e830;
  case 6:
    if (param_2 != 0) {
      return 2;
    }
    if ((param_5 & 1) == 0) {
      *param_4 = *piVar8;
      *param_6 = 0;
      return 1;
    }
    return 2;
  case 7:
    *param_6 = piVar1[-3] - iVar2;
    *param_4 = *(int *)(*(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10 + -0x10)
    ;
    return 1;
  default:
    goto LAB_0040e838;
  }
  *param_6 = uVar11;
  bVar4 = uVar6 <= uVar11;
  bVar5 = uVar11 == uVar6;
LAB_0040e7e0:
  uVar7 = 1;
  if (bVar4 && !bVar5) {
    uVar7 = 2;
  }
  *param_4 = 0;
  return uVar7;
LAB_0040e81c:
  *param_4 = iVar12;
  lVar10 = *(long *)(param_1 + 0xe8);
LAB_0040e824:
  uVar6 = piVar9[1] - *(int *)(lVar10 + 4);
LAB_0040e830:
  *param_6 = uVar6;
  return 1;
}


