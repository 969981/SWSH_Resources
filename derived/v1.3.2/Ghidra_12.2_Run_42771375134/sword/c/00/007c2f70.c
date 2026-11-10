/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2f70; name: FUN_007c2f70
 */


undefined8 FUN_007c2f70(long param_1)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
  return uVar1;
}


