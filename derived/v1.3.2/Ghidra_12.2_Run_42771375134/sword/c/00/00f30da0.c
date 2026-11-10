/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f30da0; name: FUN_00f30da0
 */


long FUN_00f30da0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f30e00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f30e00:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar2 = *(long **)(param_1 + 0x148);
  plVar8 = plVar2;
  if (plVar7 != plVar2) {
    do {
      lVar5 = *plVar7;
      uVar6 = FUN_00a8c5b0(lVar5 + 8);
      if ((uVar6 & 1) != 0) {
        FUN_00794670(lVar5 + -0x48);
      }
      plVar7 = plVar7 + 1;
    } while (plVar2 != plVar7);
    plVar8 = *(long **)(param_1 + 0x148);
    plVar7 = plVar2;
  }
  if (plVar8 == plVar7) {
    plVar7 = *(long **)(param_1 + 0x110);
    plVar2 = *(long **)(param_1 + 0x118);
    plVar8 = plVar2;
    if (plVar7 != plVar2) {
      do {
        lVar5 = *plVar7;
        uVar6 = FUN_00a8c5b0(lVar5 + 8);
        if ((uVar6 & 1) != 0) {
          FUN_00794670(lVar5 + -0x48);
        }
        plVar7 = plVar7 + 1;
      } while (plVar2 != plVar7);
      plVar8 = *(long **)(param_1 + 0x118);
      plVar7 = plVar2;
    }
    if (plVar8 == plVar7) {
      lVar5 = 0;
      goto LAB_00f30e98;
    }
  }
  lVar5 = 0;
  if (*plVar7 != 0) {
    lVar5 = *plVar7 + -0x48;
  }
LAB_00f30e98:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar5;
}


