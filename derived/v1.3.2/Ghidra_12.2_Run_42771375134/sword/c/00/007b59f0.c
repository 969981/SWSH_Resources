/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b59f0; name: FUN_007b59f0
 */


void FUN_007b59f0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) && (lVar2 = param_2[1], lVar2 != 0)) {
    plVar5 = *(long **)(param_1 + 0x100);
    lVar3 = *(long *)(param_1 + 0x108);
    lVar4 = *param_2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar2 = param_2[1];
    }
    if (lVar3 == 0) {
LAB_007b5ac8:
      plVar6 = plVar5;
    }
    else {
      plVar6 = plVar5 + lVar3 * 2;
      if (lVar4 == 0) {
        do {
          if (((*plVar5 == 0) || (*(int *)(*plVar5 + 0x54) == 0)) || (plVar5[1] == 0))
          goto LAB_007b5ac8;
          plVar5 = plVar5 + 2;
        } while (plVar5 != plVar6);
      }
      else {
        do {
          lVar3 = 0;
          if (*plVar5 != 0) {
            if (*(int *)(*plVar5 + 0x54) == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = plVar5[1];
            }
          }
          lVar1 = 0;
          if (*(int *)(lVar4 + 0x54) != 0) {
            lVar1 = lVar2;
          }
          if (lVar3 == lVar1) goto LAB_007b5ac8;
          plVar5 = plVar5 + 2;
        } while (plVar5 != plVar6);
      }
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    lVar2 = *(long *)(param_1 + 0x108);
    plVar5 = (long *)(*(long *)(param_1 + 0x100) + lVar2 * 0x10);
    if (plVar6 != plVar5) {
      plVar6 = plVar6 + 2;
      if (plVar6 != plVar5) {
        do {
          if (plVar6[-2] != 0) {
            (**(code **)(*(long *)(plVar6[-2] + 0x48) + 0x18))();
            plVar6[-2] = 0;
          }
          plVar6[-2] = *plVar6;
          plVar6[-1] = plVar6[1];
          *plVar6 = 0;
          plVar6 = plVar6 + 2;
        } while (plVar5 != plVar6);
        lVar2 = *(long *)(param_1 + 0x108);
        plVar5 = (long *)(*(long *)(param_1 + 0x100) + lVar2 * 0x10);
      }
      if (plVar5[-2] != 0) {
        (**(code **)(*(long *)(plVar5[-2] + 0x48) + 0x18))();
        plVar5[-2] = 0;
        lVar2 = *(long *)(param_1 + 0x108);
      }
      *(long *)(param_1 + 0x108) = lVar2 + -1;
    }
  }
  return;
}


