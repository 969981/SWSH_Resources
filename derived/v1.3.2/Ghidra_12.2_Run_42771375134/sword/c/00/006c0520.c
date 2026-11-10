/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c0520; name: FUN_006c0520
 */


long FUN_006c0520(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar6 = uVar4 - 1;
  if ((uVar6 & uVar4) == 0) {
    uVar3 = uVar6 & uVar2;
    plVar5 = *(long **)(*(long *)(param_1 + 8) + uVar3 * 8);
  }
  else {
    uVar3 = uVar2;
    if (uVar4 <= uVar2) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar2 / uVar4;
      }
      uVar3 = uVar2 - uVar3 * uVar4;
    }
    plVar5 = *(long **)(*(long *)(param_1 + 8) + uVar3 * 8);
  }
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  plVar5 = (long *)*plVar5;
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  if ((uVar6 & uVar4) == 0) {
    while( true ) {
      uVar4 = plVar5[1];
      if (uVar2 != uVar4 && (uVar4 & uVar6) != uVar3) {
        return 0;
      }
      if ((uVar2 == uVar4) && (plVar5[2] == uVar2)) break;
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return 0;
      }
    }
LAB_006c0608:
    return plVar5[6];
  }
  do {
    uVar6 = plVar5[1];
    if (uVar2 == uVar6) {
      if (plVar5[2] == uVar2) goto LAB_006c0608;
    }
    else {
      if (uVar4 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar6 / uVar4;
        }
        uVar6 = uVar6 - uVar1 * uVar4;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


