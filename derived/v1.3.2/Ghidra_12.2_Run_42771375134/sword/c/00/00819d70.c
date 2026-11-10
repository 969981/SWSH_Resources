/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00819d70; name: FUN_00819d70
 */


undefined8 FUN_00819d70(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x24;
  
  uVar7 = *param_2;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar3 = uVar6 - 1;
    if ((uVar3 & uVar6) == 0) {
      unaff_x24 = uVar3 & uVar7;
      plVar1 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar7;
      if (uVar6 <= uVar7) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar7 / uVar6;
        }
        unaff_x24 = uVar7 - uVar5 * uVar6;
      }
      plVar1 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar1 != (long *)0x0) {
      if ((uVar3 & uVar6) == 0) {
        do {
          plVar1 = (long *)*plVar1;
          if ((plVar1 == (long *)0x0) || (plVar1[1] != uVar7 && (plVar1[1] & uVar3) != unaff_x24))
          goto LAB_00819e34;
        } while (plVar1[2] != uVar7);
      }
      else {
        do {
          plVar1 = (long *)*plVar1;
          if (plVar1 == (long *)0x0) goto LAB_00819e34;
          uVar3 = plVar1[1];
          if (uVar3 != uVar7) {
            if (uVar6 <= uVar3) {
              uVar5 = 0;
              if (uVar6 != 0) {
                uVar5 = uVar3 / uVar6;
              }
              uVar3 = uVar3 - uVar5 * uVar6;
            }
            if (uVar3 != unaff_x24) goto LAB_00819e34;
          }
        } while (plVar1[2] != uVar7);
      }
      return 0;
    }
  }
LAB_00819e34:
  plVar1 = operator_new(0x20);
  uVar3 = param_2[1];
  plVar1[2] = *param_2;
  plVar1[3] = uVar3;
  *plVar1 = 0;
  plVar1[1] = uVar7;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    if (uVar6 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar6 - 1 & uVar6) != 0);
    }
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    uVar3 = uVar3 | uVar6 << 1;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    FUN_00819640(param_1,uVar5);
    uVar6 = param_1[1];
    if ((uVar6 - 1 & uVar6) == 0) {
      unaff_x24 = uVar6 - 1 & uVar7;
      lVar4 = *param_1;
      plVar2 = *(long **)(lVar4 + unaff_x24 * 8);
      goto joined_r0x00819efc;
    }
    if (uVar7 < uVar6) {
      lVar4 = *param_1;
      plVar2 = *(long **)(lVar4 + uVar7 * 8);
      unaff_x24 = uVar7;
      goto joined_r0x00819efc;
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar7 / uVar6;
    }
    unaff_x24 = uVar7 - uVar3 * uVar6;
    lVar4 = *param_1;
    plVar2 = *(long **)(lVar4 + unaff_x24 * 8);
    if (plVar2 != (long *)0x0) goto LAB_00819e7c;
LAB_00819f14:
    plVar2 = param_1 + 2;
    *plVar1 = *plVar2;
    *plVar2 = (long)plVar1;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar2;
    if (*plVar1 == 0) goto LAB_00819f7c;
    uVar7 = *(ulong *)(*plVar1 + 8);
    if ((uVar6 - 1 & uVar6) == 0) {
      uVar7 = uVar7 & uVar6 - 1;
    }
    else if (uVar6 <= uVar7) {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar7 / uVar6;
      }
      uVar7 = uVar7 - uVar3 * uVar6;
    }
    plVar2 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    lVar4 = *param_1;
    plVar2 = *(long **)(lVar4 + unaff_x24 * 8);
joined_r0x00819efc:
    if (plVar2 == (long *)0x0) goto LAB_00819f14;
LAB_00819e7c:
    *plVar1 = *plVar2;
  }
  *plVar2 = (long)plVar1;
LAB_00819f7c:
  param_1[3] = param_1[3] + 1;
  return 1;
}


