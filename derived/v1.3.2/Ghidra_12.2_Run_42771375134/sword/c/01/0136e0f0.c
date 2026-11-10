/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136e0f0; name: FUN_0136e0f0
 */


undefined1  [16] FUN_0136e0f0(long param_1,long param_2)

{
  long *plVar2;
  long *plVar1;
  
  if (*(long **)(param_1 + 0x80) != *(long **)(param_1 + 0x88)) {
    plVar1 = *(long **)(param_1 + 0x80);
    do {
      plVar2 = plVar1 + 9;
      if (*plVar1 == param_2) {
        return *(undefined1 (*) [16])(plVar1 + 1);
      }
      plVar1 = plVar2;
    } while (*(long **)(param_1 + 0x88) != plVar2);
  }
  return ZEXT816(0);
}


