/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01316840; name: FUN_01316840
 */


void FUN_01316840(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  code *pcVar8;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x4c0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4b4));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_013168a8;
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
LAB_013168a8:
  lVar7 = param_1 + param_2 * 0x80;
  pcVar8 = *(code **)(lVar7 + 0xb8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0xc0) = 0;
    *(undefined8 *)(lVar7 + 200) = 0;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined8 *)(lVar7 + 0xb8) = 0;
    (*pcVar8)(lVar7 + 0xd0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,lVar7 + 0xd0);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    *(undefined8 *)(lVar7 + 0xc0) = param_3[2];
    *(undefined8 *)(lVar7 + 200) = uVar4;
    *(undefined8 *)(lVar7 + 0xb0) = uVar2;
    *(undefined8 *)(lVar7 + 0xb8) = uVar3;
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4b4));
  return;
}


