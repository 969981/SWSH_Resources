/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f74c0; name: FUN_006f74c0
 */


void FUN_006f74c0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf8);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xec));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_006f7524;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_006f7524:
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  for (puVar10 = *(undefined8 **)(param_1 + 0x50); puVar10 != puVar3; puVar10 = puVar10 + 1) {
    puVar9 = (undefined8 *)*puVar10;
    uVar11 = puVar9[4];
    plVar4 = (long *)puVar9[1];
    uVar2 = puVar9[2];
    uVar5 = puVar9[3];
    (**(code **)*puVar9)();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar2,uVar5,uVar11);
    (**(code **)(*plVar4 + 0x90))(plVar4);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  for (puVar10 = *(undefined8 **)(param_1 + 0x80); puVar10 != puVar3; puVar10 = puVar10 + 1) {
    puVar9 = (undefined8 *)*puVar10;
    uVar11 = puVar9[4];
    plVar4 = (long *)puVar9[1];
    uVar2 = puVar9[2];
    uVar5 = puVar9[3];
    (**(code **)*puVar9)();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar2,uVar5,uVar11);
    (**(code **)(*plVar4 + 0x90))(plVar4);
  }
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar10 = *(undefined8 **)(param_1 + 0xb0); puVar10 != puVar3; puVar10 = puVar10 + 1) {
    puVar9 = (undefined8 *)*puVar10;
    uVar11 = puVar9[4];
    plVar4 = (long *)puVar9[1];
    uVar2 = puVar9[2];
    uVar5 = puVar9[3];
    (**(code **)*puVar9)();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar2,uVar5,uVar11);
    (**(code **)(*plVar4 + 0x90))(plVar4);
  }
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xec));
  puVar10 = *(undefined8 **)PTR_DAT_02710460;
  *(undefined8 *)PTR_DAT_02710460 = 0;
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  plVar1 = (long *)puVar10[1];
  uVar2 = puVar10[2];
  uVar5 = puVar10[3];
  uVar11 = puVar10[4];
  (**(code **)*puVar10)();
                    /* WARNING: Could not recover jumptable at 0x006f7694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,uVar5,uVar11);
  return;
}


