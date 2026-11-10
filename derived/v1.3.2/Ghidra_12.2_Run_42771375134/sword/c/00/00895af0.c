/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895af0; name: FUN_00895af0
 */


uint FUN_00895af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar1 = FUN_00776e10(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return uVar1 & 1;
}


