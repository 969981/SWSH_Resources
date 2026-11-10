/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006972a0; name: FUN_006972a0
 */


undefined8 FUN_006972a0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
    return 1;
  }
  uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
  if (uVar5 == 0) {
    return 1;
  }
  if (*(char *)((long)piVar3 + uVar5) == '\0') {
    return 1;
  }
  if (param_1[10] == 0) {
    return 0;
  }
  uVar5 = param_1[2];
  if (uVar5 == 0) {
    return 0;
  }
  uVar4 = *param_2;
  uVar8 = uVar5 - 1;
  if ((uVar8 & uVar5) == 0) {
    uVar6 = uVar8 & uVar4;
  }
  else {
    uVar6 = uVar4;
    if (uVar5 <= uVar4) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar4 / uVar5;
      }
      uVar6 = uVar4 - uVar6 * uVar5;
      plVar7 = *(long **)(param_1[1] + uVar6 * 8);
      goto joined_r0x00697308;
    }
  }
  plVar7 = *(long **)(param_1[1] + uVar6 * 8);
joined_r0x00697308:
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  if ((uVar8 & uVar5) == 0) {
    do {
      uVar5 = plVar7[1];
      if (uVar4 != uVar5 && (uVar5 & uVar8) != uVar6) {
        return 0;
      }
      if ((uVar4 == uVar5) && (plVar7[2] == uVar4)) goto LAB_006973e8;
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  else {
    do {
      uVar8 = plVar7[1];
      if (uVar4 == uVar8) {
        if (plVar7[2] == uVar4) {
LAB_006973e8:
          uVar2 = FUN_006979e0(plVar7 + 6);
          return uVar2;
        }
      }
      else {
        if (uVar5 <= uVar8) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar1 * uVar5;
        }
        if (uVar8 != uVar6) {
          return 0;
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return 0;
}


