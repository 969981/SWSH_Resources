/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffb80; name: FUN_003ffb80
 */


void FUN_003ffb80(ConditionVariableType *param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(param_1 + 8);
  nn::os::LockMutex(pMVar1);
  if (param_1[0x2c] == (ConditionVariableType)0x0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    param_1[0x2c] = (ConditionVariableType)0x1;
    nn::os::BroadcastConditionVariable(param_1);
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


