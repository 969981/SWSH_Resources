/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00750160; name: FUN_00750160
 */


void FUN_00750160(float param_1,float param_2,undefined4 param_3,long param_4,long param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_4 + 0x428);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_4 + 0x41c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_007501dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_007501dc:
  lVar9 = *(long *)(param_4 + 1000);
  lVar7 = lVar9 + param_5 * 0x1d0;
  *(float *)(lVar7 + 0x1b0) = param_1;
  *(float *)(lVar7 + 0x1b4) = param_2 - param_1;
  *(undefined4 *)(lVar7 + 0x1b8) = 0;
  *(undefined4 *)(lVar7 + 0x1bc) = param_3;
  pcVar8 = *(code **)(lVar7 + 0x138);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x140) = 0;
    *(undefined8 *)(lVar7 + 0x148) = 0;
    *(undefined8 *)(lVar7 + 0x130) = 0;
    *(undefined8 *)(lVar7 + 0x138) = 0;
    (*pcVar8)(lVar9 + param_5 * 0x1d0 + 0x150);
  }
  if ((code *)param_6[2] != (code *)0x0) {
    (*(code *)param_6[2])(param_6 + 4,lVar9 + param_5 * 0x1d0 + 0x150);
    uVar2 = *param_6;
    uVar3 = param_6[1];
    uVar4 = param_6[3];
    *(undefined8 *)(lVar7 + 0x140) = param_6[2];
    *(undefined8 *)(lVar7 + 0x148) = uVar4;
    *(undefined8 *)(lVar7 + 0x130) = uVar2;
    *(undefined8 *)(lVar7 + 0x138) = uVar3;
  }
  *(undefined1 *)(lVar9 + param_5 * 0x1d0 + 0x1c0) = 1;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_4 + 0x41c));
  return;
}


