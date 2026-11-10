/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d21e0; name: FUN_012d21e0
 */


long FUN_012d21e0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012d2244;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012d2244:
  plVar9 = *(long **)(param_1 + 0x140);
  plVar3 = *(long **)(param_1 + 0x148);
  plVar10 = plVar3;
  if (plVar9 != plVar3) {
    do {
      lVar6 = *plVar9;
      uVar7 = FUN_012d2330(lVar6 + 8);
      if ((uVar7 & 1) != 0) {
        lVar2 = *param_2;
        lVar8 = *(long *)param_2[1];
        *(long *)param_2[1] = lVar8 + 1;
        *(long *)(lVar2 + lVar8 * 8) = lVar6 + -0x48;
      }
      plVar9 = plVar9 + 1;
    } while (plVar3 != plVar9);
    plVar10 = *(long **)(param_1 + 0x148);
    plVar9 = plVar3;
  }
  if (plVar10 == plVar9) {
    plVar9 = *(long **)(param_1 + 0x110);
    plVar3 = *(long **)(param_1 + 0x118);
    plVar10 = plVar3;
    if (plVar9 != plVar3) {
      do {
        lVar6 = *plVar9;
        uVar7 = FUN_012d2330(lVar6 + 8);
        if ((uVar7 & 1) != 0) {
          lVar2 = *param_2;
          lVar8 = *(long *)param_2[1];
          *(long *)param_2[1] = lVar8 + 1;
          *(long *)(lVar2 + lVar8 * 8) = lVar6 + -0x48;
        }
        plVar9 = plVar9 + 1;
      } while (plVar3 != plVar9);
      plVar10 = *(long **)(param_1 + 0x118);
      plVar9 = plVar3;
    }
    if (plVar10 == plVar9) {
      lVar6 = 0;
      goto LAB_012d22fc;
    }
  }
  lVar6 = 0;
  if (*plVar9 != 0) {
    lVar6 = *plVar9 + -0x48;
  }
LAB_012d22fc:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar6;
}


