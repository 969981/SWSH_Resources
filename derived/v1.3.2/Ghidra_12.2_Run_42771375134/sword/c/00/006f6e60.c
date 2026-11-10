/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6e60; name: FUN_006f6e60
 */


void FUN_006f6e60(long param_1,undefined8 param_2)

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
  *(undefined1 *)(param_1 + 0x400) = 1;
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar8 = *(undefined8 **)(lVar5 + 0x108);
  for (puVar6 = *(undefined8 **)(lVar5 + 0x100); puVar6 != puVar8; puVar6 = puVar6 + 1) {
    (**(code **)(*(long *)*puVar6 + 0x28))((long *)*puVar6,param_2);
  }
  *(undefined8 *)(lVar5 + 0x108) = *(undefined8 *)(lVar5 + 0x100);
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar8 = *(undefined8 **)(lVar5 + 0x168);
  for (puVar6 = *(undefined8 **)(lVar5 + 0x160); puVar6 != puVar8; puVar6 = puVar6 + 1) {
    (**(code **)(*(long *)*puVar6 + 0x28))((long *)*puVar6,param_2);
  }
  *(undefined8 *)(lVar5 + 0x168) = *(undefined8 *)(lVar5 + 0x160);
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar8 = *(undefined8 **)(lVar5 + 0x1c8);
  for (puVar6 = *(undefined8 **)(lVar5 + 0x1c0); puVar6 != puVar8; puVar6 = puVar6 + 1) {
    (**(code **)(*(long *)*puVar6 + 0x28))((long *)*puVar6,param_2);
  }
  plVar1 = (long *)(param_1 + 0x418);
  *(undefined8 *)(lVar5 + 0x1c8) = *(undefined8 *)(lVar5 + 0x1c0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006f6fa0;
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
LAB_006f6fa0:
  lVar5 = param_1 + (long)*(int *)puVar4 * 0x30;
  puVar6 = *(undefined8 **)(lVar5 + 0x220);
  puVar8 = *(undefined8 **)(lVar5 + 0x228);
  if (puVar6 != puVar8) {
    do {
      puVar7 = puVar6 + 1;
      (**(code **)(*(long *)*puVar6 + 0x28))((long *)*puVar6,param_2);
      puVar6 = puVar7;
    } while (puVar8 != puVar7);
    puVar6 = *(undefined8 **)(lVar5 + 0x220);
  }
  *(undefined8 **)(lVar5 + 0x228) = puVar6;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40c));
  *(undefined1 *)(param_1 + 0x400) = 0;
  return;
}


