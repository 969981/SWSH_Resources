/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00817910; name: FUN_00817910
 */


long * FUN_00817910(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x23;
  
  uVar7 = *param_2;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar2 = uVar6 - 1;
    if ((uVar2 & uVar6) == 0) {
      unaff_x23 = uVar2 & uVar7;
      plVar5 = *(long **)(*param_1 + unaff_x23 * 8);
    }
    else {
      unaff_x23 = uVar7;
      if (uVar6 <= uVar7) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar7 / uVar6;
        }
        unaff_x23 = uVar7 - uVar1 * uVar6;
      }
      plVar5 = *(long **)(*param_1 + unaff_x23 * 8);
    }
    if (plVar5 != (long *)0x0) {
      if ((uVar2 & uVar6) == 0) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar7 && (plVar5[1] & uVar2) != unaff_x23))
          goto LAB_008179cc;
        } while (plVar5[2] != uVar7);
      }
      else {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_008179cc;
          uVar2 = plVar5[1];
          if (uVar2 != uVar7) {
            if (uVar6 <= uVar2) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar2 / uVar6;
              }
              uVar2 = uVar2 - uVar1 * uVar6;
            }
            if (uVar2 != unaff_x23) goto LAB_008179cc;
          }
        } while (plVar5[2] != uVar7);
      }
      goto LAB_00817b18;
    }
  }
LAB_008179cc:
  plVar5 = operator_new(0x20);
  plVar5[2] = uVar7;
  plVar5[3] = 0;
  *plVar5 = 0;
  plVar5[1] = uVar7;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar2 = 1;
    if (2 < uVar6) {
      uVar2 = (ulong)((uVar6 - 1 & uVar6) != 0);
    }
    uVar2 = uVar2 | uVar6 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    FUN_00817c60(param_1,uVar6);
    uVar6 = param_1[1];
    if ((uVar6 - 1 & uVar6) == 0) {
      unaff_x23 = uVar6 - 1 & uVar7;
      lVar4 = *param_1;
      plVar3 = *(long **)(lVar4 + unaff_x23 * 8);
      goto joined_r0x00817a78;
    }
    if (uVar7 < uVar6) {
      lVar4 = *param_1;
      plVar3 = *(long **)(lVar4 + uVar7 * 8);
      unaff_x23 = uVar7;
      goto joined_r0x00817a78;
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar7 / uVar6;
    }
    unaff_x23 = uVar7 - uVar2 * uVar6;
    lVar4 = *param_1;
    plVar3 = *(long **)(lVar4 + unaff_x23 * 8);
    if (plVar3 == (long *)0x0) goto LAB_00817aa4;
LAB_00817a10:
    *plVar5 = *plVar3;
LAB_00817b08:
    *plVar3 = (long)plVar5;
  }
  else {
    lVar4 = *param_1;
    plVar3 = *(long **)(lVar4 + unaff_x23 * 8);
joined_r0x00817a78:
    if (plVar3 != (long *)0x0) goto LAB_00817a10;
LAB_00817aa4:
    plVar3 = param_1 + 2;
    *plVar5 = *plVar3;
    *plVar3 = (long)plVar5;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar3;
    if (*plVar5 != 0) {
      uVar7 = *(ulong *)(*plVar5 + 8);
      if ((uVar6 - 1 & uVar6) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar2 * uVar6;
      }
      plVar3 = (long *)(*param_1 + uVar7 * 8);
      goto LAB_00817b08;
    }
  }
  param_1[3] = param_1[3] + 1;
LAB_00817b18:
  return plVar5 + 3;
}


