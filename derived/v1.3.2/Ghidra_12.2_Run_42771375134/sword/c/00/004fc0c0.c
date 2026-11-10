/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fc0c0; name: FUN_004fc0c0
 */


void FUN_004fc0c0(long *param_1)

{
  undefined *puVar1;
  
  FUN_004ff970();
  puVar1 = PTR_DAT_027137f8 + 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)puVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),true,0);
  param_1[0xb] = 0;
  *(undefined2 *)((long)param_1 + 0x6b) = 0;
  puVar1 = PTR_DAT_02713808;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((long)param_1 + 0xba) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xe] = (long)(puVar1 + 0x130);
  *(undefined2 *)((long)param_1 + 0x65) = 1;
  return;
}


