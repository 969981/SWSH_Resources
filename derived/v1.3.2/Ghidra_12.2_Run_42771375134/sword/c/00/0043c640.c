/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043c640; name: FUN_0043c640
 */


undefined4 FUN_0043c640(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  FUN_0042ef30(0);
  if (PTR_DAT_02712b90[0x45] == '\0') {
    FUN_00468a80();
    uVar4 = 1;
    if (*param_1 == param_1[1]) {
      return 1;
    }
  }
  else {
    uVar4 = FUN_00434b70(param_1 + 0x10);
    if (*param_1 == param_1[1]) {
      return uVar4;
    }
  }
  FUN_004361b0(param_1,0,4);
  piVar1 = (int *)((long)param_1 + 0x94);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*piVar1 < 1) {
    piVar1 = (int *)((long)param_1 + 0x7c);
    DataMemoryBarrier(2,3);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uVar5 = 0;
    do {
      nn::os::SleepThread((uVar5 >> 7) * 1000000);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (0 < *piVar1);
    piVar1 = (int *)((long)param_1 + 0x7c);
    DataMemoryBarrier(2,3);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00434ae0(param_1 + 0x10);
  return uVar4;
}


