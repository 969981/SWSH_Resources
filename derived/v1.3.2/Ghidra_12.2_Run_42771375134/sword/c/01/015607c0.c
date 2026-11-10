/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015607c0; name: FUN_015607c0
 */


undefined4 FUN_015607c0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (lVar2 != 0) {
    nn::os::LockMutex((MutexType *)(lVar2 + 0x358));
    uVar1 = *(undefined4 *)(lVar2 + 0x350);
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x358));
  }
  return uVar1;
}


