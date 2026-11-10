/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4360; name: FUN_005c4360
 */


long FUN_005c4360(long param_1,int *param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  
  if ((param_2 == (int *)0x0) || (iVar3 = *param_2, iVar3 == 0)) {
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    return param_1;
  }
  uVar6 = 1;
  do {
    uVar2 = uVar6;
    uVar6 = uVar2 + 1;
  } while (param_2[uVar2] != 0);
  uVar5 = *(ulong *)(param_1 + 0x20);
  if ((long)uVar2 < (long)uVar5) {
    uVar6 = 1;
    do {
      uVar8 = uVar6;
      uVar6 = uVar8 + 1;
    } while (param_2[uVar8] != 0);
    if (uVar8 < uVar5) {
      lVar4 = *(long *)(param_1 + 8);
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) {
        if (uVar6 <= uVar5 * 2) {
          uVar6 = uVar5 * 2;
        }
      }
      else {
        uVar6 = *(long *)(param_1 + 0x18) + uVar6;
      }
      FUN_005c5f60(param_1,uVar6,0);
      lVar4 = *(long *)(param_1 + 8);
    }
    if ((long)uVar8 < 0) {
      uVar6 = 0;
      do {
        uVar8 = uVar6;
        uVar6 = uVar8 + 1;
      } while (param_2[uVar8] != 0);
    }
    if ((lVar4 != 0) && (0 < (long)uVar8)) {
      uVar6 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        piVar10 = param_2 + 2;
        piVar11 = (int *)(lVar4 + 8);
        do {
          piVar11[-2] = piVar10[-2];
          piVar11[-1] = piVar10[-1];
          *piVar11 = *piVar10;
          piVar1 = piVar10 + 1;
          lVar9 = lVar9 + 4;
          piVar10 = piVar10 + 4;
          piVar11[1] = *piVar1;
          piVar11 = piVar11 + 4;
        } while (uVar8 - uVar6 != lVar9);
      }
      if (uVar6 != 0) {
        lVar7 = -uVar6;
        piVar10 = (int *)(lVar4 + lVar9 * 4);
        piVar11 = param_2 + lVar9;
        do {
          lVar7 = lVar7 + 1;
          *piVar10 = *piVar11;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        } while (lVar7 != 0);
      }
      *(undefined4 *)(lVar4 + uVar8 * 4) = 0;
      lVar4 = *(long *)(param_1 + 8);
    }
    lVar9 = 0;
    if (lVar4 != 0) {
      do {
        lVar7 = lVar9 * 4;
        lVar9 = lVar9 + 1;
      } while (*(int *)(lVar4 + lVar7) != 0);
LAB_005c45ec:
      lVar9 = lVar9 + -1;
    }
  }
  else {
    if (uVar5 < uVar6) {
      FUN_005c5f60(param_1,uVar6,1);
      iVar3 = *param_2;
    }
    if (iVar3 == 0) {
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 8) = 0;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_005c45f8;
    }
    uVar6 = 1;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (param_2[uVar5] != 0);
    if (uVar5 < *(ulong *)(param_1 + 0x20)) {
      lVar4 = *(long *)(param_1 + 8);
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar8 = *(ulong *)(param_1 + 0x20) * 2;
        if (uVar6 <= uVar8) {
          uVar6 = uVar8;
        }
      }
      else {
        uVar6 = *(long *)(param_1 + 0x18) + uVar6;
      }
      FUN_005c5f60(param_1,uVar6,0);
      lVar4 = *(long *)(param_1 + 8);
    }
    if ((long)uVar5 < 0) {
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (param_2[uVar5] != 0);
    }
    if ((lVar4 != 0) && (0 < (long)uVar5)) {
      uVar6 = uVar5 & 3;
      if (uVar5 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        piVar10 = param_2 + 2;
        piVar11 = (int *)(lVar4 + 8);
        do {
          piVar11[-2] = piVar10[-2];
          piVar11[-1] = piVar10[-1];
          *piVar11 = *piVar10;
          piVar1 = piVar10 + 1;
          lVar9 = lVar9 + 4;
          piVar10 = piVar10 + 4;
          piVar11[1] = *piVar1;
          piVar11 = piVar11 + 4;
        } while (uVar5 - uVar6 != lVar9);
      }
      if (uVar6 != 0) {
        lVar7 = -uVar6;
        piVar10 = (int *)(lVar4 + lVar9 * 4);
        piVar11 = param_2 + lVar9;
        do {
          lVar7 = lVar7 + 1;
          *piVar10 = *piVar11;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        } while (lVar7 != 0);
      }
      *(undefined4 *)(lVar4 + uVar5 * 4) = 0;
      lVar4 = *(long *)(param_1 + 8);
    }
    lVar9 = 0;
    if (lVar4 != 0) {
      do {
        lVar7 = lVar9 * 4;
        lVar9 = lVar9 + 1;
      } while (*(int *)(lVar4 + lVar7) != 0);
      goto LAB_005c45ec;
    }
  }
  *(long *)(param_1 + 0x10) = lVar9;
LAB_005c45f8:
  *(ulong *)(param_1 + 0x10) = uVar2;
  return param_1;
}


