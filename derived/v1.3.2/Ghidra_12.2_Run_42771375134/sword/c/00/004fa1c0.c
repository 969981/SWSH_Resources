/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fa1c0; name: FUN_004fa1c0
 */


void FUN_004fa1c0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_004ff9f0();
  puVar1 = PTR_DAT_027137f0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x50),true,0);
  FUN_004fe160(param_1 + 0x54);
  param_1[0xc1] = param_2;
  *(undefined8 *)((long)param_1 + 0x61c) = 0xffffffff;
  return;
}


