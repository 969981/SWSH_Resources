/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f9020; name: FUN_006f9020
 */


void FUN_006f9020(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(param_2 + 0x138);
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar6 & uVar5) == 0) {
      uVar3 = uVar6 & param_3;
      plVar4 = *(long **)(*(long *)(param_2 + 0x130) + uVar3 * 8);
    }
    else {
      uVar3 = param_3;
      if (uVar5 <= param_3) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = param_3 / uVar5;
        }
        uVar3 = param_3 - uVar3 * uVar5;
      }
      plVar4 = *(long **)(*(long *)(param_2 + 0x130) + uVar3 * 8);
    }
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if ((uVar6 & uVar5) == 0) {
        do {
          uVar5 = plVar4[1];
          if (uVar5 != param_3 && (uVar5 & uVar6) != uVar3) break;
          if ((uVar5 == param_3) && (plVar4[2] == param_3)) goto LAB_006f90ec;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar4[1];
          if (uVar6 == param_3) {
            if (plVar4[2] == param_3) {
LAB_006f90ec:
              lVar2 = plVar4[3];
              *param_1 = lVar2;
              if (lVar2 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x006f9100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
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
            if (uVar6 != uVar3) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


