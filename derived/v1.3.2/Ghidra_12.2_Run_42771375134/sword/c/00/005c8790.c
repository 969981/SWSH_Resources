/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8790; name: FUN_005c8790
 */


void FUN_005c8790(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02713ee0 + 0x10);
  *(int *)PTR_DAT_02713ee8 = *(int *)PTR_DAT_02713ee8 + -1;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 1));
  return;
}


