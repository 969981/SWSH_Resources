/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fff50; name: FUN_004fff50
 */


void FUN_004fff50(long param_1,long param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x218));
  *(undefined8 *)(param_2 + 8) = 0;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x238));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x218));
  return;
}


