/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00696510; name: FUN_00696510
 */


void FUN_00696510(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02715000 + 0x10);
  *(int *)PTR_DAT_02715008 = *(int *)PTR_DAT_02715008 + -1;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 1));
  return;
}


