/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140e0b0; name: FUN_0140e0b0
 */


void FUN_0140e0b0(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  char *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  char *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  local_50 = -0x7cfc1f1e05c7572f;
  local_48 = "optionbar";
  local_40 = 9;
  local_38 = 0;
  uVar2 = FUN_0089c480(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x548),&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_01036e20(uVar2);
  if (param_2 == 3) {
    if (*(char *)(param_1 + 0x608) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x608) = 0;
    FUN_01037030(uVar2);
    return;
  }
  if (param_2 == 2) {
    local_c8 = -0x2541ceaad7870e89;
    local_c0 = "msg_pokecamp_optionbar_change";
    local_b8 = 0x1d;
    local_b0 = 0;
    FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_50 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_0077eb10(lVar3,&local_c8,*(undefined8 *)(param_1 + 0x600));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    local_a8 = *(long *)(param_1 + 0x600);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_01036db0(uVar2,1,0,&local_a8);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
    local_f0 = 0xe948ac357cad6d7c;
    local_e8 = "msg_pokecamp_optionbar_back";
    local_e0 = 0x1b;
    local_d8 = 0;
    FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_50 + 0x60);
    if (lVar3 == 0) {
      FUN_0077eb10(0,&local_f0,*(undefined8 *)(param_1 + 0x600));
      local_d0 = *(long *)(param_1 + 0x600);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(lVar3,&local_f0,*(undefined8 *)(param_1 + 0x600));
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_d0 = *(long *)(param_1 + 0x600);
    }
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_01036db0(uVar2,0,1,&local_d0);
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = 0;
    }
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
    }
  }
  else if (param_2 == 1) {
    local_78 = -0x17ee52e7676afaf5;
    local_70 = "msg_pokecamp_optionbar_decide";
    local_68 = 0x1d;
    local_60 = 0;
    FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_50 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_0077eb10(lVar3,&local_78,*(undefined8 *)(param_1 + 0x600));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    local_58 = *(long *)(param_1 + 0x600);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_01036db0(uVar2,1,0,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    local_a0 = -0x16b753ca83529284;
    local_98 = "msg_pokecamp_optionbar_back";
    local_90 = 0x1b;
    local_88 = 0;
    FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb8),0);
    lVar3 = *(long *)(local_50 + 0x60);
    if (lVar3 == 0) {
      FUN_0077eb10(0,&local_a0,*(undefined8 *)(param_1 + 0x600));
      local_80 = *(long *)(param_1 + 0x600);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(lVar3,&local_a0,*(undefined8 *)(param_1 + 0x600));
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_80 = *(long *)(param_1 + 0x600);
    }
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_01036db0(uVar2,0,1,&local_80);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
      cVar1 = *(char *)(param_1 + 0x608);
      goto joined_r0x0140e528;
    }
  }
  cVar1 = *(char *)(param_1 + 0x608);
joined_r0x0140e528:
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x608) = 1;
    FUN_01036f70(uVar2);
  }
  return;
}


