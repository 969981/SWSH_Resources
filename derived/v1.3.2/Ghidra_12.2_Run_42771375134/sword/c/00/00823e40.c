/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00823e40; name: FUN_00823e40
 */


long FUN_00823e40(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar6 = param_1[1];
  lVar2 = *param_2;
  uVar5 = param_2[1];
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
  plVar4 = *(long **)(*param_1 + uVar5 * 8);
  do {
    plVar8 = plVar4;
    plVar4 = (long *)*plVar8;
  } while ((long *)*plVar8 != param_2);
  if (plVar8 != param_1 + 3) {
    uVar9 = plVar8[1];
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar3 * uVar6;
    }
    if (uVar9 == uVar5) goto LAB_00823f14;
  }
  if (*param_2 != 0) {
    uVar9 = *(ulong *)(*param_2 + 8);
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar3 * uVar6;
    }
    if (uVar9 == uVar5) goto LAB_00823f14;
  }
  *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
LAB_00823f14:
  if (*param_2 != 0) {
    uVar9 = *(ulong *)(*param_2 + 8);
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
  *plVar8 = *param_2;
  *param_2 = 0;
  param_1[5] = param_1[5] + -1;
  if (param_2 != (long *)0x0) {
    if (((int)param_2[3] == 9) && (pbVar10 = (byte *)param_2[2], pbVar10 != (byte *)0x0)) {
      if ((*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar10 + 0x10));
      }
      operator_delete(pbVar10);
    }
    if (param_1[4] == 0) {
      free(param_2);
    }
  }
  return lVar2;
}


