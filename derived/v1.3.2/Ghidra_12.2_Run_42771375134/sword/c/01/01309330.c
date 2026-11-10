/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01309330; name: FUN_01309330
 */


long FUN_01309330(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(param_1 + 0x340);
  plVar6 = *(long **)(param_1 + 0x348);
  if (plVar5 == plVar6) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        iVar1 = *(int *)(lVar3 + 0x54);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        if (iVar1 != 0) {
          lVar2 = lVar2 + 1;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar6 != plVar5);
  }
  return lVar2;
}


