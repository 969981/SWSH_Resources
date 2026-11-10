/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004784d0; name: FUN_004784d0
 */


uint FUN_004784d0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar4 + 0x188);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(lVar4 + 0x1b0);
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = param_2 / uVar3;
    }
    for (plVar5 = *(long **)(*(long *)(lVar4 + 0x1a8) + (ulong)(param_2 - uVar2 * uVar3) * 8);
        plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_2) {
        *(int *)((long)plVar5 + 0x14) = *(int *)((long)plVar5 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        uVar3 = FUN_0046b7d0(plVar5,param_3,param_4);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        return uVar3 & 1;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}


