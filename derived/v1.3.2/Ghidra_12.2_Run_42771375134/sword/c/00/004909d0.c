/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004909d0; name: FUN_004909d0
 */


void FUN_004909d0(long *param_1,int param_2,long param_3)

{
  int *__src;
  uint uVar1;
  long lVar2;
  int *piVar3;
  int *__dest;
  
  piVar3 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  __dest = piVar3;
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 * 0x28;
    do {
      if ((*__dest == param_2) && (*(long *)(__dest + 2) == param_3)) goto LAB_00490a34;
      lVar2 = lVar2 + -0x28;
      __dest = __dest + 10;
    } while (lVar2 != 0);
    __dest = piVar3 + (ulong)uVar1 * 10;
  }
LAB_00490a34:
  if (piVar3 + (ulong)uVar1 * 10 == __dest) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = (int *)(*param_1 + (ulong)uVar1 * 0x28 + -0x28);
  if (__dest < piVar3) {
    do {
      __src = __dest + 10;
      memcpy(__dest,__src,0x28);
      __dest = __src;
    } while (__src < piVar3);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


