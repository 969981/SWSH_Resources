/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf81c0; name: FUN_00bf81c0
 */


void FUN_00bf81c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 local_108;
  undefined8 local_100;
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
  
  plVar5 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar5;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0x80,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_0077d050(lVar2,0x200);
  *(long **)(lVar2 + 8) = plVar5;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0x7fda360bb79cd71f;
  lVar1 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  plVar5 = (long *)(param_1 + 0x5f8);
  if (lVar1 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
  }
  else {
    plVar7 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar1);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_0077d520(lVar2,param_2);
  lVar1 = *(long *)(*plVar5 + 0x2e0);
  if (lVar1 == 0) {
    FUN_014c7aa0(0,0,lVar2,*(undefined4 *)(param_2 + 0x124),0,0);
    lVar1 = *plVar5;
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar7 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_014c7aa0(lVar1,0,lVar2,*(undefined4 *)(param_2 + 0x124),0,0);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar1 = *plVar5;
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar1 = *plVar5;
  }
  puVar9 = (undefined4 *)(param_2 + 0x124);
  lVar6 = *(long *)(lVar1 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar1 = *plVar5;
  }
  lVar1 = *(long *)(lVar1 + 0x2e8);
  plVar7 = (long *)(lVar1 + 0x48);
  if (lVar1 != 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  FUN_014c62d0(lVar4,lVar6,lVar1);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar7);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  lVar1 = param_1 + 0x100;
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_t_name_00",uVar3,10);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar1,"pane_T_t_name_00",uVar3,10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0de7f00da5eba;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar4);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_0077d520(lVar2,param_2 + 0x92);
  lVar4 = *(long *)(*plVar5 + 0x2e0);
  if (lVar4 == 0) {
    FUN_014c7aa0(0,0,lVar2,*puVar9,0,0);
    lVar4 = *plVar5;
    lVar6 = *(long *)(lVar4 + 0x2e0);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_014c7aa0(lVar4,0,lVar2,*puVar9,0,0);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar4 = *plVar5;
    lVar6 = *(long *)(lVar4 + 0x2e0);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar4 = *plVar5;
  }
  lVar8 = *(long *)(lVar4 + 0x2f0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar4 = *plVar5;
  }
  lVar4 = *(long *)(lVar4 + 0x2e8);
  plVar7 = (long *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  FUN_014c62d0(lVar6,lVar8,lVar4);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar7);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar4 = *(long *)(*plVar5 + 0x2f0);
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_t_name_01",uVar3,10);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar1,"pane_T_t_name_01",uVar3,10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0x7fda360bb79cd71f;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar4);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_0077d520(lVar2,param_2);
  lVar4 = *(long *)(*plVar5 + 0x2e0);
  if (lVar4 == 0) {
    FUN_014c7aa0(0,0,lVar2,*puVar9,0,0);
    lVar4 = *plVar5;
    lVar6 = *(long *)(lVar4 + 0x2e0);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_014c7aa0(lVar4,0,lVar2,*puVar9,0,0);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar4 = *plVar5;
    lVar6 = *(long *)(lVar4 + 0x2e0);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar4 = *plVar5;
  }
  lVar8 = *(long *)(lVar4 + 0x2f0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar4 = *plVar5;
  }
  lVar4 = *(long *)(lVar4 + 0x2e8);
  plVar7 = (long *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  FUN_014c62d0(lVar6,lVar8,lVar4);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar7);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar4 = *(long *)(*plVar5 + 0x2f0);
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_t_name_02",uVar3,10);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar1,"pane_T_t_name_02",uVar3,10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0d37f00da4c09;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 == 0) goto LAB_00bf897c;
LAB_00bf8918:
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_00",uVar3,10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  else {
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar2);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 != 0) goto LAB_00bf8918;
LAB_00bf897c:
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_00",uVar3,10);
  }
  local_a8 = *(undefined8 *)(param_2 + 0x128);
  local_a0 = *(undefined8 *)(param_2 + 0x130);
  uStack_98 = *(undefined8 *)(param_2 + 0x138);
  local_90 = *(undefined8 *)(param_2 + 0x140);
  uStack_88 = *(undefined8 *)(param_2 + 0x148);
  local_80 = *(undefined8 *)(param_2 + 0x150);
  uStack_78 = *(undefined8 *)(param_2 + 0x158);
  uStack_d0 = *(undefined8 *)(param_2 + 0x170);
  local_e0 = *(undefined8 *)(param_2 + 0x160);
  local_d8 = *(undefined8 *)(param_2 + 0x168);
  local_c8 = *(undefined8 *)(param_2 + 0x178);
  uStack_c0 = *(undefined8 *)(param_2 + 0x180);
  local_b8 = *(undefined8 *)(param_2 + 0x188);
  uStack_b0 = *(undefined8 *)(param_2 + 400);
  local_70[0] = 0xe707b733c8366b93;
  local_e8 = 0xcfb0df7f00da606d;
  local_f0 = 0xe707b833c8366d46;
  local_f8 = 0xcfb0dc7f00da5b54;
  local_100 = 0xe707b933c8366ef9;
  local_108 = 0xcfb0dd7f00da5d07;
  FUN_00beff30(param_1,&local_a8,&local_e0,local_70,&local_e8,&local_f0,&local_f8,&local_100,
               &local_108);
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0x448a7c93e3fa8dfd;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 == 0) goto LAB_00bf8b48;
LAB_00bf8ae4:
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_04",uVar3,10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  else {
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar2);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 != 0) goto LAB_00bf8ae4;
LAB_00bf8b48:
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_04",uVar3,10);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0x448a7b93e3fa8c4a;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar2 = *(long *)(*plVar5 + 0x2e0);
    if (lVar2 == 0) goto LAB_00bf8d1c;
LAB_00bf8bcc:
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_014ca220(lVar2,0,*(undefined2 *)(param_2 + 0x198),4,1,1);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar2 = *plVar5;
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar2);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar2 = *(long *)(*plVar5 + 0x2e0);
    if (lVar2 != 0) goto LAB_00bf8bcc;
LAB_00bf8d1c:
    FUN_014ca220(0,0,*(undefined2 *)(param_2 + 0x198),4,1,1);
    lVar2 = *plVar5;
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar2 = *plVar5;
  }
  lVar6 = *(long *)(lVar2 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar2 = *plVar5;
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar7 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  FUN_014c62d0(lVar4,lVar6,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar7);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar2 = *(long *)(*plVar5 + 0x2f0);
  if (lVar2 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_05",uVar3,10);
  }
  else {
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_05",uVar3,10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0x448a7a93e3fa8a97;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 == 0) goto LAB_00bf8ecc;
LAB_00bf8dcc:
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_06",uVar3,10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x5e0);
    if (*(int *)(param_2 + 0x19c) != 0) goto LAB_00bf8e1c;
LAB_00bf8ef8:
    local_70[0] = 0x448a7793e3fa857e;
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar3,local_70,0);
      lVar2 = *plVar5;
      lVar4 = *(long *)(lVar2 + 0x2e0);
      goto joined_r0x00bf90e0;
    }
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar2);
  }
  else {
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0077eb10(uVar3,local_70,lVar2);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 != 0) goto LAB_00bf8dcc;
LAB_00bf8ecc:
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_06",uVar3,10);
    uVar3 = *(undefined8 *)(param_1 + 0x5e0);
    if (*(int *)(param_2 + 0x19c) == 0) goto LAB_00bf8ef8;
LAB_00bf8e1c:
    local_70[0] = 0x448a7993e3fa88e4;
    lVar2 = *(long *)(*plVar5 + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar3,local_70,0);
      lVar2 = *(long *)(*plVar5 + 0x2e0);
    }
    else {
      plVar7 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0077eb10(uVar3,local_70,lVar2);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar2 = *(long *)(*plVar5 + 0x2e0);
    }
    if (lVar2 == 0) {
      FUN_014ca220(0,0,*(undefined4 *)(param_2 + 0x19c),7,0,1);
      lVar2 = *plVar5;
      lVar4 = *(long *)(lVar2 + 0x2e0);
      goto joined_r0x00bf90e0;
    }
    plVar7 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_014ca220(lVar2,0,*(undefined4 *)(param_2 + 0x19c),7,0,1);
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  lVar2 = *plVar5;
  lVar4 = *(long *)(lVar2 + 0x2e0);
joined_r0x00bf90e0:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar2 = *plVar5;
  }
  lVar6 = *(long *)(lVar2 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar2 = *plVar5;
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar7 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  FUN_014c62d0(lVar4,lVar6,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar7);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar2 = *(long *)(*plVar5 + 0x2f0);
  if (lVar2 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_07",uVar3,10);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(lVar1,"pane_T_detail_t_07",uVar3,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


