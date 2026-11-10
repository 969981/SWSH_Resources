/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074ff30; name: FUN_0074ff30
 */


void FUN_0074ff30(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x428);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x41c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0074ff9c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0074ff9c:
  lVar8 = *(long *)(param_1 + 1000) + param_2 * 0x1d0;
  lVar10 = *(long *)(param_1 + 0x3f0);
  lVar5 = lVar8 + 0x1d0;
  lVar9 = lVar8;
  if (lVar5 != lVar10) {
    do {
      lVar8 = lVar9 + 0x1d0;
      FUN_007511f0(lVar9,lVar8);
      lVar5 = lVar9 + 0x3a0;
      lVar9 = lVar8;
    } while (lVar5 != lVar10);
    lVar5 = *(long *)(param_1 + 0x3f0);
    if (lVar5 == lVar8) goto LAB_00750100;
  }
  lVar9 = 0;
  puVar2 = PTR_DAT_02710a48 + 0x10;
  do {
    lVar10 = lVar5 + lVar9;
    pcVar7 = *(code **)(lVar10 + -0x98);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar10 + -0x90) = 0;
      *(undefined8 *)(lVar10 + -0x88) = 0;
      *(undefined8 *)(lVar10 + -0xa0) = 0;
      *(undefined8 *)(lVar10 + -0x98) = 0;
      (*pcVar7)(lVar10 + -0x80);
    }
    *(undefined **)(lVar10 + -0x1c0) = puVar2;
    plVar11 = (long *)(lVar10 + -0x1b8);
    if (*plVar11 == 0) {
      *plVar11 = 0;
      pcVar7 = *(code **)(lVar10 + -0x128);
    }
    else {
      FUN_006e2100();
      lVar6 = *plVar11;
      *plVar11 = 0;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      }
      pcVar7 = *(code **)(lVar10 + -0x128);
    }
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar10 + -0x118) = 0;
      *(undefined8 *)(lVar10 + -0x120) = 0;
      *(undefined8 *)(lVar10 + -0x128) = 0;
      *(undefined8 *)(lVar10 + -0x130) = 0;
      (*pcVar7)(lVar10 + -0x110);
    }
    pcVar7 = *(code **)(lVar10 + -0x1a8);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar10 + -0x198) = 0;
      *(undefined8 *)(lVar10 + -0x1a0) = 0;
      *(undefined8 *)(lVar10 + -0x1a8) = 0;
      *(undefined8 *)(lVar10 + -0x1b0) = 0;
      (*pcVar7)(lVar10 + -400);
    }
    if (*plVar11 != 0) {
      (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
      *plVar11 = 0;
    }
    lVar6 = *(long *)(lVar10 + -0x1c8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *(long *)(lVar10 + -0x1c8) = 0;
    }
    lVar9 = lVar9 + -0x1d0;
  } while (lVar8 - lVar5 != lVar9);
LAB_00750100:
  *(long *)(param_1 + 0x3f0) = lVar8;
  *(long *)(param_1 + 0x3e0) = (lVar8 - *(long *)(param_1 + 1000) >> 4) * 0x34f72c234f72c235;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x41c));
  return;
}


