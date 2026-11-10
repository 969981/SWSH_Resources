/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ace320; name: FUN_00ace320
 */


void FUN_00ace320(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long local_1e8;
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
  undefined8 local_168;
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
  byte local_80;
  byte bStack_7f;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined1 local_7a;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  (**(code **)(*param_1 + 0x178))();
  uVar5 = FUN_00aa5730(param_1[0x78] + 0x3d0);
  *(uint *)(param_1 + 0xb4) = uVar5;
  if (uVar5 == 0x10) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (0xf < uVar5) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = *(undefined8 *)(param_1[0x78] + (ulong)uVar5 * 0x20 + 0xb8);
  FUN_00ac8d10(param_1,0);
  *(undefined4 *)(param_1 + 0x79) = param_2;
  uVar6 = (**(code **)(*(long *)param_1[0x78] + 0x8e8))((long *)param_1[0x78],param_2);
  lVar11 = *(long *)(param_1[0x78] + 0x528);
  if (lVar11 == 0) {
    puVar8 = (undefined8 *)FUN_00c79e90(0,0x19);
    uVar15 = *puVar8;
  }
  else {
    plVar13 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    puVar8 = (undefined8 *)FUN_00c79e90(lVar11,0x19);
    uVar15 = *puVar8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  puVar1 = PTR_DAT_02710848;
  local_70 = 0;
  local_68 = 0;
  lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar11 == 0) {
    FUN_0101cb00(0,&local_70);
  }
  else {
    plVar13 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0101cb00(lVar11,&local_70);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  (**(code **)(*(long *)param_1[0x78] + 0xa68))(&local_58,(long *)param_1[0x78],uVar6);
  puVar2 = PTR_DAT_02719748;
  local_1d0 = uVar10;
  uStack_1a8 = uVar15;
  if (local_58 == 0) {
    uVar15 = *(undefined8 *)PTR_DAT_02719748;
    uVar4 = (**(code **)(*(long *)param_1[0x78] + 0x908))((long *)param_1[0x78],uVar6);
    local_1c0 = (**(code **)(*(long *)param_1[0x78] + 0x910))((long *)param_1[0x78],uVar6);
    if (1 < uVar4) {
      (**(code **)(*param_1 + 0x10))(&local_1e0,param_1);
      lVar11 = local_1e0;
      local_1e0 = 0;
      local_1d8[0] = 0;
      uStack_1c8 = 0xac6b1274261ea10;
      local_1a0 = 1;
      local_198 = lVar11;
      uStack_1b8 = uVar15;
      local_1b0 = uVar15;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      local_188 = local_68;
      local_170 = 0;
      local_168 = 0;
      local_190 = local_70;
      local_158 = *(undefined8 *)puVar2;
      local_180 = 0;
      local_178 = 0;
      local_160 = 1;
      local_7a = 0;
      local_78 = 0;
      local_74 = 0;
      local_98 = 0;
      uStack_7c = 0x101;
      local_80 = 1;
      bStack_7f = 1;
      uStack_7e = 0x101;
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
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      if (local_1e0 != 0) {
        (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
        local_1e0 = 0;
      }
      uVar9 = (**(code **)(*(long *)param_1[0x78] + 0x918))((long *)param_1[0x78],uVar6);
      if ((uVar9 & 1) != 0) {
        local_160._0_3_ = CONCAT12(1,(undefined2)local_160);
        local_80 = 1;
      }
      lVar11 = *(long *)(param_1[0x78] + 0x528);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      FUN_00c79eb0(&local_1e0,lVar11,1,local_1d8);
      if (param_1[0xa2] != 0) {
        (**(code **)(*(long *)(param_1[0xa2] + 0x48) + 0x18))();
        param_1[0xa2] = 0;
      }
      lVar12 = local_1e0;
      local_1e0 = 0;
      param_1[0xa2] = lVar12;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      if (local_198 != 0) {
        (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
        local_198 = 0;
      }
      goto LAB_00ace8e4;
    }
    lVar11 = *(long *)(param_1[0x78] + 0x528);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    (**(code **)(*param_1 + 0x10))(&local_1e8,param_1);
    lVar12 = local_1e8;
    local_158 = *(undefined8 *)puVar2;
    local_1e8 = 0;
    local_1d8[0] = 0;
    local_1a0 = 1;
    local_198 = lVar12;
    uStack_1c8 = local_158;
    local_1c0 = local_158;
    uStack_1b8 = local_158;
    local_1b0 = local_158;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      local_158 = *(undefined8 *)puVar2;
    }
    local_188 = local_68;
    local_190 = local_70;
    local_180 = 0;
    local_178 = 0;
    local_7a = 0;
    local_78 = 0;
    local_74 = 0;
    local_98 = 0;
    local_170 = 0;
    local_168 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_7e = 0x101;
    uStack_7c = 0x101;
    local_160 = 0x1010000;
    local_80 = 0;
    bStack_7f = 0;
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
    FUN_00c79ec0(&local_1e0,lVar11,1,local_1d8);
    if (param_1[0xa2] != 0) {
      (**(code **)(*(long *)(param_1[0xa2] + 0x48) + 0x18))();
      param_1[0xa2] = 0;
    }
    lVar14 = local_1e0;
    local_1e0 = 0;
    param_1[0xa2] = lVar14;
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
      local_198 = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (local_1e8 != 0) {
      (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
      local_1e8 = 0;
    }
    if (lVar11 == 0) goto LAB_00ace8e4;
  }
  else {
    lVar11 = FUN_008ea4d0(local_1d8,*(undefined8 *)(param_1[0x78] + 0xd8));
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    FUN_01524b60(lVar11,local_58);
    uVar15 = FUN_01524df0(lVar11);
    FUN_00cc1760(uVar15,10);
    (**(code **)(*param_1 + 0x10))(&local_1e0,param_1);
    lVar12 = local_1e0;
    puVar2 = PTR_DAT_02719748;
    local_1e0 = 0;
    local_1d8[0] = 0;
    local_158 = *(undefined8 *)PTR_DAT_02719748;
    local_1a0 = 1;
    local_198 = lVar12;
    uStack_1c8 = local_158;
    local_1c0 = local_158;
    uStack_1b8 = local_158;
    local_1b0 = local_158;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      local_158 = *(undefined8 *)puVar2;
    }
    local_188 = local_68;
    local_190 = local_70;
    local_180 = 0;
    local_168 = 0;
    local_7a = 0;
    local_78 = 0;
    local_74 = 0;
    local_98 = 0;
    local_170 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uStack_7e = 0x101;
    uStack_7c = 0x101;
    local_160 = 0x1010000;
    local_80 = 0;
    bStack_7f = 0;
    local_178 = uVar15;
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
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (local_1e0 != 0) {
      (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
      local_1e0 = 0;
    }
    bVar3 = FUN_01524da0(local_58);
    local_80 = bVar3 & 1;
    local_160 = CONCAT13(local_160._3_1_,CONCAT12(bVar3,(undefined2)local_160)) & 0xff01ffff;
    local_78 = 1;
    if ((*(byte *)(lVar11 + 0x106) & 2) == 0) {
      local_78 = 2;
    }
    iVar7 = (**(code **)(*(long *)param_1[0x78] + 0x868))();
    if (iVar7 != 3) {
      lVar12 = *(long *)(*(long *)puVar1 + 0x90);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
      if (lVar14 == 0) {
        bVar3 = FUN_01510f00(0,0xbd07c2b80232e9b0);
      }
      else {
        plVar13 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        bVar3 = FUN_01510f00(lVar14,0xbd07c2b80232e9b0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      bStack_7f = bVar3 & 1;
      local_160 = CONCAT13(bVar3,(undefined3)local_160) & 0x1ffffff;
    }
    lVar12 = *(long *)(param_1[0x78] + 0x528);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    FUN_00c79ec0(&local_1e0,lVar12,1,local_1d8);
    if (param_1[0xa2] != 0) {
      (**(code **)(*(long *)(param_1[0xa2] + 0x48) + 0x18))();
      param_1[0xa2] = 0;
    }
    lVar14 = local_1e0;
    local_1e0 = 0;
    param_1[0xa2] = lVar14;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
      local_198 = 0;
    }
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
LAB_00ace8e4:
  *(undefined4 *)(param_1 + 0x9a) = 1;
  FUN_00aceb40(param_1,uVar10,1);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


