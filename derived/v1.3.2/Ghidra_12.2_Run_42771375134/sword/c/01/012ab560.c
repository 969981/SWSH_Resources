/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab560; name: FUN_012ab560
 */


void FUN_012ab560(long param_1)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x390));
  *(undefined1 *)(param_1 + 0x378) = 1;
  uVar1 = nn::time::StandardSteadyClock::now();
  if (*(char *)(param_1 + 0x380) == '\0') {
    *(undefined8 *)(param_1 + 0x388) = uVar1;
    *(undefined1 *)(param_1 + 0x380) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x388) = uVar1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x390));
  return;
}


