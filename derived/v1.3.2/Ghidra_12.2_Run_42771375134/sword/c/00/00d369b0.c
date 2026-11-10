/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d369b0; name: FUN_00d369b0
 */


void FUN_00d369b0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *local_50;
  long local_48;
  
  if (*(long *)(param_2 + 0x90) == 0) {
    local_48 = 0;
  }
  else {
    FUN_00d1a020(&local_48);
  }
  lVar14 = param_2 + 0x60;
  puVar7 = (undefined8 *)FUN_00d11ca0(local_48 + 0xf8,lVar14);
  uVar15 = *puVar7;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_00d1bc50(&local_50,uVar15);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x48))(&local_48);
    lVar14 = local_48;
    puVar5 = PTR_DAT_02719758;
    puVar4 = PTR_DAT_02719750;
    if (local_48 == 0) goto LAB_00d36fe0;
    if (*(int *)(local_48 + 0x54) != 0) {
      piVar1 = (int *)(local_48 + 0x54);
      iVar12 = *(int *)(local_48 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar14 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar15 = FUN_00706e40();
            *(undefined8 *)puVar5 = uVar15;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00d36b00;
            if (plVar13 == (long *)puVar5) break;
            plVar13 = (long *)*plVar13;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar12) break;
          ClearExclusiveLocal();
          iVar12 = iVar6;
          if (iVar6 == 0) goto LAB_00d36b00;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar14 + 0x60);
          lVar14 = 0;
          if (lVar11 != 0) {
            lVar14 = lVar11 + -0x50;
          }
          *param_1 = lVar14;
          goto joined_r0x00d37060;
        }
        iVar12 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00d36b00:
    *param_1 = 0;
joined_r0x00d37060:
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
      goto joined_r0x00d36b20;
    }
    goto LAB_00d37018;
  }
  if (*(long *)(param_2 + 0x90) == 0) {
    local_48 = 0;
  }
  else {
    FUN_00d1a020(&local_48);
  }
  plVar13 = (long *)FUN_00d11ca0(local_48 + 0xf8,lVar14);
  lVar11 = *plVar13;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (*(long *)(lVar11 + 0x108) != 0) {
    plVar13 = *(long **)(lVar11 + 0x100);
    do {
      plVar9 = plVar13 + 1;
      uVar8 = FUN_00d2e340(*plVar13 + 0x50);
      if ((uVar8 & 1) != 0) {
        plVar13 = (long *)*plVar13;
        plVar9 = plVar13 + 10;
        uVar8 = FUN_00d2e340(plVar9);
        if ((uVar8 & 1) != 0) {
          (**(code **)(plVar13[9] + 0x10))();
          (**(code **)(*plVar13 + 0x48))(&local_48);
          lVar14 = local_48;
          puVar5 = PTR_DAT_02719758;
          puVar4 = PTR_DAT_02719750;
          if (local_48 == 0) goto LAB_00d36ff0;
          if (*(int *)(local_48 + 0x54) == 0) goto LAB_00d36e24;
          piVar1 = (int *)(local_48 + 0x54);
          iVar12 = *(int *)(local_48 + 0x54);
          goto LAB_00d36c04;
        }
        break;
      }
      plVar13 = plVar9;
    } while (plVar9 != (long *)(*(long *)(lVar11 + 0x100) + *(long *)(lVar11 + 0x108) * 8));
  }
  if (*(long *)(param_2 + 0x90) == 0) {
    local_48 = 0;
  }
  else {
    FUN_00d1a020(&local_48);
  }
  plVar13 = (long *)FUN_00d11ca0(local_48 + 0xf8,lVar14);
  lVar11 = *plVar13;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (*(long *)(lVar11 + 0x108) != 0) {
    plVar13 = *(long **)(lVar11 + 0x100);
    do {
      plVar9 = plVar13 + 1;
      uVar8 = FUN_00d2e430(*plVar13 + 0x50);
      if ((uVar8 & 1) != 0) {
        plVar13 = (long *)*plVar13;
        plVar9 = plVar13 + 10;
        uVar8 = FUN_00d2e430(plVar9);
        if ((uVar8 & 1) != 0) {
          (**(code **)(plVar13[9] + 0x10))();
          (**(code **)(*plVar13 + 0x48))(&local_48);
          lVar14 = local_48;
          puVar5 = PTR_DAT_02719758;
          puVar4 = PTR_DAT_02719750;
          if (local_48 == 0) goto LAB_00d36ff0;
          if (*(int *)(local_48 + 0x54) == 0) goto LAB_00d36e24;
          piVar1 = (int *)(local_48 + 0x54);
          iVar12 = *(int *)(local_48 + 0x54);
          goto LAB_00d36d84;
        }
        break;
      }
      plVar13 = plVar9;
    } while (plVar9 != (long *)(*(long *)(lVar11 + 0x100) + *(long *)(lVar11 + 0x108) * 8));
  }
  if (*(long *)(param_2 + 0x90) == 0) {
    local_48 = 0;
  }
  else {
    FUN_00d1a020(&local_48);
  }
  plVar13 = (long *)FUN_00d11ca0(local_48 + 0xf8,lVar14);
  lVar14 = *plVar13;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (*(long *)(lVar14 + 0x108) != 0) {
    plVar9 = *(long **)(lVar14 + 0x100);
    do {
      plVar13 = plVar9 + 1;
      uVar8 = FUN_00d37cb0(*plVar9 + 0x50);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)*plVar9;
        uVar8 = FUN_00d37cb0(plVar9 + 10);
        if ((uVar8 & 1) != 0) {
          (**(code **)(plVar9[9] + 0x10))();
          (**(code **)(*plVar9 + 0x48))(&local_48);
          lVar14 = local_48;
          puVar5 = PTR_DAT_02719758;
          puVar4 = PTR_DAT_02719750;
          if (local_48 == 0) {
            *param_1 = 0;
            goto LAB_00d37008;
          }
          if (*(int *)(local_48 + 0x54) == 0) goto LAB_00d36fc0;
          piVar1 = (int *)(local_48 + 0x54);
          iVar12 = *(int *)(local_48 + 0x54);
          goto LAB_00d36f20;
        }
        break;
      }
      plVar9 = plVar13;
    } while (plVar13 != (long *)(*(long *)(lVar14 + 0x100) + *(long *)(lVar14 + 0x108) * 8));
  }
LAB_00d36fe0:
  *param_1 = 0;
joined_r0x00d36b20:
  if (local_50 == (long *)0x0) {
    return;
  }
  goto LAB_00d37020;
LAB_00d36c04:
  do {
    plVar13 = *(long **)(lVar14 + 0x58);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar15 = FUN_00706e40();
      *(undefined8 *)puVar5 = uVar15;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00d36e24;
      if (plVar13 == (long *)puVar5) break;
      plVar13 = (long *)*plVar13;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_00d37068;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar6;
  } while (iVar6 != 0);
  goto LAB_00d36e24;
LAB_00d36ff0:
  *param_1 = 0;
  goto LAB_00d36ff4;
LAB_00d37068:
  lVar11 = 0;
  if (*(long *)(lVar14 + 0x60) != 0) {
    lVar11 = *(long *)(lVar14 + 0x60) + -0x50;
  }
  *param_1 = lVar11;
  if (local_48 == 0) goto LAB_00d36ff4;
  goto LAB_00d36e30;
LAB_00d36f20:
  do {
    plVar13 = *(long **)(lVar14 + 0x58);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar15 = FUN_00706e40();
      *(undefined8 *)puVar5 = uVar15;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00d36fc0;
      if (plVar13 == (long *)puVar5) break;
      plVar13 = (long *)*plVar13;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar11 = *(long *)(lVar14 + 0x60);
        lVar14 = 0;
        if (lVar11 != 0) {
          lVar14 = lVar11 + -0x50;
        }
        *param_1 = lVar14;
        goto joined_r0x00d370a0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar6;
  } while (iVar6 != 0);
LAB_00d36fc0:
  *param_1 = 0;
joined_r0x00d370a0:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00d37008:
  plVar9 = plVar9 + 9;
  pcVar10 = *(code **)(*plVar9 + 0x18);
  goto LAB_00d37014;
LAB_00d36d84:
  do {
    plVar13 = *(long **)(lVar14 + 0x58);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar15 = FUN_00706e40();
      *(undefined8 *)puVar5 = uVar15;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) goto LAB_00d36e24;
      if (plVar13 == (long *)puVar5) break;
      plVar13 = (long *)*plVar13;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_00d37068;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar6;
  } while (iVar6 != 0);
LAB_00d36e24:
  *param_1 = 0;
  if (local_48 != 0) {
LAB_00d36e30:
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00d36ff4:
  plVar9 = plVar9 + -1;
  pcVar10 = *(code **)(*plVar9 + 0x18);
LAB_00d37014:
  (*pcVar10)(plVar9);
LAB_00d37018:
  if (local_50 != (long *)0x0) {
LAB_00d37020:
    (**(code **)(local_50[9] + 0x18))();
  }
  return;
}


