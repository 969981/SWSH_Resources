/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d5f90; name: FUN_006d5f90
 */


long FUN_006d5f90(long param_1,long param_2)

{
  size_t __n;
  long *plVar1;
  long *__dest;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x330));
  __dest = *(long **)(param_1 + 0x300);
  plVar1 = *(long **)(param_1 + 0x308);
  if (__dest != plVar1) {
    if (*(int *)(param_2 + 0xc) == 0) {
LAB_006d5ff0:
      lVar2 = *__dest;
      __n = (long)plVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(long **)(param_1 + 0x308) = __dest + ((long)__n >> 3);
      goto LAB_006d6014;
    }
    do {
      if ((*(byte *)(*__dest + 0x130) >> 1 & 1) == 0) goto LAB_006d5ff0;
      __dest = __dest + 1;
    } while (plVar1 != __dest);
  }
  lVar2 = 0;
LAB_006d6014:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  return lVar2;
}


