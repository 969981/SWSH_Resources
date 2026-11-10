/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d7be0; name: FUN_006d7be0
 */


void FUN_006d7be0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_006d00e0();
  puVar1 = PTR_DAT_027153e0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x70);
  param_1[0xb] = (long)(puVar1 + 0xa0);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[99] = lVar2;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x66),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x6a));
  return;
}


