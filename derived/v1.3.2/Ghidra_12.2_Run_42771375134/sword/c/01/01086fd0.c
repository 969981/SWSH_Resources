/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01086fd0; name: FUN_01086fd0
 */


void FUN_01086fd0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_1d0;
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined2 local_14e;
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
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined4 local_6e;
  undefined1 local_6a;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  
  local_60 = 0;
  local_58 = 0;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar3 == 0) {
    FUN_0101cb00(0,&local_60);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0101cb00(lVar3,&local_60);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar2 = (undefined8 *)FUN_00c79e90(*(undefined8 *)(param_1 + 0x60),0x1b);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_48);
  lVar3 = local_48;
  puVar1 = PTR_DAT_02719748;
  local_48 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x98);
  local_1c8[0] = 0;
  local_148 = *(undefined8 *)PTR_DAT_02719748;
  local_198 = *puVar2;
  local_190 = 1;
  local_188 = lVar3;
  local_1c0 = uVar5;
  uStack_1b8 = local_148;
  local_1b0 = local_148;
  uStack_1a8 = local_148;
  local_1a0 = local_148;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    local_148 = *(undefined8 *)puVar1;
  }
  local_178 = local_58;
  local_180 = local_60;
  local_170 = 0;
  local_14f = 0;
  local_158 = 0;
  local_6a = 0;
  local_68 = 0;
  local_64 = 0;
  local_88 = 0;
  uStack_160 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_6e = 0x1010101;
  local_150 = 0;
  local_14e = 0x101;
  local_70 = 0;
  uStack_140 = local_148;
  local_138 = local_148;
  uStack_130 = local_148;
  local_128 = local_148;
  uStack_120 = local_148;
  local_118 = local_148;
  uStack_110 = local_148;
  local_108 = local_148;
  uStack_100 = local_148;
  local_f8 = local_148;
  uStack_f0 = local_148;
  local_e8 = local_148;
  uStack_e0 = local_148;
  local_d8 = local_148;
  uStack_d0 = local_148;
  local_c8 = local_148;
  uStack_c0 = local_148;
  local_b8 = local_148;
  uStack_b0 = local_148;
  local_a8 = local_148;
  uStack_a0 = local_148;
  local_98 = local_148;
  uStack_90 = local_148;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_00c79ec0(&local_1d0,lVar3,1,local_1c8);
  if (local_1d0 != 0) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
    local_1d0 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
  }
  return;
}


