/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff740; name: FUN_003ff740
 */


void FUN_003ff740(long *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  MutexType *pMVar6;
  long lVar7;
  
  if ((param_2 & 1) == 0) {
    piVar1 = (int *)((undefined8 *)*param_1 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return;
  }
  pMVar6 = *(MutexType **)*param_1;
  nn::os::LockMutex(pMVar6);
  uVar4 = nn::os::GetCurrentThread();
  *(undefined8 *)(pMVar6 + 0x20) = uVar4;
  piVar1 = (int *)(*param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pMVar6 = *(MutexType **)*param_1;
  lVar7 = *(long *)(pMVar6 + 0x20);
  lVar5 = nn::os::GetCurrentThread();
  if (lVar7 == lVar5) {
    nn::os::UnlockMutex(pMVar6);
    return;
  }
  uVar4 = FUN_00400880();
  FUN_00400890(uVar4,8,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/switch/PsSwitchMutex.cpp"
               ,0x62,"Mutex must be unlocked only by thread that has already acquired lock");
  return;
}


