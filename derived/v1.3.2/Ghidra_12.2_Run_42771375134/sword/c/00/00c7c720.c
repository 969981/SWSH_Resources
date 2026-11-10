/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7c720; name: FUN_00c7c720
 */


void FUN_00c7c720(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long local_68;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x6c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c7c794;
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
LAB_00c7c794:
  *param_1 = 0;
  puVar5 = PTR_DAT_0271c220;
  plVar14 = (long *)(*(long *)(param_2 + 0x28) + 8);
  for (plVar15 = (long *)*plVar14; plVar14 != plVar15; plVar15 = (long *)*plVar15) {
    plVar12 = *(long **)(plVar15[2] + 0x78);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    (**(code **)(*plVar12 + 0x10))(&local_68,plVar12);
    lVar7 = local_68;
    local_68 = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
      plVar12 = (long *)0x0;
    }
    else {
      piVar2 = (int *)(lVar7 + 0x54);
      iVar11 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          puVar13 = *(undefined8 **)(lVar7 + 0x58);
          if (((*PTR_DAT_0271c218 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_0271c218), iVar6 != 0)) {
            uVar9 = FUN_00c72b60();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(PTR_DAT_0271c218);
          }
          plVar12 = (long *)0x0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_00c7c8f8;
          while (puVar13 != (undefined8 *)puVar5) {
            puVar13 = (undefined8 *)*puVar13;
            if (puVar13 == (undefined8 *)0x0) {
              plVar12 = (long *)0x0;
              goto LAB_00c7c8f8;
            }
          }
          iVar6 = *piVar2;
          if (iVar6 != iVar11) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar7 + 0x60) != 0) {
              plVar12 = (long *)(*(long *)(lVar7 + 0x60) + -0x50);
            }
            goto LAB_00c7c8f8;
          }
          plVar12 = (long *)0x0;
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_00c7c8f8;
        }
        ClearExclusiveLocal();
        plVar12 = (long *)0x0;
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c7c8f8:
    (**(code **)(*plVar12 + 0x98))(&local_68,plVar12);
    lVar8 = local_68;
    lVar10 = *param_3;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    if (lVar10 == lVar8) {
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar8 = *param_1;
      *param_1 = lVar7;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (bVar4) break;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x6c));
  return;
}


