/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d3b50; name: FUN_007d3b50
 */


void FUN_007d3b50(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
  lVar4 = *param_2;
  if ((plVar2 != plVar3) && (*plVar2 != lVar4)) {
    do {
      plVar2 = plVar2 + 2;
      if (plVar3 == plVar2) {
        return;
      }
    } while (*plVar2 != lVar4);
  }
  if ((plVar2 != plVar3) && (plVar5 = plVar2 + 2, plVar5 != plVar3)) {
    do {
      if (*plVar5 != lVar4) {
        *plVar2 = *plVar5;
        if (plVar2[1] != 0) {
          (**(code **)(*(long *)(plVar2[1] + 0x48) + 0x18))();
          plVar2[1] = 0;
        }
        lVar1 = plVar5[1];
        plVar5[1] = 0;
        plVar2[1] = lVar1;
        plVar2 = plVar2 + 2;
      }
      plVar5 = plVar5 + 2;
    } while (plVar3 != plVar5);
    plVar3 = *(long **)(param_1 + 0x10);
  }
  if (plVar3 != plVar2) {
    if ((long *)((long)plVar2 + ((long)plVar3 - (long)plVar2)) != plVar3) {
      lVar4 = (long)plVar3 - (long)plVar2 >> 4;
      do {
        *plVar2 = plVar2[lVar4 * 2];
        if (plVar2[1] != 0) {
          (**(code **)(*(long *)(plVar2[1] + 0x48) + 0x18))();
          plVar2[1] = 0;
        }
        lVar1 = plVar2[lVar4 * 2 + 1];
        plVar2[lVar4 * 2 + 1] = 0;
        plVar2[1] = lVar1;
        plVar2 = plVar2 + 2;
      } while (plVar3 + lVar4 * -2 != plVar2);
      plVar3 = *(long **)(param_1 + 0x10);
    }
    while (plVar5 = plVar3, plVar5 != plVar2) {
      plVar3 = plVar5 + -2;
      if (plVar5[-1] != 0) {
        (**(code **)(*(long *)(plVar5[-1] + 0x48) + 0x18))();
        plVar5[-1] = 0;
      }
    }
    *(long **)(param_1 + 0x10) = plVar2;
  }
  return;
}


