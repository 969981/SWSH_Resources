/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015616d0; name: FUN_015616d0
 */


undefined4 FUN_015616d0(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x340));
  uVar1 = *(undefined4 *)(param_1 + 0x338);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x340));
  return uVar1;
}


