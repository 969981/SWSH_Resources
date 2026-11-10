/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d5ff0; name: FUN_010d5ff0
 */


void FUN_010d5ff0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x4c0) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    uVar3 = 0;
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      local_58 = &local_48;
      local_50 = 0x18cd1891cbc1757a;
      local_48 = 0;
      FUN_008a0cd0(lVar1,&local_58,0);
      uVar3 = local_48;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
    }
  }
  FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = local_58[0xc];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
    local_58 = (undefined8 *)0x0;
  }
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x2e8);
  plVar2 = (long *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  if (lVar4 == 0) {
    FUN_0077eb10(lVar1,&DAT_02163f78,0);
    local_60 = 0;
    FUN_016b4ab0(uVar3,0,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_0077eb10(lVar1,&DAT_02163f80,0);
    local_60 = 0;
    FUN_016b4ab0(uVar3,1,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_0077eb10(lVar1,&DAT_02163f88,0);
    local_60 = 0;
    FUN_016b4ab0(uVar3,2,&local_60);
    lVar5 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
      lVar5 = local_60;
    }
  }
  else {
    FUN_0077eb10(lVar1,&DAT_02163f78,lVar4);
    local_60 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar2);
    FUN_016b4ab0(uVar3,0,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_0077eb10(lVar1,&DAT_02163f80,lVar4);
    local_60 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar2);
    FUN_016b4ab0(uVar3,1,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_0077eb10(lVar1,&DAT_02163f88,lVar4);
    local_60 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar2);
    FUN_016b4ab0(uVar3,2,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar5 = local_60;
  }
  local_60 = lVar5;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  FUN_016b4cf0(uVar3);
  FUN_016b4ac0(uVar3,2,&DAT_02163f90,1);
  FUN_016b5480(uVar3,3,4,3);
  *(undefined1 *)(param_1 + 0x5d0) = 1;
  return;
}


