/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d67de0; name: FUN_00d67de0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d67de0(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *local_58;
  long local_48;
  
  lVar12 = param_1 + (ulong)(param_2 + 0xe2U & 0xff) * 8;
  if (*(long *)(lVar12 + 0x2c8) != 0) {
    return;
  }
  uVar6 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  puVar4 = PTR_DAT_0271ce40;
  lVar16 = *(long *)(param_1 + 0x198);
  if (lVar16 == 0) {
LAB_00d67f64:
    lVar13 = 0;
    iVar10 = _DAT_00000080;
joined_r0x00d6824c:
    if (iVar10 - 2U < 4) goto LAB_00d67f74;
LAB_00d67f20:
    if (iVar10 == 0) goto LAB_00d67f74;
    if (iVar10 != 1) goto LAB_00d67fa4;
    puVar17 = (undefined8 *)(*(long *)(lVar13 + 0x90) + 0x50);
    plVar11 = (long *)(**(code **)*puVar17)(puVar17);
    plVar7 = (long *)FUN_006f10c0();
    if (plVar11 != (long *)0x0) {
      do {
        if (plVar11 == plVar7) goto LAB_00d67fb8;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      goto LAB_00d67fa4;
    }
  }
  else {
    if (*(int *)(lVar16 + 0x54) != 0) {
      piVar1 = (int *)(lVar16 + 0x54);
      puVar9 = PTR_DAT_0271ce48;
      iVar10 = *(int *)(lVar16 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar16 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar9 = PTR_DAT_0271ce48, iVar5 != 0)) {
            uVar14 = FUN_01455eb0();
            *(undefined8 *)PTR_DAT_0271ce48 = uVar14;
            __cxa_guard_release(puVar4);
            puVar9 = PTR_DAT_0271ce48;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00d67f0c;
            if (plVar11 == (long *)puVar9) break;
            plVar11 = (long *)*plVar11;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar5;
          if (iVar5 == 0) goto LAB_00d67f64;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = 0;
          if (*(long *)(lVar16 + 0x60) != 0) {
            lVar13 = *(long *)(lVar16 + 0x60) + -0x50;
          }
          iVar10 = *(int *)(lVar13 + 0x80);
          goto joined_r0x00d6824c;
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
      goto LAB_00d67f64;
    }
LAB_00d67f0c:
    lVar13 = 0;
    iVar10 = _DAT_00000080;
    if (3 < _DAT_00000080 - 2U) goto LAB_00d67f20;
LAB_00d67f74:
    puVar17 = (undefined8 *)(*(long *)(lVar13 + 0x88) + 0x50);
    plVar11 = (long *)(**(code **)*puVar17)(puVar17);
    plVar7 = (long *)FUN_006f10c0();
    if (plVar11 != (long *)0x0) {
      do {
        if (plVar11 == plVar7) goto LAB_00d67fb8;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
LAB_00d67fa4:
      puVar17 = (undefined8 *)0x0;
      goto joined_r0x00d67fbc;
    }
  }
  puVar17 = (undefined8 *)0x0;
LAB_00d67fc0:
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
LAB_00d67fd0:
  uVar14 = *(undefined8 *)(param_1 + 0x1a0);
  plVar11 = (long *)(lVar12 + 0x2c8);
  local_58 = puVar17;
  if (puVar17 != (undefined8 *)0x0) {
    (**(code **)(puVar17[9] + 0x10))(puVar17 + 9);
  }
  FUN_01683be0(&local_48,uVar14,param_2,uVar6,&local_58,0);
  if (*plVar11 != 0) {
    (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
    *plVar11 = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *plVar11 = lVar12;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
    local_58 = (undefined8 *)0x0;
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  plVar7 = *(long **)(param_1 + 0x90);
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar7;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  lVar13 = (**(code **)(*plVar7 + 0x10))(plVar7,0x250,0x10);
  if (lVar13 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_014c5570(lVar13,*(undefined8 *)(param_1 + 0x90));
  *(long **)(lVar13 + 8) = plVar7;
  *(long *)(lVar13 + 0x10) = lVar13;
  *(undefined8 *)(lVar13 + 0x18) = 0x250;
  *(undefined8 *)(lVar13 + 0x20) = 0x10;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  puVar4 = PTR_DAT_02710798;
  lVar16 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  FUN_014c9030(lVar13,0,lVar16);
  lVar15 = *(long *)(*(long *)puVar4 + 0x208);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  FUN_014c91e0(lVar13,1,lVar15);
  lVar18 = *plVar11;
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar8 = *(long *)(lVar18 + 0xa8);
  *(long *)(lVar18 + 0xa8) = lVar13;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
LAB_00d67fb8:
  puVar17 = puVar17 + -10;
joined_r0x00d67fbc:
  if (lVar13 == 0) goto LAB_00d67fd0;
  goto LAB_00d67fc0;
}


