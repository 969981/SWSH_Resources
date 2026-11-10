/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c3360; name: FUN_007c3360
 */


void FUN_007c3360(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_28;
  
  FUN_006d00e0(param_1,*param_2);
  puVar1 = PTR_DAT_02716ba8 + 0x70;
  puVar2 = PTR_DAT_02716ba8 + 0xa0;
  *param_1 = (long)(PTR_DAT_02716ba8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[0xb] = (long)puVar2;
  lVar3 = *param_2;
  param_1[0x61] = param_2[1];
  param_1[0x60] = lVar3;
  lVar3 = param_2[2];
  lVar5 = param_2[3];
  lVar4 = param_2[4];
  param_1[0x65] = param_2[5];
  param_1[100] = lVar4;
  param_1[99] = lVar5;
  param_1[0x62] = lVar3;
  lVar3 = param_2[6];
  lVar5 = param_2[7];
  lVar4 = param_2[8];
  lVar6 = param_2[9];
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x66] = lVar3;
  param_1[0x69] = lVar6;
  param_1[0x68] = lVar4;
  param_1[0x67] = lVar5;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  local_28 = 0;
  FUN_007c1fa0(param_1 + 0x6c,0,&local_28);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x9d),false,0);
  param_1[0xa1] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xa2),false,0);
  param_1[0xa6] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xa7),false,0);
  *(undefined1 *)(param_1 + 0xab) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xac),false,0);
  return;
}


