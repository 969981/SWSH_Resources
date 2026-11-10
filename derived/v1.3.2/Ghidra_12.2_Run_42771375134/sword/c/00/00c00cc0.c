/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c00cc0; name: FUN_00c00cc0
 */


void FUN_00c00cc0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char local_c0 [8];
  undefined2 local_b8;
  undefined8 local_b6;
  undefined8 local_ae;
  undefined8 local_a6;
  undefined8 local_9e;
  undefined8 local_96;
  undefined8 local_8e;
  undefined8 local_86;
  undefined8 local_7e;
  undefined8 local_76;
  undefined8 local_6e;
  undefined8 local_66;
  undefined2 local_5e;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  lVar4 = *(long *)(param_1 + 0x610);
  pcVar2 = *(code **)(lVar4 + 0x28);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    (*pcVar2)(lVar4 + 0x40);
  }
  *(undefined **)(lVar4 + 0x40) = PTR_LAB_0271bb68;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(long *)(lVar4 + 0x50) = param_1;
  puVar1 = PTR_LAB_0271bb98;
  *(undefined8 *)(lVar4 + 0x20) = PTR_LAB_0271bb90;
  *(undefined **)(lVar4 + 0x28) = puVar1;
  puVar1 = PTR_LAB_0271bba8;
  *(undefined **)(lVar4 + 0x30) = PTR_LAB_0271bba0;
  *(undefined **)(lVar4 + 0x38) = puVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0xeb42251d7b180715;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_48,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar4 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_card_rival_search_T_matchmake_l_00",uVar3,10);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_card_rival_search_T_matchmake_l_00",uVar3,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar4 = param_1 + 0x100;
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0x6ebef36bc30fca4a;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_48,lVar6);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_00",uVar3,10);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_00",uVar3,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0x6ebef16bc30fc6e4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_48,lVar6);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_02",uVar3,10);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_02",uVar3,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0x6ebeef6bc30fc37e;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_48,lVar6);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_04",uVar3,10);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_04",uVar3,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0x6ebeed6bc30fc018;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_48,lVar6);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_06",uVar3,10);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_06",uVar3,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_48 = 0x6ebef36bc30fca4a;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,&local_48,0);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar3,&local_48,lVar6);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_08",uVar3,10);
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar4,"pane_T_matchmake_r_08",uVar3,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_50 = *(long *)(param_1 + 0x850);
  local_48 = 0xdc198db74f16809;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = FUN_0103e730(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x120));
  FUN_008c4e70(lVar4,&local_48,&local_50,&local_58,10);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_b8 = 0x30;
  local_5e = 0;
  local_66 = 0;
  local_6e = 0;
  local_76 = 0;
  local_7e = 0;
  local_86 = 0;
  local_8e = 0;
  local_96 = 0;
  local_9e = 0;
  local_a6 = 0;
  local_ae = 0;
  local_b6 = 0;
  local_c0[0] = s_L_rank_00_01cf66b3[0];
  local_c0[1] = s_L_rank_00_01cf66b3[1];
  local_c0[2] = s_L_rank_00_01cf66b3[2];
  local_c0[3] = s_L_rank_00_01cf66b3[3];
  local_c0[4] = s_L_rank_00_01cf66b3[4];
  local_c0[5] = s_L_rank_00_01cf66b3[5];
  local_c0[6] = s_L_rank_00_01cf66b3[6];
  local_c0[7] = s_L_rank_00_01cf66b3[7];
  FUN_00bfbcd0(param_1,local_c0);
  return;
}


