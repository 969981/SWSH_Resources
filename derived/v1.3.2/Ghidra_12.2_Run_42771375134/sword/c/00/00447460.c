/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00447460; name: FUN_00447460
 */


int FUN_00447460(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  long *plVar7;
  
  param_1 = param_1 + 8;
  puVar6 = (undefined4 *)FUN_0044e300(param_1,*(undefined4 *)(param_2 + 1));
  if (puVar6 == (undefined4 *)0x0) {
    return 2;
  }
  uVar3 = *puVar6;
  plVar7 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,uVar3,0);
  puVar4 = PTR_DAT_02712af0;
  if (plVar7 == (long *)0x0) {
    nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
    plVar7 = (long *)FUN_004a6a70(uVar3);
    if (plVar7 == (long *)0x0) {
      iVar5 = 2;
    }
    else {
      iVar5 = FUN_004a6f50(plVar7,puVar6,*(undefined4 *)(param_2 + 1),param_3,0);
      if (iVar5 == 1) {
        nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
        goto LAB_00447584;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  }
  else {
    if ((*(ushort *)((long)plVar7 + 0xc4) & 0x7c) == 0 ||
        (*(ushort *)((long)plVar7 + 0xc4) & 0x80) == 0) {
      nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
      iVar5 = FUN_004a6f50(plVar7,puVar6,*(undefined4 *)(param_2 + 1),param_3,1);
      nn::os::UnlockMutex((MutexType *)puVar4);
      if (iVar5 != 1) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        FUN_0044e600(param_1);
        if (iVar5 == 0x5a) {
          iVar5 = 1;
        }
        return iVar5;
      }
    }
LAB_00447584:
    uVar2 = *(uint *)(param_3 + 0x68);
    if (uVar2 < *(uint *)(param_3 + 0x6c)) {
      *(uint *)(param_3 + 0x68) = uVar2 + 1;
      plVar1 = (long *)(*(long *)(param_3 + 0x60) + (ulong)uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = (long)plVar7;
      }
    }
    iVar5 = 1;
  }
  FUN_0044e600(param_1);
  return iVar5;
}


