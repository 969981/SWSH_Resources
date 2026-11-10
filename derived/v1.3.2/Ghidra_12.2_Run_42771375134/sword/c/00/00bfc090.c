/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfc090; name: FUN_00bfc090
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bfc090(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  plVar9 = *(long **)(param_1 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar9;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  FUN_0077d050(lVar5,0x200);
  *(long **)(lVar5 + 8) = plVar9;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x610);
  pcVar6 = *(code **)(lVar4 + 0x28);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    (*pcVar6)(lVar4 + 0x40);
  }
  *(undefined **)(lVar4 + 0x40) = PTR_LAB_0271bb68;
  puVar1 = PTR_LAB_0271bb70;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(long *)(lVar4 + 0x50) = param_1;
  puVar3 = PTR_LAB_0271bb80;
  puVar2 = PTR_LAB_0271bb78;
  *(undefined8 *)(lVar4 + 0x20) = puVar1;
  *(undefined **)(lVar4 + 0x28) = puVar2;
  puVar1 = PTR_LAB_0271bb88;
  *(undefined **)(lVar4 + 0x30) = puVar3;
  *(undefined **)(lVar4 + 0x38) = puVar1;
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xa7dee92e6252a995;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar9 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0077eb10(uVar7,local_70,lVar4);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar4 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_t_name_00",uVar7,10);
  }
  else {
    plVar9 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar7 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_t_name_00",uVar7,10);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  lVar4 = param_1 + 0x100;
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0d97f00da563b;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  plVar9 = (long *)(param_1 + 0x5f8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  FUN_0077d520(lVar5);
  lVar10 = *(long *)(*plVar9 + 0x2e0);
  if (lVar10 == 0) {
    FUN_014c7aa0(0,0,lVar5,*(undefined4 *)(param_2 + 0x1e0),0,0);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_014c7aa0(lVar10,0,lVar5,*(undefined4 *)(param_2 + 0x1e0),0,0);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  if (lVar11 == 0) {
    lVar13 = *(long *)(lVar10 + 0x2f0);
  }
  else {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    lVar10 = *plVar9;
    lVar13 = *(long *)(lVar10 + 0x2f0);
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  puVar8 = (undefined4 *)(param_2 + 0x1e0);
  lVar10 = *(long *)(lVar10 + 0x2e8);
  plVar12 = (long *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  FUN_014c62d0(lVar11,lVar13,lVar10);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar12);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar10 = *(long *)(*plVar9 + 0x2f0);
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_01",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_01",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xa7dee92e6252a995;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_02",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_02",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0x7fda360bb79cd71f;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  FUN_0077d520(lVar5,param_2 + 0xba);
  lVar10 = *(long *)(*plVar9 + 0x2e0);
  if (lVar10 == 0) {
    FUN_014c7aa0(0,0,lVar5,*puVar8,0,0);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_014c7aa0(lVar10,0,lVar5,*puVar8,0,0);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar13 = *(long *)(lVar10 + 0x2f0);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar10 = *(long *)(lVar10 + 0x2e8);
  plVar12 = (long *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  FUN_014c62d0(lVar11,lVar13,lVar10);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar12);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar10 = *(long *)(*plVar9 + 0x2f0);
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_03",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_03",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0de7f00da5eba;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  FUN_0077d520(lVar5,param_2 + 0x14c);
  lVar10 = *(long *)(*plVar9 + 0x2e0);
  if (lVar10 == 0) {
    FUN_014c7aa0(0,0,lVar5,*puVar8,0,0);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_014c7aa0(lVar10,0,lVar5,*puVar8,0,0);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar13 = *(long *)(lVar10 + 0x2f0);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar10 = *(long *)(lVar10 + 0x2e8);
  plVar12 = (long *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  FUN_014c62d0(lVar11,lVar13,lVar10);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar12);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar10 = *(long *)(*plVar9 + 0x2f0);
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_04",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_t_name_04",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xa7dee82e6252a7e2;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_r_rank_00",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_r_rank_00",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xa7dee72e6252a62f;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar10 = *(long *)(*plVar9 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*plVar9 + 0x2e0);
  }
  if (lVar10 == 0) {
    FUN_014ca220(0,0,*(undefined4 *)(param_2 + 0x1e4),7,0,1);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_014ca220(lVar10,0,*(undefined4 *)(param_2 + 0x1e4),7,0,1);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar13 = *(long *)(lVar10 + 0x2f0);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar10 = *(long *)(lVar10 + 0x2e8);
  plVar12 = (long *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  FUN_014c62d0(lVar11,lVar13,lVar10);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar12);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar10 = *(long *)(*plVar9 + 0x2f0);
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_r_rank_01",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_r_rank_01",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xa7dee62e6252a47c;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_00",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_00",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xa7dee52e6252a2c9;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar10 = *(long *)(*plVar9 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*plVar9 + 0x2e0);
  }
  if (lVar10 == 0) {
    FUN_014ca220(0,0,*(undefined2 *)(param_2 + 0x1e8),4,0,1);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_014ca220(lVar10,0,*(undefined2 *)(param_2 + 0x1e8),4,0,1);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *plVar9;
    lVar11 = *(long *)(lVar10 + 0x2e0);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar13 = *(long *)(lVar10 + 0x2f0);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    lVar10 = *plVar9;
  }
  lVar10 = *(long *)(lVar10 + 0x2e8);
  plVar12 = (long *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  FUN_014c62d0(lVar11,lVar13,lVar10);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar12);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar10 = *(long *)(*plVar9 + 0x2f0);
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_01",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_01",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0d37f00da4c09;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_02",uVar7,10);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_02",uVar7,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  local_a8 = *(undefined8 *)(param_2 + 0x1f0);
  local_a0 = *(undefined8 *)(param_2 + 0x1f8);
  uStack_98 = *(undefined8 *)(param_2 + 0x200);
  local_90 = *(undefined8 *)(param_2 + 0x208);
  uStack_88 = *(undefined8 *)(param_2 + 0x210);
  local_80 = *(undefined8 *)(param_2 + 0x218);
  uStack_78 = *(undefined8 *)(param_2 + 0x220);
  local_d8 = *(undefined8 *)(param_2 + 0x230);
  uStack_d0 = *(undefined8 *)(param_2 + 0x238);
  local_e0 = *(undefined8 *)(param_2 + 0x228);
  local_c8 = *(undefined8 *)(param_2 + 0x240);
  uStack_c0 = *(undefined8 *)(param_2 + 0x248);
  local_b8 = *(undefined8 *)(param_2 + 0x250);
  uStack_b0 = *(undefined8 *)(param_2 + 600);
  local_70[0] = 0xad39b202a6e38082;
  local_e8 = 0xcfb0df7f00da606d;
  local_f0 = 0xad39ad02a6e37803;
  local_f8 = 0xcfb0dc7f00da5b54;
  local_108 = 0xcfb0dd7f00da5d07;
  uStack_100 = 0xad39ac02a6e37650;
  FUN_00beff30(param_1,&local_a8,&local_e0,local_70,&local_e8,&local_f0,&local_f8,&uStack_100,
               &local_108);
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb4607f00dd7177;
  lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar7,local_70,0);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  else {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(uVar7,local_70,lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*plVar9 + 0x2e8);
  }
  if (lVar10 == 0) {
    uVar7 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_06",uVar7,10);
  }
  else {
    plVar9 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar7 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar4,"pane_T_detail_r_t_06",uVar7,10);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  FUN_00bf0790(param_1,*(undefined4 *)(param_2 + 0x260),"pane_T_detail_r_t_07");
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


