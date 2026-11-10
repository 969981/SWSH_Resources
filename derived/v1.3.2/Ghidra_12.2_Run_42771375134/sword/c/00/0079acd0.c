/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079acd0; name: FUN_0079acd0
 */


void FUN_0079acd0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  
  *(ulong *)(*(long *)(param_1 + 0x70) + 0x130) = *(ulong *)(*(long *)(param_1 + 0x70) + 0x130) | 2;
  plVar9 = *(long **)(param_1 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar9;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,800,0x10);
  if (lVar5 == 0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  FUN_006d6c40(lVar5,param_1 + 0x48,1);
  *(long **)(lVar5 + 8) = plVar9;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 800;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  FUN_006d1120(lVar5);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  pcVar8 = *(code **)(lVar5 + 0x2a8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x2b0) = 0;
    *(undefined8 *)(lVar5 + 0x2b8) = 0;
    *(undefined8 *)(lVar5 + 0x2a0) = 0;
    *(undefined8 *)(lVar5 + 0x2a8) = 0;
    (*pcVar8)(lVar5 + 0x2c0);
  }
  *(long *)(lVar5 + 0x2c0) = param_1;
  *(undefined1 **)(lVar5 + 0x2a0) = &LAB_0079b9d0;
  *(undefined1 **)(lVar5 + 0x2a8) = &LAB_0079ba20;
  *(undefined1 **)(lVar5 + 0x2b0) = &LAB_0079ba30;
  *(undefined1 **)(lVar5 + 0x2b8) = &LAB_0079ba40;
  *(undefined4 *)(lVar5 + 0x298) = 0;
  lVar4 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar5 + 0x158);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x14c));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0079ae50;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0079ae50:
  FUN_006d1640(lVar5,0,*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x8b0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8b0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8b0) = 0;
  }
  *(long *)(param_1 + 0x8b0) = lVar5;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(long *)(param_1 + 0xb0) = lVar4;
  puVar3 = PTR_DAT_02716578;
  uVar6 = FUN_0079d380(*(undefined8 *)PTR_DAT_02716578);
  if ((uVar6 & 1) == 0) {
    uVar7 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))(*(long **)(param_1 + 0xb0),0,0);
    FUN_0079d370(*(undefined8 *)puVar3,uVar7);
    pcVar8 = *(code **)(param_1 + 0x828);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x830) = 0;
      *(undefined8 *)(param_1 + 0x838) = 0;
      *(undefined8 *)(param_1 + 0x820) = 0;
      *(undefined8 *)(param_1 + 0x828) = 0;
      (*pcVar8)(param_1 + 0x840);
    }
    *(long *)(param_1 + 0x840) = param_1;
    *(undefined1 **)(param_1 + 0x820) = &LAB_0079ba50;
    *(undefined1 **)(param_1 + 0x830) = &LAB_0079bab0;
    *(undefined1 **)(param_1 + 0x828) = &LAB_0079baa0;
    *(undefined1 **)(param_1 + 0x838) = &LAB_0079bac0;
    FUN_006eccd0(*(undefined8 *)(*(long *)PTR_DAT_02710910 + 0x85b0),param_1 + 0x810);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x14c));
  return;
}


