/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007677f0; name: FUN_007677f0
 */


void FUN_007677f0(long param_1)

{
  size_t __n;
  long *plVar1;
  void *pvVar2;
  void *__dest;
  int iVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  pvVar2 = *(void **)(param_1 + 0x288);
  iVar3 = (int)((ulong)((long)pvVar2 - *(long *)(param_1 + 0x280)) >> 3) * -0x55555555;
  if (0 < iVar3) {
    do {
      plVar1 = *(long **)(param_1 + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1,**(undefined4 **)(param_1 + 0x280));
        pvVar2 = *(void **)(param_1 + 0x288);
      }
      __dest = *(void **)(param_1 + 0x280);
      __n = (long)pvVar2 - ((long)__dest + 0x18);
      if (__n != 0) {
        memmove(__dest,(void *)((long)__dest + 0x18),__n);
      }
      pvVar2 = (void *)((long)__dest + ((long)__n >> 3) * 8);
      iVar3 = iVar3 + -1;
      *(void **)(param_1 + 0x288) = pvVar2;
    } while (iVar3 != 0);
  }
  FUN_00768790(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x360) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  return;
}


