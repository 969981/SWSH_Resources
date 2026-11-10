/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ac100; name: FUN_014ac100
 */


long * FUN_014ac100(long *param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x22;
  undefined1 auStack_58 [8];
  ulong *local_50;
  long *local_48 [3];
  
  uVar4 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - 1;
    if ((uVar2 & uVar5) == 0) {
      unaff_x22 = uVar2 & uVar4;
      plVar1 = *(long **)(*param_1 + unaff_x22 * 8);
    }
    else {
      unaff_x22 = uVar4;
      if (uVar5 <= uVar4) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar4 / uVar5;
        }
        unaff_x22 = uVar4 - uVar3 * uVar5;
      }
      plVar1 = *(long **)(*param_1 + unaff_x22 * 8);
    }
    if (plVar1 != (long *)0x0) {
      if ((uVar2 & uVar5) == 0) {
        do {
          plVar1 = (long *)*plVar1;
          if ((plVar1 == (long *)0x0) || (plVar1[1] != uVar4 && (plVar1[1] & uVar2) != unaff_x22))
          goto LAB_014ac1c0;
        } while (plVar1[2] != uVar4);
      }
      else {
        do {
          plVar1 = (long *)*plVar1;
          if (plVar1 == (long *)0x0) goto LAB_014ac1c0;
          uVar2 = plVar1[1];
          if (uVar2 != uVar4) {
            if (uVar5 <= uVar2) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar3 * uVar5;
            }
            if (uVar2 != unaff_x22) goto LAB_014ac1c0;
          }
        } while (plVar1[2] != uVar4);
      }
      goto LAB_014ac338;
    }
  }
LAB_014ac1c0:
  local_50 = param_2;
  FUN_014ac720(local_48,param_1,uVar4,&DAT_0216fa25,&local_50,auStack_58);
  if ((uVar5 == 0) || (*(float *)(param_1 + 10) * (float)uVar5 < (float)(param_1[9] + 1))) {
    if (uVar5 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar5 - 1 & uVar5) != 0);
    }
    uVar3 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    uVar2 = uVar2 | uVar5 << 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_014ac350(param_1,uVar3);
    uVar5 = param_1[1];
    if ((uVar5 - 1 & uVar5) == 0) {
      unaff_x22 = uVar5 - 1 & uVar4;
      plVar1 = *(long **)(*param_1 + unaff_x22 * 8);
      goto joined_r0x014ac29c;
    }
    if (uVar4 < uVar5) {
      plVar1 = *(long **)(*param_1 + uVar4 * 8);
      unaff_x22 = uVar4;
      goto joined_r0x014ac29c;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar4 / uVar5;
    }
    unaff_x22 = uVar4 - uVar2 * uVar5;
    plVar1 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar1 == (long *)0x0) goto LAB_014ac2b4;
LAB_014ac210:
    *local_48[0] = *plVar1;
    *plVar1 = (long)local_48[0];
  }
  else {
    plVar1 = *(long **)(*param_1 + unaff_x22 * 8);
joined_r0x014ac29c:
    if (plVar1 != (long *)0x0) goto LAB_014ac210;
LAB_014ac2b4:
    plVar1 = param_1 + 5;
    *local_48[0] = *plVar1;
    *plVar1 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar1;
    if (*local_48[0] != 0) {
      uVar4 = *(ulong *)(*local_48[0] + 8);
      if ((uVar5 - 1 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5 - 1;
      }
      else if (uVar5 <= uVar4) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar2 * uVar5;
      }
      *(long **)(*param_1 + uVar4 * 8) = local_48[0];
    }
  }
  param_1[9] = param_1[9] + 1;
  plVar1 = local_48[0];
LAB_014ac338:
  return plVar1 + 3;
}


