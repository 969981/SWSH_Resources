/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab4d0; name: FUN_012ab4d0
 */


void FUN_012ab4d0(long param_1)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x358));
  *(undefined1 *)(param_1 + 0x340) = 1;
  uVar1 = nn::time::StandardSteadyClock::now();
  if (*(char *)(param_1 + 0x348) == '\0') {
    *(undefined8 *)(param_1 + 0x350) = uVar1;
    *(undefined1 *)(param_1 + 0x348) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x350) = uVar1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x358));
  return;
}


