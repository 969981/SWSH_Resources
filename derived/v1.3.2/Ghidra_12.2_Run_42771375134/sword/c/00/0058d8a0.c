/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058d8a0; name: FUN_0058d8a0
 */


ulong FUN_0058d8a0(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_1c8 [24];
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  
  local_188 = *(undefined8 *)(param_1 + 0x29a98);
  local_1b0 = 0;
  local_180 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uVar7 = FUN_0059db20(0x3f800000,8,&local_188,*(undefined8 *)(param_1 + 0x29aa0),0,0,0,0,0);
  if (-1 < (int)uVar7) {
    local_88 = 0x3f162c133e990abb;
    local_80 = 0x3dea747e;
    puVar1 = &local_88;
    if (param_5 != (undefined8 *)0x0) {
      puVar1 = param_5;
    }
    local_148 = *(undefined4 *)puVar1;
    uStack_144 = *(undefined4 *)((long)puVar1 + 4);
    local_188 = *puVar1;
    local_140 = *(undefined4 *)(puVar1 + 1);
    uStack_13c = *(undefined4 *)((long)puVar1 + 0xc);
    local_180 = puVar1[1];
    uVar6 = 0;
    local_138 = 0;
    uStack_130 = 0x3f80000000000000;
    local_108 = 0x3f800000;
    local_fc = 0;
    local_104 = 0;
    local_f4 = 0x3f800000;
    local_e0 = 0x3f800000;
    uStack_dc = 0;
    local_c8 = 0x3f800000;
    local_f0 = 0;
    uStack_e8 = 0;
    local_bc = 0;
    local_c4 = 0;
    local_b4 = 0x3f800000;
    local_a0 = 0x3f800000;
    local_b0 = 0;
    uStack_a8 = 0;
    local_94 = 0;
    local_9c = 0;
    local_8c = 0x3f800000;
    if (0 < (int)param_4) {
      uVar7 = (ulong)param_4;
      puVar8 = auStack_1c8 + (long)(int)param_4 * 0x40;
      do {
        plVar9 = (long *)*param_3;
        uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
        if (-1 < (int)uVar4) {
          uVar4 = uVar6;
        }
        (**(code **)(**(long **)(param_1 + 0x30) + 0xe8))
                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x22780));
        (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))
                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40),param_2);
        lVar10 = *(long *)(param_1 + 0x29aa8);
        (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))
                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x44),lVar10);
        (**(code **)(**(long **)(param_1 + 0x30) + 0xb0))
                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x100),puVar8,1);
        (**(code **)(**(long **)(param_1 + 0x29aa8) + 0x88))(*(long **)(param_1 + 0x29aa8),1);
        uVar12 = NEON_ucvtf(*(undefined4 *)(lVar10 + 0x50));
        uVar11 = NEON_ucvtf(*(undefined4 *)(lVar10 + 0x4c));
        local_198 = 0x3f800000;
        local_1a0 = 0x3f800000;
        local_1a8 = 0;
        local_1b0 = 0;
        uVar5 = FUN_00572010(0,0,uVar11,uVar12,0,0,0,0,param_1,0);
        (**(code **)(**(long **)(param_1 + 0x29aa8) + 0x88))(*(long **)(param_1 + 0x29aa8),0);
        if (-1 < (int)uVar5) {
          uVar5 = uVar4;
        }
        uVar6 = (**(code **)(*plVar9 + 0x50))(plVar9);
        if (-1 < (int)uVar6) {
          uVar6 = uVar5;
        }
        puVar8 = puVar8 + 0x10;
        uVar7 = uVar7 - 1;
        param_3 = param_3 + 1;
      } while (uVar7 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0xc0))(*(long **)(param_1 + 0x20),0);
    puVar3 = PTR_DAT_02713ca8;
    puVar2 = PTR_DAT_02713ca0;
    *(undefined8 *)(PTR_DAT_02713ca0 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    uVar7 = (ulong)(uVar6 & (int)uVar6 >> 0x1f);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)PTR_DAT_02713a70 = 0;
    *(undefined8 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  return uVar7;
}


