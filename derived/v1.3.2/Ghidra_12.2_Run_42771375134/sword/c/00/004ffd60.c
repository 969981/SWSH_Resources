/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ffd60; name: FUN_004ffd60
 */


void FUN_004ffd60(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
  *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + -1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
  return;
}


