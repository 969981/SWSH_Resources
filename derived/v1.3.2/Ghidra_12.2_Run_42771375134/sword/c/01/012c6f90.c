/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c6f90; name: FUN_012c6f90
 */


void FUN_012c6f90(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_a0 [96];
  long local_38;
  
  FUN_012c6870(&local_38);
  lVar5 = local_38;
  if (local_38 != 0) {
    *(undefined1 *)(local_38 + 0x80) = 1;
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar5 + 200);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xbc));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_012c7008;
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
LAB_012c7008:
    puVar8 = (undefined8 *)(local_38 + 0x90);
    puVar10 = (undefined8 *)*puVar8;
    puVar9 = *(undefined8 **)(local_38 + 0x88);
    if (puVar9 != puVar10) {
      do {
        (*(code *)puVar9[2])(puVar9 + 4,auStack_a0);
        pcVar7 = (code *)puVar9[1];
        (*(code *)*puVar9)(auStack_a0);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(auStack_a0);
        }
        puVar9 = puVar9 + 0x10;
      } while (puVar10 != puVar9);
      puVar8 = (undefined8 *)(local_38 + 0x90);
      puVar9 = *(undefined8 **)(local_38 + 0x88);
      puVar10 = (undefined8 *)*puVar8;
      while (puVar4 = puVar10, puVar4 != puVar9) {
        pcVar7 = (code *)puVar4[-0xf];
        puVar10 = puVar4 + -0x10;
        if (pcVar7 != (code *)0x0) {
          puVar4[-0xe] = 0;
          puVar4[-0xd] = 0;
          puVar4[-0x10] = 0;
          puVar4[-0xf] = 0;
          (*pcVar7)(puVar4 + -0xc);
        }
      }
    }
    *puVar8 = puVar9;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0xbc));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


