/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f4a340; name: FUN_00f4a340
 */


undefined8 FUN_00f4a340(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x88);
  uVar2 = *param_2;
  uVar5 = uVar4 - 1;
  uVar3 = uVar5 & uVar4;
  if (uVar3 == 0) {
    uVar7 = uVar5 & uVar2;
    lVar6 = *(long *)(param_1 + 0x80);
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
  }
  else {
    uVar7 = uVar2;
    if (uVar4 <= uVar2) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar2 / uVar4;
      }
      uVar7 = uVar2 - uVar7 * uVar4;
    }
    lVar6 = *(long *)(param_1 + 0x80);
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
  }
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    if (uVar3 == 0) {
      while (uVar9 = plVar8[1], uVar2 == uVar9 || (uVar9 & uVar5) == uVar7) {
        if (((uVar2 == uVar9) && (plVar8[2] == uVar2)) ||
           (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0)) break;
      }
    }
    else {
      do {
        uVar9 = plVar8[1];
        if (uVar2 == uVar9) {
          if (plVar8[2] == uVar2) break;
        }
        else {
          if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  if (uVar3 == 0) {
    plVar8 = *(long **)(lVar6 + (uVar5 & uVar2) * 8);
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (uVar2 != plVar8[1]);
    } while (plVar8[2] != uVar2);
  }
  else {
    uVar3 = uVar2;
    if (uVar4 <= uVar2) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar2 / uVar4;
      }
      uVar3 = uVar2 - uVar3 * uVar4;
    }
    plVar8 = *(long **)(lVar6 + uVar3 * 8);
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (uVar2 != plVar8[1]);
    } while (plVar8[2] != uVar2);
  }
  return *(undefined8 *)((long)plVar8 + 0x18);
}


