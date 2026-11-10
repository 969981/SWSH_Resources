/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140daf0; name: FUN_0140daf0
 */


int FUN_0140daf0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  char *local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90 [2];
  char *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  local_60 = -0x7cfc1f1e05c7572f;
  local_58 = "optionbar";
  local_50 = 9;
  local_48 = 0;
  uVar1 = FUN_0089c480(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x548),&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (param_2 == 2) {
    local_100 = -0x2541ceaad7870e89;
    local_f8 = "msg_pokecamp_optionbar_change";
    local_f0 = 0x1d;
    local_e8 = 0;
    FUN_00ff86a0(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_60 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_0077eb10(lVar3,&local_100,*(undefined8 *)(param_1 + 0x600));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    local_e0 = *(long *)(param_1 + 0x600);
    if (local_e0 != 0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x10))();
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_01036db0(uVar1,0,3,&local_e0);
    if (local_e0 != 0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      local_e0 = 0;
    }
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
      local_e8 = 0;
    }
    local_128 = 0xe1713ff3e8ea2ddc;
    local_120 = "msg_pokecamp_optionbar_zoom";
    local_118 = 0x1b;
    local_110 = 0;
    FUN_00ff86a0(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_60 + 0x60);
    if (lVar3 == 0) {
      FUN_0077eb10(0,&local_128,*(undefined8 *)(param_1 + 0x600));
      local_108 = *(long *)(param_1 + 0x600);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(lVar3,&local_128,*(undefined8 *)(param_1 + 0x600));
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_108 = *(long *)(param_1 + 0x600);
    }
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    iVar2 = param_3 + 1;
    FUN_01036db0(uVar1,param_3,5,&local_108);
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
      local_108 = 0;
    }
    if (local_110 != 0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
    }
  }
  else if (param_2 == 1) {
    local_b0 = -0x2541ceaad7870e89;
    local_a8 = "msg_pokecamp_optionbar_change";
    local_a0 = 0x1d;
    local_98 = 0;
    FUN_00ff86a0(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_60 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_0077eb10(lVar3,&local_b0,*(undefined8 *)(param_1 + 0x600));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    local_90[0] = *(long *)(param_1 + 0x600);
    if (local_90[0] != 0) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x10))();
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_01036db0(uVar1,0,3,local_90);
    if (local_90[0] != 0) {
      (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
      local_90[0] = 0;
    }
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    local_d8 = -0x1e8ec00c1715d224;
    local_d0 = "msg_pokecamp_optionbar_zoom";
    local_c8 = 0x1b;
    local_c0 = 0;
    FUN_00ff86a0(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_60 + 0x60);
    if (lVar3 == 0) {
      FUN_0077eb10(0,&local_d8,*(undefined8 *)(param_1 + 0x600));
      local_b8 = *(long *)(param_1 + 0x600);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(lVar3,&local_d8,*(undefined8 *)(param_1 + 0x600));
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_b8 = *(long *)(param_1 + 0x600);
    }
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    iVar2 = param_3 + 1;
    FUN_01036db0(uVar1,param_3,5,&local_b8);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    }
  }
  else if (param_2 == 0) {
    local_90[1] = 0xe1713ff3e8ea2ddc;
    local_80 = "msg_pokecamp_optionbar_zoom";
    local_78 = 0x1b;
    local_70 = 0;
    FUN_00ff86a0(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_60 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_0077eb10(lVar3,local_90 + 1,*(undefined8 *)(param_1 + 0x600));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    local_68 = *(long *)(param_1 + 0x600);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_01036db0(uVar1,param_3,5,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    iVar2 = param_3 + 1;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
  }
  else {
    iVar2 = param_3;
  }
  return iVar2;
}


