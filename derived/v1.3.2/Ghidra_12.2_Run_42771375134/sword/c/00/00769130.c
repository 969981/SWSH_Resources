/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00769130; name: FUN_00769130
 */


void FUN_00769130(long param_1)

{
  void *__dest;
  size_t __n;
  undefined4 *puVar1;
  int iVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  iVar2 = (int)((ulong)(*(long *)(param_1 + 0x28) - (long)puVar1) >> 3) * -0x55555555;
  if (0 < iVar2) {
    while( true ) {
      iVar2 = iVar2 + -1;
      (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),*puVar1);
      __dest = *(void **)(param_1 + 0x20);
      __n = *(long *)(param_1 + 0x28) - ((long)__dest + 0x18);
      if (__n != 0) {
        memmove(__dest,(void *)((long)__dest + 0x18),__n);
      }
      *(void **)(param_1 + 0x28) = (void *)((long)__dest + ((long)__n >> 3) * 8);
      if (iVar2 == 0) break;
      puVar1 = *(undefined4 **)(param_1 + 0x20);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


