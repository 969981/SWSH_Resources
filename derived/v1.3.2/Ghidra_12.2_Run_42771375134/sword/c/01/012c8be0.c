/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c8be0; name: FUN_012c8be0
 */


void FUN_012c8be0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x2a8,8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
    puVar4 = PTR_DAT_02710528;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *plVar5 = (long)(puVar4 + 0x10);
    lVar6 = FUN_007606c0();
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar6 + 0x10);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 4));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_012c8ca8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_012c8ca8:
    puVar4 = PTR_DAT_02710530;
    if (*(ulong *)(PTR_DAT_02710530 + 0x800) < 0x100) {
      *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar5;
      *(long *)(puVar4 + 0x800) = *(long *)(puVar4 + 0x800) + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
      *plVar5 = (long)(PTR_DAT_02727628 + 0x10);
                    /* WARNING: Subroutine does not return */
      memset(plVar5 + 1,0,0x2a0);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


