/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ffda0; name: FUN_004ffda0
 */


void FUN_004ffda0(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  
  pMVar1 = (MutexType *)(param_1 + 0x1e0);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x20c);
  *(int *)(param_1 + 0x20c) = iVar2 + 1;
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x210) == '\0')) {
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x200));
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


