/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013099c0; name: FUN_013099c0
 */


undefined8 FUN_013099c0(long param_1,undefined8 *param_2)

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
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3e0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3d4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01309a30;
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
LAB_01309a30:
  lVar8 = FUN_00d3fd50(*param_2,&local_78);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar18 = *(long **)(param_1 + 0x378);
  plVar17 = *(long **)(param_1 + 0x370);
  if (1 < (ulong)((long)plVar18 - (long)plVar17 >> 3)) {
    for (; plVar17 != plVar18; plVar17 = plVar17 + 1) {
      if (*plVar17 == 0) {
        local_68 = 0;
        lVar20 = *plVar17;
        *plVar17 = 0;
joined_r0x01309b40:
        if (lVar20 != 0) {
          (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))();
        }
        break;
      }
      FUN_0130d990(&local_68);
      if (local_68 == 0) {
LAB_01309b4c:
        lVar20 = *plVar17;
        *plVar17 = 0;
        goto joined_r0x01309b40;
      }
      FUN_0130e4e0(&local_78);
      uVar9 = FUN_00d3fd50(local_78,&local_80);
      if (local_78 != (long *)0x0) {
        (**(code **)(local_78[9] + 0x18))();
        local_78 = (long *)0x0;
      }
      uVar10 = FUN_012e8410(uVar9);
      if (((uVar10 & 1) == 0) && (uVar10 = FUN_012e4910(uVar9), (uVar10 & 1) == 0)) {
        FUN_012e55f0(uVar9);
        local_78 = (long *)0x5d4ac55afe52e7c7;
        uStack_70 = 0;
        FUN_0130fad0(uVar9,&local_78,0);
        iVar7 = 0;
        iVar16 = 0;
      }
      else {
        iVar7 = 3;
        iVar16 = 3;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
        iVar16 = iVar7;
      }
      if (iVar16 != 3) {
        if (iVar16 == 0) goto LAB_01309b4c;
        break;
      }
    }
  }
  plVar13 = *(long **)(param_1 + 0x378);
  plVar18 = *(long **)(param_1 + 0x370);
  plVar17 = (long *)(param_1 + 0x370);
  if (plVar13 != plVar18) {
    uVar10 = 0;
    uVar19 = 0;
    do {
      lVar20 = plVar18[uVar10];
      if (lVar20 != 0) {
        plVar18 = (long *)(lVar20 + 0x48);
        (**(code **)(*plVar18 + 0x10))(plVar18);
        if (*(int *)(lVar20 + 0x54) != 0) {
          lVar15 = *plVar17;
          uVar14 = uVar19 + 1;
          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(plVar18);
          lVar11 = *(long *)(lVar15 + uVar19 * 8);
          *(long *)(lVar15 + uVar19 * 8) = lVar20;
          uVar19 = uVar14;
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18);
        plVar13 = *(long **)(param_1 + 0x378);
        plVar18 = *(long **)(param_1 + 0x370);
      }
      uVar10 = uVar10 + 1;
      uVar14 = (long)plVar13 - (long)plVar18 >> 3;
    } while (uVar10 < uVar14);
    while (uVar19 < uVar14) {
      plVar13 = plVar13 + -1;
      if (*plVar13 != 0) {
        (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
        *plVar13 = 0;
        plVar18 = (long *)*plVar17;
      }
      *(long **)(param_1 + 0x378) = plVar13;
      uVar14 = (long)plVar13 - (long)plVar18 >> 3;
    }
    if (1 < uVar14) {
      uVar9 = 0;
      goto LAB_01309e68;
    }
  }
  puVar6 = PTR_DAT_02715080;
  puVar5 = PTR_DAT_02715078;
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar20 = *(long *)(param_1 + 0x68);
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0x54) != 0)) {
    piVar2 = (int *)(lVar20 + 0x54);
    iVar16 = *(int *)(lVar20 + 0x54);
    do {
      while( true ) {
        plVar18 = *(long **)(lVar20 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar12 = FUN_00a87090();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_01309d34;
          if (plVar18 == (long *)puVar6) break;
          plVar18 = (long *)*plVar18;
        }
        iVar7 = *piVar2;
        if (iVar7 != iVar16) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          local_68 = 0;
          if (*(long *)(lVar20 + 0x60) != 0) {
            local_68 = *(long *)(lVar20 + 0x60) + -0x50;
          }
          goto LAB_01309d38;
        }
        iVar16 = iVar7;
        if (iVar7 == 0) goto LAB_01309d34;
      }
      ClearExclusiveLocal();
      iVar16 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01309d34:
  local_68 = 0;
LAB_01309d38:
  local_78 = (long *)FUN_0130d650(&local_80,uVar9,&local_68,param_2);
  if (local_78 != (long *)0x0) {
    (**(code **)(local_78[9] + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  (**(code **)(*local_78 + 0x10))(&local_80);
  local_68 = local_80;
  local_80 = 0;
  plVar18 = *(long **)(param_1 + 0x378);
  if (plVar18 < *(long **)(param_1 + 0x380)) {
    uVar9 = *(undefined8 *)(param_1 + 0x388);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    lVar20 = local_68;
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar9;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    local_68 = 0;
    *plVar18 = lVar20;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(param_1 + 0x378) = *(long *)(param_1 + 0x378) + 8;
  }
  else {
    FUN_0130d780(plVar17,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  FUN_012e5590(lVar8,&local_78);
  if (local_78 != (long *)0x0) {
    (**(code **)(local_78[9] + 0x18))();
    local_78 = (long *)0x0;
  }
  uVar9 = 1;
LAB_01309e68:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3d4));
  return uVar9;
}


