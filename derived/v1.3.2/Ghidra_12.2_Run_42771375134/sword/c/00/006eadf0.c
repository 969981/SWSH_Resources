/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006eadf0; name: FUN_006eadf0
 */


void FUN_006eadf0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined *__dest;
  long lVar8;
  undefined *puVar9;
  
  *param_1 = (long)(PTR_DAT_02715618 + 0x10);
  if (((DAT_029f00d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_029f00d8), iVar6 != 0)) {
    FUN_006cee90(&DAT_029f00f4,1,0);
    DAT_029f0100 = 0;
    FUN_001001c0(PTR_LAB_02715628,&DAT_029f00f0,&PTR_LOOP_025db000);
    __cxa_guard_release(&DAT_029f00d8);
  }
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (DAT_029f0100 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)&DAT_029f00f4);
        while (DAT_029f0100 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x29f0100,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_029f0100 = lVar7;
          }
          if (cVar3 == '\0') goto LAB_006eae74;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x29f0100,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_029f0100 = lVar7;
    }
  } while (cVar3 != '\0');
LAB_006eae74:
  puVar5 = PTR_DAT_02715620;
  lVar7 = *(long *)(PTR_DAT_02715620 + 0x800);
  lVar8 = lVar7 * 8;
  puVar2 = PTR_DAT_02715620 + lVar8;
  __dest = PTR_DAT_02715620;
  if (lVar8 != 0 && *(long **)PTR_DAT_02715620 != param_1) {
    puVar9 = PTR_DAT_02715620;
    do {
      lVar8 = lVar8 + -8;
      if (lVar8 == 0) goto LAB_006eaee8;
      __dest = puVar9 + 8;
      puVar1 = (undefined8 *)(puVar9 + 8);
      puVar9 = __dest;
    } while ((long *)*puVar1 != param_1);
  }
  if (puVar2 != __dest) {
    __n = (long)puVar2 - (long)(__dest + 8);
    if (__n != 0) {
      memmove(__dest,__dest + 8,__n);
      lVar7 = *(long *)(puVar5 + 0x800);
    }
    *(long *)(puVar5 + 0x800) = lVar7 + -1;
  }
LAB_006eaee8:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x29f0100,0x10);
    if (bVar4) {
      DAT_029f0100 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)&DAT_029f00f4);
  return;
}


