/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c7410; name: FUN_008c7410
 */


void FUN_008c7410(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  
  FUN_00ff86a0(&local_a0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar11 = *(long *)(local_a0 + 0x60);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x5f0) + 0x10);
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x10))();
  }
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_70 = 0;
  lStack_68 = 0;
  lVar8 = *(long *)(param_1 + 0x2b0);
  if ((lVar8 != 0) && ((**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(), local_a0 != 0)) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = lVar8;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar8 = lVar11;
  if (local_88 != 0) {
    plVar3 = (long *)(local_88 + 0x48);
    local_88 = lVar11;
    (**(code **)(*plVar3 + 0x18))();
    lVar8 = local_88;
  }
  local_88 = lVar8;
  lVar8 = *(long *)(param_1 + 0x678);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar1 = param_1 + 0x100;
  if (local_80 != 0) {
    plVar3 = (long *)(local_80 + 0x48);
    local_80 = lVar8;
    (**(code **)(*plVar3 + 0x18))();
    lVar8 = local_80;
  }
  local_80 = lVar8;
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar6 = *(long *)(param_1 + 0x4e8);
  if ((param_2 & 1) == 0) {
    lVar10 = 0;
    uVar9 = 0;
    lVar5 = param_1 + 0x830;
    puVar14 = &DAT_021452c8;
    lVar6 = lVar6 + 0x2620;
    puVar15 = &DAT_02145d48;
    do {
      local_78 = *(undefined1 *)(*(long *)(param_1 + 0x5f0) + uVar9 + 0x44);
      lVar4 = FUN_00ffda40(lVar1,puVar15);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (local_98 != 0) {
        plVar3 = (long *)(local_98 + 0x48);
        local_98 = lVar4;
        (**(code **)(*plVar3 + 0x18))();
        lVar4 = local_98;
      }
      local_98 = lVar4;
      (**(code **)(*plVar12 + 0x50))(plVar12,uVar9 & 0xffffffff);
      uVar2 = FUN_008787d0();
      FUN_016b2da0(local_98,~uVar2 & 1);
      uStack_a4 = (undefined4)uVar9;
      local_a8 = 0;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x818),&local_a8,~uVar2 & 1);
      lVar4 = (**(code **)(*plVar12 + 0x50))(plVar12,uVar9 & 0xffffffff);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (local_90 != 0) {
        plVar3 = (long *)(local_90 + 0x48);
        local_90 = lVar4;
        (**(code **)(*plVar3 + 0x18))();
        lVar4 = local_90;
      }
      local_90 = lVar4;
      local_70 = lVar8;
      lStack_68 = lVar6;
      FUN_0146b6d0(*(long *)(param_1 + 0x718) + lVar10,&local_a0,puVar14);
      lVar4 = FUN_00ffda40(lVar1,puVar15);
      (**(code **)(**(long **)(lVar4 + 0x98) + 0x28))(*(long **)(lVar4 + 0x98),lVar4 + 0x88,lVar5);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x3e0;
      puVar14 = puVar14 + 0x180;
      puVar15 = puVar15 + 0x10;
      lVar5 = lVar5 + 0x10;
      lVar10 = lVar10 + 0x218;
      lVar6 = lVar6 + 0x3d0;
    } while (uVar9 != 6);
    FUN_0146bf40(*(undefined8 *)(param_1 + 0x718),1);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x5f0);
    uVar2 = *(uint *)(lVar5 + 0x1c);
    uVar13 = (ulong)uVar2;
    uVar9 = 0;
    puVar14 = &DAT_02145d48;
    while( true ) {
      local_78 = *(undefined1 *)(lVar5 + uVar9 + 0x44);
      lVar5 = FUN_00ffda40(lVar1,puVar14);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (local_98 != 0) {
        plVar3 = (long *)(local_98 + 0x48);
        local_98 = lVar5;
        (**(code **)(*plVar3 + 0x18))();
        lVar5 = local_98;
      }
      local_98 = lVar5;
      if (uVar13 == uVar9) {
        lVar5 = (**(code **)(*plVar12 + 0x50))(plVar12,uVar13);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (local_90 != 0) {
          plVar3 = (long *)(local_90 + 0x48);
          local_90 = lVar5;
          (**(code **)(*plVar3 + 0x18))();
          lVar5 = local_90;
        }
        local_90 = lVar5;
        local_70 = lVar8 + uVar13 * 0x3e0;
        lStack_68 = lVar6 + uVar13 * 0x3d0 + 0x2620;
        FUN_0146b6d0(*(long *)(param_1 + 0x718) + uVar13 * 0x218,&local_a0,
                     &DAT_021452c8 + uVar13 * 0x180);
      }
      else {
        FUN_016b2da0(local_98,0);
        uStack_a4 = (undefined4)uVar9;
        local_a8 = 0;
        FUN_016b81d0(*(undefined8 *)(param_1 + 0x818),&local_a8,0);
      }
      if (uVar9 == 5) break;
      lVar5 = *(long *)(param_1 + 0x5f0);
      uVar9 = uVar9 + 1;
      puVar14 = puVar14 + 0x10;
    }
    lVar8 = FUN_00ffda40(lVar1,&DAT_02145d48 + uVar13 * 0x10);
    (**(code **)(**(long **)(lVar8 + 0x98) + 0x28))
              (*(long **)(lVar8 + 0x98),lVar8 + 0x88,param_1 + 0x830);
    if (uVar2 == 0) {
      FUN_0146bf40(*(undefined8 *)(param_1 + 0x718),1);
    }
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


