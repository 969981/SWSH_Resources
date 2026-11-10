/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b910; name: FUN_0041b910
 */


void FUN_0041b910(undefined8 *param_1,int param_2)

{
  int *__src;
  int *__dest;
  uint uVar1;
  int *piVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  __dest = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar2 = __dest + (ulong)uVar1 * 0xe;
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * 0x38;
    do {
      if (*__dest == param_2) goto LAB_0041b974;
      lVar3 = lVar3 + -0x38;
      __dest = __dest + 0xe;
    } while (lVar3 != 0);
    __dest = piVar2;
  }
LAB_0041b974:
  if (piVar2 != __dest) {
    if (__dest < piVar2 + -0xe) {
      do {
        __src = __dest + 0xe;
        memcpy(__dest,__src,0x38);
        __dest = __src;
      } while (__src < piVar2 + -0xe);
      uVar1 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar1 - 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return;
}


