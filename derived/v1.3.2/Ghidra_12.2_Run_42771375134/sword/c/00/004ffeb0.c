/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ffeb0; name: FUN_004ffeb0
 */


void FUN_004ffeb0(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
  *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + -1;
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x200));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
  return;
}


