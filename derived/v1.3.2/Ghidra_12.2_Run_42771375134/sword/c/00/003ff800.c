/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff800; name: FUN_003ff800
 */


void FUN_003ff800(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  MutexType *pMVar3;
  
  pMVar3 = *(MutexType **)*param_1;
  nn::os::LockMutex(pMVar3);
  uVar2 = nn::os::GetCurrentThread();
  *(undefined8 *)(pMVar3 + 0x20) = uVar2;
  iVar1 = *(int *)(*param_1 + 8);
  while (iVar1 != 0) {
    nn::os::SleepThread(1);
    iVar1 = *(int *)(*param_1 + 8);
  }
  return;
}


