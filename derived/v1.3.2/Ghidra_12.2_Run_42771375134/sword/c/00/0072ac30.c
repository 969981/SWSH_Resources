/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ac30; name: FUN_0072ac30
 */


/* WARNING: Removing unreachable block (ram,0x0072ac88) */

void FUN_0072ac30(long param_1,undefined8 *param_2)

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
          if (cVar5 == '\0') goto LAB_0072aca8;
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
LAB_0072aca8:
  *(undefined1 *)(param_1 + 0x8e9) = 1;
  uVar2 = param_2[2];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x824) = param_2[3];
  *(undefined8 *)(param_1 + 0x81c) = uVar2;
  *(undefined8 *)(param_1 + 0x814) = uVar4;
  *(undefined8 *)(param_1 + 0x80c) = uVar3;
  uVar2 = param_2[6];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  *(undefined8 *)(param_1 + 0x844) = param_2[7];
  *(undefined8 *)(param_1 + 0x834) = uVar4;
  *(undefined8 *)(param_1 + 0x83c) = uVar2;
  *(undefined8 *)(param_1 + 0x82c) = uVar3;
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


