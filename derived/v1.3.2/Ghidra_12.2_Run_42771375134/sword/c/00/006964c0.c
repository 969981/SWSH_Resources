/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006964c0; name: FUN_006964c0
 */


void FUN_006964c0(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 5) = param_2;
  puVar1 = PTR_DAT_02715000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),true,0);
  *(int *)PTR_DAT_02715008 = *(int *)PTR_DAT_02715008 + 1;
  return;
}


