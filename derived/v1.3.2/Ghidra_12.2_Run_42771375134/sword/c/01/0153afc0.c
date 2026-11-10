/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153afc0; name: FUN_0153afc0
 */


void FUN_0153afc0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar7 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar7;
  puVar5 = PTR_DAT_0272aa10;
  puVar4 = PTR_DAT_02710528;
  *PTR_DAT_0272aa08 = 1;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x40);
  plVar8 = param_1 + 10;
  *plVar8 = (long)(puVar4 + 0x10);
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
          if (cVar2 == '\0') goto LAB_0153b0c4;
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
LAB_0153b0c4:
  puVar4 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar8;
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
  param_1[0x12] = 0;
  puVar4 = PTR_DAT_0272aa18;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar5 = PTR_DAT_0272aa20;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = (long)(puVar4 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(long **)puVar5 = plVar8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_006e5e10(param_1 + 0x15);
  param_1[0x1f] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x20] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2b),false,0);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x33),false,0);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x37,0,0x118);
}


