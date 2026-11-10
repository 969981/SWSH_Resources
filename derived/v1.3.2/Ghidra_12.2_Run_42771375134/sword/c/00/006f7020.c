/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f7020; name: FUN_006f7020
 */


void FUN_006f7020(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_02715500;
  *(undefined1 *)(param_1 + 0x401) = 1;
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar8 = *(undefined8 **)(lVar5 + 0x288);
  for (puVar7 = *(undefined8 **)(lVar5 + 0x280); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    FUN_006f2e80(*puVar7,0);
  }
  *(undefined8 *)(lVar5 + 0x288) = *(undefined8 *)(lVar5 + 0x280);
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar8 = *(undefined8 **)(lVar5 + 0x2e8);
  for (puVar7 = *(undefined8 **)(lVar5 + 0x2e0); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    FUN_006f2e80(*puVar7,0);
  }
  *(undefined8 *)(lVar5 + 0x2e8) = *(undefined8 *)(lVar5 + 0x2e0);
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar8 = *(undefined8 **)(lVar5 + 0x348);
  for (puVar7 = *(undefined8 **)(lVar5 + 0x340); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    FUN_006f2e80(*puVar7,0);
  }
  plVar1 = (long *)(param_1 + 0x430);
  *(undefined8 *)(lVar5 + 0x348) = *(undefined8 *)(lVar5 + 0x340);
  lVar5 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006f7150;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006f7150:
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar7 = *(undefined8 **)(lVar5 + 0x3a0);
  puVar8 = *(undefined8 **)(lVar5 + 0x3a8);
  if (puVar7 != puVar8) {
    do {
      puVar6 = puVar7 + 1;
      FUN_006f2e80(*puVar7,0);
      puVar7 = puVar6;
    } while (puVar8 != puVar6);
    puVar7 = *(undefined8 **)(lVar5 + 0x3a0);
  }
  *(undefined8 **)(lVar5 + 0x3a8) = puVar7;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
  *(undefined1 *)(param_1 + 0x401) = 0;
  return;
}


