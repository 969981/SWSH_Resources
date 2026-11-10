/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aceb40; name: FUN_00aceb40
 */


void FUN_00aceb40(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
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
  long local_200;
  ulong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  long local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x3c0) + 0x1f30) == '\0') {
    return;
  }
  lVar4 = FUN_00ad95d0(&local_1f8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x590) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x590) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x590) = 0;
  }
  *(long *)(param_1 + 0x590) = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  puVar2 = PTR_DAT_02710848;
  local_1f8 = 0;
  local_1f0 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar7 == 0) {
    uVar5 = FUN_0101cb00(0,&local_1f8);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar5 = FUN_0101cb00(lVar7,&local_1f8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  lVar7 = local_88;
  if ((uVar5 & 1) != 0) {
    local_88 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_01025970(&local_88,&local_1f8);
    lVar7 = 0;
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
      lVar7 = local_88;
    }
  }
  local_88 = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  local_70[0] = *(long *)(param_1 + 0x590);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
  }
  local_78 = param_1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  FUN_00a90a30(local_70,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  puVar3 = PTR_DAT_02719748;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x3c0) + 0xb8);
  uVar9 = *(undefined8 *)PTR_DAT_02719748;
  lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  uVar1 = 0xfab9e0bc5eb53c61;
  if (param_3 != 1) {
    uVar1 = 0xfab9c7bc5eb511e6;
  }
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
    local_80 = 0;
    local_88 = 0;
    FUN_0101cb00(0,&local_88);
    lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  else {
    local_80 = 0;
    local_88 = 0;
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0101cb00(lVar4,&local_88);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar4 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(**(long **)(param_1 + 0x590) + 0x10))(&local_200);
  lVar7 = local_200;
  local_200 = 0;
  local_1f8 = local_1f8 & 0xffffffff00000000;
  local_1c0 = 1;
  local_1b8 = lVar7;
  uStack_1e8 = 0x68c3754f4bf8081a;
  local_1f0 = uVar10;
  local_1e0 = uVar1;
  uStack_1d8 = uVar9;
  local_1d0 = uVar9;
  uStack_1c8 = uVar11;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_1a8 = local_80;
  local_190 = 0;
  uStack_188 = 0;
  local_1b0 = local_88;
  local_178 = *(undefined8 *)puVar3;
  local_1a0 = 0;
  local_198 = 0;
  local_180 = 1;
  local_9a = 0;
  local_98 = 0;
  local_94 = 0;
  local_b8 = 0;
  local_9c = 0x101;
  local_a0 = 0x1010101;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_170 = local_178;
  local_168 = local_178;
  uStack_160 = local_178;
  local_158 = local_178;
  uStack_150 = local_178;
  local_148 = local_178;
  uStack_140 = local_178;
  local_138 = local_178;
  uStack_130 = local_178;
  local_128 = local_178;
  uStack_120 = local_178;
  local_118 = local_178;
  uStack_110 = local_178;
  local_108 = local_178;
  uStack_100 = local_178;
  local_f8 = local_178;
  uStack_f0 = local_178;
  local_e8 = local_178;
  uStack_e0 = local_178;
  local_d8 = local_178;
  uStack_d0 = local_178;
  local_c8 = local_178;
  uStack_c0 = local_178;
  FUN_00c79eb0(&local_90,lVar4,1,&local_1f8);
  if (*(long *)(param_1 + 0x598) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x598) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x598) = 0;
  }
  uVar1 = local_90;
  local_90 = 0;
  *(undefined8 *)(param_1 + 0x598) = uVar1;
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
    local_200 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


