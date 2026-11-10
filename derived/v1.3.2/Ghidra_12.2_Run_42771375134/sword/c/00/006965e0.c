/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006965e0; name: FUN_006965e0
 */


void FUN_006965e0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02715010 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),true,0);
  *(int *)(PTR_DAT_02715008 + 4) = *(int *)(PTR_DAT_02715008 + 4) + 1;
  return;
}


