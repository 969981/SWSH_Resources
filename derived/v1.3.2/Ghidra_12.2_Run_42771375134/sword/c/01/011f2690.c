/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f2690; name: FUN_011f2690
 */


void FUN_011f2690(undefined1 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0xb0);
  plVar2 = *(long **)(param_2 + 0xb8);
  if ((plVar5 != plVar2) && (plVar3 = plVar5, plVar5[1] != param_3)) {
    do {
      plVar5 = plVar3 + 2;
      if (plVar2 == plVar5) goto LAB_011f2718;
      plVar1 = plVar3 + 3;
      plVar3 = plVar5;
    } while (*plVar1 != param_3);
  }
  if (plVar5 != plVar2) {
    lVar4 = *plVar5;
    *param_1 = 0;
    if (lVar4 != 0) {
      lVar4 = *plVar5;
      *(long *)(param_1 + 8) = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      *param_1 = 1;
    }
    return;
  }
LAB_011f2718:
  *param_1 = 0;
  return;
}


