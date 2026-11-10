/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048fcd0; name: FUN_0048fcd0
 */


void FUN_0048fcd0(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar3 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) {
        *(int *)(lVar3 + 0x24) = *(int *)(lVar3 + 0x24) + 1;
        break;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return;
}


