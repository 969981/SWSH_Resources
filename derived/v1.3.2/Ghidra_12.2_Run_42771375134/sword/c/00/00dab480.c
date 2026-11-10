/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab480; name: FUN_00dab480
 */


void FUN_00dab480(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xade8));
  if ((int)param_2 < 5) {
    uVar1 = *(undefined4 *)(&DAT_02160594 + (ulong)param_2 * 4);
  }
  else {
    uVar1 = 7;
  }
  *(undefined4 *)(param_1 + 0xae28) = uVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xade8));
  return;
}


