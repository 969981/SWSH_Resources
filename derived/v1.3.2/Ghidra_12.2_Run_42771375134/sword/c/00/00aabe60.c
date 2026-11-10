/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aabe60; name: FUN_00aabe60
 */


void FUN_00aabe60(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_1f0;
  undefined4 local_1e8 [2];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long lStack_1b8;
  undefined4 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
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
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  FUN_00ac8d10(param_1,0);
  if (param_5 == -0x340d631b7bddd9bb) {
    lVar5 = *(long *)(param_1[0x78] + 0x528);
    if (lVar5 == 0) {
      plVar4 = (long *)FUN_00c79e90(0,0x19);
      param_5 = *plVar4;
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar4 = (long *)FUN_00c79e90(lVar5,0x19);
      param_5 = *plVar4;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  local_78 = 0;
  local_70 = 0;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar5 == 0) {
    FUN_0101cb00(0,&local_78);
  }
  else {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0101cb00(lVar5,&local_78);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  puVar1 = PTR_DAT_02719748;
  uVar7 = *(undefined8 *)PTR_DAT_02719748;
  lVar5 = *(long *)(param_1[0x78] + 0x528);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))(&local_1f0,param_1);
  lVar2 = local_1f0;
  local_1f0 = 0;
  local_1e8[0] = 0;
  local_1b0 = 1;
  local_1a8 = lVar2;
  local_1e0 = param_2;
  uStack_1d8 = param_3;
  local_1d0 = param_4;
  uStack_1c8 = uVar7;
  local_1c0 = uVar7;
  lStack_1b8 = param_5;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_198 = local_70;
  local_180 = 0;
  uStack_178 = 0;
  local_1a0 = local_78;
  local_168 = *(undefined8 *)puVar1;
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
  FUN_00c79eb0(&local_80,lVar5,1,local_1e8);
  if (param_1[0x97] != 0) {
    (**(code **)(*(long *)(param_1[0x97] + 0x48) + 0x18))();
    param_1[0x97] = 0;
  }
  lVar3 = local_80;
  local_80 = 0;
  param_1[0x97] = lVar3;
  if (local_1a8 != 0) {
    (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
    local_1a8 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_1f0 != 0) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    local_1f0 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


