/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044d750; name: FUN_0044d750
 */


void FUN_0044d750(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  plVar3 = plVar2;
  if (uVar1 == 0) {
LAB_0044d7b0:
    if (plVar3 != plVar2 + (ulong)uVar1 * 2) {
      *(int *)((long)plVar3 + 0xc) = (int)plVar3[1];
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 4;
    do {
      if (*plVar3 == param_2) goto LAB_0044d7b0;
      lVar4 = lVar4 + -0x10;
      plVar3 = plVar3 + 2;
    } while (lVar4 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  lVar5 = *(long *)PTR_DAT_02713000;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar5 == lVar4) {
    return;
  }
  nn::os::WaitEvent((EventType *)(param_1 + 6));
  return;
}


