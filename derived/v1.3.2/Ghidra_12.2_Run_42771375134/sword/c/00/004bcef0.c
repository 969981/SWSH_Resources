/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bcef0; name: FUN_004bcef0
 */


void FUN_004bcef0(long *param_1)

{
  undefined *puVar1;
  
  FUN_004429d0();
  puVar1 = PTR_DAT_02713480;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2c),true,0);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  PTR_DAT_02713488[0x40] = 0;
  return;
}


