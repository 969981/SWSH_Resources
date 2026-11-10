/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c812a0; name: FUN_00c812a0
 */


void FUN_00c812a0(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0271c368;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[5] = 0;
  lVar2 = *(long *)PTR_DAT_0271bfa0;
  local_d0 = *(undefined8 *)(lVar2 + 8);
  local_c8 = *(undefined8 *)(lVar2 + 0x28);
  local_c0 = *(undefined8 *)(lVar2 + 0x48);
  local_b8 = *(undefined8 *)(lVar2 + 0x68);
  local_b0 = *(undefined8 *)(lVar2 + 0x88);
  local_a8 = *(undefined8 *)(lVar2 + 0xa8);
  local_a0 = *(undefined8 *)(lVar2 + 200);
  local_98 = *(undefined8 *)(lVar2 + 0xe8);
  local_90 = *(undefined8 *)(lVar2 + 0x108);
  local_88 = *(undefined8 *)(lVar2 + 0x128);
  local_80 = *(undefined8 *)(lVar2 + 0x148);
  local_78 = *(undefined8 *)(lVar2 + 0x168);
  local_70 = *(undefined8 *)(lVar2 + 0x188);
  local_68 = *(undefined8 *)(lVar2 + 0x1a8);
  local_60 = *(undefined8 *)(lVar2 + 0x1c8);
  local_58 = *(undefined8 *)(lVar2 + 0x1e8);
  local_50 = *(undefined8 *)(lVar2 + 0x208);
  local_48 = *(undefined8 *)(lVar2 + 0x228);
  local_40 = *(undefined8 *)(lVar2 + 0x248);
  uStack_38 = *(undefined8 *)(lVar2 + 0x268);
  lVar2 = *(long *)PTR_DAT_0271bf90;
  local_170 = *(undefined8 *)(lVar2 + 8);
  local_168 = *(undefined8 *)(lVar2 + 0x28);
  local_160 = *(undefined8 *)(lVar2 + 0x48);
  local_158 = *(undefined8 *)(lVar2 + 0x68);
  local_150 = *(undefined8 *)(lVar2 + 0x88);
  local_148 = *(undefined8 *)(lVar2 + 0xa8);
  local_140 = *(undefined8 *)(lVar2 + 200);
  local_138 = *(undefined8 *)(lVar2 + 0xe8);
  local_130 = *(undefined8 *)(lVar2 + 0x108);
  local_128 = *(undefined8 *)(lVar2 + 0x128);
  local_120 = *(undefined8 *)(lVar2 + 0x148);
  local_118 = *(undefined8 *)(lVar2 + 0x168);
  local_110 = *(undefined8 *)(lVar2 + 0x188);
  local_108 = *(undefined8 *)(lVar2 + 0x1a8);
  local_100 = *(undefined8 *)(lVar2 + 0x1c8);
  local_f8 = *(undefined8 *)(lVar2 + 0x1e8);
  local_f0 = *(undefined8 *)(lVar2 + 0x208);
  local_e8 = *(undefined8 *)(lVar2 + 0x228);
  local_e0 = *(undefined8 *)(lVar2 + 0x248);
  local_d8 = *(undefined8 *)(lVar2 + 0x268);
  lVar2 = *(long *)PTR_DAT_0271bf80;
  local_1f0 = *(undefined8 *)(lVar2 + 8);
  local_1e8 = *(undefined8 *)(lVar2 + 0x28);
  local_1e0 = *(undefined8 *)(lVar2 + 0x48);
  local_1d8 = *(undefined8 *)(lVar2 + 0x68);
  local_1d0 = *(undefined8 *)(lVar2 + 0x88);
  local_1c8 = *(undefined8 *)(lVar2 + 0xa8);
  local_1c0 = *(undefined8 *)(lVar2 + 200);
  local_1b8 = *(undefined8 *)(lVar2 + 0xe8);
  local_1b0 = *(undefined8 *)(lVar2 + 0x108);
  local_1a8 = *(undefined8 *)(lVar2 + 0x128);
  local_1a0 = *(undefined8 *)(lVar2 + 0x148);
  local_198 = *(undefined8 *)(lVar2 + 0x168);
  local_190 = *(undefined8 *)(lVar2 + 0x188);
  local_188 = *(undefined8 *)(lVar2 + 0x1a8);
  local_180 = *(undefined8 *)(lVar2 + 0x1c8);
  uStack_178 = *(undefined8 *)(lVar2 + 0x1e8);
  local_1f8 = *param_3;
  if (local_1f8 != 0) {
    (**(code **)(*(long *)(local_1f8 + 0x48) + 0x10))();
  }
  FUN_00c815a0(param_2,&local_1f8,&local_d0,&local_170,&local_1f0,param_1 + 1,param_1 + 5);
  if (local_1f8 != 0) {
    (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
  }
  return;
}


