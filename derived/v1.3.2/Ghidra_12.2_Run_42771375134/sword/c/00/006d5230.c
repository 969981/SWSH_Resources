/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d5230; name: FUN_006d5230
 */


void FUN_006d5230(MultiWaitType *param_1)

{
  long lVar1;
  MultiWaitType *pMVar2;
  MultiWaitHolderType *pMVar3;
  MultiWaitHolderType *pMVar4;
  MultiWaitHolderType *pMVar5;
  
  pMVar2 = param_1 + 0x30;
  pMVar4 = *(MultiWaitHolderType **)pMVar2;
  pMVar3 = *(MultiWaitHolderType **)(param_1 + 0x38);
  while (pMVar5 = pMVar3, pMVar5 != pMVar4) {
    pMVar3 = pMVar5 + -0x50;
    lVar1 = nn::os::GetMultiWaitHolderUserData(pMVar3);
    if (lVar1 != 0) {
      nn::os::SetMultiWaitHolderUserData(pMVar3,0);
      nn::os::FinalizeMultiWaitHolder(pMVar3);
      lVar1 = *(long *)(pMVar5 + -0x10);
      *(undefined8 *)(pMVar5 + -0x10) = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
    }
    if (*(long *)(pMVar5 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(pMVar5 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(pMVar5 + -0x10) = 0;
    }
  }
  *(MultiWaitHolderType **)(param_1 + 0x38) = pMVar4;
  nn::os::FinalizeMultiWait(param_1);
  pMVar3 = *(MultiWaitHolderType **)pMVar2;
  if (pMVar3 == (MultiWaitHolderType *)0x0) {
    return;
  }
  pMVar4 = pMVar3;
  pMVar5 = *(MultiWaitHolderType **)(param_1 + 0x38);
  if (*(MultiWaitHolderType **)(param_1 + 0x38) != pMVar3) {
    do {
      pMVar4 = pMVar5 + -0x50;
      lVar1 = nn::os::GetMultiWaitHolderUserData(pMVar4);
      if (lVar1 != 0) {
        nn::os::SetMultiWaitHolderUserData(pMVar4,0);
        nn::os::FinalizeMultiWaitHolder(pMVar4);
        lVar1 = *(long *)(pMVar5 + -0x10);
        *(undefined8 *)(pMVar5 + -0x10) = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
      }
      if (*(long *)(pMVar5 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(pMVar5 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(pMVar5 + -0x10) = 0;
      }
      pMVar5 = pMVar4;
    } while (pMVar3 != pMVar4);
    pMVar4 = *(MultiWaitHolderType **)pMVar2;
  }
  *(MultiWaitHolderType **)(param_1 + 0x38) = pMVar3;
                    /* WARNING: Could not recover jumptable at 0x006d5394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
            (*(long **)(param_1 + 0x48),pMVar4,*(long *)(param_1 + 0x40) - (long)pMVar4,8);
  return;
}


