/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004360c0; name: FUN_004360c0
 */


undefined8 FUN_004360c0(long *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
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
    if (0 < *piVar1) {
      uVar6 = 0;
      do {
        nn::os::SleepThread((uVar6 >> 7) * 1000000);
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (0 < *piVar1);
    }
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
  if ((PTR_DAT_02712b90[0x45] == '\0') && ((param_2 & 1) != 0)) {
    FUN_004365c0(param_1);
  }
  else if (lVar4 != lVar5) {
    FUN_00434ae0(param_1 + 0x10);
  }
  return 1;
}


