/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ea2e0; name: FUN_014ea2e0
 */


bool FUN_014ea2e0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_1b0 [32];
  undefined *local_190;
  undefined1 local_188 [16];
  undefined1 *local_178;
  undefined8 uStack_170;
  undefined *local_168;
  undefined1 local_160 [16];
  undefined1 *local_150;
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
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return false;
  }
  if (*(int *)(param_1 + 0x7c) == 1) {
    uVar6 = FUN_00ff0890(*(undefined8 *)(param_1 + 0x60));
    if ((uVar6 & 1) == 0) {
      return *(char *)(param_1 + 0x78) != '\0';
    }
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    local_38 = *(long *)(param_1 + 0x80);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    iVar2 = FUN_00ff3470(uVar7,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_00ff08c0(*(undefined8 *)(param_1 + 0x60));
    if (iVar2 == 0) {
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      uVar7 = FUN_0077d470(*(undefined8 *)(param_1 + 0x80));
      uVar3 = FUN_0077d490(*(undefined8 *)(param_1 + 0x80));
      FUN_0077dea0(&local_140,0x100,uVar7,uVar3);
      uVar7 = FUN_01208220();
      local_160[0] = 0;
      puVar1 = PTR_DAT_027167e8 + 0x10;
      local_150 = local_160;
      uStack_148 = 0x10;
      local_168 = puVar1;
      FUN_017d05f0(&local_168,uVar7,0xffffffffffffffff);
      local_178 = local_188;
      uStack_170 = 0x10;
      local_188[0] = 0;
      local_190 = puVar1;
      FUN_017d05f0(&local_190,&local_140,0xffffffffffffffff);
      FUN_0179ebf0(auStack_1b0,&local_168,&local_190);
      uVar7 = FUN_018449d0(auStack_1b0);
      *(undefined8 *)(param_1 + 0x70) = uVar7;
      *(undefined1 *)(param_1 + 0x68) = 1;
      local_190 = puVar1;
      FUN_017d0720(&local_190);
      local_168 = puVar1;
      FUN_017d0720(&local_168);
    }
  }
  else {
    if (*(int *)(param_1 + 0x7c) != 0) {
      return true;
    }
    lVar4 = FUN_00ff07b0(*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 0x60) = lVar4;
    lVar5 = FUN_00ff0930();
    if (lVar4 != lVar5) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      *(undefined1 *)(param_1 + 0x78) = 1;
      return true;
    }
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return false;
}


