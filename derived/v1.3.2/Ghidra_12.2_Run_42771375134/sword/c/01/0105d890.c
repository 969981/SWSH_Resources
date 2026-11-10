/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105d890; name: FUN_0105d890
 */


long * FUN_0105d890(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x24;
  undefined1 auStack_50 [8];
  ulong *local_48;
  
  uVar6 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = uVar5 - 1;
    if ((uVar1 & uVar5) == 0) {
      unaff_x24 = uVar1 & uVar6;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar6;
      if (uVar5 <= uVar6) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar6 / uVar5;
        }
        unaff_x24 = uVar6 - uVar3 * uVar5;
      }
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if ((uVar1 & uVar5) == 0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar6 && (plVar4[1] & uVar1) != unaff_x24))
          goto LAB_0105d954;
        } while (plVar4[2] != uVar6);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0105d954;
          uVar1 = plVar4[1];
          if (uVar1 != uVar6) {
            if (uVar5 <= uVar1) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar1 / uVar5;
              }
              uVar1 = uVar1 - uVar3 * uVar5;
            }
            if (uVar1 != unaff_x24) goto LAB_0105d954;
          }
        } while (plVar4[2] != uVar6);
      }
      goto LAB_0105dae8;
    }
  }
LAB_0105d954:
  plVar2 = param_1 + 6;
  local_48 = param_2;
  plVar4 = (long *)(**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,0xf0,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
  FUN_01060930(plVar2,plVar4 + 2,&DAT_02162ea0,&local_48,auStack_50);
  *plVar4 = 0;
  plVar4[1] = uVar6;
  if ((uVar5 == 0) || (*(float *)(param_1 + 10) * (float)uVar5 < (float)(param_1[9] + 1))) {
    if (uVar5 < 3) {
      uVar1 = 1;
    }
    else {
      uVar1 = (ulong)((uVar5 - 1 & uVar5) != 0);
    }
    uVar3 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    uVar1 = uVar1 | uVar5 << 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    FUN_01060820(param_1,uVar3);
    uVar5 = param_1[1];
    if ((uVar5 - 1 & uVar5) == 0) {
      unaff_x24 = uVar5 - 1 & uVar6;
      plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x0105da58;
    }
    if (uVar6 < uVar5) {
      plVar2 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x24 = uVar6;
      goto joined_r0x0105da58;
    }
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar6 / uVar5;
    }
    unaff_x24 = uVar6 - uVar1 * uVar5;
    plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar2 == (long *)0x0) goto LAB_0105da70;
LAB_0105d9d8:
    *plVar4 = *plVar2;
LAB_0105dad8:
    *plVar2 = (long)plVar4;
  }
  else {
    plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x0105da58:
    if (plVar2 != (long *)0x0) goto LAB_0105d9d8;
LAB_0105da70:
    plVar2 = param_1 + 5;
    *plVar4 = *plVar2;
    *plVar2 = (long)plVar4;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar2;
    if (*plVar4 != 0) {
      uVar6 = *(ulong *)(*plVar4 + 8);
      if ((uVar5 - 1 & uVar5) == 0) {
        uVar6 = uVar6 & uVar5 - 1;
      }
      else if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar6 / uVar5;
        }
        uVar6 = uVar6 - uVar1 * uVar5;
      }
      plVar2 = (long *)(*param_1 + uVar6 * 8);
      goto LAB_0105dad8;
    }
  }
  param_1[9] = param_1[9] + 1;
LAB_0105dae8:
  return plVar4 + 6;
}


