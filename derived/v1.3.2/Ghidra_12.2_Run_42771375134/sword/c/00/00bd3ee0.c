/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3ee0; name: FUN_00bd3ee0
 */


void FUN_00bd3ee0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
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
      local_48 = &local_38;
      local_40 = 0xe2c06acab97c29c2;
      local_38 = 0;
      FUN_01037340(lVar1,&local_48,0);
      uVar3 = local_38;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
        lVar1 = *(long *)(param_1 + 0x2b0);
        goto joined_r0x00bd3f9c;
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0x2b0);
joined_r0x00bd3f9c:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = local_48[0xc];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)(local_48[9] + 0x18))();
    local_48 = (undefined8 *)0x0;
  }
  FUN_016bbde0(uVar3,0);
  FUN_016bbde0(uVar3,1);
  FUN_016bbde0(uVar3,2);
  FUN_016bbde0(uVar3,3);
  FUN_016bbde0(uVar3,4);
  local_48 = (undefined8 *)0xafc00106ba6ee7d0;
  FUN_0077eb10(lVar1,&local_48,lVar4);
  local_50 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,0,1,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_48 = (undefined8 *)0xafc00306ba6eeb36;
  FUN_0077eb10(lVar1,&local_48,lVar4);
  local_58 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,1,0,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_016b2d70(uVar3,0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


