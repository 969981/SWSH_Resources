/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f4c1c0; name: FUN_00f4c1c0
 */


long * FUN_00f4c1c0(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(param_1 + 0x80);
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar4 = uVar3 - 1;
    uVar5 = uVar4 & uVar3;
    if (uVar5 == 0) {
      uVar8 = uVar4 & uVar2;
      lVar6 = *(long *)(param_1 + 0x78);
      plVar9 = *(long **)(lVar6 + uVar8 * 8);
    }
    else {
      uVar8 = uVar2;
      if (uVar3 <= uVar2) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar2 / uVar3;
        }
        uVar8 = uVar2 - uVar8 * uVar3;
      }
      lVar6 = *(long *)(param_1 + 0x78);
      plVar9 = *(long **)(lVar6 + uVar8 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar5 == 0) {
        do {
          uVar10 = plVar9[1];
          if (uVar2 != uVar10 && (uVar10 & uVar4) != uVar8) break;
          if ((uVar2 == uVar10) && (plVar9[2] == uVar2)) goto LAB_00f4c290;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar2 == uVar10) {
            if (plVar9[2] == uVar2) goto LAB_00f4c290;
          }
          else {
            if (uVar3 <= uVar10) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar10 / uVar3;
              }
              uVar10 = uVar10 - uVar1 * uVar3;
            }
            if (uVar10 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return (long *)(param_1 + 0xd0);
LAB_00f4c290:
  if (uVar5 == 0) {
    uVar8 = uVar4 & uVar2;
LAB_00f4c2b8:
    plVar7 = *(long **)(lVar6 + uVar8 * 8);
    plVar9 = (long *)0x0;
    if (plVar7 == (long *)0x0) goto LAB_00f4c33c;
  }
  else {
    uVar8 = uVar2;
    if (uVar2 < uVar3) goto LAB_00f4c2b8;
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = uVar2 / uVar3;
    }
    uVar8 = uVar2 - uVar8 * uVar3;
    plVar7 = *(long **)(lVar6 + uVar8 * 8);
    if (plVar7 == (long *)0x0) {
      plVar9 = (long *)0x0;
      goto LAB_00f4c33c;
    }
  }
  plVar9 = (long *)*plVar7;
  if (plVar9 != (long *)0x0) {
    if (uVar5 == 0) {
      do {
        uVar3 = plVar9[1];
        if (uVar2 != uVar3 && (uVar3 & uVar4) != uVar8) {
          return (long *)&SUB_00000018;
        }
      } while (((uVar2 != uVar3) || (plVar9[2] != uVar2)) &&
              (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0));
    }
    else {
      do {
        uVar5 = plVar9[1];
        if (uVar2 == uVar5) {
          if (plVar9[2] == uVar2) break;
        }
        else {
          if (uVar3 <= uVar5) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar4 * uVar3;
          }
          if (uVar5 != uVar8) {
            return (long *)&SUB_00000018;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
LAB_00f4c33c:
  return plVar9 + 3;
}


