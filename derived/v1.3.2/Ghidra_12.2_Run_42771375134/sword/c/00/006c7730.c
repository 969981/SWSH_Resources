/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c7730; name: FUN_006c7730
 */


undefined8 FUN_006c7730(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x68) + 0x40);
  lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x48);
  if ((lVar6 == 0) || (*(int *)(*plVar4 + 0x90) == 0)) {
    if (plVar4 == plVar4 + lVar6) {
      return 0;
    }
  }
  else {
    lVar3 = lVar6 * 8;
    plVar5 = plVar4;
    do {
      lVar3 = lVar3 + -8;
      if (lVar3 == 0) {
        return 0;
      }
      plVar2 = plVar5 + 1;
      plVar1 = plVar5 + 1;
      plVar5 = plVar2;
    } while (*(int *)(*plVar1 + 0x90) != 0);
    plVar5 = plVar4 + lVar6;
    plVar4 = plVar2;
    if (plVar2 == plVar5) {
      return 0;
    }
  }
  lVar6 = *(long *)(*plVar4 + 0x58);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*param_2 != 0) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
    *param_2 = 0;
  }
  *param_2 = lVar6;
  return 1;
}


