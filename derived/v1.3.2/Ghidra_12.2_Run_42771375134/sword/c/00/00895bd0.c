/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895bd0; name: FUN_00895bd0
 */


uint FUN_00895bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar1 = FUN_00776e80(*(undefined8 *)(param_1 + 0x70),param_2,param_3,param_4);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return uVar1 & 1;
}


