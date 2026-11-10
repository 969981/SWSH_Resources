/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acef80; name: FUN_00acef80
 */


void FUN_00acef80(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_1e0;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
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
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  (**(code **)(*param_1 + 0x178))();
  uVar4 = FUN_00aa5730(param_1[0x78] + 0x3d0);
  *(uint *)(param_1 + 0xb4) = uVar4;
  if (uVar4 == 0x10) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (0xf < uVar4) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = *(undefined8 *)(param_1[0x78] + (ulong)uVar4 * 0x20 + 0xb8);
  FUN_00ac8d10(param_1,0);
  *(undefined4 *)(param_1 + 0x79) = param_2;
  lVar7 = *(long *)(param_1[0x78] + 0x528);
  if (lVar7 == 0) {
    puVar5 = (undefined8 *)FUN_00c79e90(0,0x19);
    uVar9 = *puVar5;
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    puVar5 = (undefined8 *)FUN_00c79e90(lVar7,0x19);
    uVar9 = *puVar5;
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_70 = 0;
  local_68 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar7 == 0) {
    FUN_0101cb00(0,&local_70);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0101cb00(lVar7,&local_70);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  puVar1 = PTR_DAT_02719748;
  uVar10 = *(undefined8 *)PTR_DAT_02719748;
  lVar7 = *(long *)(param_1[0x78] + 0x528);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))(&local_1e0,param_1);
  lVar2 = local_1e0;
  local_1e0 = 0;
  local_1d8[0] = 0;
  uStack_1c8 = 0xac6b1274261ea10;
  local_1a0 = 1;
  local_198 = lVar2;
  local_1d0 = uVar6;
  local_1c0 = param_3;
  uStack_1b8 = uVar10;
  local_1b0 = uVar10;
  uStack_1a8 = uVar9;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_188 = local_68;
  local_170 = 0;
  uStack_168 = 0;
  local_190 = local_70;
  local_158 = *(undefined8 *)puVar1;
  local_180 = 0;
  local_178 = 0;
  local_160 = 1;
  local_7a = 0;
  local_78 = 0;
  local_74 = 0;
  local_98 = 0;
  local_7c = 0x101;
  local_80 = 0x1010101;
  local_90 = 0;
  uStack_88 = 0;
  uStack_150 = local_158;
  local_148 = local_158;
  uStack_140 = local_158;
  local_138 = local_158;
  uStack_130 = local_158;
  local_128 = local_158;
  uStack_120 = local_158;
  local_118 = local_158;
  uStack_110 = local_158;
  local_108 = local_158;
  uStack_100 = local_158;
  local_f8 = local_158;
  uStack_f0 = local_158;
  local_e8 = local_158;
  uStack_e0 = local_158;
  local_d8 = local_158;
  uStack_d0 = local_158;
  local_c8 = local_158;
  uStack_c0 = local_158;
  local_b8 = local_158;
  uStack_b0 = local_158;
  local_a8 = local_158;
  uStack_a0 = local_158;
  FUN_00c79eb0(&local_58,lVar7,1,local_1d8);
  if (param_1[0xa2] != 0) {
    (**(code **)(*(long *)(param_1[0xa2] + 0x48) + 0x18))();
    param_1[0xa2] = 0;
  }
  lVar3 = local_58;
  local_58 = 0;
  param_1[0xa2] = lVar3;
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    local_198 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_1e0 != 0) {
    (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
    local_1e0 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x9a) = 1;
  FUN_00aceb40(param_1,uVar6,1);
  return;
}


