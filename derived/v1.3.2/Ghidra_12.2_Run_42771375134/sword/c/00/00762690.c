/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00762690; name: FUN_00762690
 */


undefined8 FUN_00762690(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7a0));
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x100b;
  }
  else {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x10);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a0));
  return uVar1;
}


