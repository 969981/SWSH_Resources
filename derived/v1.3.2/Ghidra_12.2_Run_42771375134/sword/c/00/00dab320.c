/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab320; name: FUN_00dab320
 */


void FUN_00dab320(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0xade8));
  lVar1 = param_2 + 0xa0 + (long)*(int *)(param_2 + 0x7c) * 0x4fb0;
  if (1 < *(int *)(param_2 + 0x7c)) {
    lVar1 = param_2 + 0xa0;
  }
  if ((int)param_3 < 5) {
    uVar2 = *(undefined8 *)(lVar1 + (ulong)param_3 * 0xff0 + 0x668);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1658);
  }
  FUN_0079ed00(param_1,uVar2);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0xade8));
  return;
}


