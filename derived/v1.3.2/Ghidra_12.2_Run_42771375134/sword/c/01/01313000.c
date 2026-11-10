/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01313000; name: FUN_01313000
 */


void FUN_01313000(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x80);
  while( true ) {
    if (plVar1 == *(long **)(param_1 + 0x88)) {
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 8;
  }
  *(long **)(param_1 + 0xb0) = plVar1 + 2;
  return;
}


