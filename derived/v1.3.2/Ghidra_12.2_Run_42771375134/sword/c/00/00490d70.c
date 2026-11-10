/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00490d70; name: FUN_00490d70
 */


void FUN_00490d70(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  piVar4 = piVar1 + (ulong)uVar2 * 6;
  if (uVar2 != 0) {
    lVar5 = (ulong)uVar2 * 0x18;
    do {
      if (*piVar1 == param_2) goto LAB_00490dd4;
      lVar5 = lVar5 + -0x18;
      piVar1 = piVar1 + 6;
    } while (lVar5 != 0);
    piVar1 = piVar4;
  }
LAB_00490dd4:
  if (piVar4 != piVar1) {
    if (piVar1 < piVar4 + -6) {
      do {
        piVar3 = piVar1 + 6;
        *(undefined8 *)piVar1 = *(undefined8 *)piVar3;
        *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(piVar1 + 8);
        *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(piVar1 + 10);
        piVar1 = piVar3;
      } while (piVar3 < piVar4 + -6);
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar2 - 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}


