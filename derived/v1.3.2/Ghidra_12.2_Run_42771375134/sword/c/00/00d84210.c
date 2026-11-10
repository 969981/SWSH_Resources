/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d84210; name: FUN_00d84210
 */


void FUN_00d84210(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  undefined4 local_1d0 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined2 local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined4 local_76;
  undefined1 local_72;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR_DAT_02710848;
  FUN_00c58c00(&local_58,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  local_68 = 0;
  local_60 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x60);
  if (lVar4 == 0) {
    FUN_0101cb00(0,&local_68);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0101cb00(lVar4,&local_68);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (param_2 < 2) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)FUN_00c79e90(local_58,*(undefined4 *)(param_1 + 0x11c));
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))(&local_1d8);
    lVar4 = local_1d8;
    puVar1 = PTR_DAT_02719748;
    local_1d8 = 0;
    local_150 = *(undefined8 *)PTR_DAT_02719748;
    local_1d0[0] = 0;
    local_1a0 = *puVar2;
    local_170 = param_1 + 0x58;
    local_190 = lVar4;
    local_198 = 1;
    local_1c8 = uVar3;
    uStack_1c0 = local_150;
    local_1b8 = local_150;
    uStack_1b0 = local_150;
    local_1a8 = local_150;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      local_150 = *(undefined8 *)puVar1;
    }
    local_180 = local_60;
    local_188 = local_68;
    local_178 = 0;
    local_157 = 0;
    local_160 = 0;
    local_72 = 0;
    local_70 = 0;
    local_6c = 0;
    local_90 = 0;
    uStack_168 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_76 = 0x1010101;
    local_158 = 0;
    local_156 = 0x101;
    local_78 = 0;
    uStack_148 = local_150;
    local_140 = local_150;
    uStack_138 = local_150;
    local_130 = local_150;
    uStack_128 = local_150;
    local_120 = local_150;
    uStack_118 = local_150;
    local_110 = local_150;
    uStack_108 = local_150;
    local_100 = local_150;
    uStack_f8 = local_150;
    local_f0 = local_150;
    uStack_e8 = local_150;
    local_e0 = local_150;
    uStack_d8 = local_150;
    local_d0 = local_150;
    uStack_c8 = local_150;
    local_c0 = local_150;
    uStack_b8 = local_150;
    local_b0 = local_150;
    uStack_a8 = local_150;
    local_a0 = local_150;
    uStack_98 = local_150;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (local_1d8 != 0) {
      (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
      local_1d8 = 0;
    }
    lVar4 = local_58;
    local_6c = 1;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    FUN_00c79ec0(&local_1e0,lVar4,1,local_1d0);
    if (local_1e0 != 0) {
      (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
      local_1e0 = 0;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
  }
  if ((param_2 | 2) == 2) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)FUN_00c79e90(local_58,*(undefined4 *)(param_1 + 0x11c));
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))(&local_1d8);
    lVar4 = local_1d8;
    puVar1 = PTR_DAT_02719748;
    local_1d8 = 0;
    uVar3 = *(undefined8 *)PTR_DAT_02719748;
    local_1d0[0] = 0;
    local_1a0 = *puVar2;
    local_190 = lVar4;
    local_198 = 1;
    local_1c8 = uVar6;
    uStack_1c0 = uVar3;
    local_1b8 = uVar3;
    uStack_1b0 = uVar3;
    local_1a8 = uVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      uVar3 = *(undefined8 *)puVar1;
    }
    local_180 = local_60;
    local_188 = local_68;
    local_178 = 0;
    local_157 = 0;
    local_160 = 0;
    local_72 = 0;
    local_70 = 0;
    local_6c = 0;
    local_90 = 0;
    uStack_168 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_76 = 0x1010101;
    local_158 = 0;
    local_156 = 0x101;
    local_78 = 0;
    local_170 = param_1 + 0x58;
    local_150 = uVar3;
    uStack_148 = uVar3;
    local_140 = uVar3;
    uStack_138 = uVar3;
    local_130 = uVar3;
    uStack_128 = uVar3;
    local_120 = uVar3;
    uStack_118 = uVar3;
    local_110 = uVar3;
    uStack_108 = uVar3;
    local_100 = uVar3;
    uStack_f8 = uVar3;
    local_f0 = uVar3;
    uStack_e8 = uVar3;
    local_e0 = uVar3;
    uStack_d8 = uVar3;
    local_d0 = uVar3;
    uStack_c8 = uVar3;
    local_c0 = uVar3;
    uStack_b8 = uVar3;
    local_b0 = uVar3;
    uStack_a8 = uVar3;
    local_a0 = uVar3;
    uStack_98 = uVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (local_1d8 != 0) {
      (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
      local_1d8 = 0;
    }
    lVar4 = local_58;
    local_6c = 1;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    FUN_00c79ec0(&local_1e8,lVar4,1,local_1d0);
    if (local_1e8 != 0) {
      (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
      local_1e8 = 0;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


