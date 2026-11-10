/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00435260; name: FUN_00435260
 */


long FUN_00435260(MutexType *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    nn::os::LockMutex(param_1);
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      for (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
          lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        if (*(uint *)(lVar3 + 0x10) == param_2) {
          *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
          break;
        }
      }
    }
  }
  else {
    nn::os::LockMutex(param_1 + 0x38);
    uVar1 = *(uint *)(param_1 + 0x60);
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = param_2 / uVar1;
      }
      for (lVar3 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(param_2 - uVar2 * uVar1) * 8);
          lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        if (*(uint *)(lVar3 + 0x10) == param_2) {
          *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
          break;
        }
      }
    }
    param_1 = param_1 + 0x38;
  }
  nn::os::UnlockMutex(param_1);
  return lVar3;
}


