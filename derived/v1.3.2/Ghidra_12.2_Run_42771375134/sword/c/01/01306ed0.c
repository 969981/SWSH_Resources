/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01306ed0; name: FUN_01306ed0
 */


void FUN_01306ed0(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long local_178 [35];
  
  local_178[0x1e] = 0;
  local_178[0x1f] = 0;
  local_178[0x1c] = 0;
  local_178[0x1d] = 0;
  local_178[0x1a] = 0;
  local_178[0x1b] = 0;
  local_178[0x18] = 0;
  local_178[0x19] = 0;
  local_178[0x16] = 0;
  local_178[0x17] = 0;
  local_178[0x14] = 0;
  local_178[0x15] = 0;
  local_178[0x12] = 0;
  local_178[0x13] = 0;
  local_178[0x10] = 0;
  local_178[0x11] = 0;
  local_178[0xe] = 0;
  local_178[0xf] = 0;
  local_178[0xc] = 0;
  local_178[0xd] = 0;
  local_178[10] = 0;
  local_178[0xb] = 0;
  local_178[8] = 0;
  local_178[9] = 0;
  local_178[6] = 0;
  local_178[7] = 0;
  local_178[4] = 0;
  local_178[5] = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  local_178[0] = 0;
  local_178[1] = 0;
  lVar2 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0xe8);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar8) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01306f80;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01306f80:
  lVar2 = 0;
  do {
    lVar7 = *(long *)(*(long *)(param_1 + 0xf0) + lVar2);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)((long)local_178 + lVar2);
    *(long *)((long)local_178 + lVar2) = lVar7;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x100);
  do {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xdc));
  lVar2 = 8;
  lVar7 = 0;
  do {
    lVar3 = lVar7 + 1;
    if (local_178[lVar7] != 0) {
      lVar9 = lVar2;
      do {
        lVar5 = *(long *)((long)local_178 + lVar9);
        if (lVar5 != 0) {
          lVar4 = local_178[lVar7];
          if (lVar4 == 0) {
LAB_0130702c:
            plVar6 = (long *)(lVar5 + 0x48);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            if (lVar4 != 0) {
              bVar8 = false;
              goto LAB_01307064;
            }
            local_178[0x20] = lVar5;
            local_178[0x21] = lVar4;
LAB_01307088:
            lVar5 = local_178[0x20];
            (**(code **)(*(long *)(local_178[0x20] + 0x48) + 0x10))(plVar6);
            bVar8 = false;
          }
          else {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
            lVar5 = *(long *)((long)local_178 + lVar9);
            if (lVar5 != 0) goto LAB_0130702c;
            bVar8 = true;
LAB_01307064:
            local_178[0x21] = lVar4;
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
            local_178[0x20] = lVar5;
            if (!bVar8) {
              plVar6 = (long *)(lVar5 + 0x48);
              goto LAB_01307088;
            }
            bVar8 = true;
          }
          (*(code *)*param_2)(param_2 + 4,local_178 + 0x21,local_178 + 0x20);
          if (local_178[0x20] != 0) {
            (**(code **)(*(long *)(local_178[0x20] + 0x48) + 0x18))();
            local_178[0x20] = 0;
          }
          if (local_178[0x21] != 0) {
            (**(code **)(*(long *)(local_178[0x21] + 0x48) + 0x18))();
            local_178[0x21] = 0;
          }
          if (!bVar8) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          }
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          }
        }
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0x100);
    }
    lVar2 = lVar2 + 8;
    lVar7 = lVar3;
    if (lVar3 == 0x1f) {
      FUN_01306bb0(local_178);
      return;
    }
  } while( true );
}


