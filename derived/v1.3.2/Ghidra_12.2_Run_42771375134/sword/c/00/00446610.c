/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446610; name: FUN_00446610
 */


undefined8 FUN_00446610(undefined8 param_1,uint param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar5 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar5 + 0xd0);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_2 / uVar2;
    }
    for (plVar6 = *(long **)(*(long *)(lVar5 + 200) + (ulong)(param_2 - uVar4 * uVar2) * 8);
        plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
      if (*(uint *)(plVar6 + 2) == param_2) {
        *(int *)((long)plVar6 + 0x14) = *(int *)((long)plVar6 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        if (((int)plVar6[4] != 0) &&
           (iVar3 = (int)plVar6[4] + -1, *(int *)(plVar6 + 4) = iVar3, iVar3 == 0)) {
          FUN_00446bb0(param_1,plVar6);
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
        return 1;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0xf;
}


