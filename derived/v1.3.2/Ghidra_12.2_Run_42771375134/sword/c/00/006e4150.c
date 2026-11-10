/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e4150; name: FUN_006e4150
 */


void FUN_006e4150(int *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x16);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x13));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006e41e4;
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
LAB_006e41e4:
  if ((1L << ((long)*param_2 - (long)*param_1 & 0x3fU) & *(ulong *)(param_1 + 0x10)) != 0) {
    if (9 < *(ulong *)(param_1 + 0xe)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0xe) + 4] = *param_2;
    *(long *)(param_1 + 0xe) = *(long *)(param_1 + 0xe) + 1;
    *(ulong *)(param_1 + 0x10) =
         *(ulong *)(param_1 + 0x10) &
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
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x13));
  return;
}


