/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6580; name: FUN_006b6580
 */


long FUN_006b6580(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x98);
  plVar2 = *(long **)(param_1 + 0x90);
  do {
    if (plVar2 == plVar1) {
      if (*(long *)(param_1 + 0x28) != *param_2) {
        param_1 = 0;
      }
      return param_1;
    }
    lVar4 = *plVar2;
    lVar3 = FUN_006b6580(lVar4,param_2);
    plVar2 = plVar2 + 4;
  } while (lVar3 == 0);
  return lVar4;
}


