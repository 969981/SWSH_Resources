/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fd800; name: FUN_006fd800
 */


void FUN_006fd800(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_48 [8];
  
  puVar5 = PTR_DAT_027155f0;
  lVar9 = *(long *)PTR_DAT_027155f0;
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xe4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_006fd874;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_006fd874:
  lVar6 = *(long *)puVar5;
  *param_1 = 0;
  if (*(long *)(lVar6 + 0xb0) == *(long *)(lVar6 + 0xb8)) {
    piVar2 = (int *)(lVar6 + 0x128);
    lVar8 = FUN_006fdac0(auStack_48,*(undefined8 *)(lVar6 + 8),piVar2);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    *param_1 = lVar8;
    *piVar2 = *piVar2 + 1;
  }
  else {
    plVar7 = (long *)(*(long *)(lVar6 + 0xb8) + -8);
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      plVar7 = (long *)(*(long *)(lVar6 + 0xb8) + -8);
    }
    *param_1 = lVar8;
    *(long **)(lVar6 + 0xb8) = plVar7;
  }
  lVar6 = *(long *)puVar5 + 0x50;
  FUN_0199e6b0(lVar6);
  FUN_0199e740(lVar6,*(undefined4 *)(lVar8 + 0x68),param_2);
  FUN_0199e760(lVar6,lVar8 + 0x58,*(undefined4 *)(lVar8 + 0x68));
  FUN_0199e6c0(lVar6);
  *(undefined8 *)(lVar8 + 0x60) = param_2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xe4));
  return;
}


