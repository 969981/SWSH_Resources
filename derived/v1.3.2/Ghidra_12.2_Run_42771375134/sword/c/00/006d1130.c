/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d1130; name: FUN_006d1130
 */


void FUN_006d1130(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x1e8);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1dc));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_006d1198;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_006d1198:
    lVar6 = *(long *)(param_1 + 0x168);
    lVar5 = *(long *)(param_1 + 0x170);
    while (lVar4 = lVar5, lVar4 != lVar6) {
      pcVar7 = *(code **)(lVar4 + -0x78);
      lVar5 = lVar4 + -0x80;
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x70) = 0;
        *(undefined8 *)(lVar4 + -0x68) = 0;
        *(undefined8 *)(lVar4 + -0x80) = 0;
        *(undefined8 *)(lVar4 + -0x78) = 0;
        (*pcVar7)(lVar4 + -0x60);
      }
    }
    *(long *)(param_1 + 0x170) = lVar6;
    *(undefined1 *)(param_1 + 0x198) = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1dc));
  }
  if ((*(byte *)(param_1 + 0x228) & 1) != 0) {
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x278);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26c));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_006d1240;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_006d1240:
    lVar6 = *(long *)(param_1 + 0x1f8);
    lVar5 = *(long *)(param_1 + 0x200);
    while (lVar4 = lVar5, lVar4 != lVar6) {
      pcVar7 = *(code **)(lVar4 + -0x78);
      lVar5 = lVar4 + -0x80;
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x70) = 0;
        *(undefined8 *)(lVar4 + -0x68) = 0;
        *(undefined8 *)(lVar4 + -0x80) = 0;
        *(undefined8 *)(lVar4 + -0x78) = 0;
        (*pcVar7)(lVar4 + -0x60);
      }
    }
    *(long *)(param_1 + 0x200) = lVar6;
    *(undefined1 *)(param_1 + 0x228) = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x26c));
  }
  lVar6 = *(long *)(param_1 + 0x120);
  *(ulong *)(param_1 + 0x130) = *(ulong *)(param_1 + 0x130) & 0xffffffffffffffbe;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x88))();
  FUN_006d41f0(*(undefined8 *)(param_1 + 0x160),param_1);
  return;
}


