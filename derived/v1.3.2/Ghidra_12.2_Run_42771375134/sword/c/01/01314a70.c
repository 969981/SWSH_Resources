/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01314a70; name: FUN_01314a70
 */


/* WARNING: Removing unreachable block (ram,0x01314aec) */
/* WARNING: Removing unreachable block (ram,0x01314d20) */

undefined8 FUN_01314a70(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  FUN_012e8a50(&local_48);
  if (local_48 == 0) {
    return 0;
  }
  lVar9 = *(long *)(local_48 + 0x58);
  if (lVar9 != 0) {
    lVar5 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar9 + 0x4e0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x4d4));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01314b0c;
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
LAB_01314b0c:
    cVar3 = *(char *)(lVar9 + 0x4c8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x4d4));
    if (cVar3 != '\0') {
      if (param_2 == 1) {
        local_58 = param_1;
        if (param_1 != 0) {
          (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
        }
        uVar6 = FUN_012f18d0(&local_58);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if ((uVar6 & 1) != 0) goto LAB_01314cbc;
        uVar6 = FUN_012e8b00(param_1);
        if ((uVar6 & 1) != 0) {
          uVar6 = 0;
          lVar9 = *(long *)(local_48 + 0x58);
          while ((lVar9 != 0 && (uVar6 < *(ulong *)(lVar9 + 0x68)))) {
            FUN_012e8b60(*(undefined8 *)(lVar9 + uVar6 * 8 + 0x70));
            uVar6 = uVar6 + 1;
            lVar9 = *(long *)(local_48 + 0x58);
          }
        }
      }
      else if (param_2 == 2) {
        local_60 = param_1;
        if (param_1 != 0) {
          (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
        }
        uVar6 = FUN_012f3320(&local_60);
        if (local_60 != 0) {
          (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
          local_60 = 0;
        }
        if ((uVar6 & 1) != 0) goto LAB_01314cbc;
        uVar6 = FUN_012e8b00(param_1);
        if ((uVar6 & 1) != 0) {
          uVar6 = 0;
          lVar9 = *(long *)(local_48 + 0x58);
          while ((lVar9 != 0 && (uVar6 < *(ulong *)(lVar9 + 0x68)))) {
            local_70 = 0x240cb6698ff14b01;
            uStack_68 = 0;
            FUN_0130fad0(*(undefined8 *)(lVar9 + uVar6 * 8 + 0x70),&local_70,0);
            uVar6 = uVar6 + 1;
            lVar9 = *(long *)(local_48 + 0x58);
          }
        }
      }
      else {
        local_50 = param_1;
        if (param_1 != 0) {
          (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
        }
        uVar6 = FUN_012f3290(&local_50);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        if ((uVar6 & 1) != 0) {
LAB_01314cbc:
          uVar8 = 1;
          goto joined_r0x01314d94;
        }
        FUN_012e8a50(&local_70,param_1);
        lVar9 = local_70;
        lVar5 = *(long *)(local_70 + 0x58);
        if (lVar5 != 0) {
          lVar7 = nn::os::GetCurrentThread();
          plVar1 = (long *)(lVar5 + 0x4e0);
          do {
            if (*plVar1 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x4d4));
                while (*plVar1 == 0) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *plVar1 = lVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_01314d40;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_01314d40:
          *(undefined1 *)(lVar5 + 0x4c8) = 0;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = 0;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x4d4));
          lVar5 = *(long *)(lVar9 + 0x58);
          *(undefined8 *)(lVar9 + 0x58) = 0;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
        }
        if (local_70 != 0) {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x18))((long *)(local_70 + 0x48));
          local_70 = 0;
        }
      }
    }
  }
  uVar8 = 0;
joined_r0x01314d94:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar8;
}


