/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048fb00; name: FUN_0048fb00
 */


bool FUN_0048fb00(long *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x68)) {
      if (*(uint *)(lVar4 + 0x4c) == param_2) {
        lVar4 = FUN_0048fe70(lVar4,param_3);
        bVar3 = lVar4 != 0;
        goto LAB_0048fb70;
      }
    }
  }
  bVar3 = false;
LAB_0048fb70:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return bVar3;
}


