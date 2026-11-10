/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130ff30; name: FUN_0130ff30
 */


undefined8 FUN_0130ff30(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  LightEventType *pLVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x2e8);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2dc));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0130ff98;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0130ff98:
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2dc));
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x2d0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2c4));
          while (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01310080;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01310080:
    uVar7 = FUN_012ecf10(param_1 + 0x180,0);
    if ((uVar7 & 1) == 0) {
      auVar10 = FUN_012ecf90(param_2);
      *(undefined1 (*) [16])(param_1 + 400) = auVar10;
    }
    else {
      uVar2 = param_2[1];
      *(undefined8 *)(param_1 + 400) = *param_2;
      *(undefined8 *)(param_1 + 0x198) = uVar2;
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pLVar8 = (LightEventType *)(param_1 + 0x2c4);
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    pcVar9 = *(code **)(param_1 + 0x248);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
      (*pcVar9)(param_1 + 0x260);
    }
    *(long *)(param_1 + 0x260) = param_1;
    *(undefined1 **)(param_1 + 0x240) = &LAB_01310b90;
    *(undefined1 **)(param_1 + 0x248) = &LAB_01310ba0;
    *(undefined1 **)(param_1 + 0x250) = &LAB_01310bb0;
    *(undefined1 **)(param_1 + 600) = &LAB_01310bd0;
    *(undefined8 *)(param_1 + 0x270) = uVar3;
    *(undefined8 *)(param_1 + 0x268) = uVar2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pLVar8 = (LightEventType *)(param_1 + 0x2dc);
  }
  nn::os::SignalLightEvent(pLVar8);
  return 1;
}


