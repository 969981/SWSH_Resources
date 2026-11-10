/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6ca70; name: FUN_00d6ca70
 */


/* WARNING: Removing unreachable block (ram,0x00d6cbdc) */
/* WARNING: Removing unreachable block (ram,0x00d6cc2c) */
/* WARNING: Removing unreachable block (ram,0x00d6cd68) */
/* WARNING: Removing unreachable block (ram,0x00d6cd18) */

void FUN_00d6ca70(long param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  lVar10 = *(long *)(param_1 + 0x68);
  if (lVar10 == 0) {
LAB_00d6cb8c:
    lVar9 = 0;
    if (param_2 == 0) goto LAB_00d6cb58;
LAB_00d6cb94:
    if (lVar9 == param_3) {
      lVar11 = *(long *)(param_3 + 0x170);
      lVar10 = nn::os::GetCurrentThread();
      plVar12 = (long *)(lVar11 + 0x158);
      do {
        if (*plVar12 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x14c));
            while (*plVar12 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar10;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00d6cc4c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00d6cc4c:
      FUN_006d1640(lVar11,*(undefined8 *)(param_2 + 0x170),0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_00d6cc68;
    }
LAB_00d6cc78:
    if (lVar9 != param_3) goto joined_r0x00d6cc80;
    lVar10 = *(long *)(param_3 + 0x178);
    lVar11 = nn::os::GetCurrentThread();
    plVar12 = (long *)(lVar10 + 0x158);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x14c));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00d6cd38;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00d6cd38:
    FUN_006d1640(lVar10,*(undefined8 *)(param_2 + 0x178),0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*(int *)(lVar10 + 0x54) != 0) {
      piVar1 = (int *)(lVar10 + 0x54);
      iVar8 = *(int *)(lVar10 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar10 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar7 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar7;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00d6cb4c;
            if (plVar12 == (long *)puVar5) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar6;
          if (iVar6 == 0) goto LAB_00d6cb8c;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = 0;
          if (*(long *)(lVar10 + 0x60) != 0) {
            lVar9 = *(long *)(lVar10 + 0x60) + -0x50;
          }
          if (lVar9 == param_2) goto LAB_00d6cb58;
          goto LAB_00d6cb94;
        }
        iVar8 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00d6cb8c;
    }
LAB_00d6cb4c:
    lVar9 = 0;
    if (param_2 != 0) goto LAB_00d6cb94;
LAB_00d6cb58:
    lVar11 = *(long *)(param_2 + 0x170);
    lVar10 = nn::os::GetCurrentThread();
    plVar12 = (long *)(lVar11 + 0x158);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x14c));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar10;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00d6cbfc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00d6cbfc:
    FUN_006d1640(lVar11,0,*(undefined8 *)(param_3 + 0x170));
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00d6cc68:
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x14c));
    if (lVar9 != param_2) goto LAB_00d6cc78;
    lVar10 = *(long *)(param_2 + 0x178);
    lVar11 = nn::os::GetCurrentThread();
    plVar12 = (long *)(lVar10 + 0x158);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x14c));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00d6cd88;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00d6cd88:
    FUN_006d1640(lVar10,0,*(undefined8 *)(param_3 + 0x178));
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x14c));
joined_r0x00d6cc80:
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d6cca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return;
}


