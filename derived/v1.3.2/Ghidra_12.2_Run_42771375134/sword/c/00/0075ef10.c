/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075ef10; name: FUN_0075ef10
 */


undefined1 FUN_0075ef10(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if (((DAT_029f3f08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_029f3f08), iVar2 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_029f3f10,false,0);
    FUN_001001c0(PTR__Mutex_02715f18,&DAT_029f3f10,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029f3f08);
  }
  nn::os::LockMutex((MutexType *)&DAT_029f3f10);
  uVar1 = *PTR_DAT_02716038;
  nn::os::UnlockMutex((MutexType *)&DAT_029f3f10);
  return uVar1;
}


