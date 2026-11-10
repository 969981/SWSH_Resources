/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aacb0; name: FUN_007aacb0
 */


void FUN_007aacb0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xcc0));
  nn::nifm::CancelNetworkRequest();
  if (*(long *)(param_1 + 0xce0) != 0) {
    FUN_006d0420();
    lVar1 = *(long *)(param_1 + 0xce0);
    *(undefined8 *)(param_1 + 0xce0) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xcc0));
  return;
}


