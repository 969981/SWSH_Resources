/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105b340; name: FUN_0105b340
 */


void FUN_0105b340(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if ((plVar2 != (long *)0x0) && (uVar5 = plVar2[1], uVar5 != 0)) {
    uVar3 = *param_2;
    uVar6 = uVar5 - 1;
    if ((uVar6 & uVar5) == 0) {
      uVar4 = uVar6 & uVar3;
      plVar2 = *(long **)(*plVar2 + uVar4 * 8);
    }
    else {
      uVar4 = uVar3;
      if (uVar5 <= uVar3) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar3 / uVar5;
        }
        uVar4 = uVar3 - uVar4 * uVar5;
      }
      plVar2 = *(long **)(*plVar2 + uVar4 * 8);
    }
    if ((plVar2 != (long *)0x0) && (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0)) {
      if ((uVar6 & uVar5) == 0) {
        do {
          uVar5 = plVar2[1];
          if (uVar5 != uVar3 && (uVar5 & uVar6) != uVar4) {
            return;
          }
          if ((uVar5 == uVar3) && (plVar2[2] == uVar3)) goto LAB_0105b414;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar2[1];
          if (uVar6 == uVar3) {
            if (plVar2[2] == uVar3) {
LAB_0105b414:
              FUN_0105ebf0();
              return;
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
              return;
            }
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return;
}


