/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007919a0; name: FUN_007919a0
 */


void FUN_007919a0(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x638);
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    plVar1 = (long *)(param_1 + 0x630);
    if ((uVar6 & uVar5) == 0) {
      uVar4 = uVar6 & param_2;
      plVar3 = *(long **)(*plVar1 + uVar4 * 8);
    }
    else {
      uVar4 = param_2;
      if (uVar5 <= param_2) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = param_2 / uVar5;
        }
        uVar4 = param_2 - uVar4 * uVar5;
      }
      plVar3 = *(long **)(*plVar1 + uVar4 * 8);
    }
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if ((uVar6 & uVar5) == 0) {
        do {
          uVar5 = plVar3[1];
          if (uVar5 != param_2 && (uVar5 & uVar6) != uVar4) {
            return;
          }
          if ((uVar5 == param_2) && (plVar3[2] == param_2)) goto LAB_00791a6c;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar3[1];
          if (uVar6 == param_2) {
            if (plVar3[2] == param_2) {
LAB_00791a6c:
              FUN_007927c0(plVar1,plVar3);
              return;
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar4) {
              return;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  return;
}


