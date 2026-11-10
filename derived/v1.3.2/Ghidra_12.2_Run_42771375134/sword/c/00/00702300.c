/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00702300; name: FUN_00702300
 */


void FUN_00702300(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
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
          if (cVar3 == '\0') goto LAB_00702370;
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
LAB_00702370:
  puVar6 = PTR_DAT_02715940;
  puVar5 = PTR_DAT_02715938;
  puVar13 = (undefined8 *)(param_1 + 0xe0);
  plVar15 = (long *)*puVar13;
  plVar16 = *(long **)(param_1 + 0xe8);
  if (plVar16 != plVar15) {
LAB_00702394:
    do {
      lVar8 = *plVar15;
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
        piVar2 = (int *)(lVar8 + 0x54);
        iVar11 = *(int *)(lVar8 + 0x54);
        do {
          while( true ) {
            plVar12 = *(long **)(lVar8 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar14 = FUN_00702f00();
              *(undefined8 *)puVar6 = uVar14;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_007024b8;
              if (plVar12 == (long *)puVar6) break;
              plVar12 = (long *)*plVar12;
            }
            iVar7 = *piVar2;
            if (iVar7 == iVar11) break;
            ClearExclusiveLocal();
            iVar11 = iVar7;
            if (iVar7 == 0) goto LAB_007024b8;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              if ((param_2 == 0) || (*(uint *)(lVar8 + 0x74) <= *(uint *)(param_2 + 0xc4))) {
                plVar15 = plVar15 + 1;
              }
              else {
                lVar9 = *(long *)(param_2 + 0x58);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                local_68 = lVar9;
                plVar15 = (long *)FUN_00702660(puVar13,plVar15,&local_68);
                if (local_68 != 0) {
                  (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                  local_68 = 0;
                }
                plVar16 = *(long **)(param_1 + 0xe8);
                param_2 = 0;
              }
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
              if (plVar16 != plVar15) goto LAB_00702394;
              goto LAB_0070256c;
            }
            break;
          }
          iVar11 = iVar7;
        } while (iVar7 != 0);
      }
LAB_007024b8:
      plVar10 = *(long **)(param_1 + 0xe8);
      plVar12 = plVar15 + 1;
      if (plVar12 == plVar10) {
        plVar16 = plVar15;
LAB_00702518:
        do {
          plVar10 = plVar12 + -1;
          if (*plVar10 != 0) {
            (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
            plVar12[-1] = 0;
          }
          plVar12 = plVar10;
        } while (plVar16 != plVar10);
      }
      else {
        plVar12 = plVar15;
        do {
          if (*plVar12 != 0) {
            (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
            *plVar12 = 0;
          }
          plVar16 = plVar12 + 1;
          lVar8 = *plVar16;
          *plVar16 = 0;
          *plVar12 = lVar8;
          plVar12 = plVar16;
        } while (plVar10 + -1 != plVar16);
        plVar12 = *(long **)(param_1 + 0xe8);
        if (plVar12 != plVar16) goto LAB_00702518;
      }
      *(long **)(param_1 + 0xe8) = plVar16;
    } while (plVar16 != plVar15);
  }
LAB_0070256c:
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x58);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    plVar15 = *(long **)(param_1 + 0xe8);
    local_68 = lVar8;
    if (plVar15 < *(long **)(param_1 + 0xf0)) {
      uVar14 = *(undefined8 *)(param_1 + 0xf8);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar8 = local_68;
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      local_68 = 0;
      *plVar15 = lVar8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 8;
    }
    else {
      FUN_00706a30(puVar13,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
    }
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


