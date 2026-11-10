/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790be0; name: FUN_00790be0
 */


undefined8
FUN_00790be0(long param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5,
            long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x780);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x774));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00790c5c;
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
LAB_00790c5c:
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_019f43f0(*(undefined8 *)(param_1 + 0x78),param_4,param_3);
  }
  uVar6 = FUN_019f3400(*(undefined8 *)(param_1 + 0x78),param_6,uVar4,param_3,param_2,0,0);
  uVar7 = 0;
  if ((uVar6 & 1) != 0) {
    if (*param_6 == 0) {
      uVar7 = 0;
    }
    else if ((int)param_6[1] == *(int *)(*param_6 + 0x2c)) {
      uVar7 = FUN_019d68b0(param_6);
      FUN_019d6690(uVar7,param_5);
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x774));
  return uVar7;
}


