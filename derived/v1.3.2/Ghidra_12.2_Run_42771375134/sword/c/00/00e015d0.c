/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e015d0; name: FUN_00e015d0
 */


void FUN_00e015d0(long param_1,long param_2,uint param_3)

{
  size_t __n;
  long *plVar1;
  long lVar2;
  long *__dest;
  ulong uVar3;
  
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_2 + uVar3 * 8);
      if (lVar2 != -0x340d631b7bddd9bb) {
        __dest = *(long **)(param_1 + 0x2e0);
        plVar1 = *(long **)(param_1 + 0x2e8);
        if (__dest != plVar1) {
          if (*__dest != lVar2) {
            do {
              __dest = __dest + 1;
              if (plVar1 == __dest) goto LAB_00e01674;
            } while (*__dest != lVar2);
          }
          __n = (long)plVar1 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          *(long **)(param_1 + 0x2e8) = __dest + ((long)__n >> 3);
        }
      }
LAB_00e01674:
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  return;
}


