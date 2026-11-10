/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d5b60; name: FUN_006d5b60
 */


void FUN_006d5b60(long *param_1,undefined4 param_2,long param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  FUN_006d00e0(param_1,param_4);
  puVar1 = PTR_DAT_02715378;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x70);
  param_1[0xb] = (long)(puVar1 + 0xa0);
  puVar1 = PTR_DAT_02710860;
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
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = param_3;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)((long)param_1 + 0x37c) = 0;
  param_1[0x70] = 0;
  FUN_006cef10(param_1 + 0xc,param_2);
  *(undefined4 *)((long)param_1 + 0x36c) = param_2;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_5 + 0x10))(param_5,0x88,8);
  if (lVar3 == 0) {
    (**(code **)(*param_5 + 0xb8))(param_5);
  }
  param_1 = param_1 + 0x6b;
  FUN_006d68e0(lVar3,0,0);
  *(long **)(lVar3 + 8) = param_5;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x88;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = lVar3;
  return;
}


