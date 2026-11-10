/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00765790; name: FUN_00765790
 */


undefined8 FUN_00765790(long param_1,undefined4 param_2)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x218));
  puVar3 = *(undefined4 **)(param_1 + 0x208);
  if (puVar3 != *(undefined4 **)(param_1 + 0x210)) {
    *puVar3 = param_2;
    *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + 4;
    goto LAB_00765878;
  }
  __src = *(void **)(param_1 + 0x200);
  __n = (long)puVar3 - (long)__src;
  uVar4 = ((long)__n >> 2) + 1;
  if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (long)*(undefined4 **)(param_1 + 0x210) - (long)__src;
  if ((ulong)(lVar1 >> 2) < 0x1fffffffffffffff) {
    uVar2 = lVar1 >> 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_00765830;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar4 = 0x3fffffffffffffff;
LAB_00765830:
    __dest = operator_new(uVar4 << 2);
  }
  puVar3 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
  *puVar3 = param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(param_1 + 0x200) = __dest;
  *(undefined4 **)(param_1 + 0x208) = puVar3 + 1;
  *(void **)(param_1 + 0x210) = (void *)((long)__dest + uVar4 * 4);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00765878:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x218));
  return 0;
}


