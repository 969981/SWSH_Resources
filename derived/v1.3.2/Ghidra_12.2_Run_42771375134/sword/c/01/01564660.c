/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564660; name: FUN_01564660
 */


long * FUN_01564660(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    do {
      if (plVar1[3] == *param_2) {
        return plVar1 + 7;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return (long *)(param_1 + 0x118);
}


