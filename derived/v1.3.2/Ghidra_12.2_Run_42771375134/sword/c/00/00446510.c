/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446510; name: FUN_00446510
 */


int FUN_00446510(undefined8 param_1,undefined8 param_2,uint param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar6 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar6 + 0xd0);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_3 / uVar2;
    }
    for (plVar7 = *(long **)(*(long *)(lVar6 + 200) + (ulong)(param_3 - uVar3 * uVar2) * 8);
        plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == param_3) {
        *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        iVar5 = (int)plVar7[4];
        if (iVar5 == 0) {
          iVar4 = FUN_00446700(param_1,param_2,plVar7);
          if (iVar4 != 1) goto LAB_004465f4;
          (**(code **)(*plVar7 + 0x10))(plVar7);
          iVar5 = (int)plVar7[4];
        }
        iVar4 = 1;
        *(int *)(plVar7 + 4) = iVar5 + 1;
LAB_004465f4:
        (**(code **)(*plVar7 + 0x18))(plVar7);
        return iVar4;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0xf;
}


