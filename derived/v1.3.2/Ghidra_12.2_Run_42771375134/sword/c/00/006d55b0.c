/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d55b0; name: FUN_006d55b0
 */


void FUN_006d55b0(MultiWaitType *param_1)

{
  ulong uVar1;
  MultiWaitHolderType *pMVar2;
  MultiWaitHolderType *pMVar3;
  int iVar4;
  
  pMVar2 = *(MultiWaitHolderType **)(param_1 + 0x30);
  pMVar3 = *(MultiWaitHolderType **)(param_1 + 0x38);
  if (pMVar2 != pMVar3) {
    do {
      iVar4 = 0;
      do {
        if ((*(long **)(pMVar2 + 0x40) != (long *)0x0) &&
           (uVar1 = (**(code **)(**(long **)(pMVar2 + 0x40) + 0x30))(), (uVar1 & 1) == 0)) {
          if ((pMVar2[0x48] == (MultiWaitHolderType)0x0) && (*(long *)(pMVar2 + 0x40) != 0)) {
            nn::os::LinkMultiWaitHolder(param_1,pMVar2);
            pMVar2[0x48] = (MultiWaitHolderType)0x1;
          }
          iVar4 = iVar4 + 1;
        }
        pMVar2 = pMVar2 + 0x50;
      } while (pMVar3 != pMVar2);
      if (iVar4 == 0) break;
      iVar4 = iVar4 + 1;
      do {
        pMVar2 = (MultiWaitHolderType *)nn::os::WaitAny(param_1);
        pMVar2 = (MultiWaitHolderType *)nn::os::GetMultiWaitHolderUserData(pMVar2);
        if ((pMVar2[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar2 + 0x40) != 0)) {
          nn::os::UnlinkMultiWaitHolder(pMVar2);
          pMVar2[0x48] = (MultiWaitHolderType)0x0;
        }
        iVar4 = iVar4 + -1;
      } while (1 < iVar4);
      pMVar2 = *(MultiWaitHolderType **)(param_1 + 0x30);
      pMVar3 = *(MultiWaitHolderType **)(param_1 + 0x38);
    } while (pMVar2 != pMVar3);
  }
  pMVar3 = *(MultiWaitHolderType **)(param_1 + 0x38);
  for (pMVar2 = *(MultiWaitHolderType **)(param_1 + 0x30); pMVar2 != pMVar3; pMVar2 = pMVar2 + 0x50)
  {
    if ((pMVar2[0x48] != (MultiWaitHolderType)0x0) && (*(long *)(pMVar2 + 0x40) != 0)) {
      nn::os::UnlinkMultiWaitHolder(pMVar2);
      pMVar2[0x48] = (MultiWaitHolderType)0x0;
    }
  }
  return;
}


