/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6f2a0; name: FUN_00c6f2a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c6f2a0(long *param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long local_48;
  long local_40;
  undefined1 auStack_38 [8];
  
  if (5 < param_2) {
    return;
  }
  if (param_1[(long)param_2 + 0x2d] == 0) {
    return;
  }
  plVar1 = param_1 + (long)param_2 + 0x2d;
  (**(code **)(*param_1 + 0xd8))(&local_40,param_1);
  lVar9 = local_40;
  puVar5 = PTR_DAT_0271c1e8;
  if ((local_40 != 0) && (*(int *)(local_40 + 0x54) != 0)) {
    if ((local_40 == 0) || (*(int *)(local_40 + 0x54) == 0)) {
LAB_00c6f3e8:
      lVar12 = 0;
    }
    else {
      piVar2 = (int *)(local_40 + 0x54);
      puVar8 = PTR_DAT_0271c1f0;
      iVar10 = *(int *)(local_40 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar9 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar8 = PTR_DAT_0271c1f0;
            if (iVar6 != 0) {
              uVar7 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_0271c1f0 = uVar7;
              __cxa_guard_release(puVar5);
              puVar8 = PTR_DAT_0271c1f0;
            }
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00c6f3e8;
            if (plVar11 == (long *)puVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar2;
          if (iVar6 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x60);
            lVar12 = 0;
            if (lVar9 != 0) {
              lVar12 = lVar9 + -0x50;
            }
            goto LAB_00c6f3ec;
          }
          lVar12 = 0;
          iVar10 = iVar6;
          if (iVar6 == 0) goto LAB_00c6f3ec;
        }
        ClearExclusiveLocal();
        lVar12 = 0;
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00c6f3ec:
    (**(code **)(*(long *)*plVar1 + 0x98))(&local_48);
    FUN_01061270(lVar12,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
  }
  if (param_1[(long)param_2 + 0x33] == 0) goto LAB_00c6f580;
  (**(code **)(*(long *)(param_1[(long)param_2 + 0x33] + 0x48) + 0x18))();
  param_1[(long)param_2 + 0x33] = 0;
  (**(code **)(*(long *)*plVar1 + 0x98))(&local_48);
  lVar9 = local_48;
  puVar5 = PTR_DAT_02715078;
  if (local_48 == 0) {
LAB_00c6f548:
    FUN_00c74d40(0,auStack_38);
  }
  else {
    if (*(int *)(local_48 + 0x54) != 0) {
      piVar2 = (int *)(local_48 + 0x54);
      puVar8 = PTR_DAT_02715080;
      iVar10 = *(int *)(local_48 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar9 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar8 = PTR_DAT_02715080;
            if (iVar6 != 0) {
              uVar7 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar7;
              __cxa_guard_release(puVar5);
              puVar8 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00c6f548;
            if (plVar11 == (long *)puVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar2;
          if (iVar6 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(lVar9 + 0x60);
            lVar9 = 0;
            if (lVar12 != 0) {
              lVar9 = lVar12 + -0x50;
            }
            FUN_00c74d40(lVar9,auStack_38);
            if (lVar9 != 0) {
              (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
            }
            goto LAB_00c6f568;
          }
          iVar10 = iVar6;
          if (iVar6 == 0) goto LAB_00c6f548;
        }
        ClearExclusiveLocal();
        iVar10 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00c6f548;
    }
    FUN_00c74d40(0,auStack_38);
  }
LAB_00c6f568:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00c6f580:
  (**(code **)(*(long *)*plVar1 + 0x68))();
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


