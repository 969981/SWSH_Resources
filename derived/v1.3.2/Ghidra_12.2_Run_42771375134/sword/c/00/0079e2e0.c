/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079e2e0; name: FUN_0079e2e0
 */


undefined8 FUN_0079e2e0(long *param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    return 0;
  }
  iVar2 = *param_2;
  uVar5 = (ulong)iVar2;
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
  plVar13 = (long *)*puVar10;
  if (plVar13 == (long *)0x0) {
    return 0;
  }
  if (uVar1 != 0) {
    do {
      uVar11 = plVar13[1];
      if (uVar11 == uVar5) {
        if ((int)plVar13[2] == iVar2) goto LAB_0079e400;
      }
      else {
        if (uVar6 <= uVar11) {
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar11 / uVar6;
          }
          uVar11 = uVar11 - uVar3 * uVar6;
        }
        if (uVar11 != uVar9) {
          return 0;
        }
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  while( true ) {
    uVar11 = plVar13[1];
    if (uVar11 != uVar5 && (uVar11 & uVar7) != uVar9) {
      return 0;
    }
    if ((uVar11 == uVar5) && ((int)plVar13[2] == iVar2)) break;
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) {
      return 0;
    }
  }
LAB_0079e400:
  if (uVar1 == 0) {
    uVar5 = uVar7 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar9 * uVar6;
  }
  plVar4 = *(long **)(lVar8 + uVar5 * 8);
  do {
    plVar12 = plVar4;
    plVar4 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar13);
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
    if (uVar9 == uVar5) goto LAB_0079e4c8;
  }
  if (*plVar13 != 0) {
    uVar9 = *(ulong *)(*plVar13 + 8);
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
    if (uVar9 == uVar5) goto LAB_0079e4c8;
  }
  *(undefined8 *)(lVar8 + uVar5 * 8) = 0;
LAB_0079e4c8:
  lVar8 = *plVar13;
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
      lVar8 = *plVar13;
    }
  }
  *plVar12 = lVar8;
  *plVar13 = 0;
  param_1[9] = param_1[9] + -1;
  if (plVar13[3] != 0) {
    (**(code **)(*(long *)(plVar13[3] + 0x48) + 0x18))();
    plVar13[3] = 0;
  }
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar13,0x20,8);
  return 1;
}


