/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fa2b0; name: thunk_FUN_006fa2c0
 */


/* WARNING: Removing unreachable block (ram,0x006fa324) */

void thunk_FUN_006fa2c0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_02710450;
  lVar6 = *(long *)PTR_DAT_02710450;
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006fa344;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006fa344:
  FUN_006f8b90(param_1,*(undefined8 *)puVar4);
  lVar7 = *param_1;
  lVar5 = *(long *)puVar4 + 0x50;
  FUN_0199e6b0(lVar5);
  FUN_0199e720(lVar5,*(undefined4 *)(lVar7 + 0xe0),param_2);
  FUN_0199e760(lVar5,lVar7 + 0xd0,*(undefined4 *)(lVar7 + 0xe0));
  FUN_0199e6c0(lVar5);
  *(undefined8 *)(lVar7 + 0xd8) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xe4));
  return;
}


