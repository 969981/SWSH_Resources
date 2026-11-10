/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00766e60; name: FUN_00766e60
 */


int FUN_00766e60(long param_1)

{
  char cVar1;
  int iVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  *(undefined8 *)(param_1 + 0x330) = 0xffffffffffffffff;
  FUN_007650e0(*(undefined8 *)(param_1 + 800));
  iVar2 = FUN_00768670(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x33) = 1;
    cVar1 = *(char *)(param_1 + 0x30);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x30);
  }
  if (cVar1 == '\0') {
    nn::os::StartThread((ThreadType *)(param_1 + 0x80));
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  return iVar2;
}


