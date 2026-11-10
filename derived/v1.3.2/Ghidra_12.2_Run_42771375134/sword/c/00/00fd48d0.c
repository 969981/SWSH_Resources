/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd48d0; name: FUN_00fd48d0
 */


void FUN_00fd48d0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_48 = &local_38;
    local_38 = 0;
    local_40 = 0xe2c06acab97c29c2;
    FUN_01037340(lVar2,&local_48,0);
    uVar4 = local_38;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  *(undefined8 *)(param_1 + 0x5e0) = uVar4;
  local_48 = (undefined8 *)0x4f0d11a76cb9070;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e8),&local_48,lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x5e0);
  local_50 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar4,3,0,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_48 = (undefined8 *)0x4f0d21a76cb9223;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e8),&local_48,lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x5e0);
  local_58 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar4,0,1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_48 = (undefined8 *)0x4f0d51a76cb973c;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e8),&local_48,lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x5e0);
  local_60 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar4,1,5,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (*(char *)(param_1 + 0x7c0) != '\0') {
    local_48 = (undefined8 *)0x4f0d31a76cb93d6;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e8),&local_48,lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x5e0);
    local_68 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar4,2,3,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e0),0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


