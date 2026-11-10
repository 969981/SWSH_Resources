/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2000; name: FUN_004c2000
 */


undefined8 FUN_004c2000(uint param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar8 + 0x2d8);
  nn::os::LockMutex(pMVar1);
  uVar4 = *(uint *)(lVar8 + 0x300);
  if (uVar4 != 0) {
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = param_1 / uVar4;
    }
    for (lVar8 = *(long *)(*(long *)(lVar8 + 0x2f8) + (ulong)(param_1 - uVar5 * uVar4) * 8);
        lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
      if (*(uint *)(lVar8 + 0x10) == param_1) {
        *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        return 1;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  lVar8 = FUN_004c1d10(param_1,0);
  if (lVar8 == 0) {
    uVar7 = 2;
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = 1;
    *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)(lVar8 + 0x20) = uVar3;
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
    *(undefined8 *)(lVar8 + 0x18) = uVar2;
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  return uVar7;
}


