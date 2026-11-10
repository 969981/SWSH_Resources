/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075ecb0; name: FUN_0075ecb0
 */


long FUN_0075ecb0(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ThreadType *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (((DAT_029f3f08 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_029f3f08), iVar3 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_029f3f10,false,0);
    FUN_001001c0(PTR__Mutex_02715f18,&DAT_029f3f10,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029f3f08);
  }
  nn::os::LockMutex((MutexType *)&DAT_029f3f10);
  puVar1 = PTR_DAT_02716018;
  lVar6 = *(long *)PTR_DAT_02716018;
  if (*PTR_DAT_02716010 == '\0' || lVar6 == 0) {
    bVar2 = *PTR_DAT_02716010 == '\0' && lVar6 != 0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_02716020;
    pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
    lVar5 = nn::os::GetThreadId(pTVar4);
    lVar6 = *(long *)puVar1;
    bVar2 = lVar7 == lVar5;
  }
  if (!bVar2) {
    lVar6 = *(long *)PTR_DAT_02716000;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_029f3f10);
  return lVar6;
}


