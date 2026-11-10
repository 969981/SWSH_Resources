/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a7130; name: FUN_012a7130
 */


undefined8 FUN_012a7130(long param_1)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return uVar1;
}


