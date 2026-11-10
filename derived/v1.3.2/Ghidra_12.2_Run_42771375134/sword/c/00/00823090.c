/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00823090; name: FUN_00823090
 */


long * FUN_00823090(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = FUN_00822c50(param_1 + 5);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar6 & uVar5) == 0) {
      uVar4 = uVar6 & uVar2;
      plVar3 = *(long **)(*param_1 + uVar4 * 8);
    }
    else {
      uVar4 = uVar2;
      if (uVar5 <= uVar2) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar2 / uVar5;
        }
        uVar4 = uVar2 - uVar4 * uVar5;
      }
      plVar3 = *(long **)(*param_1 + uVar4 * 8);
    }
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((uVar6 & uVar5) != 0) {
        do {
          uVar6 = plVar3[1];
          if (uVar6 == uVar2) {
            uVar6 = FUN_00822350(plVar3 + 2,param_2);
            if ((uVar6 & 1) != 0) {
              return plVar3;
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar4) {
              return (long *)0x0;
            }
          }
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      while (uVar5 = plVar3[1], uVar5 == uVar2 || (uVar5 & uVar6) == uVar4) {
        if ((uVar5 == uVar2) && (uVar5 = FUN_00822350(plVar3 + 2,param_2), (uVar5 & 1) != 0)) {
          return plVar3;
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      }
    }
  }
  return (long *)0x0;
}


