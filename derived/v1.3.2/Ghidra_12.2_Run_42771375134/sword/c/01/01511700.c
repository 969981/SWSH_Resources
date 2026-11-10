/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01511700; name: FUN_01511700
 */


bool FUN_01511700(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar3 = *(long **)(param_1 + 0xa10);
  uVar6 = plVar3[1];
  if (uVar6 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar2 = *param_2;
    uVar7 = uVar6 - 1;
    if ((uVar7 & uVar6) == 0) {
      uVar5 = uVar7 & uVar2;
      plVar4 = *(long **)(*plVar3 + uVar5 * 8);
      if (plVar4 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_015117c0;
      }
    }
    else {
      uVar5 = uVar2;
      if (uVar6 <= uVar2) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar2 / uVar6;
        }
        uVar5 = uVar2 - uVar5 * uVar6;
      }
      plVar4 = *(long **)(*plVar3 + uVar5 * 8);
      plVar3 = (long *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_015117c0;
    }
    plVar3 = (long *)*plVar4;
    if (plVar3 != (long *)0x0) {
      if ((uVar7 & uVar6) == 0) {
        do {
          uVar6 = plVar3[1];
          if (uVar6 != uVar2 && (uVar6 & uVar7) != uVar5) {
            return false;
          }
        } while (((uVar6 != uVar2) || (plVar3[2] != uVar2)) &&
                (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0));
      }
      else {
        do {
          uVar7 = plVar3[1];
          if (uVar7 == uVar2) {
            if (plVar3[2] == uVar2) break;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar5) {
              return false;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
LAB_015117c0:
  return plVar3 != (long *)0x0;
}


