/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01561580; name: FUN_01561580
 */


void FUN_01561580(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  FUN_006d00e0(param_1,0x10000);
  puVar1 = PTR_DAT_0272aeb8;
  param_1[0x60] = param_2;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xb] = (long)(puVar1 + 0xa0);
  param_1[0x62] = -0x340d631b7bddd9bb;
  param_1[9] = (long)(puVar1 + 0x70);
  param_1[99] = (long)&DAT_01d38550;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x62] = param_3[1];
  param_1[99] = param_3[2];
  param_1[100] = param_3[3];
  lVar3 = param_3[4];
  if (lVar3 == 0) {
    param_1[0x65] = 0;
    *(int *)(param_1 + 0x66) = (int)param_3[5];
    lVar3 = param_3[3];
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = param_1[0x65];
    param_1[0x65] = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x66) = (int)param_3[5];
    lVar3 = param_3[3];
  }
  if (lVar3 == 0) {
    param_1[0x61] = *param_3;
  }
  else {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = param_1[0x61];
    param_1[0x61] = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x67) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x68),false,0);
  return;
}


