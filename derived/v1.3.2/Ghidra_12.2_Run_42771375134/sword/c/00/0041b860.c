/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041b860; name: FUN_0041b860
 */


void FUN_0041b860(undefined8 *param_1,int param_2,void *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  piVar3 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = piVar3;
  if (uVar1 == 0) {
LAB_0041b8c8:
    if (piVar4 != piVar3 + (ulong)uVar1 * 0xe) {
      memcpy(piVar4 + 2,param_3,0x24);
      uVar2 = nn::os::GetSystemTick();
      *(undefined8 *)(piVar4 + 0xc) = uVar2;
    }
  }
  else {
    lVar5 = (ulong)uVar1 * 0x38;
    do {
      if (*piVar4 == param_2) goto LAB_0041b8c8;
      lVar5 = lVar5 + -0x38;
      piVar4 = piVar4 + 0xe;
    } while (lVar5 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return;
}


