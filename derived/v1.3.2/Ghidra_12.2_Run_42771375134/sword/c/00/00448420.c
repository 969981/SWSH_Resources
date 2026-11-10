/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00448420; name: FUN_00448420
 */


int FUN_00448420(long param_1,long param_2,long param_3,MutexType *param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  
  param_1 = param_1 + 8;
  puVar6 = (uint *)FUN_0044e300(param_1,*(undefined4 *)(param_2 + 1));
  if (puVar6 == (uint *)0x0) {
    iVar5 = 2;
  }
  else {
    uVar2 = *puVar6;
    nn::os::LockMutex(param_4);
    uVar3 = *(uint *)(param_4 + 0x28);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar7 = *(long **)(*(long *)(param_4 + 0x20) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
        if (*(uint *)(plVar7 + 2) == uVar2) {
          *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
          nn::os::UnlockMutex(param_4);
          uVar2 = *(uint *)(param_3 + 0x68);
          if (uVar2 < *(uint *)(param_3 + 0x6c)) goto LAB_00448560;
          goto LAB_00448578;
        }
      }
    }
    nn::os::UnlockMutex(param_4);
    nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
    plVar7 = (long *)FUN_0046a8d0(uVar2,1);
    if (plVar7 == (long *)0x0) {
      iVar5 = 2;
    }
    else {
      iVar5 = (**(code **)(*plVar7 + 0x28))(plVar7,puVar6,*(undefined4 *)(param_2 + 1));
      if (iVar5 == 1) {
        nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
        uVar2 = *(uint *)(param_3 + 0x68);
        if (uVar2 < *(uint *)(param_3 + 0x6c)) {
LAB_00448560:
          *(uint *)(param_3 + 0x68) = uVar2 + 1;
          plVar1 = (long *)(*(long *)(param_3 + 0x60) + (ulong)uVar2 * 8);
          if (plVar1 != (long *)0x0) {
            *plVar1 = (long)plVar7;
          }
        }
LAB_00448578:
        FUN_0044e600(param_1);
        return 1;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
    FUN_0044e600(param_1);
    if (iVar5 == 0x5a) {
      iVar5 = 1;
    }
  }
  return iVar5;
}


