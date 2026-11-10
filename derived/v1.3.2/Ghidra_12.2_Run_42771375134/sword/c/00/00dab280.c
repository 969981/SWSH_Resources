/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab280; name: FUN_00dab280
 */


long FUN_00dab280(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xade8));
  lVar1 = param_1 + 0xa0 + (long)*(int *)(param_1 + 0x7c) * 0x4fb0;
  if (1 < *(int *)(param_1 + 0x7c)) {
    lVar1 = param_1 + 0xa0;
  }
  if ((int)*(uint *)(param_1 + 0x78) < 7) {
    uVar3 = (ulong)*(uint *)(&DAT_02160578 + (ulong)*(uint *)(param_1 + 0x78) * 4);
  }
  else {
    uVar3 = 3;
  }
  lVar2 = lVar1 + uVar3 * 0xff0 + (long)param_2 * 0x110 + 0x770;
  if (6 < param_2) {
    lVar2 = lVar1 + 0x1870;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xade8));
  return lVar2;
}


