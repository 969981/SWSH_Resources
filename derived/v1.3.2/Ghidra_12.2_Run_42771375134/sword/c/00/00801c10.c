/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801c10; name: FUN_00801c10
 */


long * FUN_00801c10(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = param_1;
  if (*param_1 != 2) {
    do {
      lVar5 = *param_1;
      if (lVar5 != 0) break;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if (lVar5 == 0) {
      plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2);
      *param_1 = 2;
      return plVar4;
    }
    while (lVar5 == 1) {
      uVar3 = sched_yield();
      plVar4 = (long *)(ulong)uVar3;
      lVar5 = *param_1;
    }
  }
  return plVar4;
}


