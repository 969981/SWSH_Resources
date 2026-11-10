/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa9c50; name: FUN_00aa9c50
 */


void FUN_00aa9c50(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_1d8;
  undefined4 local_1d0 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
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
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  FUN_00ac8d10(param_1,0);
  lVar5 = *(long *)(param_1[0x78] + 0x528);
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)FUN_00c79e90(0,0x19);
    uVar7 = *puVar4;
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    puVar4 = (undefined8 *)FUN_00c79e90(lVar5,0x19);
    uVar7 = *puVar4;
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_60 = 0;
  local_58 = 0;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar5 == 0) {
    FUN_0101cb00(0,&local_60);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0101cb00(lVar5,&local_60);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  puVar1 = PTR_DAT_02719748;
  uVar8 = *(undefined8 *)PTR_DAT_02719748;
  lVar5 = *(long *)(param_1[0x78] + 0x528);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))(&local_1d8,param_1);
  lVar2 = local_1d8;
  local_1d8 = 0;
  uStack_1c0 = 0x68c3754f4bf8081a;
  local_1d0[0] = 0;
  local_198 = 1;
  local_1b8 = 0xf844f9ca817f2711;
  local_190 = lVar2;
  local_1c8 = param_2;
  uStack_1b0 = uVar8;
  local_1a8 = uVar8;
  uStack_1a0 = uVar7;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_180 = local_58;
  local_168 = 0;
  uStack_160 = 0;
  local_188 = local_60;
  local_150 = *(undefined8 *)puVar1;
  local_178 = 0;
  local_170 = 0;
  local_158 = 1;
  local_72 = 0;
  local_70 = 0;
  local_6c = 0;
  local_90 = 0;
  local_74 = 0x101;
  local_78 = 0x1010101;
  local_88 = 0;
  uStack_80 = 0;
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
  FUN_00c79eb0(&local_68,lVar5,1,local_1d0);
  if (param_1[0x98] != 0) {
    (**(code **)(*(long *)(param_1[0x98] + 0x48) + 0x18))();
    param_1[0x98] = 0;
  }
  lVar3 = local_68;
  local_68 = 0;
  param_1[0x98] = lVar3;
  if (local_190 != 0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_1d8 != 0) {
    (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
    local_1d8 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


