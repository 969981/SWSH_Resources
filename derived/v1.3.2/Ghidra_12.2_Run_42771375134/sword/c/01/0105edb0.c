/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105edb0; name: FUN_0105edb0
 */


long FUN_0105edb0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  uVar8 = param_1[1];
  lVar2 = *param_2;
  uVar6 = param_2[1];
  uVar9 = uVar8 - 1;
  uVar1 = uVar9 & uVar8;
  if (uVar1 == 0) {
    uVar6 = uVar9 & uVar6;
  }
  else if (uVar8 <= uVar6) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar6 / uVar8;
    }
    uVar6 = uVar6 - uVar11 * uVar8;
  }
  plVar4 = *(long **)(*param_1 + uVar6 * 8);
  do {
    plVar10 = plVar4;
    plVar4 = (long *)*plVar10;
  } while ((long *)*plVar10 != param_2);
  if (plVar10 != param_1 + 5) {
    uVar11 = plVar10[1];
    if (uVar1 == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar3 * uVar8;
    }
    if (uVar11 == uVar6) goto LAB_0105ee84;
  }
  if (*param_2 != 0) {
    uVar11 = *(ulong *)(*param_2 + 8);
    if (uVar1 == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar3 * uVar8;
    }
    if (uVar11 == uVar6) goto LAB_0105ee84;
  }
  *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
LAB_0105ee84:
  if (*param_2 != 0) {
    uVar11 = *(ulong *)(*param_2 + 8);
    if (uVar1 == 0) {
      uVar11 = uVar11 & uVar9;
    }
    else if (uVar8 <= uVar11) {
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar1 * uVar8;
    }
    if (uVar11 != uVar6) {
      *(long **)(*param_1 + uVar11 * 8) = plVar10;
    }
  }
  *plVar10 = *param_2;
  *param_2 = 0;
  param_1[9] = param_1[9] + -1;
  if (param_2 != (long *)0x0) {
    pcVar7 = (code *)param_2[0xd];
    if (pcVar7 != (code *)0x0) {
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      (*pcVar7)(param_2 + 0x10);
    }
    lVar5 = param_2[6];
    if (lVar5 != 0) {
      param_2[7] = lVar5;
      (**(code **)(*(long *)param_2[9] + 0x18))((long *)param_2[9],lVar5,param_2[8] - lVar5,4);
    }
    if (param_2[5] != 0) {
      (**(code **)(*(long *)(param_2[5] + 0x48) + 0x18))();
      param_2[5] = 0;
    }
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_2,0xf0,0x10);
  }
  return lVar2;
}


