/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079bad0; name: FUN_0079bad0
 */


bool FUN_0079bad0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c4;
  long local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined1 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  ulong local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined1 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    plVar2 = (long *)*(long *)(param_1 + 0xe0);
    while (plVar2 != (long *)0x0) {
      lVar9 = *plVar2;
      if (plVar2[3] != 0) {
        (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
        plVar2[3] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))(*(long **)(param_1 + 0xe8),plVar2,0x20,8);
      plVar2 = (long *)lVar9;
    }
    uVar8 = *(ulong *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (uVar8 != 0) {
      uVar4 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar5 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar5) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar5 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar5 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar5 + 0x18) = 0;
        } while (uVar8 - uVar4 != lVar9);
      }
      if (uVar4 != 0) {
        lVar9 = lVar9 << 3;
        lVar5 = -uVar4;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar9) = 0;
          lVar9 = lVar9 + 8;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    plVar2 = (long *)*(long *)(param_1 + 0x138);
    while (plVar2 != (long *)0x0) {
      lVar9 = *plVar2;
      if (plVar2[3] != 0) {
        (**(code **)(*(long *)(plVar2[3] + 0x48) + 0x18))();
        plVar2[3] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x140) + 0x18))(*(long **)(param_1 + 0x140),plVar2,0x20,8);
      plVar2 = (long *)lVar9;
    }
    uVar8 = *(ulong *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (uVar8 != 0) {
      uVar4 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar5 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar5) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar5 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar5 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar5 + 0x18) = 0;
        } while (uVar8 - uVar4 != lVar9);
      }
      if (uVar4 != 0) {
        lVar9 = lVar9 << 3;
        lVar5 = -uVar4;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x110) + lVar9) = 0;
          lVar9 = lVar9 + 8;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0x300000003;
  local_48 = 0;
  local_a0 = *(undefined8 *)PTR_DAT_027155e8;
  local_98 = PTR_FUN_027165a0;
  puStack_90 = PTR_LAB_027165a8;
  local_88 = PTR_LAB_027165b0;
  puStack_80 = PTR_LAB_027165b8;
  uStack_58 = *(undefined8 *)(param_2 + 8);
  local_50 = *(undefined8 *)(param_2 + 0x10);
  local_1d0 = 1;
  local_188 = 1;
  uStack_180 = 0;
  local_178 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  local_150 = 0xffffffffffffffff;
  uStack_148 = 0xffffffffffffffff;
  local_168 = 0xffffffffffffffff;
  local_160 = 0xffffffffffffffff;
  uStack_158 = 0xffffffffffffffff;
  local_1f8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1a4 = 0;
  local_1ac = 0;
  local_1b4 = 0;
  local_1c4 = 0;
  local_18c = 0;
  local_1f4 = 0;
  local_11c = 0;
  local_114 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_1cc = 0x1ffffffff;
  local_1a0 = 0x3e800000;
  local_198 = 0x101;
  local_194 = 0x3e80000000000008;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_140 = 0xffffffffffffffff;
  uStack_138 = 0xffffffff00000000;
  local_fc = 0x80000000;
  local_130 = 0x3f4000003f59999a;
  local_128 = 0x3f80000000000000;
  local_120 = 0x3f800000;
  local_e4 = 0x100;
  local_e0 = 0x40;
  local_cc = 0;
  local_d4 = 0;
  local_c4 = 0;
  local_bc = 0x80000000;
  iVar3 = *(int *)(*(long *)PTR_DAT_02710910 + 0x85bc);
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)(param_1 + 0x7c);
    local_1bc = (ulong)*(uint *)(param_1 + 0x84) << 0x20;
    puVar7 = (undefined4 *)(param_1 + 0x80);
  }
  else if (iVar3 == 2) {
    puVar6 = (undefined4 *)(param_1 + 0x88);
    local_1bc = (ulong)*(uint *)(param_1 + 0x90) << 0x20;
    puVar7 = (undefined4 *)(param_1 + 0x8c);
  }
  else {
    if (iVar3 != 1) {
      return false;
    }
    puVar6 = (undefined4 *)(param_1 + 0x70);
    local_1bc = (ulong)*(uint *)(param_1 + 0x78) << 0x20;
    puVar7 = (undefined4 *)(param_1 + 0x74);
  }
  uVar1 = 0x18070000;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    uVar1 = 0x18870000;
  }
  if (*(char *)(param_1 + 0xa9) != '\0') {
    uVar1 = uVar1 | 0x400;
  }
  if (*(char *)(param_1 + 0xaa) != '\0') {
    uVar1 = uVar1 | 0x8000;
  }
  local_c0 = (uint)(*(int *)(param_1 + 0x94) == 1);
  local_200 = (ulong)*(uint *)(param_1 + 0x98);
  local_dc = (ulong)*(uint *)(param_1 + 0xac);
  local_78 = param_1;
  lStack_70 = param_1;
  local_68 = param_1;
  local_60 = param_1;
  iVar3 = FUN_00517be0(*(undefined8 *)(param_1 + 0x68),&local_b8,*puVar7,*puVar6,uVar1,&local_200);
  if (iVar3 != 1) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  return iVar3 != 1;
}


