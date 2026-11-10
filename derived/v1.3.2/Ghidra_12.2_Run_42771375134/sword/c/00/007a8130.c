/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8130; name: FUN_007a8130
 */


void FUN_007a8130(long param_1,char *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  if (*(char *)(param_1 + 0xa4) == '\0') {
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(param_1 + 0xa4) = 1;
    }
  }
  else if (*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0xa4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 4);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  return;
}


