/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f1230; name: _INIT_295
 */


void _INIT_295(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(PTR_DAT_02715620 + 0x800) = 0;
  DAT_029eff70 = PTR_DAT_02710528 + 0x10;
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
          if (cVar2 == '\0') goto LAB_006f12b0;
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
LAB_006f12b0:
  puVar4 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined ***)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = &DAT_029eff70;
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
  puVar5 = PTR_LAB_02715768;
  puVar4 = PTR_DAT_027155b8;
  DAT_029effb0 = 0;
  DAT_029effa0 = 0;
  DAT_029effa8 = 0;
  *(undefined ***)PTR_DAT_027155c0 = &DAT_029eff70;
  DAT_029eff70 = puVar4 + 0x10;
  DAT_029eff90 = 0;
  DAT_029eff98 = 0;
  DAT_029eff80 = 0;
  DAT_029eff88 = 0;
  DAT_029eff78 = 0;
  FUN_001001c0(puVar5,&DAT_029eff70,&PTR_LOOP_025db000);
  return;
}


