/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d0420; name: FUN_006d0420
 */


void FUN_006d0420(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x5d;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x2dc));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006d0498;
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
LAB_006d0498:
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    if (param_1 == (long *)0x0) goto LAB_006d04f0;
  }
  else if (*(long **)(lVar4 + 0x88) == param_1) goto LAB_006d04f0;
  if ((*(byte *)((long)param_1 + 0x2f9) & 1) == 0) {
    nn::os::WaitThread((ThreadType *)(param_1 + 0x1f));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x1f));
    *(byte *)((long)param_1 + 0x2f9) = 1;
  }
LAB_006d04f0:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x2dc));
  return;
}


