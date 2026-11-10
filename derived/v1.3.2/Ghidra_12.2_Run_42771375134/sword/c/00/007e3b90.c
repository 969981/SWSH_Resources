/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3b90; name: FUN_007e3b90
 */


long FUN_007e3b90(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
  uVar6 = *(ulong *)(lVar4 + 0x80);
  if (uVar6 != 0) {
    uVar1 = param_1 * 0xffff + (long)param_2;
    uVar7 = uVar6 - 1;
    if ((uVar7 & uVar6) == 0) {
      uVar3 = uVar7 & uVar1;
      plVar5 = *(long **)(*(long *)(lVar4 + 0x78) + uVar3 * 8);
    }
    else {
      uVar3 = uVar1;
      if (uVar6 <= uVar1) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar1 / uVar6;
        }
        uVar3 = uVar1 - uVar3 * uVar6;
      }
      plVar5 = *(long **)(*(long *)(lVar4 + 0x78) + uVar3 * 8);
    }
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if ((uVar7 & uVar6) == 0) {
        do {
          uVar6 = plVar5[1];
          if (uVar1 != uVar6 && (uVar6 & uVar7) != uVar3) {
            return 0;
          }
          if (((uVar1 == uVar6) && (plVar5[2] == param_1)) && ((int)plVar5[3] == param_2))
          goto LAB_007e3c88;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar5[1];
          if (uVar1 == uVar7) {
            if ((plVar5[2] == param_1) && ((int)plVar5[3] == param_2)) {
LAB_007e3c88:
              lVar4 = plVar5[4];
              if (lVar4 == 0) {
                return 0;
              }
              if (*(char *)(lVar4 + 0x44) != '\0') {
                lVar4 = 0;
              }
              return lVar4;
            }
          }
          else {
            if (uVar6 <= uVar7) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar2 * uVar6;
            }
            if (uVar7 != uVar3) {
              return 0;
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  return 0;
}


