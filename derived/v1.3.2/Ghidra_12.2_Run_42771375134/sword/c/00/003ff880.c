/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff880; name: FUN_003ff880
 */


void FUN_003ff880(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  MutexType *pMVar3;
  long lVar4;
  
  pMVar3 = *(MutexType **)*param_1;
  lVar4 = *(long *)(pMVar3 + 0x20);
  lVar1 = nn::os::GetCurrentThread();
  if (lVar4 == lVar1) {
    nn::os::UnlockMutex(pMVar3);
    return;
  }
  uVar2 = FUN_00400880();
  FUN_00400890(uVar2,8,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/switch/PsSwitchMutex.cpp"
               ,0x62,"Mutex must be unlocked only by thread that has already acquired lock");
  return;
}


