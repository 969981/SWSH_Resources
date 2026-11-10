/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c34a0; name: FUN_007c34a0
 */


void FUN_007c34a0(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x4e8));
  uVar2 = FUN_007c1ea0(param_1 + 0x360,param_2);
  if ((uVar2 & 1) != 0) {
    memcpy((void *)(param_1 + 0x368),(void *)(param_2 + 8),0x168);
    if (*(char *)(param_1 + 0x4d0) == '\0') {
      if (*(char *)(param_2 + 0x170) != '\0') {
        *(undefined8 *)(param_1 + 0x4d4) = *(undefined8 *)(param_2 + 0x174);
        *(undefined1 *)(param_1 + 0x4d0) = 1;
      }
    }
    else if (*(char *)(param_2 + 0x170) == '\0') {
      *(undefined1 *)(param_1 + 0x4d0) = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x174);
      *(undefined2 *)(param_1 + 0x4d8) = *(undefined2 *)(param_2 + 0x178);
      *(undefined4 *)(param_1 + 0x4d4) = uVar1;
    }
    *(undefined1 *)(param_1 + 0x4e0) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4e8));
  return;
}


