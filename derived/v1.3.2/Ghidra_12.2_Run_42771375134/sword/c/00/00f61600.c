/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f61600; name: FUN_00f61600
 */


undefined8 FUN_00f61600(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar4 = (long *)FUN_00f5c610();
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  uVar6 = param_1[1];
  uVar5 = plVar4[1];
  uVar7 = uVar6 - 1;
  uVar1 = uVar7 & uVar6;
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
  plVar3 = *(long **)(*param_1 + uVar5 * 8);
  do {
    plVar8 = plVar3;
    plVar3 = (long *)*plVar8;
  } while ((long *)*plVar8 != plVar4);
  if (plVar8 != param_1 + 2) {
    uVar9 = plVar8[1];
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar2 * uVar6;
    }
    if (uVar9 == uVar5) goto LAB_00f616d8;
  }
  if (*plVar4 != 0) {
    uVar9 = *(ulong *)(*plVar4 + 8);
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar2 * uVar6;
    }
    if (uVar9 == uVar5) goto LAB_00f616d8;
  }
  *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
LAB_00f616d8:
  if (*plVar4 != 0) {
    uVar9 = *(ulong *)(*plVar4 + 8);
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
      *(long **)(*param_1 + uVar9 * 8) = plVar8;
    }
  }
  *plVar8 = *plVar4;
  *plVar4 = 0;
  param_1[3] = param_1[3] + -1;
  if ((*(byte *)(plVar4 + 2) & 1) != 0) {
    operator_delete((void *)plVar4[4]);
  }
  operator_delete(plVar4);
  return 1;
}


