/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ab50; name: FUN_0072ab50
 */


/* WARNING: Removing unreachable block (ram,0x0072aba8) */

void FUN_0072ab50(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x68);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5c));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0072abc8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0072abc8:
  *(undefined1 *)(param_1 + 0x8e8) = 1;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x7c8) = param_2[3];
  *(undefined8 *)(param_1 + 0x7c0) = uVar3;
  *(undefined8 *)(param_1 + 0x7b8) = uVar4;
  *(undefined8 *)(param_1 + 0x7b0) = uVar2;
  uVar2 = param_2[4];
  uVar4 = param_2[5];
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 0x7e8) = param_2[7];
  *(undefined8 *)(param_1 + 0x7e0) = uVar3;
  *(undefined8 *)(param_1 + 0x7d8) = uVar4;
  *(undefined8 *)(param_1 + 2000) = uVar2;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x5c));
  return;
}


