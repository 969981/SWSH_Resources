/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043ccf0; name: FUN_0043ccf0
 */


undefined8 FUN_0043ccf0(long *param_1,ushort param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,0x34,0xc);
  piVar1 = (int *)((long)param_1 + 0x94);
  *(ushort *)(lVar4 + 8) = param_2 & 1;
  *(ushort *)(lVar4 + 10) = param_3 & 1;
  *(undefined4 *)(lVar4 + 4) = param_4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*param_1 != param_1[1]) {
    FUN_004361b0(param_1,0,4);
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
  }
  return 1;
}


