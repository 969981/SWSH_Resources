/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fb400; name: FUN_004fb400
 */


void FUN_004fb400(long *param_1)

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
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  puVar1 = PTR_DAT_02713800 + 0x10;
  param_1[0xe] = (long)(PTR_DAT_02713800 + 0xe0);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (long)puVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 1;
  *(undefined2 *)((long)param_1 + 0x65) = 0;
  return;
}


