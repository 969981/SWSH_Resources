/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01470ee0; name: FUN_01470ee0
 */


void FUN_01470ee0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined1 local_78;
  long local_70;
  long local_68;
  
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_70 = 0;
  local_68 = 0;
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_a0 = lVar3;
  FUN_00ff86a0(&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),1);
  lVar3 = *(long *)(local_a8 + 0x60);
  if ((lVar3 != 0) && ((**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(), local_88 != 0)) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  local_88 = lVar3;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x530);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)(param_1 + 0x4c8);
  lVar10 = *(long *)(param_1 + 0x4e8);
  lVar7 = 0;
  uVar4 = 0;
  puVar5 = &DAT_0216d4f8;
  puVar6 = &DAT_0216d378;
  lVar9 = lVar8;
  lVar11 = lVar10;
  local_80 = lVar3;
  do {
    lVar3 = FUN_00ffda40(param_1 + 0x100,puVar6);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar1 = (long *)(local_98 + 0x48);
      local_98 = lVar3;
      (**(code **)(*plVar1 + 0x18))();
      lVar3 = local_98;
    }
    local_98 = lVar3;
    (**(code **)(**(long **)(param_1 + 0x5d8) + 0x50))
              (*(long **)(param_1 + 0x5d8),uVar4 & 0xffffffff);
    uVar2 = FUN_008787d0();
    if ((uVar2 & 1) != 0) {
      FUN_016b2da0(local_98,0);
      local_a8 = uVar4 << 0x20;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x600),&local_a8,0);
    }
    lVar3 = (**(code **)(**(long **)(param_1 + 0x5d8) + 0x50))
                      (*(long **)(param_1 + 0x5d8),uVar4 & 0xffffffff);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (local_90 != 0) {
      plVar1 = (long *)(local_90 + 0x48);
      local_90 = lVar3;
      (**(code **)(*plVar1 + 0x18))();
      lVar3 = local_90;
    }
    local_90 = lVar3;
    local_70 = lVar9;
    local_68 = lVar11;
    FUN_0146b6d0(*(long *)(param_1 + 0x5e0) + lVar7,&local_a0,puVar5);
    uVar4 = uVar4 + 1;
    lVar9 = lVar9 + 0x3e0;
    lVar11 = lVar11 + 0x3d0;
    puVar5 = puVar5 + 0x180;
    puVar6 = puVar6 + 0x40;
    lVar7 = lVar7 + 0x218;
  } while (uVar4 != 6);
  local_70 = lVar8 + 0x1740;
  local_68 = lVar10 + 0x16e0;
  FUN_0146b6d0(*(long *)(param_1 + 0x5e0) + 0xc90,&local_a0,&DAT_0216ddf8);
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
  }
  return;
}


