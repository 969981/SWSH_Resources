/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f68b0; name: FUN_006f68b0
 */


void FUN_006f68b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_38;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x88))();
  lVar4 = *(long *)PTR_DAT_02710460;
  local_38 = param_1;
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar4 + 0xf8);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0xec));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006f6954;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006f6954:
  lVar5 = (long)*(int *)(lVar4 + 0xe0);
  lVar6 = lVar4 + lVar5 * 0x30;
  plVar7 = (long *)(lVar6 + 0x58);
  plVar8 = (long *)*plVar7;
  if (plVar8 == *(long **)(lVar6 + 0x60)) {
    FUN_006f7ad0(lVar4 + lVar5 * 0x30 + 0x50,&local_38);
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + lVar5 * 0x30 + 0x68);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *plVar8 = local_38;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *plVar7 = *plVar7 + 8;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0xec));
  return;
}


