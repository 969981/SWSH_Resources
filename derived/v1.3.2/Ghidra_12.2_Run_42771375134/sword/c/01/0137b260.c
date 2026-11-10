/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137b260; name: FUN_0137b260
 */


long FUN_0137b260(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0137b2c8;
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
LAB_0137b2c8:
  plVar10 = *(long **)(param_1 + 0x140);
  plVar2 = *(long **)(param_1 + 0x148);
  plVar6 = plVar2;
  if (plVar10 != plVar2) {
LAB_0137b2d4:
    do {
      lVar8 = *plVar10;
      puVar9 = (undefined8 *)(lVar8 + 8);
      plVar6 = (long *)(**(code **)*puVar9)(puVar9);
      lVar5 = FUN_01348020();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar5) {
          lVar5 = *param_2;
          lVar7 = *(long *)param_2[1];
          *(long *)param_2[1] = lVar7 + 1;
          *(long *)(lVar5 + lVar7 * 8) = lVar8 + -0x48;
          plVar10 = plVar10 + 1;
          if (plVar10 != plVar2) goto LAB_0137b2d4;
          goto LAB_0137b338;
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
LAB_0137b338:
    plVar6 = *(long **)(param_1 + 0x148);
    plVar10 = plVar2;
  }
  if (plVar6 == plVar10) {
    plVar10 = *(long **)(param_1 + 0x110);
    plVar2 = *(long **)(param_1 + 0x118);
    plVar6 = plVar2;
    if (plVar10 != plVar2) {
LAB_0137b354:
      do {
        lVar8 = *plVar10;
        puVar9 = (undefined8 *)(lVar8 + 8);
        plVar6 = (long *)(**(code **)*puVar9)(puVar9);
        lVar5 = FUN_01348020();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar5) {
            lVar5 = *param_2;
            lVar7 = *(long *)param_2[1];
            *(long *)param_2[1] = lVar7 + 1;
            *(long *)(lVar5 + lVar7 * 8) = lVar8 + -0x48;
            plVar10 = plVar10 + 1;
            if (plVar10 != plVar2) goto LAB_0137b354;
            goto LAB_0137b3b8;
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar2);
LAB_0137b3b8:
      plVar6 = *(long **)(param_1 + 0x118);
      plVar10 = plVar2;
    }
    if (plVar6 == plVar10) {
      lVar5 = 0;
      goto LAB_0137b3d8;
    }
  }
  lVar5 = 0;
  if (*plVar10 != 0) {
    lVar5 = *plVar10 + -0x48;
  }
LAB_0137b3d8:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar5;
}


