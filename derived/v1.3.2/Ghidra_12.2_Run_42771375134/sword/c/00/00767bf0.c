/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00767bf0; name: FUN_00767bf0
 */


void FUN_00767bf0(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  *(undefined8 *)(param_1 + 0x330) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x328) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  return;
}


