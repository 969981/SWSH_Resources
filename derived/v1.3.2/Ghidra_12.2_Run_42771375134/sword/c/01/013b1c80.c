/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b1c80; name: FUN_013b1c80
 */


void FUN_013b1c80(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *local_230;
  code *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  long local_210;
  long *plStack_208;
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  long *local_190;
  long *local_188;
  long local_128;
  long local_120;
  long local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  long local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 **local_a0 [12];
  
  if (*(long *)(param_2 + 0x68) != 0) {
    puVar11 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60);
    if (puVar11 == (undefined8 *)0x0) goto LAB_013b1ce4;
    plVar3 = (long *)(**(code **)*puVar11)(puVar11);
    lVar4 = FUN_0132d9a0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar11 = puVar11 + -10;
        goto LAB_013b1ce4;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_013b1ce4:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  local_110 = *(long **)(param_2 + 8);
  local_f8 = 0;
  local_d0 = 0;
  local_128 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_d8 = 0;
  uStack_108 = 0;
  lVar4 = puVar11[0x6b];
  local_e0 = local_110;
  local_c8 = param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_190 = &local_c8;
  local_188 = &local_f8;
  local_1a0 = &LAB_013b4290;
  local_198 = &LAB_013b42a0;
  local_a0[0] = &local_1b0;
  local_1b0 = &LAB_013b3b10;
  local_1a8 = FUN_013b40c0;
  local_c0 = PTR_LAB_02727728;
  local_b8 = (code *)PTR_FUN_02727730;
  local_b0 = PTR_LAB_02727738;
  local_a8 = PTR_LAB_02727740;
  FUN_01306a00(lVar4,&local_c0);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(local_a0);
  }
  pcVar2 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (undefined1 *)0x0;
    local_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar2)(&local_190);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = puVar11[0x6b];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_230 = &LAB_013b42b0;
  local_228 = FUN_013b4390;
  local_220 = &LAB_013b4560;
  plStack_208 = &local_128;
  local_218 = &LAB_013b4570;
  local_c0 = PTR_LAB_02727810;
  local_b8 = (code *)PTR_FUN_02727818;
  local_b0 = PTR_LAB_02727820;
  local_a8 = PTR_LAB_02727828;
  local_210 = param_2;
  local_a0[0] = &local_230;
  FUN_01306a00(lVar4,&local_c0);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(local_a0);
  }
  pcVar2 = local_228;
  if (local_228 != (code *)0x0) {
    local_220 = (undefined1 *)0x0;
    local_218 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_228 = (code *)0x0;
    (*pcVar2)(&local_210);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_f8 != local_f0) {
    lVar4 = local_f0 - local_f8;
    if (lVar4 == 8) {
      uVar8 = 0;
    }
    else {
      puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      if (lVar4 == 0) {
        uVar6 = *puVar5;
        uVar8 = puVar5[1] + uVar6;
        uVar7 = puVar5[1] ^ uVar6;
        *puVar5 = uVar7 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar7 << 0x10;
        puVar5[1] = uVar7 >> 0x1b | uVar7 << 0x25;
      }
      else {
        uVar6 = lVar4 >> 3;
        uVar7 = (0x40 - LZCOUNT(uVar6)) -
                (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar6)) & 0x3f) & uVar6) ==
                       0);
        uVar8 = uVar7 >> 6;
        if ((uVar7 & 0x3f) != 0) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar7 / uVar8;
        }
        uVar1 = 0;
        if (uVar8 <= uVar7) {
          uVar1 = 0xffffffffffffffff >> (-uVar9 & 0x3f);
        }
        uVar7 = *puVar5;
        uVar9 = puVar5[1];
        do {
          uVar10 = uVar7 ^ uVar9;
          uVar8 = uVar7 + uVar9;
          uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
          uVar7 = uVar10 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar10 << 0x10;
          uVar8 = uVar8 & uVar1;
        } while (uVar6 <= uVar8);
        *puVar5 = uVar7;
        puVar5[1] = uVar9;
      }
    }
    plVar3 = (long *)FUN_0130a5d0(*(undefined8 *)(local_f8 + uVar8 * 8));
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    param_1[1] = lVar4;
  }
  if (local_128 != local_120) {
    lVar4 = local_120 - local_128;
    if (lVar4 == 8) {
      uVar8 = 0;
    }
    else {
      puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      if (lVar4 == 0) {
        uVar6 = *puVar5;
        uVar8 = puVar5[1] + uVar6;
        uVar7 = puVar5[1] ^ uVar6;
        *puVar5 = uVar7 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar7 << 0x10;
        puVar5[1] = uVar7 >> 0x1b | uVar7 << 0x25;
      }
      else {
        uVar6 = lVar4 >> 3;
        uVar7 = (0x40 - LZCOUNT(uVar6)) -
                (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar6)) & 0x3f) & uVar6) ==
                       0);
        uVar8 = uVar7 >> 6;
        if ((uVar7 & 0x3f) != 0) {
          uVar8 = uVar8 + 1;
        }
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar7 / uVar8;
        }
        uVar1 = 0;
        if (uVar8 <= uVar7) {
          uVar1 = 0xffffffffffffffff >> (-uVar9 & 0x3f);
        }
        uVar7 = *puVar5;
        uVar9 = puVar5[1];
        do {
          uVar10 = uVar7 ^ uVar9;
          uVar8 = uVar7 + uVar9;
          uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
          uVar7 = uVar10 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar10 << 0x10;
          uVar8 = uVar8 & uVar1;
        } while (uVar6 <= uVar8);
        *puVar5 = uVar7;
        puVar5[1] = uVar9;
      }
    }
    puVar11 = (undefined8 *)FUN_012e3520(*(undefined8 *)(local_128 + uVar8 * 8));
    lVar4 = FUN_012b65a0(*puVar11);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    param_1[2] = lVar4;
  }
  if (local_128 != 0) {
    local_120 = local_128;
    (**(code **)(*local_110 + 0x18))(local_110,local_128,local_118 - local_128,8);
  }
  if (local_f8 != 0) {
    local_f0 = local_f8;
    (**(code **)(*local_e0 + 0x18))(local_e0,local_f8,local_e8 - local_f8,8);
  }
  return;
}


