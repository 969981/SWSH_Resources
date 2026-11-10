/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446a60; name: FUN_00446a60
 */


int FUN_00446a60(long param_1,void *param_2,int param_3,uint param_4,uint param_5)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 auStack_98 [72];
  long local_48;
  
  uVar3 = *(undefined4 *)((long)param_2 + 4);
  lVar1 = param_1 + 0x88;
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  lVar7 = FUN_0044a9b0(lVar1,uVar3,0);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x74);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(int *)(lVar7 + 0x7c) = *(int *)(lVar7 + 0x7c) + 1;
    if ((param_3 == 2) || ((*(byte *)(lVar7 + 0x78) >> 2 & 1) != 0)) {
      nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
      return 1;
    }
    param_3 = 3;
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  local_48 = 0;
  memcpy(auStack_98,param_2,0x48);
  iVar6 = FUN_00444030(param_1,auStack_98,&local_48,param_3,param_4 & 1,param_5 & 1);
  lVar7 = local_48;
  if (iVar6 == 1) {
    FUN_0044a8b0(lVar1,uVar3,0,local_48);
  }
  else if ((iVar6 != 0x45) && (local_48 != 0)) {
    FUN_0044aa40(lVar1,uVar3,0);
    FUN_00442640(lVar7,0);
  }
  return iVar6;
}


