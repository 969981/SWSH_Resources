/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f9bd0; name: FUN_006f9bd0
 */


undefined8 FUN_006f9bd0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    return 0;
  }
  uVar5 = *param_2;
  uVar7 = uVar6 - 1;
  uVar1 = uVar7 & uVar6;
  if (uVar1 == 0) {
    uVar9 = uVar7 & uVar5;
    lVar8 = *param_1;
    puVar10 = *(undefined8 **)(lVar8 + uVar9 * 8);
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
    lVar8 = *param_1;
    puVar10 = *(undefined8 **)(lVar8 + uVar9 * 8);
  }
  if (puVar10 == (undefined8 *)0x0) {
    return 0;
  }
  plVar4 = (long *)*puVar10;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  if (uVar1 != 0) {
    do {
      uVar11 = plVar4[1];
      if (uVar11 == uVar5) {
        if (plVar4[2] == uVar5) goto LAB_006f9cb8;
      }
      else {
        if (uVar6 <= uVar11) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar11 / uVar6;
          }
          uVar11 = uVar11 - uVar2 * uVar6;
        }
        if (uVar11 != uVar9) {
          return 0;
        }
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  while( true ) {
    uVar11 = plVar4[1];
    if (uVar11 != uVar5 && (uVar11 & uVar7) != uVar9) {
      return 0;
    }
    if ((uVar11 == uVar5) && (plVar4[2] == uVar5)) break;
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return 0;
    }
  }
LAB_006f9cb8:
  if (uVar1 == 0) {
    uVar5 = uVar5 & uVar7;
  }
  else if (uVar6 <= uVar5) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar9 * uVar6;
  }
  plVar3 = *(long **)(lVar8 + uVar5 * 8);
  do {
    plVar12 = plVar3;
    plVar3 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar4);
  if (plVar12 != param_1 + 5) {
    uVar9 = plVar12[1];
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar11 * uVar6;
    }
    if (uVar9 == uVar5) goto LAB_006f9d70;
  }
  if (*plVar4 != 0) {
    uVar9 = *(ulong *)(*plVar4 + 8);
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar11 * uVar6;
    }
    if (uVar9 == uVar5) goto LAB_006f9d70;
  }
  *(undefined8 *)(lVar8 + uVar5 * 8) = 0;
LAB_006f9d70:
  lVar8 = *plVar4;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar1 * uVar6;
    }
    if (uVar9 != uVar5) {
      *(long **)(*param_1 + uVar9 * 8) = plVar12;
      lVar8 = *plVar4;
    }
  }
  *plVar12 = lVar8;
  *plVar4 = 0;
  param_1[9] = param_1[9] + -1;
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar4,0x20,8);
  return 1;
}


