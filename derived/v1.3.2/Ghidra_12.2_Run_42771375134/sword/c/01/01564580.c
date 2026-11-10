/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564580; name: FUN_01564580
 */


long * FUN_01564580(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x88);
  if (uVar4 != 0) {
    uVar2 = *param_2;
    uVar6 = uVar4 - 1;
    if ((uVar6 & uVar4) == 0) {
      uVar3 = uVar6 & uVar2;
      plVar5 = *(long **)(*(long *)(param_1 + 0x80) + uVar3 * 8);
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
      plVar5 = *(long **)(*(long *)(param_1 + 0x80) + uVar3 * 8);
    }
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((uVar6 & uVar4) == 0) {
        do {
          uVar4 = plVar5[1];
          if (uVar4 != uVar2 && (uVar4 & uVar6) != uVar3) break;
          if ((uVar4 == uVar2) && (plVar5[2] == uVar2)) goto LAB_01564650;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar2) {
            if (plVar5[2] == uVar2) {
LAB_01564650:
              return plVar5 + 3;
            }
          }
          else {
            if (uVar4 <= uVar6) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar1 * uVar4;
            }
            if (uVar6 != uVar3) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  return (long *)(param_1 + 0xf8);
}


