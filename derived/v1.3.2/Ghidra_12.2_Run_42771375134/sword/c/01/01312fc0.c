/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01312fc0; name: FUN_01312fc0
 */


void FUN_01312fc0(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 != *(long **)(param_1 + 0x88)) {
    do {
      if (*plVar1 == *param_2) {
        *(long **)(param_1 + 0xb0) = plVar1 + 2;
        return;
      }
      plVar1 = plVar1 + 8;
    } while (*(long **)(param_1 + 0x88) != plVar1);
  }
  return;
}


