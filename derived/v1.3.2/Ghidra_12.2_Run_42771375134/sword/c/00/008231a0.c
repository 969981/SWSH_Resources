/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008231a0; name: FUN_008231a0
 */


long * FUN_008231a0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x24;
  ulong uVar6;
  
  uVar1 = FUN_00822c50(param_1 + 5);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar6 & uVar5) == 0) {
      unaff_x24 = uVar6 & uVar1;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar1;
      if (uVar5 <= uVar1) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar1 / uVar5;
        }
        unaff_x24 = uVar1 - uVar3 * uVar5;
      }
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if ((uVar6 & uVar5) == 0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar1 && (plVar4[1] & uVar6) != unaff_x24))
          goto LAB_00823274;
          uVar3 = FUN_00822350(plVar4 + 2,param_2);
        } while ((uVar3 & 1) == 0);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00823274;
          uVar6 = plVar4[1];
          if (uVar6 != uVar1) {
            if (uVar5 <= uVar6) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar3 * uVar5;
            }
            if (uVar6 != unaff_x24) goto LAB_00823274;
          }
          uVar6 = FUN_00822350(plVar4 + 2,param_2);
        } while ((uVar6 & 1) == 0);
      }
      goto LAB_008233f0;
    }
  }
LAB_00823274:
  if (param_1[4] == 0) {
    plVar4 = malloc(0x28);
  }
  else {
    plVar4 = (long *)FUN_0080efb0(param_1[4],0,0x28);
  }
  *(undefined4 *)(plVar4 + 3) = 0;
  FUN_0081ec70(plVar4 + 2,param_2);
  plVar4[4] = 0;
  *plVar4 = 0;
  plVar4[1] = uVar1;
  if ((uVar5 == 0) || (*(float *)(param_1 + 6) * (float)uVar5 < (float)(param_1[5] + 1))) {
    if (uVar5 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar5 - 1 & uVar5) != 0);
    }
    uVar3 = (ulong)((float)(param_1[5] + 1) / *(float *)(param_1 + 6));
    uVar6 = uVar6 | uVar5 << 1;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    FUN_00821f40(param_1,uVar3);
    uVar5 = param_1[1];
    if ((uVar5 - 1 & uVar5) == 0) {
      unaff_x24 = uVar5 - 1 & uVar1;
      plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x00823360;
    }
    if (uVar1 < uVar5) {
      plVar2 = *(long **)(*param_1 + uVar1 * 8);
      unaff_x24 = uVar1;
      goto joined_r0x00823360;
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar1 / uVar5;
    }
    unaff_x24 = uVar1 - uVar6 * uVar5;
    plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar2 == (long *)0x0) goto LAB_00823378;
LAB_008232e0:
    *plVar4 = *plVar2;
LAB_008233e0:
    *plVar2 = (long)plVar4;
  }
  else {
    plVar2 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x00823360:
    if (plVar2 != (long *)0x0) goto LAB_008232e0;
LAB_00823378:
    plVar2 = param_1 + 3;
    *plVar4 = *plVar2;
    *plVar2 = (long)plVar4;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar2;
    if (*plVar4 != 0) {
      uVar1 = *(ulong *)(*plVar4 + 8);
      if ((uVar5 - 1 & uVar5) == 0) {
        uVar1 = uVar1 & uVar5 - 1;
      }
      else if (uVar5 <= uVar1) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar1 / uVar5;
        }
        uVar1 = uVar1 - uVar6 * uVar5;
      }
      plVar2 = (long *)(*param_1 + uVar1 * 8);
      goto LAB_008233e0;
    }
  }
  param_1[5] = param_1[5] + 1;
LAB_008233f0:
  return plVar4 + 4;
}


