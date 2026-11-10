/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db3320; name: FUN_00db3320
 */


undefined8 FUN_00db3320(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_1e8;
  long local_1e0;
  undefined4 local_1d8 [2];
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  long local_198;
  long local_190;
  long lStack_188;
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
  long local_70 [2];
  
  uVar2 = FUN_00dbcea0(param_1,param_2,param_3 & 1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    param_1[0x98] = param_2;
    if (*(char *)((long)param_1 + 0x4da) == '\0') {
      FUN_00c58c00(local_70,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
      lVar5 = param_1[0x99];
      lVar6 = param_1[0x9a];
      puVar3 = (undefined8 *)FUN_00c79e90(local_70[0],0x18);
      uVar4 = *puVar3;
      (**(code **)(*param_1 + 0x10))(&local_1e0,param_1);
      lVar1 = local_1e0;
      local_1e0 = 0;
      local_1d8[0] = (**(code **)(*param_1 + 0x228))(param_1);
      local_1a0 = 1;
      local_198 = lVar1;
      uStack_1b8 = 0;
      local_1b0 = 0;
      local_1d0 = param_2;
      lStack_1c8 = lVar5;
      local_1c0 = lVar6;
      uStack_1a8 = uVar4;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      local_190 = param_1[0x32];
      lStack_188 = param_1[0x33];
      local_180 = 0;
      local_160 = 1;
      local_170 = 0;
      uStack_168 = 0;
      local_158 = *(undefined8 *)PTR_DAT_02719748;
      local_90 = 0;
      uStack_88 = 0;
      local_178 = 0;
      local_7a = 0;
      local_78 = 0;
      local_74 = 0;
      local_98 = 0;
      local_7c = 0x101;
      local_80 = 0x1010101;
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
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
      if (local_1e0 != 0) {
        (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
        local_1e0 = 0;
      }
      local_7a = 1;
      (**(code **)(*param_1 + 0x230))(param_1,local_1d8);
      (**(code **)(*param_1 + 0x238))(param_1,local_1d8);
      (**(code **)(*param_1 + 0x240))(param_1,local_1d8);
      if ((param_3 & 1) != 0) {
        FUN_00c79eb0(&local_1e8,local_70[0],0,local_1d8);
        if (local_1e8 != 0) {
          (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
          local_1e8 = 0;
        }
      }
      if (local_198 != 0) {
        (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
        local_198 = 0;
      }
      if (local_70[0] != 0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


