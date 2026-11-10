/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007651d0; name: FUN_007651d0
 */


void FUN_007651d0(MutexType *param_1)

{
  nn::os::LockMutex(param_1);
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  nn::os::UnlockMutex(param_1);
  return;
}


