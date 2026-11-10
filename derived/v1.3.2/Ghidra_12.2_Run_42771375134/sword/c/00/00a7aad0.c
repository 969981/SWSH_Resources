/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7aad0; name: FUN_00a7aad0
 */


undefined8 FUN_00a7aad0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(char *)(param_1 + 0x1734) != '\0') {
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 0x1d78);
  if (uVar6 == 0) {
    return 0;
  }
  uVar5 = *(ulong *)(param_1 + 0x1dc8);
  uVar7 = uVar6 - 1;
  uVar4 = uVar7 & uVar6;
  if (uVar4 == 0) {
    uVar9 = uVar7 & uVar5;
    lVar8 = *(long *)(param_1 + 0x1d70);
    plVar2 = *(long **)(lVar8 + uVar9 * 8);
  }
  else {
    uVar9 = uVar5;
    if (uVar6 <= uVar5) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar5 / uVar6;
      }
      uVar9 = uVar5 - uVar9 * uVar6;
    }
    lVar8 = *(long *)(param_1 + 0x1d70);
    plVar2 = *(long **)(lVar8 + uVar9 * 8);
  }
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (uVar4 == 0) {
      do {
        uVar3 = plVar2[1];
        if (uVar5 != uVar3 && (uVar3 & uVar7) != uVar9) {
          return 0;
        }
        if ((uVar5 == uVar3) && (plVar2[2] == uVar5)) goto LAB_00a7abbc;
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    else {
      do {
        uVar3 = plVar2[1];
        if (uVar5 == uVar3) {
          if (plVar2[2] == uVar5) {
LAB_00a7abbc:
            if (uVar4 == 0) {
              plVar2 = *(long **)(lVar8 + (uVar7 & uVar5) * 8);
              do {
                do {
                  plVar2 = (long *)*plVar2;
                } while (uVar5 != plVar2[1]);
              } while (plVar2[2] != uVar5);
            }
            else {
              uVar4 = uVar5;
              if (uVar6 <= uVar5) {
                uVar4 = 0;
                if (uVar6 != 0) {
                  uVar4 = uVar5 / uVar6;
                }
                uVar4 = uVar5 - uVar4 * uVar6;
              }
              plVar2 = *(long **)(lVar8 + uVar4 * 8);
              do {
                do {
                  plVar2 = (long *)*plVar2;
                } while (uVar5 != plVar2[1]);
              } while (plVar2[2] != uVar5);
            }
            if ((*(int *)((long)plVar2 + 0x18) < 0) || (*(int *)(param_1 + 0x1760) != 0)) {
              return 0;
            }
            return 1;
          }
        }
        else {
          if (uVar6 <= uVar3) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar3 / uVar6;
            }
            uVar3 = uVar3 - uVar1 * uVar6;
          }
          if (uVar3 != uVar9) {
            return 0;
          }
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  return 0;
}


