/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0e50; name: FUN_00dc0e50
 */


void FUN_00dc0e50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x490);
  for (plVar6 = *(long **)(param_1 + 0x488); plVar6 != plVar7; plVar6 = plVar6 + 1) {
    lVar4 = *plVar6;
    if ((0 < *(int *)(lVar4 + 0x17c)) && (*(char *)(lVar4 + 0xc) != '\0')) {
      FUN_019d67f0(lVar4,1);
    }
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00dc0eec;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00dc0eec:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar1 = *(long **)(param_1 + 0x148);
  if (plVar7 != plVar1) {
    do {
      lVar4 = *plVar7;
      uVar5 = FUN_00a8c5b0(lVar4 + 8);
      if ((uVar5 & 1) != 0) {
        FUN_00794740(lVar4 + -0x48);
      }
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
    if (*(long **)(param_1 + 0x148) != plVar1) goto LAB_00dc0f60;
  }
  plVar1 = *(long **)(param_1 + 0x118);
  for (plVar7 = *(long **)(param_1 + 0x110); plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar4 = *plVar7;
    uVar5 = FUN_00a8c5b0(lVar4 + 8);
    if ((uVar5 & 1) != 0) {
      FUN_00794740(lVar4 + -0x48);
    }
  }
LAB_00dc0f60:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
}


