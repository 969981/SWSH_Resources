/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fa3c0; name: FUN_004fa3c0
 */


long FUN_004fa3c0(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x50));
    if (param_1[0x4e] == 0) {
      param_1[0x4e] = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      *(long *)(lVar1 + 0x10) = param_1[0x4e];
      param_1[0x4e] = lVar1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  }
  return lVar1;
}


