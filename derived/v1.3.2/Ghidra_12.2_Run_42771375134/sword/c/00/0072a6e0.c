/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072a6e0; name: FUN_0072a6e0
 */


void FUN_0072a6e0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x68);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5c));
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0072a750;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0072a750:
  puVar13 = &DAT_0213f304;
  do {
    uVar6 = *puVar13;
    uVar14 = (ulong)uVar6;
    if ((*(uint *)(&DAT_0213f31c + uVar14 * 4) & *(uint *)(param_2 + 0x11c)) != 0) {
      lVar10 = param_1 + uVar14 * 0x120;
      lVar15 = *(long *)(param_2 + 8);
      plVar2 = (long *)(lVar10 + 0x98);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      lVar11 = *plVar2;
      *plVar2 = lVar15;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
      }
      lVar15 = param_1 + uVar14 * 0x120;
      pcVar12 = *(code **)(lVar15 + 0xa8);
      if (pcVar12 != (code *)0x0) {
        *(undefined8 *)(lVar15 + 0xb0) = 0;
        *(undefined8 *)(lVar15 + 0xb8) = 0;
        *(undefined8 *)(lVar15 + 0xa0) = 0;
        *(undefined8 *)(lVar15 + 0xa8) = 0;
        (*pcVar12)(param_1 + uVar14 * 0x120 + 0xc0);
      }
      if (*(code **)(param_2 + 0x20) != (code *)0x0) {
        (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + uVar14 * 0x120 + 0xc0);
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        uVar5 = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar15 + 0xb0) = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar15 + 0xb8) = uVar5;
        *(undefined8 *)(lVar15 + 0xa0) = uVar3;
        *(undefined8 *)(lVar15 + 0xa8) = uVar4;
      }
      lVar15 = param_1 + uVar14 * 0x120;
      pcVar12 = *(code **)(lVar15 + 0x128);
      if (pcVar12 != (code *)0x0) {
        *(undefined8 *)(lVar15 + 0x130) = 0;
        *(undefined8 *)(lVar15 + 0x138) = 0;
        *(undefined8 *)(lVar15 + 0x120) = 0;
        *(undefined8 *)(lVar15 + 0x128) = 0;
        (*pcVar12)(param_1 + uVar14 * 0x120 + 0x140);
      }
      if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
        (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + uVar14 * 0x120 + 0x140);
        uVar3 = *(undefined8 *)(param_2 + 0x90);
        uVar4 = *(undefined8 *)(param_2 + 0x98);
        uVar5 = *(undefined8 *)(param_2 + 0xa8);
        *(undefined8 *)(lVar15 + 0x130) = *(undefined8 *)(param_2 + 0xa0);
        *(undefined8 *)(lVar15 + 0x138) = uVar5;
        *(undefined8 *)(lVar15 + 0x120) = uVar3;
        *(undefined8 *)(lVar15 + 0x128) = uVar4;
      }
      lVar15 = param_1 + uVar14 * 0x120;
      *(undefined8 *)(lVar15 + 0x1a8) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(lVar15 + 0x1a0) = *(undefined8 *)(param_2 + 0x110);
      lVar15 = *(long *)(param_1 + 0x750);
      lVar11 = *(long *)(param_1 + 0x758);
      if (lVar15 != lVar11) {
        do {
          if (*(uint *)(lVar15 + 0x1d8) == uVar6) {
            uVar9 = FUN_0072a0b0(lVar10 + 0x90,uVar6,2,*(undefined8 *)(lVar15 + 0x28));
            *(undefined4 *)(lVar15 + 0x1dc) = uVar9;
          }
          lVar15 = lVar15 + 0x1f0;
        } while (lVar11 != lVar15);
      }
    }
    puVar13 = puVar13 + 1;
  } while (puVar13 != (uint *)&DAT_0213f31c);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x5c));
  return;
}


