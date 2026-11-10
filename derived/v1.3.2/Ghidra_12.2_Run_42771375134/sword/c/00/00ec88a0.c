/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec88a0; name: FUN_00ec88a0
 */


undefined8 FUN_00ec88a0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long local_c0;
  long local_b8;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined2 local_98;
  long local_90;
  long local_88;
  undefined4 local_80;
  long local_7c;
  char *pcStack_74;
  undefined8 local_6c;
  long lStack_64;
  undefined2 local_5c;
  long local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_38;
  
  (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_90);
  lVar5 = local_90;
  if ((local_90 == 0) || (*(int *)(local_90 + 0x54) == 0)) {
    lVar9 = 0;
  }
  else {
    piVar1 = (int *)(local_90 + 0x54);
    iVar12 = *(int *)(local_90 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar5 + 0x58);
        plVar6 = (long *)FUN_00d8bd10();
        lVar9 = 0;
        if (plVar8 == (long *)0x0) goto LAB_00ec8950;
        while (plVar8 != plVar6) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            lVar9 = 0;
            goto LAB_00ec8950;
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
          lVar9 = 0;
          if (*(long *)(lVar5 + 0x60) != 0) {
            lVar9 = *(long *)(lVar5 + 0x60) + -0x50;
          }
          goto LAB_00ec8950;
        }
        lVar9 = 0;
        iVar12 = iVar2;
        if (iVar2 == 0) goto LAB_00ec8950;
      }
      ClearExclusiveLocal();
      lVar9 = 0;
      iVar12 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00ec8950:
  lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar10 == 0) {
    local_38 = 0;
    uVar7 = FUN_01531f80(lVar9);
  }
  else {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    FUN_01127680(&local_38,lVar10);
    uVar7 = FUN_01531f80(lVar9);
  }
  if ((uVar7 & 1) == 0) {
    uVar11 = 0;
  }
  else if (*(long *)(local_38 + 0x68) == 0) {
    local_80 = 0;
    local_90 = 0;
    local_88 = 0;
    FUN_0161e3c0(&local_7c);
    local_4c = 0;
    local_44 = 0;
    local_50 = 0;
    local_58 = 0;
    FUN_01531cd0(&local_b8,lVar9,*(undefined8 *)(param_1 + 8));
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    }
    local_90 = local_b8;
    FUN_01531e00(&local_b8,lVar9,*(undefined8 *)(param_1 + 8));
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    }
    local_88 = local_b8;
    local_80 = 1;
    FUN_01531f00(&local_b8,lVar9,*(undefined8 *)(param_1 + 8));
    pcStack_74 = local_b0;
    local_7c = local_b8;
    local_5c = local_98;
    local_b8 = 0x2d329dd9170feaaf;
    local_b0 = "Play_UI_common_decide";
    local_6c = local_a8;
    lStack_64 = local_a0;
    local_a8 = 0x15;
    local_a0 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_b8);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    FUN_0161e520(&local_c0,*(undefined8 *)PTR_DAT_02710848,&local_90);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar11;
}


