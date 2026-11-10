/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007607d0; name: FUN_007607d0
 */


void FUN_007607d0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_02716040 + 0xe8;
  *param_1 = (long)(PTR_DAT_02716040 + 0x10);
  param_1[1] = (long)puVar1;
  lVar5 = nn::os::GetCurrentThread();
  plVar2 = param_1 + 0x16;
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0xa4));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00760840;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00760840:
  uVar6 = FUN_00760620(param_1 + 5);
  if ((uVar6 & 1) == 0) {
    FUN_00760910(param_1);
  }
  FUN_00760370(param_1 + 5);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0xa4));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0xa4));
  if (param_1[0xb] != 0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xb] = 0;
  }
  return;
}


