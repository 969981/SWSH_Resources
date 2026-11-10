/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c30a0; name: FUN_007c30a0
 */


void FUN_007c30a0(long param_1,char *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(char *)(param_1 + 0x17c) == '\0') {
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(param_1 + 0x17c) = 1;
    }
  }
  else if (*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x17c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 4);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


