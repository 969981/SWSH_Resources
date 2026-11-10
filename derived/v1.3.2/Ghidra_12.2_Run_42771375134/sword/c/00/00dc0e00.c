/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0e00; name: FUN_00dc0e00
 */


long FUN_00dc0e00(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x458);
  if (plVar1 == *(long **)(param_1 + 0x460)) {
    return 0;
  }
  do {
    if (*plVar1 == *param_2) {
      return plVar1[0x24];
    }
    plVar1 = plVar1 + 0x30;
  } while (*(long **)(param_1 + 0x460) != plVar1);
  return 0;
}


