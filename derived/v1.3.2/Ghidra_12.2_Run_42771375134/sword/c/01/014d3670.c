/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d3670; name: FUN_014d3670
 */


void FUN_014d3670(long param_1,ulong param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_78;
  long local_70;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
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
      local_60 = &local_48;
      local_48 = 0;
      local_58 = 0xe2c06acab97c29c2;
      FUN_01037340(lVar1,&local_60,0);
      uVar3 = local_48;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
        lVar1 = *(long *)(param_1 + 0x2b0);
        goto joined_r0x014d3740;
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0x2b0);
joined_r0x014d3740:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  FUN_00ff86a0(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = local_60[0xc];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)(local_60[9] + 0x18))();
    local_60 = (undefined8 *)0x0;
  }
  FUN_016bbde0(uVar3,0);
  FUN_016bbde0(uVar3,1);
  FUN_016bbde0(uVar3,2);
  FUN_016bbde0(uVar3,3);
  FUN_016bbde0(uVar3,4);
  local_60 = (undefined8 *)0x73413f6ba930650;
  FUN_0077eb10(lVar1,&local_60,lVar4);
  local_68 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,0,1,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if ((param_2 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    local_60 = (undefined8 *)0x73414f6ba930803;
    FUN_0077eb10(lVar1,&local_60,lVar4);
    local_70 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar3,1,0,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    uVar5 = 2;
  }
  if ((param_3 & 1) != 0) {
    local_60 = (undefined8 *)0x73415f6ba9309b6;
    FUN_0077eb10(lVar1,&local_60,lVar4);
    local_78 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar3,uVar5,2,&local_78);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
  }
  *(byte *)(param_1 + 0x5d1) = param_3 & 1;
  FUN_016b2d70(uVar3,0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


