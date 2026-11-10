/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffae0; name: FUN_003ffae0
 */


void FUN_003ffae0(ConditionVariableType *param_1)

{
  nn::os::InitializeMutex((MutexType *)(param_1 + 8),false,0);
  nn::os::InitializeConditionVariable(param_1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = (ConditionVariableType)0x0;
  return;
}


