/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01395900; name: FUN_01395900
 */


void FUN_01395900(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 1000);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3dc));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0139595c;
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
LAB_0139595c:
  pcVar5 = *(code **)(param_1 + 0x358);
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    (*pcVar5)(param_1 + 0x370);
  }
  *(long *)(param_1 + 0x370) = param_1;
  *(undefined1 **)(param_1 + 0x350) = &LAB_01396310;
  *(undefined1 **)(param_1 + 0x358) = &LAB_01396320;
  *(undefined1 **)(param_1 + 0x360) = &LAB_01396330;
  *(undefined1 **)(param_1 + 0x368) = &LAB_01396340;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3dc));
  return;
}


