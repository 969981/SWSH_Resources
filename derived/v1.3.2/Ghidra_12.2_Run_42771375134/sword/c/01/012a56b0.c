/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a56b0; name: FUN_012a56b0
 */


bool FUN_012a56b0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x338);
  plVar1 = *(long **)(param_1 + 0x340);
  if ((plVar2 != plVar1) && (*plVar2 != param_2)) {
    do {
      plVar2 = plVar2 + 1;
      if (plVar1 == plVar2) {
        return false;
      }
    } while (*plVar2 != param_2);
  }
  return plVar2 != plVar1;
}


