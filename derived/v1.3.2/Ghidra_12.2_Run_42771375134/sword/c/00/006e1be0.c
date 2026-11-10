/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e1be0; name: FUN_006e1be0
 */


void FUN_006e1be0(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 0x130);
  nn::os::LockMutex(pMVar1);
  if (*(char *)(param_1 + 0x170) == '\0') {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x150),pMVar1);
    } while (*(char *)(param_1 + 0x170) == '\0');
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


