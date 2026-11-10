/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ffef0; name: FUN_004ffef0
 */


void FUN_004ffef0(long param_1,long param_2)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 0x218);
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_2 + 8) != 0) {
    do {
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0x238),pMVar1);
    } while (*(long *)(param_2 + 8) != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


