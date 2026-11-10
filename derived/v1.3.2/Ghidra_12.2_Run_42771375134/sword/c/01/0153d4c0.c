/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153d4c0; name: FUN_0153d4c0
 */


void FUN_0153d4c0(long param_1)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x198));
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN_01561e20();
    lVar1 = *(long *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x180) + 0x18))
                (*(long **)(param_1 + 0x180),lVar1,*(undefined8 *)(param_1 + 0x188),
                 *(undefined8 *)(param_1 + 400));
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x198));
  return;
}


