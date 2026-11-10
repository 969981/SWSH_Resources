/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cab0f0; name: FUN_00cab0f0
 */


void FUN_00cab0f0(undefined8 param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long local_1f0;
  undefined1 local_1e4 [4];
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  puVar3 = PTR_DAT_0271c258;
  if (param_4 != 0) {
    uVar4 = 0;
    plVar5 = param_3;
    do {
      if ((int)param_3[uVar4 * 2 + 1] == 0) {
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_90 = PTR_DAT_0271c248 + 0x10;
        local_68 = 0;
        local_88 = 3;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_d0 = PTR_DAT_0271c250 + 0x10;
        local_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_44[0] = 0;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_c8 = 4;
        puVar2 = PTR_DAT_0271c258 + 0x10;
        local_150 = 7;
        local_48[0] = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1d8 = 7;
        local_1e4[0] = 0;
        local_160 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_110 = 0;
        local_108 = 0;
        local_120 = 0;
        local_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_170 = 0;
        local_168 = 0;
        local_180 = 0;
        local_178 = 0;
        local_190 = 0;
        local_188 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_1b0 = 0;
        uStack_1a8 = 0;
        local_1e0 = puVar2;
        local_158 = puVar2;
        FUN_00cae9b0(param_1,*param_2,*(undefined4 *)(param_2 + 1),param_2 + 2,param_2 + 10,
                     &local_90,&local_d0,local_44,&local_158,local_48,&local_1e0,local_1e4);
        FUN_00cacde0(&local_1f0,param_1,1,&local_90,&local_d0,local_44[0],&local_158,local_48[0],
                     &local_1e0,local_1e4[0],1);
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          *plVar5 = 0;
        }
        *plVar5 = local_1f0;
        *(int *)(param_3 + uVar4 * 2 + 1) = 1;
        local_1e0 = puVar2;
        if (local_160 != 0) {
          (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
          local_160 = 0;
        }
        if (local_168 != 0) {
          (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
          local_168 = 0;
        }
        if (local_170 != 0) {
          (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
          local_170 = 0;
        }
        if (local_178 != 0) {
          (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
          local_178 = 0;
        }
        if (local_180 != 0) {
          (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
          local_180 = 0;
        }
        if (local_188 != 0) {
          (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
          local_188 = 0;
        }
        if (local_190 != 0) {
          (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
          local_190 = 0;
        }
        if (local_198 != 0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
          local_198 = 0;
        }
        if (local_1a0 != 0) {
          (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
          local_1a0 = 0;
        }
        puVar2 = PTR_DAT_0271c260;
        local_1e0 = PTR_DAT_0271c260 + 0x10;
        if (local_1c0 != 0) {
          (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
          local_1c0 = 0;
        }
        local_158 = puVar3 + 0x10;
        if (local_d8 != 0) {
          (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
          local_d8 = 0;
        }
        if (local_e0 != 0) {
          (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
          local_e0 = 0;
        }
        if (local_e8 != 0) {
          (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
          local_e8 = 0;
        }
        if (local_f0 != 0) {
          (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
          local_f0 = 0;
        }
        if (local_f8 != 0) {
          (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
          local_f8 = 0;
        }
        if (local_100 != 0) {
          (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
          local_100 = 0;
        }
        if (local_108 != 0) {
          (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
          local_108 = 0;
        }
        if (local_110 != 0) {
          (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
          local_110 = 0;
        }
        if (local_118 != 0) {
          (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
          local_118 = 0;
        }
        puVar3 = puVar2 + 0x10;
        local_158 = puVar3;
        if (local_138 != 0) {
          (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
          local_138 = 0;
        }
        local_d0 = puVar3;
        if (local_b0 != 0) {
          (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
          local_b0 = 0;
        }
        local_90 = puVar2 + 0x10;
        if (local_70 == 0) {
          return;
        }
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        return;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      plVar5 = plVar5 + 2;
    } while (uVar1 < param_4);
  }
  return;
}


