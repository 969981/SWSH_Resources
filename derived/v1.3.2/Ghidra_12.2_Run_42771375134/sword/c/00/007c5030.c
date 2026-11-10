/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c5030; name: FUN_007c5030
 */


void FUN_007c5030(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long local_70 [6];
  long *local_40;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_02716bb8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0x48);
  param_1[0xb] = *param_2;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xc),false,0);
  local_70[0] = param_1[1];
  local_70[1] = 0xaaaaaaaaaaaaaa;
  local_40 = (long *)0x0;
  FUN_007c5190(param_1 + 0x10,local_70[0],param_2,local_70);
  if (local_70 + 2 == local_40) {
    pcVar4 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_007c5124;
    pcVar4 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar4)();
LAB_007c5124:
  local_70[0] = param_1[1];
  local_70[1] = 0xaaaaaaaaaaaaaa;
  local_40 = (long *)0x0;
  FUN_007c5190(param_1 + 0x14,local_70[0],param_2,local_70);
  if (local_70 + 2 == local_40) {
    pcVar4 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) {
      return;
    }
    pcVar4 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar4)();
  return;
}


