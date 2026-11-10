/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044d0d0; name: FUN_0044d0d0
 */


void FUN_0044d0d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),true,0);
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  nn::os::InitializeEvent(param_1 + 6,0,0);
  return;
}


