/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01314eb0; name: FUN_01314eb0
 */


/* WARNING: Removing unreachable block (ram,0x01314f2c) */

undefined8 FUN_01314eb0(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long local_58;
  long local_50;
  long local_48;
  
  FUN_012e8a50(&local_48);
  if (local_48 == 0) {
    return 0;
  }
  lVar8 = *(long *)(local_48 + 0x58);
  if (lVar8 != 0) {
    lVar5 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar8 + 0x4e0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x4d4));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01314f4c;
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
LAB_01314f4c:
    cVar3 = *(char *)(lVar8 + 0x4c8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x4d4));
    if (cVar3 != '\0') {
      if (param_2 == 0) {
        local_50 = param_1;
        if (param_1 != 0) {
          (**(code **)(*(long *)(param_1 + 0x48) + 0x10))((long *)(param_1 + 0x48));
        }
        uVar6 = FUN_012f12d0(&local_50);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        if ((uVar6 & 1) != 0) goto LAB_01315048;
        uVar6 = 0;
        lVar8 = *(long *)(local_48 + 0x58);
        while ((lVar8 != 0 && (uVar6 < *(ulong *)(lVar8 + 0x68)))) {
          FUN_013100e0(*(undefined8 *)(lVar8 + uVar6 * 8 + 0x70),0x3df2fa22079fe024);
          uVar6 = uVar6 + 1;
          lVar8 = *(long *)(local_48 + 0x58);
        }
      }
      else {
        local_58 = param_1;
        if (param_1 != 0) {
          (**(code **)(*(long *)(param_1 + 0x48) + 0x10))((long *)(param_1 + 0x48));
        }
        uVar6 = FUN_012f1340(&local_58);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if ((uVar6 & 1) != 0) {
LAB_01315048:
          uVar7 = 1;
          goto joined_r0x013150b8;
        }
        uVar6 = 0;
        lVar8 = *(long *)(local_48 + 0x58);
        while ((lVar8 != 0 && (uVar6 < *(ulong *)(lVar8 + 0x68)))) {
          FUN_013100e0(*(undefined8 *)(lVar8 + uVar6 * 8 + 0x70),0xe435a5234f9656ed);
          uVar6 = uVar6 + 1;
          lVar8 = *(long *)(local_48 + 0x58);
        }
      }
    }
  }
  uVar7 = 0;
joined_r0x013150b8:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar7;
}


