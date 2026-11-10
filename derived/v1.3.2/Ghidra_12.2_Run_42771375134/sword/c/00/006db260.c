/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006db260; name: FUN_006db260
 */


/* WARNING: Removing unreachable block (ram,0x006db3cc) */
/* WARNING: Removing unreachable block (ram,0x006db41c) */
/* WARNING: Removing unreachable block (ram,0x006db558) */
/* WARNING: Removing unreachable block (ram,0x006db508) */

void FUN_006db260(long param_1,long param_2,long param_3)

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
LAB_006db37c:
    lVar9 = 0;
    if (param_2 == 0) goto LAB_006db348;
LAB_006db384:
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
              if (cVar2 == '\0') goto LAB_006db43c;
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
LAB_006db43c:
      FUN_006d1640(lVar11,*(undefined8 *)(param_2 + 0x170),0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_006db458;
    }
LAB_006db468:
    if (lVar9 != param_3) goto joined_r0x006db470;
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
            if (cVar2 == '\0') goto LAB_006db528;
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
LAB_006db528:
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
            if (plVar12 == (long *)0x0) goto LAB_006db33c;
            if (plVar12 == (long *)puVar5) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar6;
          if (iVar6 == 0) goto LAB_006db37c;
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
          if (lVar9 == param_2) goto LAB_006db348;
          goto LAB_006db384;
        }
        iVar8 = iVar6;
      } while (iVar6 != 0);
      goto LAB_006db37c;
    }
LAB_006db33c:
    lVar9 = 0;
    if (param_2 != 0) goto LAB_006db384;
LAB_006db348:
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
            if (cVar2 == '\0') goto LAB_006db3ec;
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
LAB_006db3ec:
    FUN_006d1640(lVar11,0,*(undefined8 *)(param_3 + 0x170));
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_006db458:
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x14c));
    if (lVar9 != param_2) goto LAB_006db468;
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
            if (cVar2 == '\0') goto LAB_006db578;
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
LAB_006db578:
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
joined_r0x006db470:
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006db494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return;
}


