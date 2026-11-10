/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00702020; name: FUN_00702020
 */


void FUN_00702020(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long local_80 [3];
  long local_68;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x120);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x114));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00702090;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00702090:
  FUN_00700800(local_80,param_2);
  puVar6 = PTR_DAT_02715890;
  puVar5 = PTR_DAT_02715888;
  plVar14 = *(long **)(param_1 + 0xb0);
  plVar13 = *(long **)(param_1 + 0xb8);
  if (plVar13 != plVar14) {
    do {
      lVar8 = *plVar14;
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x54) != 0) {
          piVar2 = (int *)(lVar8 + 0x54);
          iVar12 = *(int *)(lVar8 + 0x54);
          do {
            while( true ) {
              plVar11 = *(long **)(lVar8 + 0x58);
              lVar15 = local_80[0];
              if ((*puVar5 & 1) == 0) {
                iVar7 = __cxa_guard_acquire(puVar5);
                lVar15 = local_80[0];
                if (iVar7 != 0) {
                  uVar9 = FUN_00702ff0();
                  *(undefined8 *)puVar6 = uVar9;
                  __cxa_guard_release(puVar5);
                  lVar15 = local_80[0];
                }
              }
              while( true ) {
                local_80[0] = lVar15;
                if (plVar11 == (long *)0x0) goto LAB_007021c0;
                if (plVar11 == (long *)puVar6) break;
                plVar11 = (long *)*plVar11;
              }
              iVar7 = *piVar2;
              if (iVar7 != iVar12) break;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar8 = *(long *)(lVar8 + 0x60);
                if (lVar8 != 0) {
                  lVar10 = *(long *)(lVar8 + 0xe8);
                  if (*(long *)(lVar8 + 0x100) != 0) {
                    plVar11 = (long *)(*(long *)(lVar8 + 0x100) + 0x48);
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                    lVar15 = local_80[0];
                    (**(code **)(*plVar11 + 0x18))(plVar11);
                  }
                  (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
                  if (lVar10 == lVar15) goto LAB_007021d0;
                }
                goto LAB_007021c0;
              }
              iVar12 = iVar7;
              if (iVar7 == 0) goto LAB_007021c0;
            }
            ClearExclusiveLocal();
            iVar12 = iVar7;
          } while (iVar7 != 0);
        }
      }
LAB_007021c0:
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar13);
    plVar14 = plVar13;
LAB_007021d0:
    plVar13 = *(long **)(param_1 + 0xb8);
  }
  puVar6 = PTR_DAT_02715890;
  puVar5 = PTR_DAT_02715888;
  if (((plVar13 != plVar14) && (lVar8 = *plVar14, lVar8 != 0)) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar2 = (int *)(lVar8 + 0x54);
    iVar12 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar8 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_00702ff0();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_007022a8;
          if (plVar14 == (long *)puVar6) break;
          plVar14 = (long *)*plVar14;
        }
        iVar7 = *piVar2;
        if (iVar7 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + -0x50) + 0x78))(lVar8 + -0x50,param_2);
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
          }
          goto LAB_007022a8;
        }
        iVar12 = iVar7;
        if (iVar7 == 0) goto LAB_007022a8;
      }
      ClearExclusiveLocal();
      iVar12 = iVar7;
    } while (iVar7 != 0);
  }
LAB_007022a8:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x114));
  return;
}


