/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b010; name: FUN_0076b010
 */


MultiWaitHolderType * FUN_0076b010(long param_1,EventType *param_2,uint param_3)

{
  long lVar1;
  MultiWaitHolderType *pMVar2;
  
  lVar1 = param_1 + (ulong)param_3 * 0x10;
  *(EventType **)(lVar1 + 0x4e0) = param_2;
  *(uint *)(lVar1 + 0x4e8) = param_3;
  if (8 < param_3 - 1) {
    return (MultiWaitHolderType *)0x0;
  }
  switch(param_3) {
  case 1:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x3b0);
    break;
  case 2:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x3f0);
    break;
  case 3:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x430);
    break;
  case 4:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x470);
    break;
  case 5:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x2b0);
    break;
  case 6:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x2f0);
    break;
  case 7:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x330);
    break;
  case 8:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x370);
    break;
  case 9:
    pMVar2 = (MultiWaitHolderType *)(param_1 + 0x270);
  }
  nn::os::InitializeMultiWaitHolder(pMVar2,param_2);
  nn::os::SetMultiWaitHolderUserData(pMVar2,lVar1 + 0x4e0);
  return pMVar2;
}


