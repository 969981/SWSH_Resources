/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ffc90; name: FUN_004ffc90
 */


void FUN_004ffc90(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
  *(undefined1 *)(param_1 + 0x260) = 0;
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x200));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
  if (*(char *)(param_1 + 0x50) != '\0') {
    nn::os::WaitThread((ThreadType *)(param_1 + 0x10));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x10));
    FUN_00774a60(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  return;
}


