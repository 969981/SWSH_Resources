/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00457e30; name: FUN_00457e30
 */


bool FUN_00457e30(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 4;
    do {
      if (*piVar3 == param_2) goto LAB_00457e8c;
      lVar4 = lVar4 + -0x10;
      piVar3 = piVar3 + 4;
    } while (lVar4 != 0);
    piVar3 = piVar2 + (ulong)uVar1 * 4;
  }
LAB_00457e8c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return piVar3 != piVar2 + (ulong)uVar1 * 4;
}


