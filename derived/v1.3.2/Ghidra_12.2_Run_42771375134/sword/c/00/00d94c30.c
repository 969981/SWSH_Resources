/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d94c30; name: FUN_00d94c30
 */


void FUN_00d94c30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined8 *)(param_1 + 0x3b8) = param_3;
  lVar5 = *param_4;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x3c0);
  *(long *)(param_1 + 0x3c0) = lVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  FUN_00d94e60(param_1,param_2);
  FUN_00d94fe0(param_1);
  *(undefined1 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  plVar6 = *(long **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x678) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,800,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_006d6c90(lVar3,0);
  *(long **)(lVar3 + 8) = plVar6;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 800;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  FUN_006d1120(lVar3);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar6 = (long *)(lVar3 + 0x158);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar3 + 0x14c));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d94d9c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d94d9c:
  FUN_006d1640(lVar3,0,*(undefined8 *)(*(long *)PTR_DAT_027155f8 + 0x50));
  pcVar4 = *(code **)(lVar3 + 0x2a8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x2b0) = 0;
    *(undefined8 *)(lVar3 + 0x2b8) = 0;
    *(undefined8 *)(lVar3 + 0x2a0) = 0;
    *(undefined8 *)(lVar3 + 0x2a8) = 0;
    (*pcVar4)(lVar3 + 0x2c0);
  }
  *(long *)(lVar3 + 0x2c0) = param_1;
  *(undefined1 **)(lVar3 + 0x2a0) = &LAB_00d96c90;
  *(undefined1 **)(lVar3 + 0x2a8) = &LAB_00d96d00;
  *(undefined1 **)(lVar3 + 0x2b0) = &LAB_00d96d10;
  *(undefined1 **)(lVar3 + 0x2b8) = &LAB_00d96d20;
  *(undefined4 *)(lVar3 + 0x298) = 0;
  if (*(long *)(param_1 + 0x660) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x660) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x660) = 0;
  }
  *(long *)(param_1 + 0x660) = lVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar3 + 0x14c));
  return;
}


