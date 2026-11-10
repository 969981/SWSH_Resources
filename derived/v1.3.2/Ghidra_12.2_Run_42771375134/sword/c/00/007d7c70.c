/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d7c70; name: FUN_007d7c70
 */


void FUN_007d7c70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar3 = (long *)*param_1;
  plVar5 = (long *)param_1[1];
  lVar6 = *param_2;
  if ((plVar3 != plVar5) && (*(long *)(*plVar3 + 0x68) != lVar6)) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar5 == plVar3) {
        return;
      }
    } while (*(long *)(*plVar3 + 0x68) != lVar6);
  }
  if (plVar3 != plVar5) {
    plVar4 = plVar3 + 1;
    plVar2 = plVar3;
    if (plVar4 != plVar5) {
      do {
        lVar1 = *plVar4;
        plVar3 = plVar2;
        if (*(long *)(lVar1 + 0x68) != lVar6) {
          if (*plVar2 != 0) {
            (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
            *plVar2 = 0;
            lVar1 = *plVar4;
          }
          *plVar4 = 0;
          plVar3 = plVar2 + 1;
          *plVar2 = lVar1;
        }
        plVar4 = plVar4 + 1;
        plVar2 = plVar3;
      } while (plVar5 != plVar4);
      plVar5 = (long *)param_1[1];
    }
  }
  if (plVar5 != plVar3) {
    if ((long *)((long)plVar3 + ((long)plVar5 - (long)plVar3)) != plVar5) {
      lVar6 = (long)plVar5 - (long)plVar3 >> 3;
      plVar4 = plVar3;
      do {
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        lVar1 = plVar4[lVar6];
        plVar4[lVar6] = 0;
        plVar3 = plVar4 + 1;
        *plVar4 = lVar1;
        plVar4 = plVar3;
      } while (plVar5 + -lVar6 != plVar3);
      plVar5 = (long *)param_1[1];
    }
    if (plVar5 != plVar3) {
      do {
        plVar4 = plVar5 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar5[-1] = 0;
        }
        plVar5 = plVar4;
      } while (plVar3 != plVar4);
    }
    param_1[1] = plVar3;
  }
  return;
}


