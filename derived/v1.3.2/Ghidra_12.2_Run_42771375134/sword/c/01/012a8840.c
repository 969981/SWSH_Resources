/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a8840; name: FUN_012a8840
 */


void FUN_012a8840(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xa8));
  plVar2 = *(long **)(param_1 + 0x80);
  for (plVar1 = *(long **)(param_1 + 0x78); plVar1 != plVar2; plVar1 = plVar1 + 4) {
    if ((*plVar1 != 0) && (uVar3 = FUN_012ad0b0(), (uVar3 & 1) != 0)) {
      FUN_012ad0a0(*plVar1);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0x50) = 1;
  return;
}


