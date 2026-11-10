/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c57500; name: FUN_00c57500
 */


void FUN_00c57500(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_0271be30;
  puVar6 = PTR_DAT_0271be28;
  puVar5 = PTR_DAT_02710528;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[2] = (long)(puVar2 + 0x10);
  plVar10 = param_1 + 4;
  *plVar10 = (long)(puVar5 + 0x10);
  lVar8 = FUN_007606c0();
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c575a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c575a8:
  puVar6 = PTR_DAT_02710530;
  if (*(ulong *)(PTR_DAT_02710530 + 0x800) < 0x100) {
    *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar10;
    *(long *)(puVar6 + 0x800) = *(long *)(puVar6 + 0x800) + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
    puVar2 = PTR_DAT_0271be38;
    param_1[8] = 0;
    puVar7 = PTR_DAT_0271be40;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = (long)(puVar2 + 0x10);
    param_1[5] = 0;
    *(long **)puVar7 = plVar10;
    FUN_008d4290(param_1 + 9);
    puVar2 = PTR_DAT_0271be48 + 0x10;
    param_1[0xd] = (long)(puVar5 + 0x10);
    param_1[0xb] = (long)puVar2;
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar8 = FUN_007606c0();
    lVar9 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 4));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00c5767c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00c5767c:
    if (*(ulong *)(puVar6 + 0x800) < 0x100) {
      *(long **)(puVar6 + *(ulong *)(puVar6 + 0x800) * 8) = param_1 + 0xd;
      *(long *)(puVar6 + 0x800) = *(long *)(puVar6 + 0x800) + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
      param_1[0xd] = (long)(PTR_DAT_0271be50 + 0x10);
                    /* WARNING: Subroutine does not return */
      memset(param_1 + 0xe,0,0x120);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


