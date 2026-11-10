/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ff9f0; name: FUN_004ff9f0
 */


void FUN_004ff9f0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02713820;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3c),true,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x40));
  *(undefined4 *)((long)param_1 + 0x214) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x41] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x43),true,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x47));
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


