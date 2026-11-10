/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211c30; name: FUN_01211c30
 */


undefined1  [16] FUN_01211c30(long param_1)

{
  undefined1 auVar1 [16];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x570);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return auVar1;
}


