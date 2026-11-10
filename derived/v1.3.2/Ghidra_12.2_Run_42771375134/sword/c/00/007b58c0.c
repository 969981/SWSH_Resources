/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b58c0; name: FUN_007b58c0
 */


void FUN_007b58c0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) && (lVar3 = param_2[1], lVar3 != 0)) {
    plVar6 = *(long **)(param_1 + 0x100);
    lVar4 = *(long *)(param_1 + 0x108);
    lVar5 = *param_2;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      lVar3 = param_2[1];
    }
    if (lVar4 != 0) {
      plVar1 = plVar6 + lVar4 * 2;
      if (lVar5 == 0) {
        do {
          if (((*plVar6 == 0) || (*(int *)(*plVar6 + 0x54) == 0)) || (plVar6[1] == 0))
          goto LAB_007b596c;
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar1);
      }
      else {
        do {
          lVar4 = 0;
          if (*plVar6 != 0) {
            if (*(int *)(*plVar6 + 0x54) == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = plVar6[1];
            }
          }
          lVar2 = 0;
          if (*(int *)(lVar5 + 0x54) != 0) {
            lVar2 = lVar3;
          }
          if (lVar4 == lVar2) goto LAB_007b596c;
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar1);
      }
      plVar6 = plVar1;
    }
LAB_007b596c:
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if ((long *)(*(long *)(param_1 + 0x100) + *(long *)(param_1 + 0x108) * 0x10) == plVar6) {
      FUN_007b6ad0(param_1 + 0xc0,param_2);
      return;
    }
  }
  return;
}


