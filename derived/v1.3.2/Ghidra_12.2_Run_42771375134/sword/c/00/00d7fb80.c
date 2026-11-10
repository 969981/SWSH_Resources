/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7fb80; name: FUN_00d7fb80
 */


void FUN_00d7fb80(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  ulong local_48 [3];
  
  FUN_00d70930(local_48 + 2,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  local_48[1] = 0xddec8c8e6e075e64;
  local_50 = local_48[2];
  local_48[0] = 0xe3bf5556fb33a90;
  if (local_48[2] == 0) {
    FUN_00d7e0c0(param_1,local_48 + 1,local_48,&local_50);
  }
  else {
    plVar3 = (long *)(local_48[2] + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00d7e0c0(param_1,local_48 + 1,local_48,&local_50);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_50 = 0;
  }
  local_48[1] = 0x5842fa9b81a420e;
  local_48[0] = 0xb90cf33779f25147;
  local_58 = local_48[2];
  if (local_48[2] == 0) {
    FUN_00d7e0c0(param_1,local_48 + 1,local_48,&local_58);
  }
  else {
    plVar3 = (long *)(local_48[2] + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00d7e0c0(param_1,local_48 + 1,local_48,&local_58);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_58 = 0;
  }
  local_48[1] = 0xcbad92915bf0d396;
  local_48[0] = 0xb340ca007f312fb2;
  local_60 = local_48[2];
  if (local_48[2] == 0) {
    FUN_00d7e0c0(param_1,local_48 + 1,local_48,&local_60);
  }
  else {
    plVar3 = (long *)(local_48[2] + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00d7e0c0(param_1,local_48 + 1,local_48,&local_60);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_60 = 0;
  }
  local_48[0] = local_48[0] & 0xffffffffffffff00;
  do {
    local_48[1] = 0xaf706e7045a584cb;
    lVar2 = FUN_00d70850(local_48);
    local_68 = local_48[2];
    if (local_48[2] == 0) {
      FUN_00d7e0c0(param_1,local_48 + 1,lVar2 + 0x40,&local_68);
    }
    else {
      plVar3 = (long *)(local_48[2] + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_00d7e0c0(param_1,local_48 + 1,lVar2 + 0x40,&local_68);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      local_68 = 0;
    }
    bVar1 = (char)local_48[0] + 1;
    local_48[0] = CONCAT71(local_48[0]._1_7_,bVar1);
  } while (bVar1 < 7);
  if (local_48[2] != 0) {
    (**(code **)(*(long *)(local_48[2] + 0x48) + 0x18))();
  }
  return;
}


