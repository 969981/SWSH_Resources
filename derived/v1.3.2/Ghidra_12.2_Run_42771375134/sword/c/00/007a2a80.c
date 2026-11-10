/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a2a80; name: FUN_007a2a80
 */


undefined8 FUN_007a2a80(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar5 = *(long *)(param_1 + 0x168);
    if (lVar5 == 0) {
      return 0;
    }
    plVar4 = *(long **)(param_1 + 0x160);
    plVar3 = *(long **)(param_1 + 0x100);
    plVar2 = plVar3 + *(long *)(param_1 + 0x108);
    do {
      plVar6 = plVar4;
      if (*plVar4 != *plVar3) {
        plVar8 = plVar4;
        lVar7 = lVar5 * 8;
        do {
          lVar7 = lVar7 + -8;
          if (lVar7 == 0) {
            plVar6 = plVar4 + lVar5;
            break;
          }
          plVar6 = plVar8 + 1;
          plVar1 = plVar8 + 1;
          plVar8 = plVar6;
        } while (*plVar1 != *plVar3);
      }
      if (plVar4 + lVar5 == plVar6) {
        return 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2);
  }
  return 1;
}


