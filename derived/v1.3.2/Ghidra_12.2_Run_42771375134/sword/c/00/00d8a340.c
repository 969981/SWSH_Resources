/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8a340; name: FUN_00d8a340
 */


void FUN_00d8a340(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_02710528 + 0x10);
  lVar5 = FUN_007606c0();
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d8a3b8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d8a3b8:
  puVar2 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = param_1;
  *(long *)(puVar2 + 0x800) = *(long *)(puVar2 + 0x800) + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 4));
  puVar2 = PTR_DAT_02717500 + 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)puVar2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(long **)PTR_DAT_02717508 = param_1;
  return;
}


