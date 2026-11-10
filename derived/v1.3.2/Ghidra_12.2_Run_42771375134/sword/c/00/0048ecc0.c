/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048ecc0; name: FUN_0048ecc0
 */


undefined8 FUN_0048ecc0(long param_1)

{
  void *__s;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  __s = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x70);
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x70);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return 2;
}


