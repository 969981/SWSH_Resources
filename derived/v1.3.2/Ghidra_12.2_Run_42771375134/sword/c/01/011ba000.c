/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ba000; name: FUN_011ba000
 */


undefined8 FUN_011ba000(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if ((param_2 != (long *)0x0) && (plVar3 = *(long **)(param_1 + 0x450), plVar3 != (long *)0x0)) {
    plVar2 = (long *)*param_2;
    if (plVar2 == (long *)param_2[1]) {
      return 1;
    }
    plVar1 = (long *)*plVar3;
    plVar3 = (long *)plVar3[1];
    if (plVar3 != plVar1) {
      while( true ) {
        plVar4 = plVar1;
        if (*plVar1 != *plVar2) {
          do {
            plVar4 = plVar4 + 2;
            if (plVar3 == plVar4) {
              return 0;
            }
          } while (*plVar4 != *plVar2);
        }
        if ((plVar4 == plVar3) || ((int)plVar4[1] == 0)) break;
        plVar2 = plVar2 + 1;
        if (plVar2 == (long *)param_2[1]) {
          return 1;
        }
      }
    }
  }
  return 0;
}


