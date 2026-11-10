/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790810; name: FUN_00790810
 */


void FUN_00790810(int *param_1,int *param_2)

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
  plVar1 = (long *)(param_1 + 0x112);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10f));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_007908a4;
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
LAB_007908a4:
  uVar5 = (long)*param_2 - (long)*param_1;
  if ((1L << (uVar5 & 0x3f) & *(ulong *)((long)param_1 + (uVar5 >> 3 & 0x1ffffffffffffff8) + 0x418))
      != 0) {
    if (0xff < *(ulong *)(param_1 + 0x104)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x104) + 4] = *param_2;
    *(long *)(param_1 + 0x104) = *(long *)(param_1 + 0x104) + 1;
    uVar5 = (ulong)((long)*param_2 - (long)*param_1) >> 3 & 0x1ffffffffffffff8;
    *(ulong *)((long)param_1 + uVar5 + 0x418) =
         *(ulong *)((long)param_1 + uVar5 + 0x418) &
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
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10f));
  return;
}


