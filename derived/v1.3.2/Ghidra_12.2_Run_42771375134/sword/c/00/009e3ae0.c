/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3ae0; name: FUN_009e3ae0
 */


void FUN_009e3ae0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02710528 + 0x10;
  *param_1 = (long)(PTR_DAT_02718ae8 + 0x10);
  param_1[1] = (long)puVar1;
  lVar5 = FUN_007606c0();
  lVar6 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar5 + 0x10);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 4));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_009e3b6c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_009e3b6c:
  puVar1 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = param_1 + 1;
  *(long *)(puVar1 + 0x800) = *(long *)(puVar1 + 0x800) + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 4));
  param_1[1] = (long)(PTR_DAT_02718af0 + 0x10);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 2,0,0x180);
}


