/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130fad0; name: FUN_0130fad0
 */


undefined8 FUN_0130fad0(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  LightEventType *pLVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((1 < param_3 - 1U) && ((*(byte *)(param_1 + 0x1da) & 1) != 0)) {
    return 0;
  }
  if (param_3 == 2) {
    *(undefined1 *)(param_1 + 0x1da) = 0;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x2e8);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2dc));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0130fb70;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0130fb70:
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    local_60 = *param_2;
    uStack_58 = param_2[1];
    pcVar8 = *(code **)(param_1 + 0x248);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
      (*pcVar8)(param_1 + 0x260);
    }
    *(long *)(param_1 + 0x260) = param_1;
    *(undefined1 **)(param_1 + 0x240) = &LAB_01310b20;
    *(undefined1 **)(param_1 + 0x248) = &LAB_01310b40;
    *(undefined1 **)(param_1 + 0x250) = &LAB_01310b50;
    *(undefined8 *)(param_1 + 0x268) = local_60;
    *(int *)(param_1 + 0x278) = param_3;
    *(undefined8 *)(param_1 + 0x270) = uStack_58;
    *(undefined1 **)(param_1 + 600) = &LAB_01310b70;
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pLVar6 = (LightEventType *)(param_1 + 0x2dc);
    goto LAB_0130fe28;
  }
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2dc));
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x2d0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2c4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0130fc5c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0130fc5c:
  uVar5 = FUN_012ecf10((undefined8 *)(param_1 + 0x180),0);
  if ((uVar5 & 1) == 0) {
    uVar2 = param_2[1];
    *(undefined8 *)(param_1 + 0x180) = *param_2;
    *(undefined8 *)(param_1 + 0x188) = uVar2;
    if (((*(long *)(param_1 + 0x1d0) == 0) ||
        (uVar5 = FUN_01311b90(*(long *)(param_1 + 0x1d0),param_2), (uVar5 & 1) != 0)) ||
       (uVar5 = FUN_01311f80(*(undefined8 *)(param_1 + 0x1d0)), (uVar5 & 1) == 0)) {
      bVar7 = false;
      puVar11 = *(undefined8 **)(param_1 + 0x1a0);
      puVar12 = *(undefined8 **)(param_1 + 0x1a8);
      if (puVar11 != puVar12) goto LAB_0130fcd0;
    }
    else {
      FUN_01311fd0(*(undefined8 *)(param_1 + 0x1d0));
      bVar7 = true;
      puVar11 = *(undefined8 **)(param_1 + 0x1a0);
      puVar12 = *(undefined8 **)(param_1 + 0x1a8);
      if (puVar11 != puVar12) {
LAB_0130fcd0:
        if (bVar7) {
          do {
            local_60 = *puVar11;
            uStack_58 = puVar11[1];
            lVar4 = 0;
            do {
              lVar10 = *(long *)(param_1 + 0x80 + lVar4);
              if (lVar10 == 0) break;
              plVar9 = (long *)(lVar10 + 0x48);
              (**(code **)(*plVar9 + 0x10))(plVar9);
              if (((lVar10 != *(long *)(param_1 + 0x1d0)) &&
                  (uVar5 = FUN_01311b90(lVar10,&local_60), (uVar5 & 1) != 0)) &&
                 (uVar5 = FUN_01311f80(lVar10), (uVar5 & 1) != 0)) {
                FUN_01311fd0(lVar10);
                (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar9);
                break;
              }
              (**(code **)(*plVar9 + 0x18))(plVar9);
              lVar4 = lVar4 + 8;
            } while (lVar4 != 0x100);
            puVar11 = puVar11 + 2;
          } while (puVar11 != puVar12);
        }
        else {
          do {
            local_60 = *puVar11;
            uStack_58 = puVar11[1];
            lVar4 = 0;
            do {
              lVar10 = *(long *)(param_1 + 0x80 + lVar4);
              if (lVar10 == 0) break;
              plVar9 = (long *)(lVar10 + 0x48);
              (**(code **)(*plVar9 + 0x10))(plVar9);
              uVar5 = FUN_01311b90(lVar10,&local_60);
              if (((uVar5 & 1) != 0) && (uVar5 = FUN_01311f80(lVar10), (uVar5 & 1) != 0)) {
                FUN_01311fd0(lVar10);
                (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar9);
                break;
              }
              (**(code **)(*plVar9 + 0x18))(plVar9);
              lVar4 = lVar4 + 8;
            } while (lVar4 != 0x100);
            puVar11 = puVar11 + 2;
          } while (puVar11 != puVar12);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x1a0);
  }
  else {
    uVar2 = param_2[1];
    *(undefined8 *)(param_1 + 400) = *param_2;
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pLVar6 = (LightEventType *)(param_1 + 0x2c4);
LAB_0130fe28:
  nn::os::SignalLightEvent(pLVar6);
  return 1;
}


