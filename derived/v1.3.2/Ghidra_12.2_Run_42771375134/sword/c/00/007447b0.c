/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007447b0; name: FUN_007447b0
 */


/* WARNING: Removing unreachable block (ram,0x0074491c) */

void FUN_007447b0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  FUN_006fece0();
  puVar1 = PTR_DAT_02715d58 + 0xa8;
  puVar2 = PTR_DAT_02715d58 + 0xe8;
  *param_1 = (long)(PTR_DAT_02715d58 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  FUN_00744990(param_1 + 0x42);
  FUN_006cee90((long)param_1 + 0x2d4,1,0);
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = param_3;
  param_1[0x5e] = 0;
  plVar8 = (long *)param_1[1];
  *(undefined4 *)(param_1 + 0x5f) = 2;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x2e8,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_0070b230(lVar6,param_1 + 9,1);
  *(long **)(lVar6 + 8) = plVar8;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x2e8;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  FUN_006d1120(lVar6);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (param_1[0x5e] != 0) {
    (**(code **)(*(long *)(param_1[0x5e] + 0x48) + 0x18))();
    param_1[0x5e] = 0;
  }
  param_1[0x5e] = lVar6;
  lVar5 = nn::os::GetCurrentThread();
  plVar8 = (long *)(lVar6 + 0x158);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0074493c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0074493c:
  lVar7 = param_1[0xe];
  lVar5 = lVar7;
  if (*(long *)(lVar7 + 0x120) != 0) {
    lVar5 = *(long *)(lVar7 + 0x120);
  }
  if (*(long *)(lVar7 + 0x128) != 0) {
    lVar7 = *(long *)(lVar7 + 0x128);
  }
  FUN_006d15e0(lVar6,lVar5,lVar7);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  return;
}


