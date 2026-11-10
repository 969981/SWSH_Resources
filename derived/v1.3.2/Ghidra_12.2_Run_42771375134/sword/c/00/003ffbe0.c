/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffbe0; name: FUN_003ffbe0
 */


bool FUN_003ffbe0(ConditionVariableType *param_1,uint param_2)

{
  MutexType *pMVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  pMVar1 = (MutexType *)(param_1 + 8);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x28);
  if (param_1[0x2c] == (ConditionVariableType)0x0) {
    if (param_2 == 0xffffffff) {
      while ((param_1[0x2c] == (ConditionVariableType)0x0 && (iVar2 == *(int *)(param_1 + 0x28)))) {
        nn::os::WaitConditionVariable(param_1,pMVar1);
      }
    }
    else {
      lVar4 = nn::os::GetSystemTickFrequency();
      lVar5 = nn::os::GetSystemTick();
      if (param_1[0x2c] == (ConditionVariableType)0x0) {
        lVar4 = (long)(lVar4 * (ulong)param_2) / 1000;
        lVar5 = lVar4 + lVar5;
        bVar3 = true;
        do {
          if ((iVar2 != *(int *)(param_1 + 0x28)) || (!bVar3)) break;
          uVar6 = nn::os::ConvertToTimeSpan(lVar4);
          nn::os::TimedWaitConditionVariable(param_1,pMVar1,uVar6);
          lVar7 = nn::os::GetSystemTick();
          bVar3 = lVar7 <= (lVar5 + 1) - (lVar5 >> 4);
        } while (param_1[0x2c] == (ConditionVariableType)0x0);
      }
    }
  }
  if (param_1[0x2c] == (ConditionVariableType)0x0) {
    bVar3 = iVar2 != *(int *)(param_1 + 0x28);
  }
  else {
    bVar3 = true;
  }
  nn::os::UnlockMutex(pMVar1);
  return bVar3;
}


