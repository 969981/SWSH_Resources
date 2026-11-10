/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad8290; name: FUN_00ad8290
 */


void FUN_00ad8290(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_58;
  
  if (*(int *)(param_1 + 0x4d0) != 2) {
    return;
  }
  if (*(int *)(param_1 + 0x504) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x4c8) != 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x5a0);
  if (uVar1 == 0x10) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = FUN_00ad95d0(&local_1e8,
                       *(undefined8 *)(*(long *)(param_1 + 0x3c0) + (ulong)uVar1 * 0x20 + 0xb8));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x4c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  *(long *)(param_1 + 0x4c8) = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  puVar2 = PTR_DAT_02710848;
  local_1e8 = 0;
  local_1e0 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar7 == 0) {
    uVar5 = FUN_0101cb00(0,&local_1e8);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar5 = FUN_0101cb00(lVar7,&local_1e8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if ((uVar5 & 1) != 0) {
    local_78 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_01025970(&local_78,&local_1e8);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  local_58 = *(long *)(param_1 + 0x4c8);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_68 = param_1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  FUN_00a90a30(&local_58,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  puVar3 = PTR_DAT_02719748;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x3c0) + 0xb8);
  uVar9 = *(undefined8 *)PTR_DAT_02719748;
  lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar4 == 0) {
    puVar6 = (undefined8 *)FUN_00c79e90(0,0x19);
    uVar11 = *puVar6;
    lVar4 = *(long *)(*(long *)puVar2 + 0x60);
  }
  else {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    puVar6 = (undefined8 *)FUN_00c79e90(lVar4,0x19);
    uVar11 = *puVar6;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar4 = *(long *)(*(long *)puVar2 + 0x60);
  }
  if (lVar4 == 0) {
    local_70 = 0;
    local_78 = 0;
    FUN_0101cb00(0,&local_78);
    lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  else {
    local_70 = 0;
    local_78 = 0;
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0101cb00(lVar4,&local_78);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(**(long **)(param_1 + 0x4c8) + 0x10))(&local_1f0);
  lVar7 = local_1f0;
  uStack_1d8 = 0x68c3754f4bf8081a;
  local_1f0 = 0;
  local_1e8 = local_1e8 & 0xffffffff00000000;
  local_1b0 = 1;
  local_1d0 = 0x3f8fdc50380293a3;
  local_1a8 = lVar7;
  local_1e0 = uVar10;
  uStack_1c8 = uVar9;
  local_1c0 = uVar9;
  uStack_1b8 = uVar11;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_198 = local_70;
  local_180 = 0;
  uStack_178 = 0;
  local_1a0 = local_78;
  local_168 = *(undefined8 *)puVar3;
  local_190 = 0;
  local_188 = 0;
  local_170 = 1;
  local_8a = 0;
  local_88 = 0;
  local_84 = 0;
  local_a8 = 0;
  local_8c = 0x101;
  local_90 = 0x1010101;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_160 = local_168;
  local_158 = local_168;
  uStack_150 = local_168;
  local_148 = local_168;
  uStack_140 = local_168;
  local_138 = local_168;
  uStack_130 = local_168;
  local_128 = local_168;
  uStack_120 = local_168;
  local_118 = local_168;
  uStack_110 = local_168;
  local_108 = local_168;
  uStack_100 = local_168;
  local_f8 = local_168;
  uStack_f0 = local_168;
  local_e8 = local_168;
  uStack_e0 = local_168;
  local_d8 = local_168;
  uStack_d0 = local_168;
  local_c8 = local_168;
  uStack_c0 = local_168;
  local_b8 = local_168;
  uStack_b0 = local_168;
  FUN_00c79eb0(&local_80,lVar4,1,&local_1e8);
  if (*(long *)(param_1 + 0x518) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x518) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x518) = 0;
  }
  uVar9 = local_80;
  local_80 = 0;
  *(undefined8 *)(param_1 + 0x518) = uVar9;
  if (local_1a8 != 0) {
    (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
    local_1a8 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (local_1f0 != 0) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    local_1f0 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


