/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075efb0; name: FUN_0075efb0
 */


void FUN_0075efb0(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ThreadType *pTVar5;
  undefined8 uVar6;
  
  if (((DAT_029f3f08 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_029f3f08), iVar4 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_029f3f10,false,0);
    FUN_001001c0(PTR__Mutex_02715f18,&DAT_029f3f10,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029f3f08);
  }
  nn::os::LockMutex((MutexType *)&DAT_029f3f10);
  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
  uVar6 = nn::os::GetThreadId(pTVar5);
  puVar3 = PTR_DAT_02716038;
  puVar2 = PTR_DAT_02716018;
  *(undefined8 *)PTR_DAT_02716020 = uVar6;
  puVar1 = PTR_DAT_02716010;
  *(undefined8 *)puVar2 = param_2;
  *puVar3 = param_3 & 1;
  *puVar1 = param_4 & 1;
  nn::os::UnlockMutex((MutexType *)&DAT_029f3f10);
  return;
}


