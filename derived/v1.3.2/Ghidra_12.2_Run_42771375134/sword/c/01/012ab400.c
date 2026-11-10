/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab400; name: FUN_012ab400
 */


void FUN_012ab400(long param_1)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 800));
  *(undefined1 *)(param_1 + 0xf8) = 1;
  uVar1 = nn::time::StandardSteadyClock::now();
  if (*(char *)(param_1 + 0x310) == '\0') {
    *(undefined8 *)(param_1 + 0x318) = uVar1;
    *(undefined1 *)(param_1 + 0x310) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x318) = uVar1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 800));
  return;
}


