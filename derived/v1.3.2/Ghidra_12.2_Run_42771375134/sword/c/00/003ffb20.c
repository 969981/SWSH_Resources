/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffb20; name: FUN_003ffb20
 */


void FUN_003ffb20(ConditionVariableType *param_1)

{
  nn::os::FinalizeConditionVariable(param_1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 8));
  return;
}


