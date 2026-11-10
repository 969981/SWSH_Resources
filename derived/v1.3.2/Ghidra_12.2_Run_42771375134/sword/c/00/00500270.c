/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00500270; name: FUN_00500270
 */


void FUN_00500270(undefined4 param_1,long param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 auStack_54 [4];
  long local_50;
  undefined8 local_48;
  
  iVar2 = FUN_004fb370(param_3);
  if (iVar2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x0050032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x30))(param_3,0,2,0);
    return;
  }
  lVar3 = (**(code **)(*param_3 + 0x28))(param_3,&local_48,&local_50,auStack_54,0);
  if (lVar3 == 0) {
    pcVar5 = *(code **)(*param_3 + 0x30);
    iVar2 = 0x35;
    lVar3 = 0;
    bVar1 = false;
  }
  else {
    if (local_50 == 0) {
      bVar1 = false;
      iVar2 = 1;
    }
    else {
      local_5c = *(undefined1 *)((long)param_3 + 100);
      lVar4 = **(long **)(param_2 + 0x608);
      if (*(char *)((long)param_3 + 0x66) == '\0') {
        pcVar5 = *(code **)(lVar4 + 0x30);
      }
      else {
        pcVar5 = *(code **)(lVar4 + 0x38);
      }
      local_60 = param_1;
      iVar2 = (*pcVar5)(*(long **)(param_2 + 0x608),local_48,&local_60,
                        *(undefined8 *)(local_50 + 0x10));
      nn::os::LockMutex((MutexType *)(param_2 + 0x1e0));
      lVar4 = *(long *)(lVar3 + 8);
      *(undefined8 *)(lVar4 + 0x10) = 0;
      if ((iVar2 != 1) && (*(int *)(lVar4 + 0x20) != -1)) {
        FUN_004fea90(param_2 + 0x2a0);
      }
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x1e0));
      bVar1 = local_50 != 0;
    }
    pcVar5 = *(code **)(*param_3 + 0x30);
  }
  (*pcVar5)(param_3,lVar3,iVar2,bVar1);
  return;
}


