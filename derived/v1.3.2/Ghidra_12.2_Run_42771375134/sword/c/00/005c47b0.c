/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c47b0; name: FUN_005c47b0
 */


long FUN_005c47b0(long param_1,char *param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  
  if ((param_2 == (char *)0x0) || (cVar2 = *param_2, cVar2 == '\0')) {
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    return param_1;
  }
  uVar5 = 1;
  do {
    uVar1 = uVar5;
    uVar5 = uVar1 + 1;
  } while (param_2[uVar1] != '\0');
  uVar4 = *(ulong *)(param_1 + 0x20);
  if ((long)uVar1 < (long)uVar4) {
    uVar5 = 1;
    do {
      uVar7 = uVar5;
      uVar5 = uVar7 + 1;
    } while (param_2[uVar7] != '\0');
    if (uVar7 < uVar4) {
      lVar3 = *(long *)(param_1 + 8);
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) {
        if (uVar5 <= uVar4 * 2) {
          uVar5 = uVar4 * 2;
        }
      }
      else {
        uVar5 = *(long *)(param_1 + 0x18) + uVar5;
      }
      FUN_005c5e00(param_1,uVar5,0);
      lVar3 = *(long *)(param_1 + 8);
    }
    if ((long)uVar7 < 0) {
      uVar5 = 0;
      do {
        uVar7 = uVar5;
        uVar5 = uVar7 + 1;
      } while (param_2[uVar7] != '\0');
    }
    if ((lVar3 != 0) && (0 < (long)uVar7)) {
      uVar5 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          pcVar9 = param_2 + lVar8 + 1;
          pcVar10 = (char *)(lVar3 + 1 + lVar8);
          lVar8 = lVar8 + 4;
          pcVar10[-1] = pcVar9[-1];
          *pcVar10 = *pcVar9;
          pcVar10[1] = pcVar9[1];
          pcVar10[2] = pcVar9[2];
        } while (uVar7 - uVar5 != lVar8);
      }
      if (uVar5 != 0) {
        lVar6 = -uVar5;
        pcVar9 = param_2 + lVar8;
        pcVar10 = (char *)(lVar3 + lVar8);
        do {
          lVar6 = lVar6 + 1;
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (lVar6 != 0);
      }
      *(undefined1 *)(lVar3 + uVar7) = 0;
      lVar3 = *(long *)(param_1 + 8);
    }
    lVar8 = 0;
    if (lVar3 != 0) {
      do {
        pcVar9 = (char *)(lVar3 + lVar8);
        lVar8 = lVar8 + 1;
      } while (*pcVar9 != '\0');
LAB_005c4a34:
      lVar8 = lVar8 + -1;
    }
  }
  else {
    if (uVar4 < uVar5) {
      FUN_005c5e00(param_1,uVar5,1);
      cVar2 = *param_2;
    }
    if (cVar2 == '\0') {
      if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
        **(undefined1 **)(param_1 + 8) = 0;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_005c4a40;
    }
    uVar5 = 1;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (param_2[uVar4] != '\0');
    if (uVar4 < *(ulong *)(param_1 + 0x20)) {
      lVar3 = *(long *)(param_1 + 8);
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar7 = *(ulong *)(param_1 + 0x20) * 2;
        if (uVar5 <= uVar7) {
          uVar5 = uVar7;
        }
      }
      else {
        uVar5 = *(long *)(param_1 + 0x18) + uVar5;
      }
      FUN_005c5e00(param_1,uVar5,0);
      lVar3 = *(long *)(param_1 + 8);
    }
    if ((long)uVar4 < 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (param_2[uVar4] != '\0');
    }
    if ((lVar3 != 0) && (0 < (long)uVar4)) {
      uVar5 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          pcVar9 = param_2 + lVar8 + 1;
          pcVar10 = (char *)(lVar3 + 1 + lVar8);
          lVar8 = lVar8 + 4;
          pcVar10[-1] = pcVar9[-1];
          *pcVar10 = *pcVar9;
          pcVar10[1] = pcVar9[1];
          pcVar10[2] = pcVar9[2];
        } while (uVar4 - uVar5 != lVar8);
      }
      if (uVar5 != 0) {
        lVar6 = -uVar5;
        pcVar9 = param_2 + lVar8;
        pcVar10 = (char *)(lVar3 + lVar8);
        do {
          lVar6 = lVar6 + 1;
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (lVar6 != 0);
      }
      *(undefined1 *)(lVar3 + uVar4) = 0;
      lVar3 = *(long *)(param_1 + 8);
    }
    lVar8 = 0;
    if (lVar3 != 0) {
      do {
        pcVar9 = (char *)(lVar3 + lVar8);
        lVar8 = lVar8 + 1;
      } while (*pcVar9 != '\0');
      goto LAB_005c4a34;
    }
  }
  *(long *)(param_1 + 0x10) = lVar8;
LAB_005c4a40:
  *(ulong *)(param_1 + 0x10) = uVar1;
  return param_1;
}


