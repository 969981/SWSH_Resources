/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00793ce0; name: FUN_00793ce0
 */


undefined8 FUN_00793ce0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  uVar5 = param_1[1];
  if (uVar5 == 0) {
    return 0;
  }
  uVar4 = *param_2;
  uVar6 = uVar5 - 1;
  uVar1 = uVar6 & uVar5;
  if (uVar1 == 0) {
    uVar8 = uVar6 & uVar4;
    lVar7 = *param_1;
    puVar9 = *(undefined8 **)(lVar7 + uVar8 * 8);
  }
  else {
    uVar8 = uVar4;
    if (uVar5 <= uVar4) {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar4 / uVar5;
      }
      uVar8 = uVar4 - uVar8 * uVar5;
    }
    lVar7 = *param_1;
    puVar9 = *(undefined8 **)(lVar7 + uVar8 * 8);
  }
  if (puVar9 == (undefined8 *)0x0) {
    return 0;
  }
  plVar12 = (long *)*puVar9;
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  if (uVar1 != 0) {
    do {
      uVar10 = plVar12[1];
      if (uVar10 == uVar4) {
        if (plVar12[2] == uVar4) goto LAB_00793e00;
      }
      else {
        if (uVar5 <= uVar10) {
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = uVar10 / uVar5;
          }
          uVar10 = uVar10 - uVar2 * uVar5;
        }
        if (uVar10 != uVar8) {
          return 0;
        }
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  while( true ) {
    uVar10 = plVar12[1];
    if (uVar10 != uVar4 && (uVar10 & uVar6) != uVar8) {
      return 0;
    }
    if ((uVar10 == uVar4) && (plVar12[2] == uVar4)) break;
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      return 0;
    }
  }
LAB_00793e00:
  if (uVar1 == 0) {
    uVar4 = uVar4 & uVar6;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar3 = *(long **)(lVar7 + uVar4 * 8);
  do {
    plVar11 = plVar3;
    plVar3 = (long *)*plVar11;
  } while ((long *)*plVar11 != plVar12);
  if (plVar11 != param_1 + 5) {
    uVar8 = plVar11[1];
    if (uVar1 == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar10 * uVar5;
    }
    if (uVar8 == uVar4) goto LAB_00793ec8;
  }
  if (*plVar12 != 0) {
    uVar8 = *(ulong *)(*plVar12 + 8);
    if (uVar1 == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar10 * uVar5;
    }
    if (uVar8 == uVar4) goto LAB_00793ec8;
  }
  *(undefined8 *)(lVar7 + uVar4 * 8) = 0;
LAB_00793ec8:
  lVar7 = *plVar12;
  if (lVar7 != 0) {
    uVar8 = *(ulong *)(lVar7 + 8);
    if (uVar1 == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*param_1 + uVar8 * 8) = plVar11;
      lVar7 = *plVar12;
    }
  }
  *plVar11 = lVar7;
  *plVar12 = 0;
  param_1[9] = param_1[9] + -1;
  if (plVar12[3] != 0) {
    (**(code **)(*(long *)(plVar12[3] + 0x48) + 0x18))();
    plVar12[3] = 0;
  }
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar12,0x20,8);
  return 1;
}


