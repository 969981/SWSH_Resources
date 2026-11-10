/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ccde0; name: FUN_008ccde0
 */


void FUN_008ccde0(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
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
  
  plVar11 = *(long **)(*(long *)(param_1 + 0x5d8) + 0x10);
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x530);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(param_1 + 0x4c8);
  lVar5 = *(long *)(param_1 + 0x4e8);
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_70 = 0;
  lStack_68 = 0;
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x5e0);
  local_a0 = lVar4;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_88 = lVar7;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = 0;
  uVar8 = 0;
  puVar9 = &DAT_02145f38;
  puVar10 = &DAT_02145ed8;
  local_80 = lVar6;
  do {
    lVar2 = (**(code **)(*plVar11 + 0x50))(plVar11,uVar8 & 0xffffffff);
    uVar1 = FUN_008787d0();
    lVar7 = FUN_00ffda40(param_1 + 0x100,puVar10);
    FUN_016b2da0(lVar7,(uVar1 ^ 1) & 1);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (local_90 != 0) {
      plVar3 = (long *)(local_90 + 0x48);
      local_90 = lVar2;
      (**(code **)(*plVar3 + 0x18))();
      lVar2 = local_90;
    }
    local_90 = lVar2;
    local_78 = *(undefined1 *)(*(long *)(param_1 + 0x5d8) + uVar8 + 0x44);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar3 = (long *)(local_98 + 0x48);
      local_98 = lVar7;
      (**(code **)(*plVar3 + 0x18))();
      lVar7 = local_98;
    }
    local_98 = lVar7;
    uStack_a4 = (undefined4)uVar8;
    local_a8 = 0;
    local_70 = lVar12;
    lStack_68 = lVar5;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x600),&local_a8,(uVar1 ^ 1) & 1);
    FUN_0146b6d0(*(long *)(param_1 + 0x628) + lVar4,&local_a0,puVar9);
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 0x180;
    lVar5 = lVar5 + 0x3d0;
    lVar12 = lVar12 + 0x3e0;
    puVar10 = puVar10 + 0x10;
    lVar4 = lVar4 + 0x218;
  } while (uVar8 != 6);
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
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
  return;
}


