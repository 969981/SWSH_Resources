/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131ec30; name: FUN_0131ec30
 */


void FUN_0131ec30(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0131ec8c;
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
LAB_0131ec8c:
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar8 != puVar2) {
    do {
      puVar7 = puVar8 + 0x10;
      (*(code *)*puVar8)(puVar8 + 4);
      puVar8 = puVar7;
    } while (puVar7 != puVar2);
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    while (puVar7 = puVar2, puVar7 != puVar8) {
      pcVar6 = (code *)puVar7[-0xf];
      puVar2 = puVar7 + -0x10;
      if (pcVar6 != (code *)0x0) {
        puVar7[-0xe] = 0;
        puVar7[-0xd] = 0;
        puVar7[-0x10] = 0;
        puVar7[-0xf] = 0;
        (*pcVar6)(puVar7 + -0xc);
      }
    }
  }
  *(undefined8 **)(param_1 + 0x68) = puVar8;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


