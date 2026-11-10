/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ffa70; name: FUN_004ffa70
 */


void FUN_004ffa70(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02713820 + 0x10);
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x47));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x43));
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x40));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3c));
  return;
}


