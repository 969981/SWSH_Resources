/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c20f0; name: FUN_004c20f0
 */


long FUN_004c20f0(uint param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_02712ae8;
  pMVar1 = (MutexType *)(lVar4 + 0x2d8);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar4 + 0x300);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_1 / uVar2;
    }
    for (lVar4 = *(long *)(*(long *)(lVar4 + 0x2f8) + (ulong)(param_1 - uVar3 * uVar2) * 8);
        lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
      if (*(uint *)(lVar4 + 0x10) == param_1) {
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        return lVar4 + 0x18;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}


