/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff5a0; name: FUN_003ff5a0
 */


void FUN_003ff5a0(MutexType *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = nn::os::GetCurrentThread();
  if (lVar3 == lVar1) {
    nn::os::UnlockMutex(param_1);
    return;
  }
  uVar2 = FUN_00400880();
  FUN_00400890(uVar2,8,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/switch/PsSwitchMutex.cpp"
               ,0x62,"Mutex must be unlocked only by thread that has already acquired lock");
  return;
}


