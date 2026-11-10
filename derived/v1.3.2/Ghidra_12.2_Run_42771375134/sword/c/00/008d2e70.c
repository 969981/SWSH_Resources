/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d2e70; name: FUN_008d2e70
 */


undefined2 FUN_008d2e70(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar3 = *(ulong *)(param_1 + 0xb8);
  if (uVar3 == 0) {
    return 0x11;
  }
  uVar4 = uVar3 - 1;
  uVar5 = uVar4 & uVar3;
  if (uVar5 == 0) {
    uVar7 = uVar4 & param_2;
    lVar6 = *(long *)(param_1 + 0xb0);
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
  }
  else {
    uVar7 = param_2;
    if (uVar3 <= param_2) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = param_2 / uVar3;
      }
      uVar7 = param_2 - uVar7 * uVar3;
    }
    lVar6 = *(long *)(param_1 + 0xb0);
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
  }
  if (plVar8 == (long *)0x0) {
    return 0x11;
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    return 0x11;
  }
  uVar2 = 0x11;
  if (uVar5 == 0) {
    do {
      uVar9 = plVar8[1];
      if (uVar9 != param_2 && (uVar9 & uVar4) != uVar7) {
        return uVar2;
      }
      if ((uVar9 == param_2) && (plVar8[2] == param_2)) goto LAB_008d2f50;
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  else {
    do {
      uVar9 = plVar8[1];
      if (uVar9 == param_2) {
        if (plVar8[2] == param_2) {
LAB_008d2f50:
          if (uVar5 == 0) {
            plVar8 = *(long **)(lVar6 + (uVar4 & param_2) * 8);
            do {
              do {
                plVar8 = (long *)*plVar8;
              } while (plVar8[1] != param_2);
            } while (plVar8[2] != param_2);
          }
          else {
            uVar5 = param_2;
            if (uVar3 <= param_2) {
              uVar5 = 0;
              if (uVar3 != 0) {
                uVar5 = param_2 / uVar3;
              }
              uVar5 = param_2 - uVar5 * uVar3;
            }
            plVar8 = *(long **)(lVar6 + uVar5 * 8);
            do {
              do {
                plVar8 = (long *)*plVar8;
              } while (plVar8[1] != param_2);
            } while (plVar8[2] != param_2);
          }
          return *(undefined2 *)((long)plVar8 + 0x18);
        }
      }
      else {
        if (uVar3 <= uVar9) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar9 / uVar3;
          }
          uVar9 = uVar9 - uVar1 * uVar3;
        }
        if (uVar9 != uVar7) {
          return uVar2;
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return uVar2;
}


