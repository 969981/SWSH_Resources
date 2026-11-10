/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0143c070; name: FUN_0143c070
 */


undefined8 FUN_0143c070(undefined8 param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = 0xcbf29ce484222645;
  lVar5 = FUN_0141e040();
  bVar2 = *param_2;
  while (bVar2 != 0) {
    param_2 = param_2 + 1;
    uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
    bVar2 = *param_2;
  }
  lVar9 = *(long *)(lVar5 + 0x60);
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0x70);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 100));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0143c110;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0143c110:
  lVar5 = FUN_012d5dd0(lVar9,uVar8);
  if (lVar5 == lVar9 + 0x980) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 100));
    uVar6 = 0;
  }
  else {
    pcVar7 = *(code **)(lVar5 + 0x18);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (*pcVar7)(lVar5 + 0x30);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 100));
    uVar6 = 1;
  }
  return uVar6;
}


