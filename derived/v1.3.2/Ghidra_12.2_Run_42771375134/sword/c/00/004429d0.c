/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004429d0; name: FUN_004429d0
 */


void FUN_004429d0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02712fc8 + 0x10);
  FUN_0044dcd0(param_1 + 1);
  nn::os::InitializeMutex((MutexType *)(param_1 + 9),true,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_0044d0d0(param_1 + 0x1b);
  return;
}


