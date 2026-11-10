/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014097c0; name: FUN_014097c0
 */


void FUN_014097c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_38;
  
  if (*(long *)(param_1 + 0x9d0) != 0) {
    FUN_01036e20();
    uVar2 = *(undefined8 *)(param_1 + 0x9d0);
    local_68 = 0x190b9e40e836a2c3;
    local_60 = "msg_ui_pokecamp_cooking_30_10";
    local_58 = 0x1d;
    local_50 = 0;
    FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
    lVar3 = *(long *)(local_38 + 0x60);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_0077eb10(lVar3,&local_68,*(undefined8 *)(param_1 + 0x9c0));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    local_48 = *(long *)(param_1 + 0x9c0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_01036db0(uVar2,0,3,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x9d0);
    local_90 = 0x19083940e833c14d;
    local_88 = "msg_ui_pokecamp_cooking_30_01";
    local_80 = 0x1d;
    local_78 = 0;
    FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
    lVar3 = *(long *)(local_38 + 0x60);
    if (lVar3 == 0) {
      FUN_0077eb10(0,&local_90,*(undefined8 *)(param_1 + 0x9c0));
      local_70 = *(long *)(param_1 + 0x9c0);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0077eb10(lVar3,&local_90,*(undefined8 *)(param_1 + 0x9c0));
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_70 = *(long *)(param_1 + 0x9c0);
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_01036db0(uVar2,1,1,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    iVar1 = FUN_0152aa90(lVar3,*(undefined4 *)(param_1 + 0x5cc));
    if (1 < iVar1) {
      uVar2 = *(undefined8 *)(param_1 + 0x9d0);
      local_b8 = 0x190b9d40e836a110;
      local_b0 = "msg_ui_pokecamp_cooking_30_11";
      local_a8 = 0x1d;
      local_a0 = 0;
      FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
      lVar5 = *(long *)(local_38 + 0x60);
      if (lVar5 == 0) {
        FUN_0077eb10(0,&local_b8,*(undefined8 *)(param_1 + 0x9c0));
        local_98 = *(long *)(param_1 + 0x9c0);
      }
      else {
        plVar4 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0077eb10(lVar5,&local_b8,*(undefined8 *)(param_1 + 0x9c0));
        (**(code **)(*plVar4 + 0x18))(plVar4);
        local_98 = *(long *)(param_1 + 0x9c0);
      }
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_01036db0(uVar2,2,5,&local_98);
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        local_98 = 0;
      }
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
  }
  return;
}


