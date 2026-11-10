/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee9b90; name: FUN_00ee9b90
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee9b90(int *param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint3 uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 *local_218;
  char *pcStack_210;
  undefined8 local_208;
  long local_200;
  long local_1f8;
  undefined1 local_1f0 [2];
  undefined4 local_1ee;
  undefined2 local_1ea;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
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
  undefined8 local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined2 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_aa;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long local_70;
  
  puVar2 = PTR_DAT_02710848;
  lVar12 = *(long *)PTR_DAT_02710848;
  uVar13 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar9 = *(long *)(lVar12 + 0x90);
  if (lVar9 == 0) {
    lVar9 = _DAT_00000060;
  }
  else {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar9 = *(long *)(lVar9 + 0x60);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_1f0[0] = 0;
  local_d8 = 0xcbf29ce484222645;
  puStack_d0 = &DAT_01d38550;
  local_c8 = 0;
  local_c0 = 0;
  local_1e8 = 0;
  local_1ea = 0;
  local_1ee = 0;
  local_1d8 = 0;
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
  uStack_1c8 = 0;
  local_1e0 = 0;
  local_e0 = 0xcbf29ce484222645;
  if ((*PTR_DAT_02715198 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_02715198);
    puVar3 = PTR_DAT_027151a0;
    if (iVar7 != 0) {
      *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
      *(undefined1 **)(puVar3 + 8) = &DAT_01d38550;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      FUN_001001c0(PTR_LAB_027151a8,puVar3,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715198);
    }
  }
  local_d8 = *(undefined8 *)PTR_DAT_027151a0;
  puStack_d0 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_c8 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar11 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (local_c0 != 0) {
    plVar10 = (long *)(local_c0 + 0x48);
    local_c0 = lVar11;
    (**(code **)(*plVar10 + 0x18))();
    lVar11 = local_c0;
  }
  local_c0 = lVar11;
  local_88 = &DAT_cc7b5e39ed4396ae;
  pcStack_80 = "NONE_NONE";
  local_b8 = 0;
  local_78 = 9;
  local_70 = 0;
  FUN_010011e0(&local_88,local_1f0);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  local_aa = 0;
  local_ac = 0;
  local_b0 = 0;
  local_a4 = 0;
  local_9c = 0;
  lVar11 = *(long *)(*(long *)puVar2 + 0x90);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_1f8 = FUN_00eea980();
  if (*(long *)(param_1 + 6) != -0x340d631b7bddd9bb) {
    local_1f8 = *(long *)(param_1 + 6);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_1f8;
  }
  if (*(long *)(lVar11 + 0x578) == 0) {
    plVar10 = (long *)FUN_01028290();
    local_238 = *plVar10;
    if (local_238 != 0) {
      (**(code **)(*(long *)(local_238 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_238,*(long *)(lVar11 + 0x578),&local_1f8);
  }
  FUN_006cf0c0(&local_88,&local_238);
  if (local_238 != 0) {
    (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
    local_238 = 0;
  }
  local_218 = local_88;
  pcStack_210 = pcStack_80;
  local_208 = local_78;
  local_200 = local_70;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN_010011e0(&local_218,local_1f0);
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
    local_200 = 0;
  }
  iVar6 = FUN_00ecec10();
  uVar4 = local_b0;
  iVar7 = iVar6 + -0xf;
  if (iVar6 < 0xf) {
    iVar7 = iVar6;
  }
  local_b0._0_2_ = CONCAT11((char)iVar7,(undefined1)local_b0);
  iVar7 = local_b0;
  uVar5 = local_b0._1_3_;
  local_b0._3_1_ = SUB41(uVar4,3);
  uVar8 = local_b0._3_1_;
  local_b0 = iVar7;
  switch(iVar6) {
  case 0:
  case 1:
    local_b0 = (uint)uVar5 << 8;
    iVar7 = *param_1;
    goto joined_r0x00eea0d4;
  case 2:
    uVar8 = 2;
    break;
  case 3:
    local_b0 = CONCAT31(uVar5,2);
    local_b0._0_3_ = CONCAT12(3,(short)local_b0);
    iVar7 = *param_1;
    goto joined_r0x00eea0d4;
  case 4:
  case 5:
    uVar8 = 3;
    break;
  case 6:
    uVar8 = 1;
    break;
  case 7:
    uVar8 = 4;
    break;
  case 8:
    local_b0._0_2_ = (short)((uint)iVar7 >> 8) << 8;
    local_b0._0_3_ = CONCAT12(2,(short)local_b0);
    iVar7 = *param_1;
joined_r0x00eea0d4:
    local_b0 = CONCAT13(uVar8,(undefined3)local_b0);
    goto joined_r0x00eea0d4;
  default:
    goto switchD_00ee9e4c_default;
  }
  local_b0 = CONCAT31(uVar5,uVar8);
switchD_00ee9e4c_default:
  iVar7 = *param_1;
joined_r0x00eea0d4:
  if (iVar7 == 0) {
    lVar14 = *(long *)(lVar9 + 0x788);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar15 = *(long *)(lVar14 + 0x4e8);
    plVar10 = (long *)(lVar15 + 0x48);
    if (lVar15 != 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    FUN_008e73a0(param_2,lVar12,lVar15,param_1[2],local_1f0,0,uVar13);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))(plVar10);
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    uVar1 = param_1[4];
  }
  else {
    uVar1 = param_1[4];
  }
  if ((uVar1 >> 4 & 1) != 0) {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x400000;
    uVar1 = param_1[4];
  }
  if ((uVar1 >> 8 & 1) == 0) {
    *(int *)(param_2 + 0xae0) = param_1[9];
    lVar9 = *(long *)(lVar9 + 0x788);
  }
  else {
    *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x4000000;
    *(int *)(param_2 + 0xae0) = param_1[9];
    lVar9 = *(long *)(lVar9 + 0x788);
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN_008e9ba0(param_2);
  *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x10;
  lVar12 = *(long *)(lVar9 + 0x4f0);
  if (lVar12 == 0) {
    FUN_008e9bb0(param_2,0,1);
  }
  else {
    plVar10 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_008e9bb0(param_2,lVar12,1);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  lVar12 = *(long *)(param_2 + 0xa20);
  *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x2200;
  if (lVar12 == 0) {
    FUN_008ead60(0,*(undefined8 *)(lVar9 + 0x570),*(undefined8 *)(lVar9 + 0x578));
  }
  else {
    plVar10 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_008ead60(lVar12,*(undefined8 *)(lVar9 + 0x570),*(undefined8 *)(lVar9 + 0x578));
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  *(uint *)(param_2 + 0xa74) = *(uint *)(param_2 + 0xa74) | 4;
  *(undefined1 *)(param_2 + 0x580) = 0;
  *(undefined1 *)(param_2 + 0x5b0) = 0;
  *(undefined1 *)(param_2 + 0x5e0) = 0;
  *(undefined1 *)(param_2 + 0x610) = 0;
  *(undefined1 *)(param_2 + 0x640) = 0;
  *(undefined1 *)(param_2 + 0x670) = 0;
  *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | 0x8000000;
  FUN_0103e780(*(undefined8 *)(lVar9 + 0x590));
  FUN_0103eaa0(&local_238,*(undefined8 *)(lVar9 + 0x590));
  *(long *)(param_2 + 0x340) = local_238;
  *(undefined8 *)(param_2 + 0x348) = local_230;
  *(undefined8 *)(param_2 + 0x350) = local_228;
  if (*(long *)(param_2 + 0x358) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x358) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x358) = 0;
  }
  *(undefined8 *)(param_2 + 0x358) = local_220;
  FUN_0108fcd0(&local_238,lVar9);
  *(long *)(param_2 + 0x360) = local_238;
  *(undefined8 *)(param_2 + 0x368) = local_230;
  *(undefined8 *)(param_2 + 0x370) = local_228;
  if (*(long *)(param_2 + 0x378) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x378) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x378) = 0;
  }
  *(undefined8 *)(param_2 + 0x378) = local_220;
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  return;
}


