/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c35c0; name: FUN_007c35c0
 */


void FUN_007c35c0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x538));
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x530);
  *(long *)(param_1 + 0x530) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x538));
  return;
}


