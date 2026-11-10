/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fad100; name: FUN_00fad100
 */


void FUN_00fad100(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x100);
  lVar2 = *(long *)(param_1 + 0x108);
  if ((lVar2 == 0) || (*plVar6 == *param_2)) {
    plVar4 = plVar6;
    if (plVar6 == plVar6 + lVar2) {
      return;
    }
  }
  else {
    lVar3 = lVar2 * 8;
    plVar5 = plVar6;
    do {
      lVar3 = lVar3 + -8;
      if (lVar3 == 0) {
        return;
      }
      plVar4 = plVar5 + 1;
      plVar1 = plVar5 + 1;
      plVar5 = plVar4;
    } while (*plVar1 != *param_2);
    if (plVar4 == plVar6 + lVar2) {
      return;
    }
  }
  plVar6 = plVar6 + lVar2;
  plVar4 = plVar4 + 1;
  if (plVar4 != plVar6) {
    do {
      if (plVar4[-1] != 0) {
        (**(code **)(*(long *)(plVar4[-1] + 0x48) + 0x18))();
        plVar4[-1] = 0;
      }
      plVar4[-1] = *plVar4;
      *plVar4 = 0;
      plVar4 = plVar4 + 1;
    } while (plVar6 != plVar4);
    lVar2 = *(long *)(param_1 + 0x108);
    plVar6 = (long *)(*(long *)(param_1 + 0x100) + lVar2 * 8);
  }
  if (plVar6[-1] != 0) {
    (**(code **)(*(long *)(plVar6[-1] + 0x48) + 0x18))();
    plVar6[-1] = 0;
    lVar2 = *(long *)(param_1 + 0x108);
  }
  *(long *)(param_1 + 0x108) = lVar2 + -1;
  return;
}


