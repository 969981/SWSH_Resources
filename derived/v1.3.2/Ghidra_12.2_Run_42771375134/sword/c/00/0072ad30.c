/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ad30; name: FUN_0072ad30
 */


/* WARNING: Removing unreachable block (ram,0x0072ad8c) */

void FUN_0072ad30(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x68);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5c));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0072adac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0072adac:
  *(undefined1 *)(param_1 + 0x8ea) = 1;
  uVar2 = *param_3;
  uVar4 = param_3[1];
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0x8c0) = param_3[3];
  *(undefined8 *)(param_1 + 0x8b8) = uVar3;
  *(undefined8 *)(param_1 + 0x8b0) = uVar4;
  *(undefined8 *)(param_1 + 0x8a8) = uVar2;
  uVar3 = param_2[1];
  *(undefined8 *)(param_1 + 0x878) = *param_2;
  uVar4 = param_2[5];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x898) = param_2[4];
  *(undefined8 *)(param_1 + 0x890) = uVar5;
  *(undefined8 *)(param_1 + 0x8a0) = uVar4;
  *(undefined8 *)(param_1 + 0x888) = uVar2;
  *(undefined8 *)(param_1 + 0x880) = uVar3;
  *(undefined1 *)(param_1 + 0x878) = 1;
  *(long *)(param_1 + 0x890) = param_1 + 0x8a8;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x5c));
  return;
}


