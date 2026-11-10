/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5180; name: FUN_006e5180
 */


long FUN_006e5180(long *param_1,long *param_2)

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
  if (plVar8 != param_1 + 5) {
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
    if (uVar9 == uVar5) goto LAB_006e5254;
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
    if (uVar9 == uVar5) goto LAB_006e5254;
  }
  *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
LAB_006e5254:
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
  param_1[9] = param_1[9] + -1;
  if (param_2 != (long *)0x0) {
    if (param_2[9] != 0) {
      (**(code **)(*(long *)(param_2[9] + 0x48) + 0x18))();
      param_2[9] = 0;
    }
    if ((param_2[5] != 0) && (param_2[2] != 0)) {
      (**(code **)(*(long *)(param_2[2] + 0x48) + 0x18))();
      param_2[2] = 0;
    }
    param_2[2] = 0;
    param_2[3] = -0x340d631b7bddd9bb;
    param_2[4] = (long)&DAT_01d38550;
    param_2[5] = 0;
    if (param_2[6] != 0) {
      (**(code **)(*(long *)(param_2[6] + 0x48) + 0x18))();
      param_2[6] = 0;
    }
    param_2[6] = 0;
    *(undefined4 *)(param_2 + 7) = 0;
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_2,0x50,8);
  }
  return lVar2;
}


