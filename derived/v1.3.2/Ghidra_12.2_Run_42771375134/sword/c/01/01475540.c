/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01475540; name: FUN_01475540
 */


void FUN_01475540(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long local_198;
  long local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined1 local_80;
  long local_78;
  long local_70;
  
  plVar13 = *(long **)(*(long *)(param_1 + 0x5d0) + 8);
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x10))();
  }
  FUN_00ff86a0(&local_128,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar16 = *(long *)(local_128 + 0x60);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    local_128 = 0;
  }
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_78 = 0;
  local_70 = 0;
  lVar14 = *(long *)(param_1 + 0x2b0);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    }
  }
  local_a8 = lVar14;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar14 = lVar16;
  if (local_90 != 0) {
    plVar6 = (long *)(local_90 + 0x48);
    local_90 = lVar16;
    (**(code **)(*plVar6 + 0x18))();
    lVar14 = local_90;
  }
  local_90 = lVar14;
  lVar14 = *(long *)(param_1 + 0x530);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar2 = param_1 + 0x100;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  lVar22 = *(long *)(param_1 + 0x4c8);
  lVar21 = *(long *)(param_1 + 0x4e8);
  local_88 = lVar14;
  if (**(int **)(param_1 + 0x5d0) == 2) {
    lVar14 = FUN_00ffda40(lVar2,&DAT_0216df80);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      plVar6 = (long *)(local_a0 + 0x48);
      local_a0 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_a0;
    }
    local_a0 = lVar14;
    if (*(int *)(*(long *)(param_1 + 0x5d0) + 0x108) == 0) {
      FUN_016b2da0(local_a0,0);
      local_128 = 0;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f8),&local_128,0);
    }
    lVar14 = (**(code **)(*plVar13 + 0x50))(plVar13,0);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar6 = (long *)(local_98 + 0x48);
      local_98 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_98;
    }
    local_98 = lVar14;
    local_80 = *(undefined1 *)(*(long *)(param_1 + 0x5d0) + 0x10c);
    local_78 = lVar22;
    local_70 = lVar21;
    FUN_0146b6d0(*(undefined8 *)(param_1 + 0x5d8),&local_a8,&DAT_0216e070);
    FUN_00ffd510(0,lVar2,&DAT_0216dfa0);
    lVar14 = FUN_00ffda40(lVar2,&DAT_0216dfa8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      plVar6 = (long *)(local_a0 + 0x48);
      local_a0 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_a0;
    }
    local_a0 = lVar14;
    if (*(uint *)(*(long *)(param_1 + 0x5d0) + 0x108) < 2) {
      FUN_016b2da0(local_a0,0);
      local_128 = 0x100000000;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f8),&local_128,0);
    }
    lVar14 = (**(code **)(*plVar13 + 0x50))(plVar13,1);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar6 = (long *)(local_98 + 0x48);
      local_98 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_98;
    }
    local_98 = lVar14;
    local_78 = lVar22 + 0x3e0;
    local_70 = lVar21 + 0x3d0;
    local_80 = *(undefined1 *)(*(long *)(param_1 + 0x5d0) + 0x10d);
    FUN_0146b6d0(*(long *)(param_1 + 0x5d8) + 0x218,&local_a8,&DAT_0216e1f0);
    FUN_00ffd510(0,lVar2,&DAT_0216dfc8);
    lVar14 = FUN_00ffda40(lVar2,&DAT_0216dfd0);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      plVar6 = (long *)(local_a0 + 0x48);
      local_a0 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_a0;
    }
    local_a0 = lVar14;
    if (*(uint *)(*(long *)(param_1 + 0x5d0) + 0x108) < 3) {
      FUN_016b2da0(local_a0,0);
      local_128 = 0x200000000;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f8),&local_128,0);
    }
    lVar14 = (**(code **)(*plVar13 + 0x50))(plVar13,2);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar6 = (long *)(local_98 + 0x48);
      local_98 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_98;
    }
    local_98 = lVar14;
    local_78 = lVar22 + 0x7c0;
    local_70 = lVar21 + 0x7a0;
    local_80 = *(undefined1 *)(*(long *)(param_1 + 0x5d0) + 0x10e);
    FUN_0146b6d0(*(long *)(param_1 + 0x5d8) + 0x430,&local_a8,&DAT_0216e370);
    FUN_00ffd510(0,lVar2,&DAT_0216dff0);
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x5d0) + 0x108);
    lVar14 = FUN_00ffda40(lVar2,&DAT_0216dff8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      plVar6 = (long *)(local_a0 + 0x48);
      local_a0 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_a0;
    }
    local_a0 = lVar14;
    (**(code **)(*plVar13 + 0x50))(plVar13,uVar3);
    uVar7 = FUN_008787d0();
    if ((uVar7 & 1) != 0) {
      FUN_016b2da0(local_a0,0);
      local_128 = 0x300000000;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f8),&local_128,0);
    }
    lVar14 = (**(code **)(*plVar13 + 0x50))(plVar13,uVar3);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar6 = (long *)(local_98 + 0x48);
      local_98 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_98;
    }
    local_98 = lVar14;
    local_78 = lVar22 + 0xba0;
    local_70 = lVar21 + 0xb70;
    local_80 = *(undefined1 *)(*(long *)(param_1 + 0x5d0) + 0x10f);
    FUN_0146b6d0(*(long *)(param_1 + 0x5d8) + 0x648,&local_a8,&DAT_0216e4f0);
    FUN_00ffd510(0x3f800000,lVar2,&DAT_0216e018);
    iVar1 = *(int *)(*(long *)(param_1 + 0x5d0) + 0x108) + 1;
    lVar14 = FUN_00ffda40(lVar2,&DAT_0216e020);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      plVar6 = (long *)(local_a0 + 0x48);
      local_a0 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_a0;
    }
    local_a0 = lVar14;
    (**(code **)(*plVar13 + 0x50))(plVar13,iVar1);
    uVar7 = FUN_008787d0();
    if ((uVar7 & 1) != 0) {
      FUN_016b2da0(local_a0,0);
      local_128 = 0x400000000;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f8),&local_128,0);
    }
    lVar14 = (**(code **)(*plVar13 + 0x50))(plVar13,iVar1);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar6 = (long *)(local_98 + 0x48);
      local_98 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_98;
    }
    local_98 = lVar14;
    local_78 = lVar22 + 0xf80;
    local_70 = lVar21 + 0xf40;
    local_80 = *(undefined1 *)(*(long *)(param_1 + 0x5d0) + 0x110);
    FUN_0146b6d0(*(long *)(param_1 + 0x5d8) + 0x860,&local_a8,&DAT_0216e670);
    FUN_00ffd510(0x3f800000,lVar2,&DAT_0216e040);
    iVar1 = *(int *)(*(long *)(param_1 + 0x5d0) + 0x108) + 2;
    lVar14 = FUN_00ffda40(lVar2,&DAT_0216e048);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_a0 != 0) {
      plVar6 = (long *)(local_a0 + 0x48);
      local_a0 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_a0;
    }
    local_a0 = lVar14;
    (**(code **)(*plVar13 + 0x50))(plVar13,iVar1);
    uVar7 = FUN_008787d0();
    if ((uVar7 & 1) != 0) {
      FUN_016b2da0(local_a0,0);
      local_128 = 0x500000000;
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f8),&local_128,0);
    }
    lVar14 = (**(code **)(*plVar13 + 0x50))(plVar13,iVar1);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (local_98 != 0) {
      plVar6 = (long *)(local_98 + 0x48);
      local_98 = lVar14;
      (**(code **)(*plVar6 + 0x18))();
      lVar14 = local_98;
    }
    local_98 = lVar14;
    local_78 = lVar22 + 0x1360;
    local_70 = lVar21 + 0x1310;
    local_80 = *(undefined1 *)(*(long *)(param_1 + 0x5d0) + 0x111);
    FUN_0146b6d0(*(long *)(param_1 + 0x5d8) + 0xa78,&local_a8,&DAT_0216e7f0);
    FUN_00ffd510(0x3f800000,lVar2,&DAT_0216e068);
  }
  else {
    lVar15 = 0;
    puVar17 = &DAT_0216e070;
    lVar14 = 0x10c;
    puVar18 = &DAT_0216df80;
    do {
      lVar8 = FUN_00ffda40(lVar2,puVar18);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      uVar7 = lVar14 - 0x10c;
      if (local_a0 != 0) {
        plVar6 = (long *)(local_a0 + 0x48);
        local_a0 = lVar8;
        (**(code **)(*plVar6 + 0x18))();
        lVar8 = local_a0;
      }
      local_a0 = lVar8;
      (**(code **)(*plVar13 + 0x50))(plVar13,uVar7 & 0xffffffff);
      uVar9 = FUN_008787d0();
      if ((uVar9 & 1) != 0) {
        FUN_016b2da0(local_a0,0);
        local_128 = uVar7 << 0x20;
        FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f8),&local_128,0);
      }
      lVar8 = (**(code **)(*plVar13 + 0x50))(plVar13,uVar7 & 0xffffffff);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (local_98 != 0) {
        plVar6 = (long *)(local_98 + 0x48);
        local_98 = lVar8;
        (**(code **)(*plVar6 + 0x18))();
        lVar8 = local_98;
      }
      local_98 = lVar8;
      local_80 = *(undefined1 *)(*(long *)(param_1 + 0x5d0) + lVar14);
      local_78 = lVar22;
      local_70 = lVar21;
      FUN_0146b6d0(*(long *)(param_1 + 0x5d8) + lVar15,&local_a8,puVar17);
      iVar1 = **(int **)(param_1 + 0x5d0);
      if (iVar1 == 2) {
        bVar4 = uVar7 < (uint)(*(int **)(param_1 + 0x5d0))[0x42];
      }
      else {
        bVar4 = lVar14 == 0x10c || iVar1 != 3;
      }
      FUN_00ffd510((float)(bVar4 ^ 1),lVar2,puVar18 + 0x20);
      lVar14 = lVar14 + 1;
      lVar22 = lVar22 + 0x3e0;
      lVar21 = lVar21 + 0x3d0;
      puVar17 = puVar17 + 0x180;
      puVar18 = puVar18 + 0x28;
      lVar15 = lVar15 + 0x218;
    } while (lVar14 != 0x112);
  }
  FUN_01471770(*(long *)(param_1 + 0x5d8) +
               (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x218);
  local_b8 = 0;
  local_b0 = 0;
  local_190 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  local_158 = 0;
  local_150 = 0;
  local_168 = 0;
  local_160 = 0;
  local_178 = 0;
  local_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  lVar14 = *(long *)(param_1 + 0x2b0);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    if (local_128 != 0) {
      (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    }
  }
  local_128 = lVar14;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar14 = lVar16;
  if (local_190 != 0) {
    plVar6 = (long *)(local_190 + 0x48);
    local_190 = lVar16;
    (**(code **)(*plVar6 + 0x18))();
    lVar14 = local_190;
  }
  local_190 = lVar14;
  piVar12 = *(int **)(param_1 + 0x5d0);
  if (*piVar12 == 2) {
    uVar11 = piVar12[4];
    if ((uint)piVar12[0x42] <= uVar11) {
      uVar11 = (piVar12[0x42] + uVar11) - 3;
    }
  }
  else {
    uVar11 = piVar12[4];
  }
  uVar10 = (**(code **)(**(long **)(piVar12 + 2) + 0x50))(*(long **)(piVar12 + 2),uVar11);
  uVar7 = 0;
  puVar20 = &DAT_0216eb48;
  do {
    local_120 = puVar20[-10];
    local_108 = puVar20[-9];
    local_118 = puVar20[-8];
    local_e8 = puVar20[-7];
    local_e0 = puVar20[-6];
    local_d8 = puVar20[-5];
    local_d0 = puVar20[-4];
    local_c8 = puVar20[-3];
    local_c0 = puVar20[-2];
    local_b8 = puVar20[-1];
    local_b0 = puVar20[10];
    local_188 = *puVar20;
    uStack_180 = puVar20[1];
    local_170 = puVar20[2];
    local_168 = puVar20[3];
    local_160 = puVar20[4];
    local_158 = puVar20[5];
    local_150 = puVar20[6];
    local_148 = puVar20[7];
    local_140 = puVar20[8];
    local_130 = puVar20[9];
    FUN_016ab680(*(undefined8 *)(param_1 + 0x6f8 + uVar7 * 8),&local_128,&local_190,&local_138);
    bVar5 = FUN_0087b890(uVar10);
    if (uVar7 < bVar5) {
      piVar12 = *(int **)(param_1 + 0x5d0);
      uVar19 = *(undefined8 *)(param_1 + 0x6f8 + uVar7 * 8);
      if (*piVar12 == 2) {
        uVar11 = piVar12[4];
        if ((uint)piVar12[0x42] <= uVar11) {
          uVar11 = (piVar12[0x42] + uVar11) - 3;
        }
      }
      else {
        uVar11 = piVar12[4];
      }
      local_198 = (**(code **)(**(long **)(piVar12 + 2) + 0x50))(*(long **)(piVar12 + 2),uVar11);
      if (local_198 != 0) {
        (**(code **)(*(long *)(local_198 + 0x48) + 0x10))();
      }
      FUN_016ab860(uVar19,&local_198,uVar7 & 0xffffffff,0);
      if (local_198 != 0) {
        (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
        local_198 = 0;
      }
    }
    uVar7 = uVar7 + 1;
    puVar20 = puVar20 + 0x16;
  } while (uVar7 != 4);
  if (local_190 != 0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = 0;
  }
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    local_128 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
  return;
}


