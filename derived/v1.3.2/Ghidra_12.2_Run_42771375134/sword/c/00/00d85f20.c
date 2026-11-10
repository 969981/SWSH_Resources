/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d85f20; name: FUN_00d85f20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d85f20(long *param_1,long param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar2 = local_28;
  if (param_3 == 2) {
    (**(code **)(**(long **)(param_2 + 0xf8) + 0x10))(&local_48);
    local_50 = local_48;
    local_48 = 0;
    FUN_00c7a400(&local_38,lVar2,&local_50);
    lVar2 = local_38;
    puVar5 = PTR_DAT_027150a8;
    if (local_38 == 0) {
      *param_1 = 0;
    }
    else {
      if (*(int *)(local_38 + 0x54) != 0) {
        piVar1 = (int *)(local_38 + 0x54);
        puVar9 = PTR_DAT_027150b0;
        iVar10 = *(int *)(local_38 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar2 + 0x58);
            if (((*puVar5 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_027150b0, iVar6 != 0)) {
              uVar7 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_027150b0 = uVar7;
              __cxa_guard_release(puVar5);
              puVar9 = PTR_DAT_027150b0;
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_00d861b8;
              if (plVar11 == (long *)puVar9) break;
              plVar11 = (long *)*plVar11;
            }
            iVar6 = *piVar1;
            if (iVar6 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar6;
            if (iVar6 == 0) goto LAB_00d861b8;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = *(long *)(lVar2 + 0x60);
            lVar2 = 0;
            if (lVar8 != 0) {
              lVar2 = lVar8 + -0x50;
            }
            *param_1 = lVar2;
            goto joined_r0x00d862b0;
          }
          iVar10 = iVar6;
        } while (iVar6 != 0);
      }
LAB_00d861b8:
      *param_1 = 0;
joined_r0x00d862b0:
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
    local_38 = 0;
    lVar2 = 0;
    lVar8 = local_40;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
      lVar2 = local_50;
      lVar8 = local_40;
    }
  }
  else {
    if (param_3 != 1) {
      *param_1 = 0;
      lVar2 = local_48;
      goto joined_r0x00d86250;
    }
    (**(code **)(**(long **)(param_2 + 0xf0) + 0x10))(&local_48);
    local_40 = local_48;
    local_48 = 0;
    FUN_00c7a400(&local_38,lVar2,&local_40);
    lVar2 = local_38;
    puVar5 = PTR_DAT_027150a8;
    if (local_38 == 0) {
      *param_1 = 0;
    }
    else {
      if (*(int *)(local_38 + 0x54) != 0) {
        piVar1 = (int *)(local_38 + 0x54);
        puVar9 = PTR_DAT_027150b0;
        iVar10 = *(int *)(local_38 + 0x54);
        do {
          while( true ) {
            plVar11 = *(long **)(lVar2 + 0x58);
            if (((*puVar5 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_027150b0, iVar6 != 0)) {
              uVar7 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_027150b0 = uVar7;
              __cxa_guard_release(puVar5);
              puVar9 = PTR_DAT_027150b0;
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_00d8607c;
              if (plVar11 == (long *)puVar9) break;
              plVar11 = (long *)*plVar11;
            }
            iVar6 = *piVar1;
            if (iVar6 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar6;
            if (iVar6 == 0) goto LAB_00d8607c;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = *(long *)(lVar2 + 0x60);
            lVar2 = 0;
            if (lVar8 != 0) {
              lVar2 = lVar8 + -0x50;
            }
            *param_1 = lVar2;
            goto joined_r0x00d86290;
          }
          iVar10 = iVar6;
        } while (iVar6 != 0);
      }
LAB_00d8607c:
      *param_1 = 0;
joined_r0x00d86290:
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
    local_38 = 0;
    lVar2 = local_50;
    lVar8 = 0;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
      lVar2 = local_50;
      lVar8 = local_40;
    }
  }
  local_40 = lVar8;
  local_50 = lVar2;
  lVar2 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
    lVar2 = local_48;
  }
joined_r0x00d86250:
  local_48 = lVar2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


