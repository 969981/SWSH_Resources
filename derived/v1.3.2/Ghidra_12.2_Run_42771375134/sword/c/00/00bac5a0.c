/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bac5a0; name: FUN_00bac5a0
 */


void FUN_00bac5a0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x4c0) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar1 == 0) {
      uVar3 = 0;
      lVar1 = *(long *)(param_1 + 0x2b0);
      goto joined_r0x00bac664;
    }
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_50 = &local_38;
    local_38 = 0;
    local_48 = 0xe2c06acab97c29c2;
    FUN_01037340(lVar1,&local_50,0);
    uVar3 = local_38;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      lVar1 = *(long *)(param_1 + 0x2b0);
      goto joined_r0x00bac664;
    }
  }
  lVar1 = *(long *)(param_1 + 0x2b0);
joined_r0x00bac664:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar5 = local_50[0xc];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)(local_50[9] + 0x18))();
    local_50 = (undefined8 *)0x0;
  }
  FUN_00bad810(param_1);
  local_50 = (undefined8 *)0xafc00106ba6ee7d0;
  FUN_0077eb10(lVar5,&local_50,lVar4);
  local_58 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,0,1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_50 = (undefined8 *)0xafc00506ba6eee9c;
  FUN_0077eb10(lVar5,&local_50,lVar4);
  local_60 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,1,3,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_50 = (undefined8 *)0xafc00606ba6ef04f;
  FUN_0077eb10(lVar5,&local_50,lVar4);
  local_68 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,2,2,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  local_50 = (undefined8 *)0xafc00306ba6eeb36;
  FUN_0077eb10(lVar5,&local_50,lVar4);
  local_70 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,3,0,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_016b2d70(uVar3,0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


