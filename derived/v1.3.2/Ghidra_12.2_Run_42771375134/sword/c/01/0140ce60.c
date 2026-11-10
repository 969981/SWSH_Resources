/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140ce60; name: FUN_0140ce60
 */


void FUN_0140ce60(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_228;
  char *local_220;
  undefined8 local_218;
  long local_210;
  long local_208;
  long local_200;
  char *local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long local_198;
  long local_190;
  long local_188;
  char *local_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  long local_160;
  char *local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  long local_138;
  char *local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  char *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  char *local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  local_70 = -0x7cfc1f1e05c7572f;
  local_68 = "optionbar";
  local_60 = 9;
  local_58 = 0;
  uVar3 = FUN_0089c480(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x548),&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_01036e20(uVar3);
  local_98 = -0x4453eebca4e8d929;
  local_90 = "msg_pokecamp_optionbar_put_out";
  local_88 = 0x1e;
  local_80 = 0;
  FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
  lVar4 = *(long *)(local_70 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  plVar1 = (long *)(param_1 + 0x600);
  FUN_0077eb10(lVar4,&local_98,*(undefined8 *)(param_1 + 0x600));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  local_78 = *plVar1;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_01036db0(uVar3,0,3,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  local_c0 = 0x3e90f2a1fc2ffa44;
  local_b8 = "msg_pokecamp_optionbar_menu";
  local_b0 = 0x1b;
  local_a8 = 0;
  FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
  lVar4 = *(long *)(local_70 + 0x60);
  if (lVar4 == 0) {
    FUN_0077eb10(0,&local_c0,*plVar1);
    local_a0 = *plVar1;
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(lVar4,&local_c0,*plVar1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_a0 = *plVar1;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_01036db0(uVar3,1,2,&local_a0);
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  uVar2 = FUN_0140daf0(param_1,param_2,2);
  switch(param_3) {
  case 1:
    local_e8 = 0x7372d086692f8729;
    local_e0 = "msg_pokecamp_optionbar_come_on";
    local_d8 = 0x1e;
    local_d0 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_e8,*plVar1);
      local_c8 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_e8,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_c8 = *plVar1;
    }
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_c8);
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      local_c8 = 0;
    }
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    }
    break;
  case 2:
    local_110 = 0x5dc7c0bf683f8aed;
    local_108 = "msg_pokecamp_optionbar_talk_01";
    local_100 = 0x1e;
    local_f8 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_110,*plVar1);
      local_f0 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_110,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_f0 = *plVar1;
    }
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_f0);
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = 0;
    }
    if (local_f8 != 0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    }
    break;
  case 3:
    local_138 = 0x5dc7bdbf683f85d4;
    local_130 = "msg_pokecamp_optionbar_talk_02";
    local_128 = 0x1e;
    local_120 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_138,*plVar1);
      local_118 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_138,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_118 = *plVar1;
    }
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_118);
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
      local_118 = 0;
    }
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    }
    break;
  case 4:
    local_188 = 0x3151e4f15cd7da40;
    local_180 = "msg_pokecamp_optionbar_receive";
    local_178 = 0x1e;
    local_170 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_188,*plVar1);
      local_168 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_188,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_168 = *plVar1;
    }
    if (local_168 != 0) {
      (**(code **)(*(long *)(local_168 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_168);
    if (local_168 != 0) {
      (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
      local_168 = 0;
    }
    if (local_170 != 0) {
      (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    }
    break;
  case 5:
    local_160 = -0x7ee7fe5425c9c085;
    local_158 = "msg_pokecamp_optionbar_stop";
    local_150 = 0x1b;
    local_148 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_160,*plVar1);
      local_140 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_160,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_140 = *plVar1;
    }
    if (local_140 != 0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_140);
    if (local_140 != 0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
      local_140 = 0;
    }
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    }
    break;
  case 6:
    local_1b0 = -0x1bb299ffbfcb0c3c;
    local_1a8 = "msg_pokecamp_optionbar_talk_traner";
    local_1a0 = 0x22;
    local_198 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_1b0,*plVar1);
      local_190 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_1b0,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_190 = *plVar1;
    }
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_190);
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    }
    break;
  case 7:
    local_1d8 = 0x106bd543f68247ae;
    local_1d0 = "msg_pokecamp_optionbar_pick_up";
    local_1c8 = 0x1e;
    local_1c0 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_1d8,*plVar1);
      local_1b8 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_1d8,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_1b8 = *plVar1;
    }
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_1b8);
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
      local_1b8 = 0;
    }
    if (local_1c0 != 0) {
      (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    }
    break;
  case 8:
    local_200 = 0x233f1b885a302645;
    local_1f8 = "msg_pokecamp_optionbar_throw";
    local_1f0 = 0x1c;
    local_1e8 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_200,*plVar1);
      local_1e0 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_200,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_1e0 = *plVar1;
    }
    if (local_1e0 != 0) {
      (**(code **)(*(long *)(local_1e0 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_1e0);
    if (local_1e0 != 0) {
      (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
      local_1e0 = 0;
    }
    if (local_1e8 != 0) {
      (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
    }
    break;
  case 9:
    local_228 = 0x3fe1329eb7dc53af;
    local_220 = "msg_pokecamp_optionbar_shake";
    local_218 = 0x1c;
    local_210 = 0;
    FUN_00ff86a0(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar4 = *(long *)(local_70 + 0x60);
    if (lVar4 == 0) {
      FUN_0077eb10(0,&local_228,*plVar1);
      local_208 = *plVar1;
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(lVar4,&local_228,*plVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_208 = *plVar1;
    }
    if (local_208 != 0) {
      (**(code **)(*(long *)(local_208 + 0x48) + 0x10))();
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_01036db0(uVar3,uVar2,0,&local_208);
    if (local_208 != 0) {
      (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
      local_208 = 0;
    }
    if (local_210 != 0) {
      (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
    }
  }
  return;
}


