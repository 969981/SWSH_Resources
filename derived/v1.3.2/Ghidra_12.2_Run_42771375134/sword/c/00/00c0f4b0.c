/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0f4b0; name: FUN_00c0f4b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c0f4b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char local_a8 [8];
  char acStack_a0 [8];
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x5e0);
  if (lVar2 == 0) {
    return;
  }
  local_38 = 0xcfb45f7f00dd6fc4;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(lVar2,&local_38,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(lVar2,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_rankmatch_button_00_T_button_l_00",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_rankmatch_button_00_T_button_l_00",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar2 = param_1 + 0x100;
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xcfb4627f00dd74dd;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_L_rankmatch_button_01_T_button_l_00",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(lVar2,"pane_L_rankmatch_button_01_T_button_l_00",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0x40865424ba805bc0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_L_rankmatch_rank_00_T_rank_02",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(lVar2,"pane_L_rankmatch_rank_00_T_rank_02",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xdf290e6647987eef;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_L_rankmatch_rank_00_T_rank_number_01",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(lVar2,"pane_L_rankmatch_rank_00_T_rank_number_01",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0x5d2b75804f5709f9;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_T_rank_detail_00",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(lVar2,"pane_T_rank_detail_00",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0x5d2b73804f570693;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_T_rank_detail_02",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(lVar2,"pane_T_rank_detail_02",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0x5d2b79804f5710c5;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_T_rank_detail_04",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(lVar2,"pane_T_rank_detail_04",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0x5688c4f0953483c6;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar1,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_T_x_button_00",uVar1,10);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(lVar2,"pane_T_x_button_00",uVar1,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_98 = 0x30305f;
  local_4c = 0;
  local_54 = 0;
  local_5c = 0;
  local_64 = 0;
  local_6c = 0;
  local_74 = 0;
  local_7c = 0;
  local_84 = 0;
  local_8c = 0;
  local_94 = 0;
  local_a8[0] = s_L_rankmatch_rank_00_01ce8bef[0];
  local_a8[1] = s_L_rankmatch_rank_00_01ce8bef[1];
  local_a8[2] = s_L_rankmatch_rank_00_01ce8bef[2];
  local_a8[3] = s_L_rankmatch_rank_00_01ce8bef[3];
  local_a8[4] = s_L_rankmatch_rank_00_01ce8bef[4];
  local_a8[5] = s_L_rankmatch_rank_00_01ce8bef[5];
  local_a8[6] = s_L_rankmatch_rank_00_01ce8bef[6];
  local_a8[7] = s_L_rankmatch_rank_00_01ce8bef[7];
  acStack_a0[0] = s_L_rankmatch_rank_00_01ce8bef[8];
  acStack_a0[1] = s_L_rankmatch_rank_00_01ce8bef[9];
  acStack_a0[2] = s_L_rankmatch_rank_00_01ce8bef[10];
  acStack_a0[3] = s_L_rankmatch_rank_00_01ce8bef[0xb];
  acStack_a0[4] = s_L_rankmatch_rank_00_01ce8bef[0xc];
  acStack_a0[5] = s_L_rankmatch_rank_00_01ce8bef[0xd];
  acStack_a0[6] = s_L_rankmatch_rank_00_01ce8bef[0xe];
  acStack_a0[7] = s_L_rankmatch_rank_00_01ce8bef[0xf];
  FUN_00bfbcd0(param_1,local_a8);
  return;
}


