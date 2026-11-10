/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf90f0; name: FUN_00bf90f0
 */


void FUN_00bf90f0(long param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_68;
  long local_60;
  long local_58 [3];
  undefined8 local_38;
  
  switch(param_2) {
  case 0:
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xcfb45f7f00dd6fc4;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 == 0) {
      FUN_0077eb10(uVar2,&local_38,0);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 == 0) goto LAB_00bf9638;
LAB_00bf9244:
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_0077d470(lVar3);
      FUN_00ffd6a0(param_1 + 0x100,"pane_L_menu_button_02_T_button_l_00",uVar2,10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(uVar2,&local_38,lVar3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 != 0) goto LAB_00bf9244;
LAB_00bf9638:
      uVar2 = FUN_0077d470(0);
      FUN_00ffd6a0(param_1 + 0x100,"pane_L_menu_button_02_T_button_l_00",uVar2,10);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xcfb4627f00dd74dd;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 != 0) goto LAB_00bf967c;
LAB_00bf9768:
    FUN_0077eb10(uVar2,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    goto joined_r0x00bf9780;
  case 1:
  case 2:
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xe47886fb36f503e2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 == 0) {
      FUN_0077eb10(uVar2,&local_38,0);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 == 0) goto LAB_00bf9534;
LAB_00bf9194:
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_0077d470(lVar3);
      FUN_00ffd6a0(param_1 + 0x100,"pane_L_menu_button_00_T_button_l_00",uVar2,10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(uVar2,&local_38,lVar3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 != 0) goto LAB_00bf9194;
LAB_00bf9534:
      uVar2 = FUN_0077d470(0);
      FUN_00ffd6a0(param_1 + 0x100,"pane_L_menu_button_00_T_button_l_00",uVar2,10);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xe47880fb36f4f9b0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(uVar2,&local_38,lVar3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 != 0) goto LAB_00bf95b8;
LAB_00bf9600:
      uVar2 = FUN_0077d470(0);
      pcVar1 = "pane_L_menu_button_01_T_button_l_00";
      goto LAB_00bf9798;
    }
    FUN_0077eb10(uVar2,&local_38,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 == 0) goto LAB_00bf9600;
LAB_00bf95b8:
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar2 = FUN_0077d470(lVar3);
    pcVar1 = "pane_L_menu_button_01_T_button_l_00";
    goto LAB_00bf96e4;
  case 3:
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xd2ad532562d55705;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 == 0) {
      FUN_0077eb10(uVar2,&local_38,0);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 == 0) goto LAB_00bf9724;
LAB_00bf92f4:
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_0077d470(lVar3);
      FUN_00ffd6a0(param_1 + 0x100,"pane_L_menu_button_02_T_button_l_00",uVar2,10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(uVar2,&local_38,lVar3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 != 0) goto LAB_00bf92f4;
LAB_00bf9724:
      uVar2 = FUN_0077d470(0);
      FUN_00ffd6a0(param_1 + 0x100,"pane_L_menu_button_02_T_button_l_00",uVar2,10);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x5e0);
    local_38 = 0xd2ad502562d551ec;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 == 0) goto LAB_00bf9768;
LAB_00bf967c:
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar2,&local_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
joined_r0x00bf9780:
    if (lVar3 == 0) {
      uVar2 = FUN_0077d470(0);
      pcVar1 = "pane_L_menu_button_03_T_button_l_00";
LAB_00bf9798:
      FUN_00ffd6a0(param_1 + 0x100,pcVar1,uVar2,10);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar2 = FUN_0077d470(lVar3);
      pcVar1 = "pane_L_menu_button_03_T_button_l_00";
LAB_00bf96e4:
      FUN_00ffd6a0(param_1 + 0x100,pcVar1,uVar2,10);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    break;
  case 4:
    local_38 = 0x81a83d196d45db46;
    local_58[2] = *(long *)(param_1 + 0x5e0);
    if (local_58[2] != 0) {
      (**(code **)(*(long *)(local_58[2] + 0x48) + 0x10))();
    }
    local_58[1] = 0xcfb45b7f00dd68f8;
    FUN_008c4e70(param_1 + 0x100,&local_38,local_58 + 2,local_58 + 1,10);
    if (local_58[2] != 0) {
      (**(code **)(*(long *)(local_58[2] + 0x48) + 0x18))();
      local_58[2] = 0;
    }
    local_38 = 0x94b57e8d57e71a9;
    local_58[0] = *(long *)(param_1 + 0x5e0);
    if (local_58[0] != 0) {
      (**(code **)(*(long *)(local_58[0] + 0x48) + 0x10))();
    }
    local_58[1] = 0xcfb45e7f00dd6e11;
    FUN_008c4e70(param_1 + 0x100,&local_38,local_58,local_58 + 1,10);
    if (local_58[0] != 0) {
      (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
    }
    break;
  case 5:
    local_38 = 0x81a83d196d45db46;
    local_60 = *(long *)(param_1 + 0x5e0);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    local_58[1] = 0xcfb45b7f00dd68f8;
    FUN_008c4e70(param_1 + 0x100,&local_38,&local_60,local_58 + 1,10);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    break;
  case 6:
    local_38 = 0x81a83d196d45db46;
    local_68 = *(long *)(param_1 + 0x5e0);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    local_58[1] = 0xcfb45e7f00dd6e11;
    FUN_008c4e70(param_1 + 0x100,&local_38,&local_68,local_58 + 1,10);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  return;
}


