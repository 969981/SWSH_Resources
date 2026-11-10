/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf6f30; name: FUN_00bf6f30
 */


void FUN_00bf6f30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xe191bc648c1fb5c2;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_btlspot_button_00_T_button_l_00",uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_btlspot_button_00_T_button_l_00",uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  lVar2 = param_1 + 0x100;
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xe191bb648c1fb40f;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar4 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_01_T_button_l_00",uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_01_T_button_l_00",uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xe191ba648c1fb25c;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar4 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_02_T_button_s_00",uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_02_T_button_s_00",uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xe191b9648c1fb0a9;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar4 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_03_T_button_s_00",uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_03_T_button_s_00",uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = 0xe191b8648c1faef6;
  lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar4 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar4 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_04_T_button_s_00",uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar4);
    FUN_00ffd6a0(lVar2,"pane_L_btlspot_button_04_T_button_s_00",uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


