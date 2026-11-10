/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee8560; name: FUN_00ee8560
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ee8560(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 *local_208;
  char *pcStack_200;
  undefined8 local_1f8;
  long local_1f0;
  long local_1e8;
  undefined1 local_1e0 [2];
  undefined4 local_1de;
  undefined2 local_1da;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
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
  undefined8 local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined2 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_9a;
  undefined8 local_94;
  undefined1 local_8c;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  long local_58;
  
  puVar3 = PTR_DAT_02710848;
  uVar14 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  local_1e0[0] = 0;
  local_c8 = 0xcbf29ce484222645;
  puStack_c0 = &DAT_01d38550;
  local_1d8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_1da = 0;
  local_1de = 0;
  local_1c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  lVar15 = *(long *)PTR_DAT_02710848;
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
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  local_d0 = 0xcbf29ce484222645;
  if ((*PTR_DAT_02715198 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_02715198);
    puVar4 = PTR_DAT_027151a0;
    if (iVar8 != 0) {
      *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
      *(undefined1 **)(puVar4 + 8) = &DAT_01d38550;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      FUN_001001c0(PTR_LAB_027151a8,puVar4,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715198);
    }
  }
  local_c8 = *(undefined8 *)PTR_DAT_027151a0;
  puStack_c0 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_b8 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar13 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (local_b0 != 0) {
    plVar9 = (long *)(local_b0 + 0x48);
    local_b0 = lVar13;
    (**(code **)(*plVar9 + 0x18))();
    lVar13 = local_b0;
  }
  local_b0 = lVar13;
  local_80 = &DAT_cc7b5e39ed4396ae;
  pcStack_78 = "NONE_NONE";
  local_a8 = 0;
  local_70 = 9;
  local_68 = 0;
  FUN_010011e0(&local_80,local_1e0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  local_9a = 0;
  local_9c = 0;
  local_a0 = 0;
  local_94 = 0;
  local_8c = 0;
  lVar13 = *(long *)(*(long *)puVar3 + 0x90);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  local_1e8 = FUN_00eea980();
  if (*(long *)(param_1 + 6) != -0x340d631b7bddd9bb) {
    local_1e8 = *(long *)(param_1 + 6);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_1e8;
  }
  if (*(long *)(lVar13 + 0x578) == 0) {
    plVar9 = (long *)FUN_01028290();
    local_58 = *plVar9;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_58,*(long *)(lVar13 + 0x578),&local_1e8);
  }
  FUN_006cf0c0(&local_80,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_208 = local_80;
  pcStack_200 = pcStack_78;
  local_1f8 = local_70;
  local_1f0 = local_68;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_010011e0(&local_208,local_1e0);
  if (local_1f0 != 0) {
    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    local_1f0 = 0;
  }
  iVar8 = FUN_00ecec10();
  uVar5 = local_a0;
  cVar1 = (char)iVar8 + -0xf;
  if (iVar8 < 0xf) {
    cVar1 = (char)iVar8;
  }
  local_a0._0_2_ = CONCAT11(cVar1,(undefined1)local_a0);
  uVar2 = local_a0;
  uVar6 = local_a0._1_3_;
  local_a0._3_1_ = SUB41(uVar5,3);
  uVar7 = local_a0._3_1_;
  switch(iVar8) {
  case 0:
  case 1:
    local_a0 = uVar2 & 0xffffff00;
    uVar2 = local_a0;
  default:
    local_a0 = uVar2;
    iVar8 = *param_1;
    break;
  case 2:
    local_a0 = CONCAT31(uVar6,2);
    iVar8 = *param_1;
    break;
  case 3:
    local_a0 = CONCAT31(uVar6,2);
    local_a0._0_3_ = CONCAT12(3,(short)local_a0);
    local_a0 = CONCAT13(uVar7,(undefined3)local_a0);
    iVar8 = *param_1;
    break;
  case 4:
  case 5:
    local_a0 = CONCAT31(uVar6,3);
    iVar8 = *param_1;
    break;
  case 6:
    local_a0 = CONCAT31(uVar6,1);
    iVar8 = *param_1;
    break;
  case 7:
    local_a0 = CONCAT31(uVar6,4);
    iVar8 = *param_1;
    break;
  case 8:
    local_a0._0_2_ = (short)(uVar2 >> 8) << 8;
    local_a0._0_3_ = CONCAT12(2,(short)local_a0);
    iVar8 = *param_1;
  }
  if (iVar8 == 1) {
    if (param_1[1] == 0) {
      lVar16 = *(long *)(lVar15 + 0x90);
      if (param_1[3] == 0) {
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
        }
        lVar17 = *(long *)(lVar16 + 0x58);
        plVar9 = (long *)(lVar17 + 0x48);
        if (lVar17 != 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        iVar8 = param_1[2];
        uVar11 = 1;
        goto LAB_00ee8848;
      }
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar17 = *(long *)(lVar16 + 0x58);
      plVar9 = (long *)(lVar17 + 0x48);
      if (lVar17 != 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      FUN_008e74a0(param_2,lVar15,lVar17,param_1[2],param_1[3],local_1e0,1,uVar14);
      goto LAB_00ee8850;
    }
    lVar16 = *(long *)(lVar15 + 0x90);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    lVar17 = *(long *)(lVar16 + 0x58);
    plVar9 = (long *)(lVar17 + 0x48);
    if (lVar17 != 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    FUN_008e75c0(param_2,lVar15,lVar17,param_1[1],param_1[2],param_1[3],local_1e0,1,uVar14);
    pcVar12 = *(code **)(*(long *)(lVar17 + 0x48) + 0x18);
  }
  else {
    if (iVar8 != 0) goto LAB_00ee88f4;
    lVar16 = *(long *)(lVar15 + 0x90);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    lVar17 = *(long *)(lVar16 + 0x58);
    plVar9 = (long *)(lVar17 + 0x48);
    if (lVar17 != 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    iVar8 = param_1[2];
    uVar11 = 0;
LAB_00ee8848:
    FUN_008e73a0(param_2,lVar15,lVar17,iVar8,local_1e0,uVar11,uVar14);
LAB_00ee8850:
    pcVar12 = *(code **)(*(long *)(lVar17 + 0x48) + 0x18);
  }
  (*pcVar12)(plVar9);
  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
LAB_00ee88f4:
  lVar15 = FUN_00e7e2e0();
  if ((lVar15 == 0x5da9396aa5fce487) || (lVar15 == -0x6d700877a8c1fb23)) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x20000;
  }
  uVar2 = param_1[4];
  if ((uVar2 >> 1 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x2200;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x10;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 3 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x10000;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 5 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x800000;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 7 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x100000;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 6 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x1000000;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 4 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x400000;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 8 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x4000000;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 9 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x8000000;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 10 & 1) != 0) {
    *(uint *)(param_2 + 0xa74) = *(uint *)(param_2 + 0xa74) | 1;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    *(uint *)(param_2 + 0xa74) = *(uint *)(param_2 + 0xa74) | 2;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    *(uint *)(param_2 + 0xa74) = *(uint *)(param_2 + 0xa74) | 8;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    *(uint *)(param_2 + 0xa74) = *(uint *)(param_2 + 0xa74) | 0x100;
    uVar2 = param_1[4];
  }
  if ((uVar2 >> 0xd & 1) == 0) {
    *(int *)(param_2 + 0xae0) = param_1[9];
    uVar10 = FUN_00fa4540();
  }
  else {
    *(undefined8 *)(param_2 + 0x340) = 0x12b4d50220b0c424;
    *(char **)(param_2 + 0x348) = "Play_bgm_or_vs_vs11";
    *(undefined8 *)(param_2 + 0x350) = 0x13;
    *(int *)(param_2 + 0xae0) = param_1[9];
    uVar10 = FUN_00fa4540();
  }
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(param_2 + 0xa85) = 1;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  return;
}


