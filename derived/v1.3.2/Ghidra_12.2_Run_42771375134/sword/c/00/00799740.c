/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00799740; name: FUN_00799740
 */


long * FUN_00799740(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong in_x9;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2[2];
  param_2[1] = uVar4;
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar5 = uVar3 - 1;
    if ((uVar5 & uVar3) == 0) {
      in_x9 = uVar5 & uVar4;
      plVar2 = *(long **)(*param_1 + in_x9 * 8);
    }
    else {
      in_x9 = uVar4;
      if (uVar3 <= uVar4) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar4 / uVar3;
        }
        in_x9 = uVar4 - uVar1 * uVar3;
      }
      plVar2 = *(long **)(*param_1 + in_x9 * 8);
    }
    if (plVar2 != (long *)0x0) {
      if ((uVar5 & uVar3) == 0) {
        while ((plVar2 = (long *)*plVar2, plVar2 != (long *)0x0 && ((plVar2[1] & uVar5) == in_x9)))
        {
          if (plVar2[2] == uVar4) {
            return plVar2;
          }
        }
      }
      else {
        while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
          uVar5 = plVar2[1];
          if (uVar3 <= uVar5) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar1 * uVar3;
          }
          if (uVar5 != in_x9) break;
          if (plVar2[2] == uVar4) {
            return plVar2;
          }
        }
      }
    }
  }
  if ((uVar3 == 0) || (*(float *)(param_1 + 10) * (float)uVar3 < (float)(param_1[9] + 1))) {
    uVar4 = 1;
    if (2 < uVar3) {
      uVar4 = (ulong)((uVar3 - 1 & uVar3) != 0);
    }
    uVar4 = uVar4 | uVar3 << 1;
    uVar3 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    FUN_00799370(param_1,uVar3);
    uVar3 = param_1[1];
    in_x9 = param_2[1];
    if ((uVar3 - 1 & uVar3) == 0) {
      in_x9 = uVar3 - 1 & in_x9;
      plVar2 = *(long **)(*param_1 + in_x9 * 8);
      goto joined_r0x007998c4;
    }
    if (uVar3 <= in_x9) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = in_x9 / uVar3;
      }
      in_x9 = in_x9 - uVar4 * uVar3;
    }
  }
  plVar2 = *(long **)(*param_1 + in_x9 * 8);
joined_r0x007998c4:
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 5;
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
    *(long **)(*param_1 + in_x9 * 8) = plVar2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar3 - 1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3 - 1;
      }
      else if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar4 = uVar4 - uVar5 * uVar3;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
  }
  param_1[9] = param_1[9] + 1;
  return param_2;
}


