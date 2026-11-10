/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013093c0; name: FUN_013093c0
 */


void FUN_013093c0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long local_68;
  long local_60;
  long *local_58;
  
  lVar7 = FUN_00d3fd50(*param_2,&local_58);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar13 = *(long **)(param_1 + 0x340);
  plVar14 = *(long **)(param_1 + 0x348);
  if (plVar13 != plVar14) {
    do {
      if ((*plVar13 == 0) || (*(int *)(*plVar13 + 0x54) == 0)) {
        lVar15 = *(long *)(param_1 + 0x348);
        lVar12 = *(long *)(lVar15 + -8);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
          lVar15 = *(long *)(param_1 + 0x348);
        }
        lVar16 = *plVar13;
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
        }
        lVar8 = *(long *)(lVar15 + -8);
        *(long *)(lVar15 + -8) = lVar16;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        }
        lVar15 = *plVar13;
        *plVar13 = lVar12;
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
        }
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar14 != plVar13);
    plVar13 = *(long **)(param_1 + 0x348);
    if (*(long **)(param_1 + 0x340) != plVar13) {
      do {
        if (plVar13[-1] != 0) {
          if (*(int *)(plVar13[-1] + 0x54) != 0) break;
          plVar13 = *(long **)(param_1 + 0x348);
        }
        plVar13 = plVar13 + -1;
        if (*plVar13 != 0) {
          (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
          *plVar13 = 0;
        }
        *(long **)(param_1 + 0x348) = plVar13;
      } while (*(long **)(param_1 + 0x340) != plVar13);
    }
  }
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  uVar10 = *(undefined8 *)(param_1 + 8);
  lVar12 = *(long *)(param_1 + 0x68);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    iVar11 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar12 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00a87090();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_013095e0;
          if (plVar13 == (long *)puVar5) break;
          plVar13 = (long *)*plVar13;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar11) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          local_60 = 0;
          if (*(long *)(lVar12 + 0x60) != 0) {
            local_60 = *(long *)(lVar12 + 0x60) + -0x50;
          }
          goto LAB_013095e4;
        }
        iVar11 = iVar6;
        if (iVar6 == 0) goto LAB_013095e0;
      }
      ClearExclusiveLocal();
      iVar11 = iVar6;
    } while (iVar6 != 0);
  }
LAB_013095e0:
  local_60 = 0;
LAB_013095e4:
  local_58 = (long *)FUN_0130d650(&local_68,uVar10,&local_60,param_2);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x10))();
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  (**(code **)(*local_58 + 0x10))(&local_68);
  local_60 = local_68;
  local_68 = 0;
  plVar13 = *(long **)(param_1 + 0x348);
  if (plVar13 < *(long **)(param_1 + 0x350)) {
    uVar10 = *(undefined8 *)(param_1 + 0x358);
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    lVar12 = local_60;
    if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar10;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    local_60 = 0;
    *plVar13 = lVar12;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    *(long *)(param_1 + 0x348) = *(long *)(param_1 + 0x348) + 8;
  }
  else {
    FUN_0130d780(param_1 + 0x340,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_012e54f0(lVar7,&local_58);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
  }
  return;
}


