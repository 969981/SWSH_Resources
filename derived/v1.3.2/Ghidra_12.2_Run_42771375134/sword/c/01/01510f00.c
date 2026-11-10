/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01510f00; name: FUN_01510f00
 */


bool FUN_01510f00(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0xcbf29ce484222645) {
    return false;
  }
  plVar3 = *(long **)(param_1 + 0x9f0);
  uVar4 = plVar3[1];
  if (uVar4 == 0) {
    return false;
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
    return false;
  }
  plVar3 = (long *)*plVar3;
  if (plVar3 == (long *)0x0) {
    return false;
  }
  if ((uVar5 & uVar4) == 0) {
    while( true ) {
      uVar4 = plVar3[1];
      if (uVar4 != param_2 && (uVar4 & uVar5) != uVar2) {
        return false;
      }
      if ((uVar4 == param_2) && (plVar3[2] == param_2)) break;
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return false;
      }
    }
LAB_01511008:
    return (char)plVar3[3] != '\0';
  }
  do {
    uVar5 = plVar3[1];
    if (uVar5 == param_2) {
      if (plVar3[2] == param_2) goto LAB_01511008;
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
        return false;
      }
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      return false;
    }
  } while( true );
}


