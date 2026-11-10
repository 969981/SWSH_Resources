/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8bba0; name: FUN_00c8bba0
 */


long * FUN_00c8bba0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar2 = *(ulong *)(param_1 + 0x178);
  if ((param_2 & 0x400000000) != 0) {
    param_2 = param_2 & 0xfffffff800000000 | 0xffff;
  }
  if (uVar2 == 0) {
    return (long *)0x0;
  }
  uVar3 = uVar2 - 1;
  uVar4 = uVar3 & uVar2;
  if (uVar4 == 0) {
    uVar7 = uVar3 & param_2;
    lVar5 = *(long *)(param_1 + 0x170);
    plVar8 = *(long **)(lVar5 + uVar7 * 8);
  }
  else {
    uVar7 = param_2;
    if (uVar2 <= param_2) {
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = param_2 / uVar2;
      }
      uVar7 = param_2 - uVar7 * uVar2;
    }
    lVar5 = *(long *)(param_1 + 0x170);
    plVar8 = *(long **)(lVar5 + uVar7 * 8);
  }
  if (plVar8 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    return (long *)0x0;
  }
  if (uVar4 != 0) {
    do {
      uVar9 = plVar8[1];
      if (param_2 == uVar9) {
        if (plVar8[2] == param_2) goto LAB_00c8bc94;
      }
      else {
        if (uVar2 <= uVar9) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar9 / uVar2;
          }
          uVar9 = uVar9 - uVar1 * uVar2;
        }
        if (uVar9 != uVar7) {
          return (long *)0x0;
        }
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return (long *)0x0;
      }
    } while( true );
  }
  while( true ) {
    uVar9 = plVar8[1];
    if (param_2 != uVar9 && (uVar9 & uVar3) != uVar7) {
      return (long *)0x0;
    }
    if ((param_2 == uVar9) && (plVar8[2] == param_2)) break;
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
  }
LAB_00c8bc94:
  if (uVar4 == 0) {
    uVar7 = uVar3 & param_2;
LAB_00c8bccc:
    plVar6 = *(long **)(lVar5 + uVar7 * 8);
    plVar8 = (long *)0x0;
    if (plVar6 == (long *)0x0) goto LAB_00c8bd50;
  }
  else {
    uVar7 = param_2;
    if (param_2 < uVar2) goto LAB_00c8bccc;
    uVar7 = 0;
    if (uVar2 != 0) {
      uVar7 = param_2 / uVar2;
    }
    uVar7 = param_2 - uVar7 * uVar2;
    plVar6 = *(long **)(lVar5 + uVar7 * 8);
    if (plVar6 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto LAB_00c8bd50;
    }
  }
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    if (uVar4 == 0) {
      do {
        uVar2 = plVar8[1];
        if (param_2 != uVar2 && (uVar2 & uVar3) != uVar7) {
          return (long *)&SUB_00000018;
        }
      } while (((param_2 != uVar2) || (plVar8[2] != param_2)) &&
              (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0));
    }
    else {
      do {
        uVar4 = plVar8[1];
        if (param_2 == uVar4) {
          if (plVar8[2] == param_2) break;
        }
        else {
          if (uVar2 <= uVar4) {
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = uVar4 / uVar2;
            }
            uVar4 = uVar4 - uVar3 * uVar2;
          }
          if (uVar4 != uVar7) {
            return (long *)&SUB_00000018;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_00c8bd50:
  return plVar8 + 3;
}


