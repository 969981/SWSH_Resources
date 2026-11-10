/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004906c0; name: FUN_004906c0
 */


void FUN_004906c0(int param_1,undefined8 *param_2,int param_3,long param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = (int *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  piVar3 = piVar2;
  if (uVar1 == 0) {
LAB_00490728:
    if (piVar3 != piVar2 + (ulong)uVar1 * 10) {
      nn::os::LockMutex((MutexType *)(param_2 + 4));
      *(undefined8 *)(piVar3 + 4) = param_2[8];
      piVar3[7] = param_1;
      nn::os::UnlockMutex((MutexType *)(param_2 + 4));
      return;
    }
  }
  else {
    lVar4 = (ulong)uVar1 * 0x28;
    do {
      if ((*piVar3 == param_3) && (*(long *)(piVar3 + 2) == param_4)) goto LAB_00490728;
      lVar4 = lVar4 + -0x28;
      piVar3 = piVar3 + 10;
    } while (lVar4 != 0);
  }
  return;
}


