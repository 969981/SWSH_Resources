/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f4e70; name: FUN_006f4e70
 */


void FUN_006f4e70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006f4ecc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006f4ecc:
  for (plVar7 = *(long **)(param_1 + 0x80); (long *)(param_1 + 0x80) != plVar7;
      plVar7 = (long *)*plVar7) {
    if (-1 < *(int *)(plVar7 + 8)) {
      plVar5 = (long *)FUN_0075edb0();
      (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined4 *)(plVar7 + 8));
    }
  }
  plVar7 = *(long **)(param_1 + 0xb8);
  while (plVar7 != (long *)(param_1 + 0xb0)) {
    plVar5 = (long *)plVar7[2];
    if ((long *)plVar7[2] == (long *)0x0) {
      do {
        plVar5 = plVar7;
        plVar6 = (long *)*plVar5;
        plVar7 = plVar6;
      } while (plVar5 == (long *)plVar6[2]);
      plVar7 = plVar5;
      if ((long *)plVar5[2] != plVar6) {
        plVar7 = plVar6;
      }
    }
    else {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return;
}


