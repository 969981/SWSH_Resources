/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01357090; name: FUN_01357090
 */


void FUN_01357090(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_01311a80();
  *(undefined1 *)((long)param_1 + 0xa1) = 0;
  puVar1 = PTR_DAT_027286d0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0xd0);
  nn::os::GetSystemTick();
  lVar2 = nn::os::ConvertToTimeSpan();
  param_1[0x17] = lVar2;
  return;
}


