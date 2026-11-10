/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00708690; name: FUN_00708690
 */


/* WARNING: Removing unreachable block (ram,0x00708828) */

void FUN_00708690(long *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  FUN_006fece0();
  puVar3 = PTR_DAT_027159d0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[9] = (long)(puVar3 + 0xb0);
  param_1[10] = (long)(puVar3 + 0xf0);
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  param_1[0x45] = lVar4;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  FUN_006cee90((long)param_1 + 0x244,1,0);
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = param_3;
  plVar7 = (long *)param_1[1];
  param_1[0x4c] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x2e8,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_0070b230(lVar5,param_1 + 9,1);
  *(long **)(lVar5 + 8) = plVar7;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x2e8;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  FUN_006d1120(lVar5);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (param_1[0x4c] != 0) {
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))();
    param_1[0x4c] = 0;
  }
  param_1[0x4c] = lVar5;
  lVar4 = nn::os::GetCurrentThread();
  plVar7 = (long *)(lVar5 + 0x158);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x14c));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00708848;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00708848:
  lVar6 = param_1[0xe];
  lVar4 = lVar6;
  if (*(long *)(lVar6 + 0x120) != 0) {
    lVar4 = *(long *)(lVar6 + 0x120);
  }
  if (*(long *)(lVar6 + 0x128) != 0) {
    lVar6 = *(long *)(lVar6 + 0x128);
  }
  FUN_006d15e0(lVar5,lVar4,lVar6);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x14c));
  return;
}


