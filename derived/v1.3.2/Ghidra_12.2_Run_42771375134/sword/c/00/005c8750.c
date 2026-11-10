/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8750; name: FUN_005c8750
 */


void FUN_005c8750(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02713ee0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),true,0);
  *(int *)PTR_DAT_02713ee8 = *(int *)PTR_DAT_02713ee8 + 1;
  return;
}


