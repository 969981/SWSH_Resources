/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723f50; name: FUN_00723f50
 */


void FUN_00723f50(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar3 != plVar4) && (lVar1 = FUN_007240c0(plVar3), lVar1 != 0)) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar4 == plVar3) {
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar4 == plVar5) {
          return;
        }
        goto LAB_00723ff8;
      }
      lVar1 = FUN_007240c0(plVar3);
    } while (lVar1 != 0);
  }
  plVar5 = plVar3;
  if (plVar3 != plVar4) {
    while (plVar5 = plVar5 + 1, plVar5 != plVar4) {
      lVar1 = FUN_007240c0(plVar5);
      if (lVar1 != 0) {
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          *plVar3 = 0;
        }
        lVar1 = *plVar5;
        *plVar5 = 0;
        *plVar3 = lVar1;
        plVar3 = plVar3 + 1;
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x10);
  plVar4 = plVar3;
  if (plVar3 != plVar5) {
LAB_00723ff8:
    if ((long *)((long)plVar4 + ((long)plVar5 - (long)plVar4)) != plVar5) {
      lVar1 = (long)plVar5 - (long)plVar4 >> 3;
      plVar3 = plVar4;
      do {
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          *plVar3 = 0;
        }
        lVar2 = plVar3[lVar1];
        plVar3[lVar1] = 0;
        plVar4 = plVar3 + 1;
        *plVar3 = lVar2;
        plVar3 = plVar4;
      } while (plVar5 + -lVar1 != plVar4);
      plVar5 = *(long **)(param_1 + 0x10);
    }
    if (plVar5 != plVar4) {
      do {
        plVar3 = plVar5 + -1;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          plVar5[-1] = 0;
        }
        plVar5 = plVar3;
      } while (plVar4 != plVar3);
    }
    *(long **)(param_1 + 0x10) = plVar4;
  }
  return;
}


