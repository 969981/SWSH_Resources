/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015114c0; name: FUN_015114c0
 */


undefined4 FUN_015114c0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0xcbf29ce484222645) {
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0xa10);
  uVar4 = plVar3[1];
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = uVar4 - 1;
  if ((uVar5 & uVar4) == 0) {
    uVar2 = uVar5 & param_2;
    plVar3 = *(long **)(*plVar3 + uVar2 * 8);
  }
  else {
    uVar2 = param_2;
    if (uVar4 <= param_2) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = param_2 / uVar4;
      }
      uVar2 = param_2 - uVar2 * uVar4;
    }
    plVar3 = *(long **)(*plVar3 + uVar2 * 8);
  }
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  plVar3 = (long *)*plVar3;
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  if ((uVar5 & uVar4) == 0) {
    while( true ) {
      uVar4 = plVar3[1];
      if (uVar4 != param_2 && (uVar4 & uVar5) != uVar2) {
        return 0;
      }
      if ((uVar4 == param_2) && (plVar3[2] == param_2)) break;
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return 0;
      }
    }
LAB_015115c8:
    return (int)plVar3[3];
  }
  do {
    uVar5 = plVar3[1];
    if (uVar5 == param_2) {
      if (plVar3[2] == param_2) goto LAB_015115c8;
    }
    else {
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar5 / uVar4;
        }
        uVar5 = uVar5 - uVar1 * uVar4;
      }
      if (uVar5 != uVar2) {
        return 0;
      }
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


