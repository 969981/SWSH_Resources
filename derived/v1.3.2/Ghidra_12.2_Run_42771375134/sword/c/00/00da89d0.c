/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da89d0; name: FUN_00da89d0
 */


void FUN_00da89d0(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xade8));
  bVar2 = FUN_00da6690(param_1);
  *(byte *)(param_1 + 0x84) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x83);
    *(undefined1 *)(param_1 + 0x83) = 0;
    *(undefined1 *)(param_1 + 0x84) = uVar1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xade8));
  return;
}


