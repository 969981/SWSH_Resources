/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c6a20; name: FUN_012c6a20
 */


/* WARNING: Removing unreachable block (ram,0x012c6b48) */
/* WARNING: Removing unreachable block (ram,0x012c6be0) */

void FUN_012c6a20(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)PTR_DAT_02710848;
  plVar6 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x140,0x10);
  if (lVar4 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_012c7a10(lVar4,uVar7,plVar6);
  *(long **)(lVar4 + 8) = plVar6;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x140;
  *(undefined8 *)(lVar4 + 0x20) = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(long *)(param_1 + 0x78) = lVar4;
  lVar3 = *(long *)(param_1 + 0x60);
  lVar5 = *(long *)(lVar4 + 0x128);
  lVar4 = nn::os::GetCurrentThread();
  plVar6 = (long *)(lVar5 + 0x158);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x14c));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_012c6b68;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_012c6b68:
  lVar4 = lVar3;
  if (*(long *)(lVar3 + 0x120) != 0) {
    lVar4 = *(long *)(lVar3 + 0x120);
  }
  if (*(long *)(lVar3 + 0x128) != 0) {
    lVar3 = *(long *)(lVar3 + 0x128);
  }
  FUN_006d15e0(lVar5,lVar4,lVar3);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x14c));
  lVar3 = *(long *)(param_1 + 0x68);
  lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x130);
  lVar4 = nn::os::GetCurrentThread();
  plVar6 = (long *)(lVar5 + 0x158);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x14c));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_012c6c00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_012c6c00:
  lVar4 = lVar3;
  if (*(long *)(lVar3 + 0x120) != 0) {
    lVar4 = *(long *)(lVar3 + 0x120);
  }
  if (*(long *)(lVar3 + 0x128) != 0) {
    lVar3 = *(long *)(lVar3 + 0x128);
  }
  FUN_006d15e0(lVar5,lVar4,lVar3);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x14c));
  return;
}


