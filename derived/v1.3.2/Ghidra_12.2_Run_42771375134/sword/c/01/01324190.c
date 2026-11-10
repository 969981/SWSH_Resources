/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01324190; name: FUN_01324190
 */


void FUN_01324190(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0xa957e3270a9644aa;
  uVar7 = FUN_0130fad0(param_1,&local_50,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x430);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0132421c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0132421c:
    lVar8 = *(long *)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x398) = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x390) = 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
    pcVar9 = *(code **)(param_1 + 0x3a8);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x3b0) = 0;
      *(undefined8 *)(param_1 + 0x3b8) = 0;
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      (*pcVar9)(param_1 + 0x3c0);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,param_1 + 0x3c0);
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[3];
      *(undefined8 *)(param_1 + 0x3b0) = param_2[2];
      *(undefined8 *)(param_1 + 0x3b8) = uVar4;
      *(undefined8 *)(param_1 + 0x3a0) = uVar2;
      *(undefined8 *)(param_1 + 0x3a8) = uVar3;
    }
  }
  return;
}


