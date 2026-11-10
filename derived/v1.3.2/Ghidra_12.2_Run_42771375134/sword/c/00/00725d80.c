/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00725d80; name: FUN_00725d80
 */


void FUN_00725d80(int *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x108a);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1087));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00725e1c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00725e1c:
  uVar5 = (long)*param_2 - (long)*param_1;
  if ((1L << (uVar5 & 0x3f) & *(ulong *)((long)param_1 + (uVar5 >> 3 & 0x1ffffffffffffff8) + 0x4018)
      ) != 0) {
    if (0xfff < *(ulong *)(param_1 + 0x1004)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x1004) + 4] = *param_2;
    *(long *)(param_1 + 0x1004) = *(long *)(param_1 + 0x1004) + 1;
    uVar5 = (ulong)((long)*param_2 - (long)*param_1) >> 3 & 0x1ffffffffffffff8;
    *(ulong *)((long)param_1 + uVar5 + 0x4018) =
         *(ulong *)((long)param_1 + uVar5 + 0x4018) &
         (1L << ((long)*param_2 - (long)*param_1 & 0x3fU) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] + -1;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1087));
  return;
}


