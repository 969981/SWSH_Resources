/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2560; name: FUN_007c2560
 */


void FUN_007c2560(long *param_1,undefined2 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar5;
  puVar3 = PTR_DAT_02716ba0;
  *PTR_DAT_02716b98 = 1;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[9] = (long)(puVar3 + 0x40);
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = *param_2;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xc),true,0);
  *(undefined4 *)(param_1 + 0x10) = 3;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x11),true,0);
  *(undefined1 *)(param_1 + 0x15) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x16),true,0);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x1b),true,0);
  lVar4 = param_3[1];
  param_1[0x1f] = *param_3;
  param_1[0x20] = lVar4;
  lVar4 = param_3[2];
  lVar5 = param_3[3];
  lVar1 = param_3[5];
  param_1[0x23] = param_3[4];
  param_1[0x24] = lVar1;
  param_1[0x21] = lVar4;
  param_1[0x22] = lVar5;
  lVar4 = param_3[6];
  lVar1 = param_3[7];
  lVar5 = param_3[8];
  lVar2 = param_3[9];
  *(undefined1 *)((long)param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x27] = lVar5;
  param_1[0x28] = lVar2;
  param_1[0x25] = lVar4;
  param_1[0x26] = lVar1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x31),false,0);
  return;
}


