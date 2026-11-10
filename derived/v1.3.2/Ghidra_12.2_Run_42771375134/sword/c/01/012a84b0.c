/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a84b0; name: FUN_012a84b0
 */


void FUN_012a84b0(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x50) == 1) {
    FUN_012ab210(param_1);
    nn::os::LockMutex((MutexType *)(param_1 + 0xa8));
    lVar2 = *(long *)(param_1 + 0x78);
    lVar5 = *(long *)(param_1 + 0x80);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xa8));
    if (lVar2 == lVar5) {
      FUN_012ab100(param_1);
      *(undefined4 *)(param_1 + 0x50) = 2;
    }
  }
  else if (((*(int *)(param_1 + 0x50) == 0) &&
           (FUN_012ab210(param_1), *(long *)(param_1 + 200) != 0)) &&
          (lVar2 = FUN_012ac6f0(), *(long *)(param_1 + 0xf0) != 0)) {
    for (lVar5 = *(long *)(lVar2 + 8); lVar2 != lVar5; lVar5 = *(long *)(lVar5 + 8)) {
      if (*(uint *)(lVar5 + 0x28) - 0x1b580 < 1000) {
        uVar1 = *(uint *)(lVar5 + 0x28) % 1000;
        if (uVar1 == 2) {
          plVar3 = *(long **)(param_1 + 0xf0);
          pcVar4 = *(code **)(*plVar3 + 0x48);
        }
        else if (uVar1 == 1) {
          plVar3 = *(long **)(param_1 + 0xf0);
          pcVar4 = *(code **)(*plVar3 + 0x40);
        }
        else {
          if (uVar1 != 0) goto LAB_012a8580;
          plVar3 = *(long **)(param_1 + 0xf0);
          pcVar4 = *(code **)(*plVar3 + 0x38);
        }
        (*pcVar4)(plVar3,lVar5 + 0x10);
      }
LAB_012a8580:
    }
  }
  return;
}


