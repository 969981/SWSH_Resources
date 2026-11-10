/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d5da0; name: FUN_006d5da0
 */


void FUN_006d5da0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x37c);
  if (*piVar1 != 2) {
    if (*piVar1 != 0) {
LAB_006d5de8:
      nn::os::LockMutex((MutexType *)(param_1 + 0x330));
      FUN_006d69b0(*(undefined8 *)(param_1 + 0x358));
      nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x350));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
      return;
    }
    do {
      if (*piVar1 != 0) {
        ClearExclusiveLocal();
        goto LAB_006d5de8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


