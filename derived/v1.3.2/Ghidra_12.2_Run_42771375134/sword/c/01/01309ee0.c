/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01309ee0; name: FUN_01309ee0
 */


void FUN_01309ee0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_58 [8];
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3e0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3d4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01309f4c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01309f4c:
  FUN_00d3fd50(*param_2,auStack_58);
  FUN_012e55f0();
  plVar7 = *(long **)(param_1 + 0x378);
  plVar6 = *(long **)(param_1 + 0x370);
  if (plVar7 != plVar6) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      lVar4 = plVar6[uVar10];
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        if (*(int *)(lVar4 + 0x54) != 0) {
          lVar11 = *(long *)(param_1 + 0x370);
          uVar8 = uVar9 + 1;
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar6);
          lVar5 = *(long *)(lVar11 + uVar9 * 8);
          *(long *)(lVar11 + uVar9 * 8) = lVar4;
          uVar9 = uVar8;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar7 = *(long **)(param_1 + 0x378);
        plVar6 = *(long **)(param_1 + 0x370);
      }
      uVar10 = uVar10 + 1;
      uVar8 = (long)plVar7 - (long)plVar6 >> 3;
    } while (uVar10 < uVar8);
    while (uVar9 < uVar8) {
      plVar7 = plVar7 + -1;
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
        *plVar7 = 0;
        plVar6 = *(long **)(param_1 + 0x370);
      }
      *(long **)(param_1 + 0x378) = plVar7;
      uVar8 = (long)plVar7 - (long)plVar6 >> 3;
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3d4));
  return;
}


