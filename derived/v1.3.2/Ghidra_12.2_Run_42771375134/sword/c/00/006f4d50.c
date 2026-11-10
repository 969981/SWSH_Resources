/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f4d50; name: FUN_006f4d50
 */


ulong FUN_006f4d50(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_006f4dac;
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
LAB_006f4dac:
  plVar6 = *(long **)(param_1 + 0xb8);
  plVar2 = (long *)(param_1 + 0xb0);
  if (plVar6 == plVar2) {
    uVar10 = 0;
  }
  else {
    uVar9 = 0;
    do {
      while( true ) {
        uVar10 = plVar6[5];
        if ((ulong)plVar6[5] <= uVar9) {
          uVar10 = uVar9;
        }
        plVar7 = (long *)plVar6[2];
        uVar9 = uVar10;
        if ((long *)plVar6[2] == (long *)0x0) break;
        do {
          plVar6 = plVar7;
          plVar7 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
        if (plVar6 == plVar2) goto LAB_006f4e1c;
      }
      do {
        plVar7 = plVar6;
        plVar8 = (long *)*plVar7;
        plVar6 = plVar8;
      } while (plVar7 == (long *)plVar8[2]);
      plVar6 = plVar7;
      if ((long *)plVar7[2] != plVar8) {
        plVar6 = plVar8;
      }
    } while (plVar6 != plVar2);
  }
LAB_006f4e1c:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return uVar10;
}


