/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072b690; name: FUN_0072b690
 */


void FUN_0072b690(long param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [496];
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x68);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0072b704;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0072b704:
  lVar4 = *(long *)(param_1 + 0x750);
  lVar5 = *(long *)(param_1 + 0x758);
  if (lVar4 != lVar5) {
    if ((param_4 & 1) == 0) {
      do {
        if (*(long *)(lVar4 + 0x20) == *param_2) {
          local_260 = *(undefined8 *)(param_3 + 0x170);
          uStack_258 = *(undefined8 *)(param_3 + 0x178);
          local_250 = *(undefined8 *)(param_3 + 0x180);
          uStack_248 = *(undefined8 *)(param_3 + 0x188);
          FUN_006fc330(auStack_240,param_3,&local_260,*(undefined4 *)(lVar4 + 0x1d8),
                       *(undefined4 *)(lVar4 + 0x1dc));
          FUN_007185f0(lVar4,auStack_240);
          FUN_00784490(auStack_240);
        }
        lVar4 = lVar4 + 0x1f0;
      } while (lVar5 != lVar4);
    }
    else {
      do {
        if (*(long *)(lVar4 + 0x20) == *param_2) {
          local_260 = *(undefined8 *)(lVar4 + 0x170);
          uStack_258 = *(undefined8 *)(lVar4 + 0x178);
          local_250 = *(undefined8 *)(lVar4 + 0x180);
          uStack_248 = *(undefined8 *)(lVar4 + 0x188);
          FUN_006fc330(auStack_240,param_3,&local_260,*(undefined4 *)(lVar4 + 0x1d8),
                       *(undefined4 *)(lVar4 + 0x1dc));
          FUN_007185f0(lVar4,auStack_240);
          FUN_00784490(auStack_240);
        }
        lVar4 = lVar4 + 0x1f0;
      } while (lVar5 != lVar4);
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
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x5c));
  return;
}


