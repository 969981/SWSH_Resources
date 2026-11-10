/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c4f80; name: FUN_011c4f80
 */


void FUN_011c4f80(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  long local_60;
  long *local_58;
  long local_48;
  
  plVar7 = (long *)FUN_011c6b20(&local_60,*(undefined8 *)(param_1 + 8));
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  if (*(long *)(param_1 + 0x318) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x318) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  *(long **)(param_1 + 0x318) = plVar7;
  uVar10 = *(undefined8 *)PTR_DAT_027104b0;
  if (plVar7 == (long *)0x0) {
    local_60 = 0;
    local_58 = (long *)0x0;
  }
  else {
    plVar11 = plVar7 + 0xc;
    (**(code **)(*plVar7 + 0x10))(&local_48,plVar7);
    local_60 = local_48;
    local_58 = plVar11;
    if ((local_48 != 0) && ((**(code **)(*(long *)(local_48 + 0x48) + 0x10))(), local_48 != 0)) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  FUN_007b58c0(uVar10,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_60);
  lVar6 = local_60;
  if ((local_60 == 0) || (*(int *)(local_60 + 0x54) == 0)) {
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(local_60 + 0x54);
    iVar12 = *(int *)(local_60 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar6 + 0x58);
        plVar7 = (long *)FUN_00d8bd10();
        lVar8 = 0;
        if (plVar11 == (long *)0x0) goto LAB_011c5104;
        while (plVar11 != plVar7) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            lVar8 = 0;
            goto LAB_011c5104;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar6 + 0x60) != 0) {
            lVar8 = *(long *)(lVar6 + 0x60) + -0x50;
          }
          goto LAB_011c5104;
        }
        lVar8 = 0;
        iVar12 = iVar2;
        if (iVar2 == 0) goto LAB_011c5104;
      }
      ClearExclusiveLocal();
      lVar8 = 0;
      iVar12 = iVar2;
    } while (iVar2 != 0);
  }
LAB_011c5104:
  FUN_01531cd0(&local_60,lVar8,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar9 = local_60;
  local_60 = 0;
  *(long *)(param_1 + 0x10) = lVar9;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar12 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar7 = *(long **)(lVar6 + 0x58);
        lVar8 = FUN_00d8bd10();
        while( true ) {
          if (plVar7 == (long *)0x0) goto LAB_011c51d8;
          if (plVar7 == (long *)lVar8) break;
          plVar7 = (long *)*plVar7;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar12) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          if (*(long *)(lVar6 + 0x60) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar6 + 0x60) + -8) + 0x18))();
          }
          goto LAB_011c51d8;
        }
        iVar12 = iVar2;
        if (iVar2 == 0) goto LAB_011c51d8;
      }
      ClearExclusiveLocal();
      iVar12 = iVar2;
    } while (iVar2 != 0);
  }
LAB_011c51d8:
  puVar5 = PTR_DAT_02710860;
  plVar7 = *(long **)(param_1 + 8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,0xb8,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_00866220(lVar9,*(undefined8 *)(param_1 + 8),0,0,0);
    *(long **)(lVar9 + 8) = plVar7;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0xb8;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(long *)(param_1 + 0x18) = lVar9;
    lVar8 = FUN_011c6e30(&local_60,*(undefined8 *)(param_1 + 8));
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(long *)(param_1 + 0x20) = lVar8;
    lVar8 = FUN_011c7b60(&local_60,*(undefined8 *)(param_1 + 8));
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(long *)(param_1 + 0x28) = lVar8;
    lVar8 = FUN_011c8850(&local_60,*(undefined8 *)(param_1 + 8));
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    plVar7 = *(long **)(param_1 + 8);
    uVar10 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar7;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      local_60 = lVar8;
      FUN_011da3c0(uVar10,*(undefined8 *)(param_1 + 8),&local_60,0);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      lVar8 = *(long *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar10;
      if (lVar8 != 0) {
        FUN_012b2690(lVar8);
        (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                  (*(long **)(param_1 + 0x40),lVar8,*(undefined8 *)(param_1 + 0x48),
                   *(undefined8 *)(param_1 + 0x50));
      }
      *(long **)(param_1 + 0x40) = plVar7;
      *(undefined8 *)(param_1 + 0x48) = 0x80;
      plVar7 = *(long **)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x50) = 8;
      uVar10 = (**(code **)(*plVar7 + 0x10))(plVar7,0x1a8,8);
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (*(ulong *)(lVar8 + 0x80) < 0x10) {
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        FUN_011d4d10(uVar10,*(undefined8 *)(param_1 + 8));
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        lVar8 = *(long *)(param_1 + 0x1a0);
        *(undefined8 *)(param_1 + 0x1a0) = uVar10;
        if (lVar8 != 0) {
          FUN_012b25b0(param_1 + 0x1a8);
        }
        *(long **)(param_1 + 0x1a8) = plVar7;
        *(undefined8 *)(param_1 + 0x1b0) = 0x1a8;
        *(undefined8 *)(param_1 + 0x1b8) = 8;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


