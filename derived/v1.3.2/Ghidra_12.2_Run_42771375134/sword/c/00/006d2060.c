/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d2060; name: FUN_006d2060
 */


void FUN_006d2060(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x80);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x74));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006d20e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006d20e4:
  *(undefined1 *)(param_1 + 0x88) = 1;
  FUN_006d2190(param_1,param_2);
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    FUN_006d2390(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
    *(undefined1 *)(param_1 + 0x30) = 1;
    lVar6 = *(long *)(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x40);
    while (lVar4 = lVar5, lVar4 != lVar6) {
      pcVar7 = *(code **)(lVar4 + -0x78);
      lVar5 = lVar4 + -0x80;
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x70) = 0;
        *(undefined8 *)(lVar4 + -0x68) = 0;
        *(undefined8 *)(lVar4 + -0x80) = 0;
        *(undefined8 *)(lVar4 + -0x78) = 0;
        (*pcVar7)(lVar4 + -0x60);
      }
    }
    *(long *)(param_1 + 0x40) = lVar6;
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x74));
  return;
}


