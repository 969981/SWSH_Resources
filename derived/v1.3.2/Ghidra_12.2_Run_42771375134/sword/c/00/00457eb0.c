/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00457eb0; name: FUN_00457eb0
 */


int FUN_00457eb0(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  piVar2 = *(int **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  piVar3 = piVar2;
  if (uVar1 == 0) {
LAB_00457f14:
    if (piVar3 != piVar2 + (ulong)uVar1 * 6) {
      iVar5 = piVar3[4];
      goto LAB_00457f30;
    }
  }
  else {
    lVar4 = (ulong)uVar1 * 0x18;
    do {
      if (*piVar3 == param_2) goto LAB_00457f14;
      lVar4 = lVar4 + -0x18;
      piVar3 = piVar3 + 6;
    } while (lVar4 != 0);
  }
  iVar5 = 0;
LAB_00457f30:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return iVar5;
}


