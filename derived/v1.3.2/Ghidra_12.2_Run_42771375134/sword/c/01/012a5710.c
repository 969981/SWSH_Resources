/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a5710; name: FUN_012a5710
 */


void FUN_012a5710(long param_1,long param_2)

{
  size_t __n;
  long *plVar1;
  long *__dest;
  
  __dest = *(long **)(param_1 + 0x338);
  plVar1 = *(long **)(param_1 + 0x340);
  if ((__dest != plVar1) && (*__dest != param_2)) {
    do {
      __dest = __dest + 1;
      if (plVar1 == __dest) {
        return;
      }
    } while (*__dest != param_2);
  }
  if (__dest != plVar1) {
    __n = (long)plVar1 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(long **)(param_1 + 0x340) = __dest + ((long)__n >> 3);
  }
  return;
}


